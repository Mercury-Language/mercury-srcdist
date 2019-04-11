/*
** Automatically generated from `declarative_debugger.m'
** by the Mercury compiler,
** version rotd-2017-06-12
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


/* :- module mdb.declarative_debugger. */
/* :- implementation. */

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

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_answer_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_answer_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
  MR_Box mdb__declarative_debugger__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_bug_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_bug_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_confirmation_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_confirmation_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_contour_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_contour_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_e_bug_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_e_bug_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_evidence_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_evidence_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
  MR_Box mdb__declarative_debugger__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_exception_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_exception_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_i_bug_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_i_bug_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_position_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_position_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_question_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_question_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
  MR_Box mdb__declarative_debugger__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_truth_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_truth_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_exception_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_exception_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_response_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_response_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
  MR_Box mdb__declarative_debugger__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_state_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_state_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
  MR_Box mdb__declarative_debugger__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____final_decl_atom_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____final_decl_atom_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____init_decl_atom_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____init_decl_atom_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____some_decl_atom_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____some_decl_atom_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word mdb__declarative_debugger__Diagnoser_5,
  MR_Word * mdb__declarative_debugger__Response_6);

static MR_bool MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8);

static void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5);

static void MR_CALL 
mdb__declarative_debugger__debug_origin_3_p_0(
  MR_Integer * mdb__declarative_debugger__Flag_1);

static void MR_CALL 
mdb__declarative_debugger__write_origin_4_p_0(
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_38,
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__Origin_6);

static void MR_CALL 
mdb__declarative_debugger__handle_diagnoser_exception_6_p_0(
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_108,
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word * mdb__declarative_debugger__Response_2,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_4);

static void MR_CALL 
mdb__declarative_debugger__get_trusted_list_3_p_0(
  MR_Word mdb__declarative_debugger__Diagnoser_4,
  MR_Word mdb__declarative_debugger__MDBCommandFormat_5,
  MR_String * mdb__declarative_debugger__List_6);

static MR_bool MR_CALL 
mdb__declarative_debugger__remove_trusted_3_p_0(
  MR_Integer mdb__declarative_debugger__N_4,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8);

static void MR_CALL 
mdb__declarative_debugger__trust_standard_library_2_p_0(
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_6);

static void MR_CALL 
mdb__declarative_debugger__add_trusted_pred_or_func_3_p_0(
  MR_Box mdb__declarative_debugger__ProcLayout_4,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8);

static void MR_CALL 
mdb__declarative_debugger__add_trusted_module_3_p_0(
  MR_String mdb__declarative_debugger__ModuleName_4,
  MR_Word mdb__declarative_debugger__Diagnoser0_5,
  MR_Word * mdb__declarative_debugger__Diagnoser_6);

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_supertree_3_p_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Integer * mdb__declarative_debugger__Event_4,
  MR_Integer * mdb__declarative_debugger__SeqNo_5);

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_subtree_5_p_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Integer * mdb__declarative_debugger__Event_6,
  MR_Integer * mdb__declarative_debugger__SeqNo_7,
  MR_Word * mdb__declarative_debugger__CallPreceding_8,
  MR_Integer * mdb__declarative_debugger__MaxDepth_9);

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_no_bug_found_1_p_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1);

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_symptom_found_2_p_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Integer * mdb__declarative_debugger__Event_3);

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_bug_found_2_p_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Integer * mdb__declarative_debugger__Event_3);

static void MR_CALL 
mdb__declarative_debugger__diagnosis_resume_previous_8_p_0(
  MR_Word mdb__declarative_debugger__Store_9,
  MR_Word * mdb__declarative_debugger__Response_10,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_14,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_15,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_16,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_17);

static void MR_CALL 
mdb__declarative_debugger__diagnosis_new_tree_9_p_0(
  MR_Word mdb__declarative_debugger__Store_10,
  MR_Word mdb__declarative_debugger__Node_11,
  MR_Word * mdb__declarative_debugger__Response_12,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_16,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_17,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_18,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_19);

static MR_Word MR_CALL 
mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_f_0(void);

static MR_Word MR_CALL 
mdb__declarative_debugger__divide_and_query_search_mode_0_f_0(void);

static MR_Word MR_CALL 
mdb__declarative_debugger__top_down_search_mode_0_f_0(void);

static void MR_CALL 
mdb__declarative_debugger__reset_knowledge_base_2_p_0(
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_7);

static void MR_CALL 
mdb__declarative_debugger__set_fallback_search_mode_4_p_0(
  MR_Word mdb__declarative_debugger__Store_5,
  MR_Word mdb__declarative_debugger__SearchMode_6,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_11);

static void MR_CALL 
mdb__declarative_debugger__set_diagnoser_testing_flag_3_p_0(
  MR_Word mdb__declarative_debugger__Testing_4,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_9);

static void MR_CALL 
mdb__declarative_debugger__diagnoser_session_init_2_p_0(
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5);

static void MR_CALL 
mdb__declarative_debugger__diagnoser_state_init_store_5_p_0(
  MR_Word mdb__declarative_debugger__InStr_6,
  MR_Word mdb__declarative_debugger__OutStr_7,
  MR_Word mdb__declarative_debugger__Browser_8,
  MR_Word mdb__declarative_debugger__HelpSystem_9,
  MR_Word * mdb__declarative_debugger__Diagnoser_10);

static void MR_CALL 
mdb__declarative_debugger__confirm_bug_8_p_0(
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_35,
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_34,
  MR_Box mdb__declarative_debugger__Store_9,
  MR_Word mdb__declarative_debugger__Bug_10,
  MR_Word mdb__declarative_debugger__Evidence_11,
  MR_Word * mdb__declarative_debugger__Response_12,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_20);

static void MR_CALL 
mdb__declarative_debugger__handle_oracle_response_7_p_0(
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108,
  MR_Box mdb__declarative_debugger__Store_8,
  MR_Word mdb__declarative_debugger__OracleResponse_9,
  MR_Word * mdb__declarative_debugger__DiagnoserResponse_10,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28);

static void MR_CALL 
mdb__declarative_debugger__handle_analyser_response_8_p_0(
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113,
  MR_Box mdb__declarative_debugger__Store_9,
  MR_Word mdb__declarative_debugger__AnalyserResponse_10,
  MR_Word mdb__declarative_debugger__MaybeOrigin_11,
  MR_Word * mdb__declarative_debugger__DiagnoserResponse_12,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34);

static void MR_CALL 
mdb__declarative_debugger__diagnosis_2_6_p_0(
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33,
  MR_Box mdb__declarative_debugger__Store_7,
  MR_Word mdb__declarative_debugger__AnalysisType_8,
  MR_Word mdb__declarative_debugger__Diagnoser0_9,
  MR_Tuple * mdb__declarative_debugger__HeadVar__4_4);

static void MR_CALL 
mdb__declarative_debugger__diagnosis_9_p_0_1(
  MR_Box mdb__declarative_debugger__closure_arg,
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box * mdb__declarative_debugger__wrapper_arg_3);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
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
  MR_Word mdb__declarative_debugger__InStr_6,
  MR_Word mdb__declarative_debugger__OutStr_7,
  MR_Word mdb__declarative_debugger__Browser_8,
  MR_Word mdb__declarative_debugger__HelpSystem_9,
  MR_Word * mdb__declarative_debugger__Diagnoser_10)
#line 665 "declarative_debugger.m"
{
#line 665 "declarative_debugger.m"
	mdb__declarative_debugger__diagnoser_state_init_store_5_p_0((MR_Word) mdb__declarative_debugger__InStr_6, (MR_Word) mdb__declarative_debugger__OutStr_7, (MR_Word) mdb__declarative_debugger__Browser_8, (MR_Word) mdb__declarative_debugger__HelpSystem_9, (MR_Word *) mdb__declarative_debugger__Diagnoser_10);
}

#line 681 "declarative_debugger.m"
void 
MR_DD_decl_session_init(
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5)
#line 681 "declarative_debugger.m"
{
#line 681 "declarative_debugger.m"
	mdb__declarative_debugger__diagnoser_session_init_2_p_0((MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5);
}

#line 690 "declarative_debugger.m"
void 
MR_DD_decl_set_diagnoser_testing_flag(
  MR_Word mdb__declarative_debugger__Testing_4,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_9)
#line 690 "declarative_debugger.m"
{
#line 690 "declarative_debugger.m"
	mdb__declarative_debugger__set_diagnoser_testing_flag_3_p_0((MR_Word) mdb__declarative_debugger__Testing_4, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_9);
}

#line 703 "declarative_debugger.m"
void 
MR_DD_decl_set_fallback_search_mode(
  MR_Word mdb__declarative_debugger__Store_5,
  MR_Word mdb__declarative_debugger__SearchMode_6,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_11)
#line 703 "declarative_debugger.m"
{
#line 703 "declarative_debugger.m"
	mdb__declarative_debugger__set_fallback_search_mode_4_p_0((MR_Word) mdb__declarative_debugger__Store_5, (MR_Word) mdb__declarative_debugger__SearchMode_6, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_11);
}

#line 717 "declarative_debugger.m"
void 
MR_DD_decl_reset_knowledge_base(
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_7)
#line 717 "declarative_debugger.m"
{
#line 717 "declarative_debugger.m"
	mdb__declarative_debugger__reset_knowledge_base_2_p_0((MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_7);
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
  MR_Word mdb__declarative_debugger__Store_10,
  MR_Word mdb__declarative_debugger__Node_11,
  MR_Word * mdb__declarative_debugger__Response_12,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_16,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_17,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_18,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_19)
#line 762 "declarative_debugger.m"
{
#line 762 "declarative_debugger.m"
	mdb__declarative_debugger__diagnosis_new_tree_9_p_0((MR_Word) mdb__declarative_debugger__Store_10, (MR_Word) mdb__declarative_debugger__Node_11, (MR_Word *) mdb__declarative_debugger__Response_12, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_State_0_16, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_State_17, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Browser_0_18, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Browser_19);
}

#line 778 "declarative_debugger.m"
void 
MR_DD_decl_diagnosis_resume_previous(
  MR_Word mdb__declarative_debugger__Store_9,
  MR_Word * mdb__declarative_debugger__Response_10,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_14,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_15,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_16,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_17)
#line 778 "declarative_debugger.m"
{
#line 778 "declarative_debugger.m"
	mdb__declarative_debugger__diagnosis_resume_previous_8_p_0((MR_Word) mdb__declarative_debugger__Store_9, (MR_Word *) mdb__declarative_debugger__Response_10, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_State_0_14, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_State_15, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Browser_0_16, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Browser_17);
}

#line 791 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_bug_found(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Integer * mdb__declarative_debugger__Event_3)
#line 791 "declarative_debugger.m"
{
#line 791 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_bug_found_2_p_0((MR_Word) mdb__declarative_debugger__HeadVar__1_1, (MR_Integer *) mdb__declarative_debugger__Event_3);
	return ret_value;
}

#line 799 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_symptom_found(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Integer * mdb__declarative_debugger__Event_3)
#line 799 "declarative_debugger.m"
{
#line 799 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_symptom_found_2_p_0((MR_Word) mdb__declarative_debugger__HeadVar__1_1, (MR_Integer *) mdb__declarative_debugger__Event_3);
	return ret_value;
}

#line 807 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_no_bug_found(
  MR_Word mdb__declarative_debugger__HeadVar__1_1)
#line 807 "declarative_debugger.m"
{
#line 807 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_no_bug_found_1_p_0((MR_Word) mdb__declarative_debugger__HeadVar__1_1);
	return ret_value;
}

#line 816 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_require_subtree(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Integer * mdb__declarative_debugger__Event_6,
  MR_Integer * mdb__declarative_debugger__SeqNo_7,
  MR_Word * mdb__declarative_debugger__CallPreceding_8,
  MR_Integer * mdb__declarative_debugger__MaxDepth_9)
#line 816 "declarative_debugger.m"
{
#line 816 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_require_subtree_5_p_0((MR_Word) mdb__declarative_debugger__HeadVar__1_1, (MR_Integer *) mdb__declarative_debugger__Event_6, (MR_Integer *) mdb__declarative_debugger__SeqNo_7, (MR_Word *) mdb__declarative_debugger__CallPreceding_8, (MR_Integer *) mdb__declarative_debugger__MaxDepth_9);
	return ret_value;
}

#line 826 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_require_supertree(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Integer * mdb__declarative_debugger__Event_4,
  MR_Integer * mdb__declarative_debugger__SeqNo_5)
#line 826 "declarative_debugger.m"
{
#line 826 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_require_supertree_3_p_0((MR_Word) mdb__declarative_debugger__HeadVar__1_1, (MR_Integer *) mdb__declarative_debugger__Event_4, (MR_Integer *) mdb__declarative_debugger__SeqNo_5);
	return ret_value;
}

#line 839 "declarative_debugger.m"
void 
MR_DD_decl_add_trusted_module(
  MR_String mdb__declarative_debugger__ModuleName_4,
  MR_Word mdb__declarative_debugger__Diagnoser0_5,
  MR_Word * mdb__declarative_debugger__Diagnoser_6)
#line 839 "declarative_debugger.m"
{
#line 839 "declarative_debugger.m"
	mdb__declarative_debugger__add_trusted_module_3_p_0((MR_String) mdb__declarative_debugger__ModuleName_4, (MR_Word) mdb__declarative_debugger__Diagnoser0_5, (MR_Word *) mdb__declarative_debugger__Diagnoser_6);
}

#line 854 "declarative_debugger.m"
void 
MR_DD_decl_add_trusted_pred_or_func(
  const MR_ProcLayout * mdb__declarative_debugger__ProcLayout_4,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8)
#line 854 "declarative_debugger.m"
{
#line 854 "declarative_debugger.m"
	MR_Box mdb__declarative_debugger__boxed_ProcLayout_4;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_ProcLayout *, mdb__declarative_debugger__ProcLayout_4, mdb__declarative_debugger__boxed_ProcLayout_4);
	mdb__declarative_debugger__add_trusted_pred_or_func_3_p_0(mdb__declarative_debugger__boxed_ProcLayout_4, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8);
}

#line 865 "declarative_debugger.m"
void 
MR_DD_decl_trust_standard_library(
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_6)
#line 865 "declarative_debugger.m"
{
#line 865 "declarative_debugger.m"
	mdb__declarative_debugger__trust_standard_library_2_p_0((MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_6);
}

#line 877 "declarative_debugger.m"
MR_bool 
MR_DD_decl_remove_trusted(
  MR_Integer mdb__declarative_debugger__N_4,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8)
#line 877 "declarative_debugger.m"
{
#line 877 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__remove_trusted_3_p_0((MR_Integer) mdb__declarative_debugger__N_4, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8);
	return ret_value;
}

#line 894 "declarative_debugger.m"
void 
MR_DD_decl_get_trusted_list(
  MR_Word mdb__declarative_debugger__Diagnoser_4,
  MR_Word mdb__declarative_debugger__MDBCommandFormat_5,
  MR_String * mdb__declarative_debugger__List_6)
#line 894 "declarative_debugger.m"
{
#line 894 "declarative_debugger.m"
	mdb__declarative_debugger__get_trusted_list_3_p_0((MR_Word) mdb__declarative_debugger__Diagnoser_4, (MR_Word) mdb__declarative_debugger__MDBCommandFormat_5, (MR_String *) mdb__declarative_debugger__List_6);
}


static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_2 = {
  &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_analyser__pti_analysis_type_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_2 = {
  &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analysis_type_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_response_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 mdb__declarative_debugger____vpti_tuple_2__pseudo_mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2,
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2
  }
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_0 = {
  (MR_String) "truth_value",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_1[5] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0
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
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 1,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_1 = {
  (MR_String) "suspicious_subterm",
  (MR_Integer) 5,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_1,
  NULL,
  mdb__declarative_debugger__mdb__declarative_debugger__field_locns_decl_answer_1_1,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_2 = {
  (MR_String) "ignore",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_3[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_3 = {
  (MR_String) "skip",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_answer_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_answer_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_answer",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_answer_1 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_answer_1 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_answer_1
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_0[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_e_bug_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_0 = {
  (MR_String) "e_bug",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_1[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_i_bug_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_1 = {
  (MR_String) "i_bug",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_1
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_0
};

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_bug_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_bug_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_bug_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_bug",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_bug_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_bug_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_bug_0
};

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_0 = {
  (MR_String) "confirm_bug",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_1 = {
  (MR_String) "overrule_bug",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_2 = {
  (MR_String) "abort_diagnosis",
  (MR_Integer) 2
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_confirmation_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_confirmation_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_confirmation",
  {     mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_confirmation_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__enum_value_ordered_decl_confirmation_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_confirmation_0
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0
  }
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_contour_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_contour_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_contour_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_contour",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_0[4] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_0 = {
  (MR_String) "incorrect_contour",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_1[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_1 = {
  (MR_String) "partially_uncovered_atom",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_2[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_2 = {
  (MR_String) "unhandled_exception",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_e_bug_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_e_bug_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_e_bug",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_e_bug_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_e_bug_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_e_bug_0
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
  }
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_evidence_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_evidence_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_evidence_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_evidence",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__declarative_debugger__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_exception_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_exception_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_exception_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_exception",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_i_bug_0_0[4] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_i_bug_0_0 = {
  (MR_String) "inadmissible_call",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_i_bug_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_i_bug_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_i_bug_0_0
};

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_i_bug_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_i_bug_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_i_bug_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_i_bug_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_i_bug",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_i_bug_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_i_bug_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_i_bug_0
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_position_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_position_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_position_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_position",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_0 = {
  (MR_String) "wrong_answer",
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_1 = {
  (MR_String) "missing_answer",
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_2[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_2 = {
  (MR_String) "unexpected_exception",
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_question_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_question_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_question",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_question_1 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_question_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_question_1
};

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_0 = {
  (MR_String) "truth_correct",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_1 = {
  (MR_String) "truth_erroneous",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_2 = {
  (MR_String) "truth_inadmissible",
  (MR_Integer) 2
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_truth_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_truth_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_truth",
  {     mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_truth_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__enum_value_ordered_decl_truth_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_truth_0
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_0 = {
  (MR_String) "internal_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_1 = {
  (MR_String) "io_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_2 = {
  (MR_String) "unimplemented_feature",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____diagnoser_exception_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____diagnoser_exception_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "diagnoser_exception",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_exception_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_exception_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_exception_0
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_0 = {
  (MR_String) "bug_found",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_1 = {
  (MR_String) "symptom_found",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_2 = {
  (MR_String) "no_bug_found",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_3[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_response_1_3[4] = {
  (MR_String) "require_subtree_final_event",
  (MR_String) "require_subtree_seqno",
  (MR_String) "require_subtree_call_preceding_node",
  (MR_String) "require_subtree_max_depth"
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_3 = {
  (MR_String) "require_subtree",
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_3,
  mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_response_1_3,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_4[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_4 = {
  (MR_String) "require_supertree",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____diagnoser_response_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____diagnoser_response_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "diagnoser_response",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_response_1 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_response_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_response_1
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_1 = {
  &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_analyser__pti_analyser_state_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_1 = {
  &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analyser_state_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__maybe__pti_maybe_1__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_state_1_0[4] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_analyser__pti_analyser_state_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__maybe__pti_maybe_1__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1
};

static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_state_1_0[4] = {
  (MR_String) "analyser_state",
  (MR_String) "oracle_state",
  (MR_String) "warn_if_searching_supertree",
  (MR_String) "previous_diagnoser"
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_state_1_0 = {
  (MR_String) "diagnoser",
  (MR_Integer) 4,
  (MR_Integer) 9,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_state_1_0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_state_1_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_state_1_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_state_1_0
};

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_state_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_state_1_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____diagnoser_state_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____diagnoser_state_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "diagnoser_state",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_state_1 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_state_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_state_1
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__maybe__ti_maybe_1mdb__io_action__type_ctor_info_io_action_range_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__io_action__mdb__io_action__type_ctor_info_io_action_range_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_final_decl_atom_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__maybe__ti_maybe_1mdb__io_action__type_ctor_info_io_action_range_0
};

static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_final_decl_atom_0_0[2] = {
  (MR_String) "final_atom",
  (MR_String) "final_io_actions"
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_final_decl_atom_0_0 = {
  (MR_String) "final_decl_atom",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_final_decl_atom_0_0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_names_final_decl_atom_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_final_decl_atom_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_final_decl_atom_0_0
};

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_final_decl_atom_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_final_decl_atom_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____final_decl_atom_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____final_decl_atom_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "final_decl_atom",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_final_decl_atom_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_final_decl_atom_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_final_decl_atom_0
};

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_init_decl_atom_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0 = {
  (MR_String) "init_decl_atom",
  (MR_PseudoTypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0,
  (MR_String) "init_atom",
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_debugger____Unify____init_decl_atom_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____init_decl_atom_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "init_decl_atom",
  {     &mdb__declarative_debugger__mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0 },
  {     &mdb__declarative_debugger__mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_init_decl_atom_0
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_0[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_0 = {
  (MR_String) "init",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_1[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_1 = {
  (MR_String) "final",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_1
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_0
};

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_some_decl_atom_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____some_decl_atom_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____some_decl_atom_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "some_decl_atom",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_some_decl_atom_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_some_decl_atom_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_some_decl_atom_0
};

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_answer_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_answer_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_answer_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
  MR_Box mdb__declarative_debugger__wrapper_arg_4)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____decl_answer_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), &mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_3), ((MR_Word) mdb__declarative_debugger__wrapper_arg_4));
    }
    *mdb__declarative_debugger__wrapper_arg_2 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_bug_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_bug_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_bug_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____decl_bug_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_confirmation_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_confirmation_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_confirmation_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____decl_confirmation_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_contour_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_contour_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_contour_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____decl_contour_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_e_bug_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_e_bug_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_e_bug_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____decl_e_bug_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_evidence_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_evidence_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_evidence_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
  MR_Box mdb__declarative_debugger__wrapper_arg_4)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____decl_evidence_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), &mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_3), ((MR_Word) mdb__declarative_debugger__wrapper_arg_4));
    }
    *mdb__declarative_debugger__wrapper_arg_2 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_exception_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_exception_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_exception_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____decl_exception_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_i_bug_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_i_bug_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_i_bug_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____decl_i_bug_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_position_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_position_0_0();
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_position_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____decl_position_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1);
    }
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_question_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_question_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
  MR_Box mdb__declarative_debugger__wrapper_arg_4)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____decl_question_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), &mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_3), ((MR_Word) mdb__declarative_debugger__wrapper_arg_4));
    }
    *mdb__declarative_debugger__wrapper_arg_2 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_truth_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_truth_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_truth_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____decl_truth_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_exception_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____diagnoser_exception_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_exception_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____diagnoser_exception_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_response_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____diagnoser_response_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_response_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
  MR_Box mdb__declarative_debugger__wrapper_arg_4)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____diagnoser_response_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), &mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_3), ((MR_Word) mdb__declarative_debugger__wrapper_arg_4));
    }
    *mdb__declarative_debugger__wrapper_arg_2 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_state_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____diagnoser_state_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_state_1_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
  MR_Box mdb__declarative_debugger__wrapper_arg_4)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____diagnoser_state_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), &mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_3), ((MR_Word) mdb__declarative_debugger__wrapper_arg_4));
    }
    *mdb__declarative_debugger__wrapper_arg_2 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____final_decl_atom_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____final_decl_atom_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____final_decl_atom_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____init_decl_atom_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____init_decl_atom_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____some_decl_atom_0_0_10001(
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____some_decl_atom_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____some_decl_atom_0_0_10001(
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

    {
      mdb__declarative_debugger____Compare____some_decl_atom_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * mdb__declarative_debugger__HeadVar__1_1)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

static void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word mdb__declarative_debugger__Diagnoser_5,
  MR_Word * mdb__declarative_debugger__Response_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__declarative_debugger__succeeded;
        MR_Word mdb__declarative_debugger__In_8;
        MR_Word mdb__declarative_debugger__Out_9;
        MR_Word mdb__declarative_debugger__Result_11;
        MR_Word mdb__declarative_debugger__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 1)));
        MR_Word mdb__declarative_debugger__Var_18;
        MR_Word mdb__declarative_debugger__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 0)));
        MR_Word mdb__declarative_debugger__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 2)));
        MR_Word mdb__declarative_debugger__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 3)));
        MR_Word mdb__declarative_debugger__Var_34;
        MR_Word mdb__declarative_debugger__Var_35;
        MR_Word mdb__declarative_debugger__Var_36;

        {
          mdb__declarative_debugger__In_8 = mdb__declarative_oracle__get_user_input_stream_1_f_0(mdb__declarative_debugger__Var_17);
        }
        mdb__declarative_debugger__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 0)));
        mdb__declarative_debugger__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 1)));
        mdb__declarative_debugger__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 2)));
        mdb__declarative_debugger__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 3)));
        {
          mdb__declarative_debugger__Out_9 = mdb__declarative_oracle__get_user_output_stream_1_f_0(mdb__declarative_debugger__Var_18);
        }
        {
          mdb__util__trace_getline_6_p_0((MR_String) "> ", &mdb__declarative_debugger__Result_11, mdb__declarative_debugger__In_8, mdb__declarative_debugger__Out_9);
        }
        switch (MR_tag((MR_Word) mdb__declarative_debugger__Result_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_4_p_0(mdb__declarative_debugger__Out_9, (MR_String) "Unexpected EOF. Aborting.\n");
              }
              *mdb__declarative_debugger__Response_6 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mdb__declarative_debugger__Line_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Result_11, (MR_Integer) 0)));
              MR_String mdb__declarative_debugger__UpperLine_13;

              {
                mdb__declarative_debugger__UpperLine_13 = mercury__string__to_upper_1_f_0(mdb__declarative_debugger__Line_12);
              }
              if ((strcmp(mdb__declarative_debugger__UpperLine_13, (MR_String) "Y") == 0))
                mdb__declarative_debugger__succeeded = MR_TRUE;
              else
              if ((strcmp(mdb__declarative_debugger__UpperLine_13, (MR_String) "YES") == 0))
                mdb__declarative_debugger__succeeded = MR_TRUE;
              else
                mdb__declarative_debugger__succeeded = MR_FALSE;
              if (mdb__declarative_debugger__succeeded)
                *mdb__declarative_debugger__Response_6 = (MR_Integer) 1;
              else
                {
                  if ((strcmp(mdb__declarative_debugger__UpperLine_13, (MR_String) "N") == 0))
                    mdb__declarative_debugger__succeeded = MR_TRUE;
                  else
                  if ((strcmp(mdb__declarative_debugger__UpperLine_13, (MR_String) "NO") == 0))
                    mdb__declarative_debugger__succeeded = MR_TRUE;
                  else
                    mdb__declarative_debugger__succeeded = MR_FALSE;
                  if (mdb__declarative_debugger__succeeded)
                    *mdb__declarative_debugger__Response_6 = (MR_Integer) 0;
                  else
                    {
                      {
                        mercury__io__write_string_4_p_0(mdb__declarative_debugger__Out_9, (MR_String) "Please answer yes or no.\n");
                      }
                      /* direct tailcall eliminated */
                      {
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdb__declarative_debugger__ErrNo_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__Result_11, (MR_Integer) 0)));
              MR_String mdb__declarative_debugger__Var_22;
              MR_String mdb__declarative_debugger__Var_25;
              MR_String mdb__declarative_debugger__Var_26;

              {
                mdb__declarative_debugger__Var_26 = mercury__io__error_message_1_f_0(mdb__declarative_debugger__ErrNo_14);
              }
              {
                mdb__declarative_debugger__Var_25 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__Var_26, (MR_String) ". Aborting.\n");
              }
              {
                mdb__declarative_debugger__Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading input: ", mdb__declarative_debugger__Var_25);
              }
              {
                mercury__io__write_string_4_p_0(mdb__declarative_debugger__Out_9, mdb__declarative_debugger__Var_22);
              }
              *mdb__declarative_debugger__Response_6 = (MR_Integer) 0;
            }
            break;
        }
      }
      break;
    }
}

static MR_bool MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__LatestOracle_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1)));
    MR_Word mdb__declarative_debugger__LastPushedOracle_5;
    MR_Word mdb__declarative_debugger__Oracle_6;
    MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10;
    MR_Word mdb__declarative_debugger__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3)));
    MR_Word mdb__declarative_debugger__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 0)));
    MR_Word mdb__declarative_debugger__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 2)));
    MR_Word mdb__declarative_debugger__Var_18;
    MR_Word mdb__declarative_debugger__Var_19;
    MR_Word mdb__declarative_debugger__Var_20;
    MR_Word mdb__declarative_debugger__Var_21;
    MR_Word mdb__declarative_debugger__Var_23;
    MR_Word mdb__declarative_debugger__Var_24;
    MR_Word mdb__declarative_debugger__Var_22;

    mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__Var_14)) == (MR_mktag((MR_Integer) 1)));
    if (mdb__declarative_debugger__succeeded)
      {
        mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Var_14, (MR_Integer) 0)));
        mdb__declarative_debugger__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 0)));
        mdb__declarative_debugger__LastPushedOracle_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 1)));
        mdb__declarative_debugger__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 2)));
        mdb__declarative_debugger__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 3)));
        {
          mdb__declarative_oracle__update_revised_knowledge_base_3_p_0(mdb__declarative_debugger__LastPushedOracle_5, mdb__declarative_debugger__LatestOracle_4, &mdb__declarative_debugger__Oracle_6);
        }
        mdb__declarative_debugger__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 0)));
        mdb__declarative_debugger__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 1)));
        mdb__declarative_debugger__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 2)));
        mdb__declarative_debugger__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Var_21));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_6));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__Var_23));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__Var_24));
        }
        mdb__declarative_debugger__succeeded = MR_TRUE;
      }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Var_7;
    MR_Word mdb__declarative_debugger__Var_8;
    MR_Word mdb__declarative_debugger__Var_9;
    MR_Word mdb__declarative_debugger__Var_10;
    MR_Word mdb__declarative_debugger__Var_11;

    {
      mdb__declarative_debugger__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Var_7, 0) = ((MR_Box) (mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4));
    }
    mdb__declarative_debugger__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 0)));
    mdb__declarative_debugger__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 1)));
    mdb__declarative_debugger__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 2)));
    mdb__declarative_debugger__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Var_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__Var_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__Var_7));
    }
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____some_decl_atom_0_0(
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_12 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
    MR_Integer mdb__declarative_debugger__CastY_13 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_12 == mdb__declarative_debugger__CastY_13);
    if (mdb__declarative_debugger__succeeded)
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdb__declarative_debugger__Var_16 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__2_2), (MR_Integer) 0);

        if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word mdb__declarative_debugger__Var_11 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__3_3), (MR_Integer) 0);

            {
              mdb__declarative_debugger____Compare____final_decl_atom_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_16, mdb__declarative_debugger__Var_11);
            }
          }
        else
          *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word mdb__declarative_debugger__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word mdb__declarative_debugger__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));

            {
              mdb__declarative_debugger____Compare____init_decl_atom_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_17, mdb__declarative_debugger__Var_5);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____some_decl_atom_0_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_7 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
    MR_Integer mdb__declarative_debugger__CastY_8 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_7 == mdb__declarative_debugger__CastY_8);
    if (mdb__declarative_debugger__succeeded)
      mdb__declarative_debugger__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdb__declarative_debugger__Var_5 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__1_1), (MR_Integer) 0);
        MR_Word mdb__declarative_debugger__Var_6;

        mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mdb__declarative_debugger__succeeded)
          {
            mdb__declarative_debugger__Var_6 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__2_2), (MR_Integer) 0);
            {
              mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(mdb__declarative_debugger__Var_5, mdb__declarative_debugger__Var_6);
            }
          }
      }
    else
      {
        MR_Word mdb__declarative_debugger__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__declarative_debugger__Var_4;

        mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__declarative_debugger__succeeded)
          {
            mdb__declarative_debugger__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
            {
              mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__Var_3, mdb__declarative_debugger__Var_4);
            }
          }
      }
    return mdb__declarative_debugger__succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____init_decl_atom_0_0(
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_6 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
    MR_Integer mdb__declarative_debugger__CastY_7 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_6 == mdb__declarative_debugger__CastY_7);
    if (mdb__declarative_debugger__succeeded)
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdb__declarative_debugger__Var_4 = (MR_Word) mdb__declarative_debugger__HeadVar__2_2;
        MR_Word mdb__declarative_debugger__Var_5 = (MR_Word) mdb__declarative_debugger__HeadVar__3_3;

        {
          mdb__declarative_execution____Compare____trace_atom_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_4, mdb__declarative_debugger__Var_5);
        }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____init_decl_atom_0_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_5 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
    MR_Integer mdb__declarative_debugger__CastY_6 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_5 == mdb__declarative_debugger__CastY_6);
    if (mdb__declarative_debugger__succeeded)
      mdb__declarative_debugger__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__declarative_debugger__Var_3 = (MR_Word) mdb__declarative_debugger__HeadVar__1_1;
        MR_Word mdb__declarative_debugger__Var_4 = (MR_Word) mdb__declarative_debugger__HeadVar__2_2;

        {
          mdb__declarative_debugger__succeeded = mdb__declarative_execution____Unify____trace_atom_0_0(mdb__declarative_debugger__Var_3, mdb__declarative_debugger__Var_4);
        }
      }
    return mdb__declarative_debugger__succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____final_decl_atom_0_0(
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_9 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
    MR_Integer mdb__declarative_debugger__CastY_10 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_9 == mdb__declarative_debugger__CastY_10);
    if (mdb__declarative_debugger__succeeded)
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdb__declarative_debugger__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_debugger__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__declarative_debugger__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__declarative_debugger__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__declarative_debugger__Var_8;

        {
          mdb__declarative_execution____Compare____trace_atom_0_0(&mdb__declarative_debugger__Var_8, mdb__declarative_debugger__Var_4, mdb__declarative_debugger__Var_6);
        }
        mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_8 == (MR_Integer) 0);
        mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
        if (mdb__declarative_debugger__succeeded)
          *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[4], mdb__declarative_debugger__HeadVar__1_1, ((MR_Box) (mdb__declarative_debugger__Var_5)), ((MR_Box) (mdb__declarative_debugger__Var_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____final_decl_atom_0_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_7 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
    MR_Integer mdb__declarative_debugger__CastY_8 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_7 == mdb__declarative_debugger__CastY_8);
    if (mdb__declarative_debugger__succeeded)
      mdb__declarative_debugger__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__declarative_debugger__TypeInfo_10_10;
        MR_Word mdb__declarative_debugger__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__declarative_debugger__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__declarative_debugger__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_debugger__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));

        {
          mdb__declarative_debugger__succeeded = mdb__declarative_execution____Unify____trace_atom_0_0(mdb__declarative_debugger__Var_3, mdb__declarative_debugger__Var_5);
        }
        if (mdb__declarative_debugger__succeeded)
          {
            mdb__declarative_debugger__TypeInfo_10_10 = (MR_Word) &mdb__declarative_debugger_scalar_common_1[4];
            {
              mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_10_10, ((MR_Box) (mdb__declarative_debugger__Var_4)), ((MR_Box) (mdb__declarative_debugger__Var_6)));
            }
          }
      }
    return mdb__declarative_debugger__succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_state_1_0(
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_17,
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_15 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
    MR_Integer mdb__declarative_debugger__CastY_16 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_15 == mdb__declarative_debugger__CastY_16);
    if (mdb__declarative_debugger__succeeded)
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdb__declarative_debugger__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_debugger__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__declarative_debugger__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__declarative_debugger__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mdb__declarative_debugger__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__declarative_debugger__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__declarative_debugger__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdb__declarative_debugger__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mdb__declarative_debugger__Var_12;
        MR_Word mdb__declarative_debugger__TypeInfo_19_19;

        {
          mdb__declarative_debugger__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_19_19, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_19_19, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_17));
        }
        {
          mdb__declarative_analyser____Compare____analyser_state_1_0(mdb__declarative_debugger__TypeInfo_19_19, &mdb__declarative_debugger__Var_12, (MR_Word) mdb__declarative_debugger__Var_4, (MR_Word) mdb__declarative_debugger__Var_8);
        }
        mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_12 == (MR_Integer) 0);
        mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
        if (mdb__declarative_debugger__succeeded)
          *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_12;
        else
          {
            MR_Word mdb__declarative_debugger__Var_13;

            {
              mdb__declarative_oracle____Compare____oracle_state_0_0(&mdb__declarative_debugger__Var_13, mdb__declarative_debugger__Var_5, mdb__declarative_debugger__Var_9);
            }
            mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_13 == (MR_Integer) 0);
            mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
            if (mdb__declarative_debugger__succeeded)
              *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_13;
            else
              {
                MR_Word mdb__declarative_debugger__Var_14;
                MR_Integer mdb__declarative_debugger__Var_28 = (MR_Integer) mdb__declarative_debugger__Var_6;
                MR_Integer mdb__declarative_debugger__Var_29 = (MR_Integer) mdb__declarative_debugger__Var_10;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_debugger__Var_14, mdb__declarative_debugger__Var_28, mdb__declarative_debugger__Var_29);
                }
                mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_14 == (MR_Integer) 0);
                mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                if (mdb__declarative_debugger__succeeded)
                  *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_14;
                else
                  {
                    MR_Word mdb__declarative_debugger__TypeInfo_25_25;

                    {
                      mdb__declarative_debugger__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_25_25, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1));
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_25_25, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_17));
                    }
                    {
                      mercury__maybe____Compare____maybe_1_0(mdb__declarative_debugger__TypeInfo_25_25, mdb__declarative_debugger__HeadVar__1_1, (MR_Word) mdb__declarative_debugger__Var_7, (MR_Word) mdb__declarative_debugger__Var_11);
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_state_1_0(
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_13,
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_11 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
    MR_Integer mdb__declarative_debugger__CastY_12 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_11 == mdb__declarative_debugger__CastY_12);
    if (mdb__declarative_debugger__succeeded)
      mdb__declarative_debugger__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__declarative_debugger__TypeInfo_15_15;
        MR_Word mdb__declarative_debugger__TypeCtorInfo_19_19;
        MR_Word mdb__declarative_debugger__TypeInfo_20_20;
        MR_Word mdb__declarative_debugger__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__declarative_debugger__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__declarative_debugger__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mdb__declarative_debugger__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mdb__declarative_debugger__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_debugger__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__declarative_debugger__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__declarative_debugger__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)));

        {
          mdb__declarative_debugger__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_15_15, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_15_15, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_13));
        }
        {
          mdb__declarative_debugger__succeeded = mdb__declarative_analyser____Unify____analyser_state_1_0(mdb__declarative_debugger__TypeInfo_15_15, (MR_Word) mdb__declarative_debugger__Var_3, (MR_Word) mdb__declarative_debugger__Var_7);
        }
        if (mdb__declarative_debugger__succeeded)
          {
            {
              mdb__declarative_debugger__succeeded = mdb__declarative_oracle____Unify____oracle_state_0_0(mdb__declarative_debugger__Var_4, mdb__declarative_debugger__Var_8);
            }
            if (mdb__declarative_debugger__succeeded)
              {
                mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_5 == mdb__declarative_debugger__Var_9);
                if (mdb__declarative_debugger__succeeded)
                  {
                    mdb__declarative_debugger__TypeCtorInfo_19_19 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1;
                    {
                      mdb__declarative_debugger__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_20_20, 0) = ((MR_Box) (mdb__declarative_debugger__TypeCtorInfo_19_19));
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_20_20, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_13));
                    }
                    {
                      mdb__declarative_debugger__succeeded = mercury__maybe____Unify____maybe_1_0(mdb__declarative_debugger__TypeInfo_20_20, (MR_Word) mdb__declarative_debugger__Var_6, (MR_Word) mdb__declarative_debugger__Var_10);
                    }
                  }
              }
          }
      }
    return mdb__declarative_debugger__succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_response_1_0(
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_90,
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_88 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
    MR_Integer mdb__declarative_debugger__CastY_89 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_88 == mdb__declarative_debugger__CastY_89);
    if (mdb__declarative_debugger__succeeded)
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mdb__declarative_debugger__Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mdb__declarative_debugger__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_98, mdb__declarative_debugger__Var_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mdb__declarative_debugger__Var_105 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer mdb__declarative_debugger__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_105, mdb__declarative_debugger__Var_20);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__declarative_debugger__Var_99 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 4)));
                MR_Box mdb__declarative_debugger__Var_100 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3));
                MR_Integer mdb__declarative_debugger__Var_101 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
                MR_Integer mdb__declarative_debugger__Var_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer mdb__declarative_debugger__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mdb__declarative_debugger__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Box mdb__declarative_debugger__Var_58 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3));
                          MR_Integer mdb__declarative_debugger__Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Word mdb__declarative_debugger__Var_60;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_debugger__Var_60, mdb__declarative_debugger__Var_102, mdb__declarative_debugger__Var_56);
                          }
                          mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_60 == (MR_Integer) 0);
                          mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                          if (mdb__declarative_debugger__succeeded)
                            *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_60;
                          else
                            {
                              MR_Word mdb__declarative_debugger__Var_61;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_debugger__Var_61, mdb__declarative_debugger__Var_101, mdb__declarative_debugger__Var_57);
                              }
                              mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_61 == (MR_Integer) 0);
                              mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                              if (mdb__declarative_debugger__succeeded)
                                *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_61;
                              else
                                {
                                  MR_Word mdb__declarative_debugger__Var_62;

                                  {
                                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_R_90, &mdb__declarative_debugger__Var_62, mdb__declarative_debugger__Var_100, mdb__declarative_debugger__Var_58);
                                  }
                                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_62 == (MR_Integer) 0);
                                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                                  if (mdb__declarative_debugger__succeeded)
                                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_62;
                                  else
                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_99, mdb__declarative_debugger__Var_59);
                                    }
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__declarative_debugger__Var_103 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
                MR_Integer mdb__declarative_debugger__Var_104 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer mdb__declarative_debugger__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mdb__declarative_debugger__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word mdb__declarative_debugger__Var_87;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_debugger__Var_87, mdb__declarative_debugger__Var_104, mdb__declarative_debugger__Var_85);
                          }
                          mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_87 == (MR_Integer) 0);
                          mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                          if (mdb__declarative_debugger__succeeded)
                            *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_87;
                          else
                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_103, mdb__declarative_debugger__Var_86);
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
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_23,
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_21 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
    MR_Integer mdb__declarative_debugger__CastY_22 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_21 == mdb__declarative_debugger__CastY_22);
    if (mdb__declarative_debugger__succeeded)
      mdb__declarative_debugger__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mdb__declarative_debugger__CastX_7 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
            MR_Integer mdb__declarative_debugger__CastY_8 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

            mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastY_8 == mdb__declarative_debugger__CastX_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mdb__declarative_debugger__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__declarative_debugger__Var_4;

            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_debugger__succeeded)
              {
                mdb__declarative_debugger__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_3 == mdb__declarative_debugger__Var_4);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mdb__declarative_debugger__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__declarative_debugger__Var_6;

            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_debugger__succeeded)
              {
                mdb__declarative_debugger__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_5 == mdb__declarative_debugger__Var_6);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__declarative_debugger__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mdb__declarative_debugger__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
                MR_Box mdb__declarative_debugger__Var_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3));
                MR_Integer mdb__declarative_debugger__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 4)));
                MR_Integer mdb__declarative_debugger__Var_13;
                MR_Integer mdb__declarative_debugger__Var_14;
                MR_Box mdb__declarative_debugger__Var_15;
                MR_Integer mdb__declarative_debugger__Var_16;

                mdb__declarative_debugger__succeeded = ((((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mdb__declarative_debugger__succeeded)
                  {
                    mdb__declarative_debugger__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__declarative_debugger__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
                    mdb__declarative_debugger__Var_15 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3));
                    mdb__declarative_debugger__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 4)));
                    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_9 == mdb__declarative_debugger__Var_13);
                    if (mdb__declarative_debugger__succeeded)
                      {
                        mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_10 == mdb__declarative_debugger__Var_14);
                        if (mdb__declarative_debugger__succeeded)
                          {
                            {
                              mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_R_23, mdb__declarative_debugger__Var_11, mdb__declarative_debugger__Var_15);
                            }
                            if (mdb__declarative_debugger__succeeded)
                              mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_12 == mdb__declarative_debugger__Var_16);
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__declarative_debugger__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mdb__declarative_debugger__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer mdb__declarative_debugger__Var_19;
                MR_Integer mdb__declarative_debugger__Var_20;

                mdb__declarative_debugger__succeeded = ((((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mdb__declarative_debugger__succeeded)
                  {
                    mdb__declarative_debugger__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__declarative_debugger__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
                    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_17 == mdb__declarative_debugger__Var_19);
                    if (mdb__declarative_debugger__succeeded)
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_18 == mdb__declarative_debugger__Var_20);
                  }
              }
              break;
          }
          break;
      }
    return mdb__declarative_debugger__succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_exception_0_0(
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_36 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
    MR_Integer mdb__declarative_debugger__CastY_37 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_36 == mdb__declarative_debugger__CastY_37);
    if (mdb__declarative_debugger__succeeded)
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String mdb__declarative_debugger__Var_43 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
            MR_String mdb__declarative_debugger__Var_44 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String mdb__declarative_debugger__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String mdb__declarative_debugger__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_debugger__Var_8;

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_debugger__Var_8, mdb__declarative_debugger__Var_44, mdb__declarative_debugger__Var_6);
                  }
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_8 == (MR_Integer) 0);
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                  if (mdb__declarative_debugger__succeeded)
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_8;
                  else
                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_43, mdb__declarative_debugger__Var_7);
                    }
                }
                break;
              case (MR_Integer) 1:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mdb__declarative_debugger__Var_45 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
            MR_String mdb__declarative_debugger__Var_46 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String mdb__declarative_debugger__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String mdb__declarative_debugger__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_debugger__Var_24;

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_debugger__Var_24, mdb__declarative_debugger__Var_46, mdb__declarative_debugger__Var_22);
                  }
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_24 == (MR_Integer) 0);
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                  if (mdb__declarative_debugger__succeeded)
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_24;
                  else
                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_45, mdb__declarative_debugger__Var_23);
                    }
                }
                break;
              case (MR_Integer) 2:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mdb__declarative_debugger__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String mdb__declarative_debugger__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_47, mdb__declarative_debugger__Var_35);
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
mdb__declarative_debugger____Unify____diagnoser_exception_0_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_13 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
    MR_Integer mdb__declarative_debugger__CastY_14 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_13 == mdb__declarative_debugger__CastY_14);
    if (mdb__declarative_debugger__succeeded)
      mdb__declarative_debugger__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String mdb__declarative_debugger__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mdb__declarative_debugger__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
            MR_String mdb__declarative_debugger__Var_5;
            MR_String mdb__declarative_debugger__Var_6;

            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mdb__declarative_debugger__succeeded)
              {
                mdb__declarative_debugger__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_debugger__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_debugger__succeeded = (strcmp(mdb__declarative_debugger__Var_3, mdb__declarative_debugger__Var_5) == 0);
                if (mdb__declarative_debugger__succeeded)
                  mdb__declarative_debugger__succeeded = (strcmp(mdb__declarative_debugger__Var_4, mdb__declarative_debugger__Var_6) == 0);
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mdb__declarative_debugger__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mdb__declarative_debugger__Var_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
            MR_String mdb__declarative_debugger__Var_9;
            MR_String mdb__declarative_debugger__Var_10;

            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_debugger__succeeded)
              {
                mdb__declarative_debugger__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_debugger__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_debugger__succeeded = (strcmp(mdb__declarative_debugger__Var_7, mdb__declarative_debugger__Var_9) == 0);
                if (mdb__declarative_debugger__succeeded)
                  mdb__declarative_debugger__succeeded = (strcmp(mdb__declarative_debugger__Var_8, mdb__declarative_debugger__Var_10) == 0);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mdb__declarative_debugger__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mdb__declarative_debugger__Var_12;

            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_debugger__succeeded)
              {
                mdb__declarative_debugger__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_debugger__succeeded = (strcmp(mdb__declarative_debugger__Var_11, mdb__declarative_debugger__Var_12) == 0);
              }
          }
          break;
      }
    return mdb__declarative_debugger__succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_truth_0_0(
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
    MR_Integer mdb__declarative_debugger__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Cast_HeadVar1_4, mdb__declarative_debugger__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_truth_0_0(
  MR_Word mdb__declarative_debugger__HeadVar__2_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__HeadVar__2_1 == mdb__declarative_debugger__HeadVar__2_2);

    return mdb__declarative_debugger__succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_question_1_0(
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_66,
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_64 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
    MR_Integer mdb__declarative_debugger__CastY_65 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_64 == mdb__declarative_debugger__CastY_65);
    if (mdb__declarative_debugger__succeeded)
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mdb__declarative_debugger__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mdb__declarative_debugger__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mdb__declarative_debugger__Var_81 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box mdb__declarative_debugger__Var_7 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));
                  MR_Word mdb__declarative_debugger__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_debugger__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_debugger__Var_10;

                  {
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_66, &mdb__declarative_debugger__Var_10, mdb__declarative_debugger__Var_81, mdb__declarative_debugger__Var_7);
                  }
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_10 == (MR_Integer) 0);
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                  if (mdb__declarative_debugger__succeeded)
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_10;
                  else
                    {
                      MR_Word mdb__declarative_debugger__Var_11;

                      {
                        mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__Var_11, mdb__declarative_debugger__Var_80, mdb__declarative_debugger__Var_8);
                      }
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_11 == (MR_Integer) 0);
                      mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                      if (mdb__declarative_debugger__succeeded)
                        *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_11;
                      else
                        {
                          mdb__declarative_debugger____Compare____final_decl_atom_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_79, mdb__declarative_debugger__Var_9);
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_debugger__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mdb__declarative_debugger__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mdb__declarative_debugger__Var_75 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box mdb__declarative_debugger__Var_33 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));
                  MR_Word mdb__declarative_debugger__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_debugger__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_debugger__Var_36;

                  {
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_66, &mdb__declarative_debugger__Var_36, mdb__declarative_debugger__Var_75, mdb__declarative_debugger__Var_33);
                  }
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_36 == (MR_Integer) 0);
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                  if (mdb__declarative_debugger__succeeded)
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_36;
                  else
                    {
                      MR_Word mdb__declarative_debugger__Var_37;

                      {
                        mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__Var_37, mdb__declarative_debugger__Var_74, mdb__declarative_debugger__Var_34);
                      }
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_37 == (MR_Integer) 0);
                      mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                      if (mdb__declarative_debugger__succeeded)
                        *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_37;
                      else
                        {
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[3], mdb__declarative_debugger__HeadVar__1_1, ((MR_Box) (mdb__declarative_debugger__Var_73)), ((MR_Box) (mdb__declarative_debugger__Var_35)));
                          }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_debugger__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mdb__declarative_debugger__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mdb__declarative_debugger__Var_78 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Box mdb__declarative_debugger__Var_59 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));
                  MR_Word mdb__declarative_debugger__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_debugger__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_debugger__Var_62;

                  {
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_66, &mdb__declarative_debugger__Var_62, mdb__declarative_debugger__Var_78, mdb__declarative_debugger__Var_59);
                  }
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_62 == (MR_Integer) 0);
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                  if (mdb__declarative_debugger__succeeded)
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_62;
                  else
                    {
                      MR_Word mdb__declarative_debugger__Var_63;

                      {
                        mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__Var_63, mdb__declarative_debugger__Var_77, mdb__declarative_debugger__Var_60);
                      }
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_63 == (MR_Integer) 0);
                      mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                      if (mdb__declarative_debugger__succeeded)
                        *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_63;
                      else
                        {
                          mdb__term_rep____Compare____term_rep_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_76, mdb__declarative_debugger__Var_61);
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

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_question_1_0(
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_23,
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_21 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
    MR_Integer mdb__declarative_debugger__CastY_22 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_21 == mdb__declarative_debugger__CastY_22);
    if (mdb__declarative_debugger__succeeded)
      mdb__declarative_debugger__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box mdb__declarative_debugger__Var_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mdb__declarative_debugger__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_debugger__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
            MR_Box mdb__declarative_debugger__Var_6;
            MR_Word mdb__declarative_debugger__Var_7;
            MR_Word mdb__declarative_debugger__Var_8;

            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mdb__declarative_debugger__succeeded)
              {
                mdb__declarative_debugger__Var_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
                mdb__declarative_debugger__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_debugger__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
                {
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__Var_3, mdb__declarative_debugger__Var_6);
                }
                if (mdb__declarative_debugger__succeeded)
                  {
                    {
                      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__Var_4, mdb__declarative_debugger__Var_7);
                    }
                    if (mdb__declarative_debugger__succeeded)
                      {
                        mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(mdb__declarative_debugger__Var_5, mdb__declarative_debugger__Var_8);
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_debugger__TypeInfo_24_24;
            MR_Box mdb__declarative_debugger__Var_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mdb__declarative_debugger__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_debugger__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
            MR_Box mdb__declarative_debugger__Var_12;
            MR_Word mdb__declarative_debugger__Var_13;
            MR_Word mdb__declarative_debugger__Var_14;

            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_debugger__succeeded)
              {
                mdb__declarative_debugger__Var_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
                mdb__declarative_debugger__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_debugger__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
                {
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__Var_9, mdb__declarative_debugger__Var_12);
                }
                if (mdb__declarative_debugger__succeeded)
                  {
                    {
                      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__Var_10, mdb__declarative_debugger__Var_13);
                    }
                    if (mdb__declarative_debugger__succeeded)
                      {
                        mdb__declarative_debugger__TypeInfo_24_24 = (MR_Word) &mdb__declarative_debugger_scalar_common_1[3];
                        {
                          mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_24_24, ((MR_Box) (mdb__declarative_debugger__Var_11)), ((MR_Box) (mdb__declarative_debugger__Var_14)));
                        }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box mdb__declarative_debugger__Var_15 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mdb__declarative_debugger__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_debugger__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
            MR_Box mdb__declarative_debugger__Var_18;
            MR_Word mdb__declarative_debugger__Var_19;
            MR_Word mdb__declarative_debugger__Var_20;

            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_debugger__succeeded)
              {
                mdb__declarative_debugger__Var_18 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
                mdb__declarative_debugger__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_debugger__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
                {
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__Var_15, mdb__declarative_debugger__Var_18);
                }
                if (mdb__declarative_debugger__succeeded)
                  {
                    {
                      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__Var_16, mdb__declarative_debugger__Var_19);
                    }
                    if (mdb__declarative_debugger__succeeded)
                      {
                        mdb__declarative_debugger__succeeded = mdb__term_rep____Unify____term_rep_0_0(mdb__declarative_debugger__Var_17, mdb__declarative_debugger__Var_20);
                      }
                  }
              }
          }
          break;
      }
    return mdb__declarative_debugger__succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_position_0_0(
  MR_Word * mdb__declarative_debugger__HeadVar__1_1)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mdb__declarative_debugger__HeadVar__1_1);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_position_0_0(void)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return mdb__declarative_debugger__succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_i_bug_0_0(
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_14 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
    MR_Integer mdb__declarative_debugger__CastY_15 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_14 == mdb__declarative_debugger__CastY_15);
    if (mdb__declarative_debugger__succeeded)
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdb__declarative_debugger__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_debugger__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mdb__declarative_debugger__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mdb__declarative_debugger__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__declarative_debugger__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer mdb__declarative_debugger__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mdb__declarative_debugger__Var_12;

        {
          mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__Var_12, mdb__declarative_debugger__Var_4, mdb__declarative_debugger__Var_8);
        }
        mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_12 == (MR_Integer) 0);
        mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
        if (mdb__declarative_debugger__succeeded)
          *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_12;
        else
          {
            MR_Word mdb__declarative_debugger__Var_13;

            {
              mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__Var_13, mdb__declarative_debugger__Var_6, mdb__declarative_debugger__Var_10);
            }
            mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_13 == (MR_Integer) 0);
            mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
            if (mdb__declarative_debugger__succeeded)
              *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_13;
            else
              {
                mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_7, mdb__declarative_debugger__Var_11);
              }
          }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_i_bug_0_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_11 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
    MR_Integer mdb__declarative_debugger__CastY_12 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_11 == mdb__declarative_debugger__CastY_12);
    if (mdb__declarative_debugger__succeeded)
      mdb__declarative_debugger__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__declarative_debugger__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__declarative_debugger__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mdb__declarative_debugger__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mdb__declarative_debugger__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_debugger__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mdb__declarative_debugger__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)));

        {
          mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__Var_3, mdb__declarative_debugger__Var_7);
        }
        if (mdb__declarative_debugger__succeeded)
          {
            {
              mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__Var_5, mdb__declarative_debugger__Var_9);
            }
            if (mdb__declarative_debugger__succeeded)
              mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_6 == mdb__declarative_debugger__Var_10);
          }
      }
    return mdb__declarative_debugger__succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_exception_0_0(
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_4 = mdb__declarative_debugger__HeadVar__2_2;
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_5 = mdb__declarative_debugger__HeadVar__3_3;

    {
      mdb__term_rep____Compare____term_rep_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Cast_HeadVar1_4, mdb__declarative_debugger__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_exception_0_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_3 = mdb__declarative_debugger__HeadVar__1_1;
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_4 = mdb__declarative_debugger__HeadVar__2_2;

    {
      mdb__declarative_debugger__succeeded = mdb__term_rep____Unify____term_rep_0_0(mdb__declarative_debugger__Cast_HeadVar1_3, mdb__declarative_debugger__Cast_HeadVar2_4);
    }
    return mdb__declarative_debugger__succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_evidence_1_0(
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_6,
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__TypeInfo_8_8;
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_4 = mdb__declarative_debugger__HeadVar__2_2;
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_5 = mdb__declarative_debugger__HeadVar__3_3;

    {
      mdb__declarative_debugger__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_8_8, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_8_8, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_T_6));
    }
    {
      mercury__list____Compare____list_1_0(mdb__declarative_debugger__TypeInfo_8_8, mdb__declarative_debugger__HeadVar__1_1, (MR_Word) mdb__declarative_debugger__Cast_HeadVar1_4, (MR_Word) mdb__declarative_debugger__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_evidence_1_0(
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_5,
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__TypeInfo_7_7;
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_3 = mdb__declarative_debugger__HeadVar__1_1;
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_4 = mdb__declarative_debugger__HeadVar__2_2;

    {
      mdb__declarative_debugger__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_7_7, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_7_7, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_T_5));
    }
    {
      mdb__declarative_debugger__succeeded = mercury__list____Unify____list_1_0(mdb__declarative_debugger__TypeInfo_7_7, (MR_Word) mdb__declarative_debugger__Cast_HeadVar1_3, (MR_Word) mdb__declarative_debugger__Cast_HeadVar2_4);
    }
    return mdb__declarative_debugger__succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_e_bug_0_0(
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_64 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
    MR_Integer mdb__declarative_debugger__CastY_65 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_64 == mdb__declarative_debugger__CastY_65);
    if (mdb__declarative_debugger__succeeded)
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mdb__declarative_debugger__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)));
            MR_Word mdb__declarative_debugger__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mdb__declarative_debugger__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdb__declarative_debugger__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mdb__declarative_debugger__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mdb__declarative_debugger__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_debugger__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Integer mdb__declarative_debugger__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word mdb__declarative_debugger__Var_12;

                  {
                    mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__Var_12, mdb__declarative_debugger__Var_78, mdb__declarative_debugger__Var_8);
                  }
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_12 == (MR_Integer) 0);
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                  if (mdb__declarative_debugger__succeeded)
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_12;
                  else
                    {
                      MR_Word mdb__declarative_debugger__Var_13;

                      {
                        mdb__declarative_debugger____Compare____final_decl_atom_0_0(&mdb__declarative_debugger__Var_13, mdb__declarative_debugger__Var_77, mdb__declarative_debugger__Var_9);
                      }
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_13 == (MR_Integer) 0);
                      mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                      if (mdb__declarative_debugger__succeeded)
                        *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_13;
                      else
                        {
                          MR_Word mdb__declarative_debugger__Var_14;

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[3], &mdb__declarative_debugger__Var_14, ((MR_Box) (mdb__declarative_debugger__Var_76)), ((MR_Box) (mdb__declarative_debugger__Var_10)));
                          }
                          mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_14 == (MR_Integer) 0);
                          mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                          if (mdb__declarative_debugger__succeeded)
                            *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_14;
                          else
                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_75, mdb__declarative_debugger__Var_11);
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mdb__declarative_debugger__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdb__declarative_debugger__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__declarative_debugger__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mdb__declarative_debugger__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_debugger__Var_38;

                  {
                    mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__Var_38, mdb__declarative_debugger__Var_80, mdb__declarative_debugger__Var_36);
                  }
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_38 == (MR_Integer) 0);
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                  if (mdb__declarative_debugger__succeeded)
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_38;
                  else
                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_79, mdb__declarative_debugger__Var_37);
                    }
                }
                break;
              case (MR_Integer) 2:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mdb__declarative_debugger__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mdb__declarative_debugger__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdb__declarative_debugger__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mdb__declarative_debugger__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mdb__declarative_debugger__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer mdb__declarative_debugger__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_debugger__Var_62;

                  {
                    mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__Var_62, mdb__declarative_debugger__Var_83, mdb__declarative_debugger__Var_59);
                  }
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_62 == (MR_Integer) 0);
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                  if (mdb__declarative_debugger__succeeded)
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_62;
                  else
                    {
                      MR_Word mdb__declarative_debugger__Var_63;

                      {
                        mdb__term_rep____Compare____term_rep_0_0(&mdb__declarative_debugger__Var_63, mdb__declarative_debugger__Var_82, mdb__declarative_debugger__Var_60);
                      }
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_63 == (MR_Integer) 0);
                      mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                      if (mdb__declarative_debugger__succeeded)
                        *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_63;
                      else
                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_81, mdb__declarative_debugger__Var_61);
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

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_e_bug_0_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_21 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
    MR_Integer mdb__declarative_debugger__CastY_22 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_21 == mdb__declarative_debugger__CastY_22);
    if (mdb__declarative_debugger__succeeded)
      mdb__declarative_debugger__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mdb__declarative_debugger__TypeInfo_23_23;
            MR_Word mdb__declarative_debugger__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_debugger__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_debugger__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer mdb__declarative_debugger__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mdb__declarative_debugger__Var_7;
            MR_Word mdb__declarative_debugger__Var_8;
            MR_Word mdb__declarative_debugger__Var_9;
            MR_Integer mdb__declarative_debugger__Var_10;

            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mdb__declarative_debugger__succeeded)
              {
                mdb__declarative_debugger__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_debugger__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_debugger__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
                mdb__declarative_debugger__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)));
                {
                  mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__Var_3, mdb__declarative_debugger__Var_7);
                }
                if (mdb__declarative_debugger__succeeded)
                  {
                    {
                      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(mdb__declarative_debugger__Var_4, mdb__declarative_debugger__Var_8);
                    }
                    if (mdb__declarative_debugger__succeeded)
                      {
                        mdb__declarative_debugger__TypeInfo_23_23 = (MR_Word) &mdb__declarative_debugger_scalar_common_1[3];
                        {
                          mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_23_23, ((MR_Box) (mdb__declarative_debugger__Var_5)), ((MR_Box) (mdb__declarative_debugger__Var_9)));
                        }
                        if (mdb__declarative_debugger__succeeded)
                          mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_6 == mdb__declarative_debugger__Var_10);
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_debugger__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__declarative_debugger__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_debugger__Var_13;
            MR_Integer mdb__declarative_debugger__Var_14;

            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_debugger__succeeded)
              {
                mdb__declarative_debugger__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_debugger__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
                {
                  mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__Var_11, mdb__declarative_debugger__Var_13);
                }
                if (mdb__declarative_debugger__succeeded)
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_12 == mdb__declarative_debugger__Var_14);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_debugger__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_debugger__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mdb__declarative_debugger__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mdb__declarative_debugger__Var_18;
            MR_Word mdb__declarative_debugger__Var_19;
            MR_Integer mdb__declarative_debugger__Var_20;

            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_debugger__succeeded)
              {
                mdb__declarative_debugger__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_debugger__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_debugger__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
                {
                  mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__Var_15, mdb__declarative_debugger__Var_18);
                }
                if (mdb__declarative_debugger__succeeded)
                  {
                    {
                      mdb__declarative_debugger__succeeded = mdb__term_rep____Unify____term_rep_0_0(mdb__declarative_debugger__Var_16, mdb__declarative_debugger__Var_19);
                    }
                    if (mdb__declarative_debugger__succeeded)
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_17 == mdb__declarative_debugger__Var_20);
                  }
              }
          }
          break;
      }
    return mdb__declarative_debugger__succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_contour_0_0(
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_4 = mdb__declarative_debugger__HeadVar__2_2;
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_5 = mdb__declarative_debugger__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[3], mdb__declarative_debugger__HeadVar__1_1, ((MR_Box) (mdb__declarative_debugger__Cast_HeadVar1_4)), ((MR_Box) (mdb__declarative_debugger__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_contour_0_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_3 = mdb__declarative_debugger__HeadVar__1_1;
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_4 = mdb__declarative_debugger__HeadVar__2_2;

    {
      mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[3], ((MR_Box) (mdb__declarative_debugger__Cast_HeadVar1_3)), ((MR_Box) (mdb__declarative_debugger__Cast_HeadVar2_4)));
    }
    return mdb__declarative_debugger__succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_confirmation_0_0(
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
    MR_Integer mdb__declarative_debugger__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Cast_HeadVar1_4, mdb__declarative_debugger__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_confirmation_0_0(
  MR_Word mdb__declarative_debugger__HeadVar__2_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__HeadVar__2_1 == mdb__declarative_debugger__HeadVar__2_2);

    return mdb__declarative_debugger__succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_bug_0_0(
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_12 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
    MR_Integer mdb__declarative_debugger__CastY_13 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_12 == mdb__declarative_debugger__CastY_13);
    if (mdb__declarative_debugger__succeeded)
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__declarative_debugger__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word mdb__declarative_debugger__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));

            {
              mdb__declarative_debugger____Compare____decl_e_bug_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_16, mdb__declarative_debugger__Var_5);
            }
          }
        else
          *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word mdb__declarative_debugger__Var_17 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__2_2), (MR_Integer) 0);

        if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word mdb__declarative_debugger__Var_11 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__3_3), (MR_Integer) 0);

            {
              mdb__declarative_debugger____Compare____decl_i_bug_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_17, mdb__declarative_debugger__Var_11);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_bug_0_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_7 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
    MR_Integer mdb__declarative_debugger__CastY_8 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_7 == mdb__declarative_debugger__CastY_8);
    if (mdb__declarative_debugger__succeeded)
      mdb__declarative_debugger__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__declarative_debugger__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__declarative_debugger__Var_4;

        mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__declarative_debugger__succeeded)
          {
            mdb__declarative_debugger__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
            {
              mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_e_bug_0_0(mdb__declarative_debugger__Var_3, mdb__declarative_debugger__Var_4);
            }
          }
      }
    else
      {
        MR_Word mdb__declarative_debugger__Var_5 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__1_1), (MR_Integer) 0);
        MR_Word mdb__declarative_debugger__Var_6;

        mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mdb__declarative_debugger__succeeded)
          {
            mdb__declarative_debugger__Var_6 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__2_2), (MR_Integer) 0);
            {
              mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_i_bug_0_0(mdb__declarative_debugger__Var_5, mdb__declarative_debugger__Var_6);
            }
          }
      }
    return mdb__declarative_debugger__succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_answer_1_0(
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_83,
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_81 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
    MR_Integer mdb__declarative_debugger__CastY_82 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_81 == mdb__declarative_debugger__CastY_82);
    if (mdb__declarative_debugger__succeeded)
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mdb__declarative_debugger__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mdb__declarative_debugger__Var_97 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box mdb__declarative_debugger__Var_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));
                  MR_Word mdb__declarative_debugger__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_debugger__Var_8;

                  {
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_83, &mdb__declarative_debugger__Var_8, mdb__declarative_debugger__Var_97, mdb__declarative_debugger__Var_6);
                  }
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_8 == (MR_Integer) 0);
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                  if (mdb__declarative_debugger__succeeded)
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_8;
                  else
                    {
                      MR_Integer mdb__declarative_debugger__Var_102 = (MR_Integer) mdb__declarative_debugger__Var_96;
                      MR_Integer mdb__declarative_debugger__Var_103 = (MR_Integer) mdb__declarative_debugger__Var_7;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_102, mdb__declarative_debugger__Var_103);
                      }
                    }
                }
                break;
              case (MR_Integer) 1:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_debugger__Var_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word mdb__declarative_debugger__Var_92 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
            MR_Word mdb__declarative_debugger__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mdb__declarative_debugger__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mdb__declarative_debugger__Var_95 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box mdb__declarative_debugger__Var_34 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));
                  MR_Word mdb__declarative_debugger__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_debugger__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_debugger__Var_37 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 1);
                  MR_Word mdb__declarative_debugger__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word mdb__declarative_debugger__Var_39;

                  {
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_83, &mdb__declarative_debugger__Var_39, mdb__declarative_debugger__Var_95, mdb__declarative_debugger__Var_34);
                  }
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_39 == (MR_Integer) 0);
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                  if (mdb__declarative_debugger__succeeded)
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_39;
                  else
                    {
                      MR_Word mdb__declarative_debugger__Var_40;

                      {
                        mdbcomp__program_representation____Compare____arg_pos_0_0(&mdb__declarative_debugger__Var_40, mdb__declarative_debugger__Var_94, mdb__declarative_debugger__Var_35);
                      }
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_40 == (MR_Integer) 0);
                      mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                      if (mdb__declarative_debugger__succeeded)
                        *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_40;
                      else
                        {
                          MR_Word mdb__declarative_debugger__Var_41;

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[2], &mdb__declarative_debugger__Var_41, ((MR_Box) (mdb__declarative_debugger__Var_93)), ((MR_Box) (mdb__declarative_debugger__Var_36)));
                          }
                          mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_41 == (MR_Integer) 0);
                          mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                          if (mdb__declarative_debugger__succeeded)
                            *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_41;
                          else
                            {
                              MR_Word mdb__declarative_debugger__Var_42;
                              MR_Integer mdb__declarative_debugger__Var_98 = (MR_Integer) mdb__declarative_debugger__Var_92;
                              MR_Integer mdb__declarative_debugger__Var_99 = (MR_Integer) mdb__declarative_debugger__Var_37;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_debugger__Var_42, mdb__declarative_debugger__Var_98, mdb__declarative_debugger__Var_99);
                              }
                              mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_42 == (MR_Integer) 0);
                              mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
                              if (mdb__declarative_debugger__succeeded)
                                *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__Var_42;
                              else
                                {
                                  MR_Integer mdb__declarative_debugger__Var_100 = (MR_Integer) mdb__declarative_debugger__Var_91;
                                  MR_Integer mdb__declarative_debugger__Var_101 = (MR_Integer) mdb__declarative_debugger__Var_38;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_100, mdb__declarative_debugger__Var_101);
                                  }
                                }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box mdb__declarative_debugger__Var_89 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Box mdb__declarative_debugger__Var_65 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));

                  {
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_83, mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_89, mdb__declarative_debugger__Var_65);
                  }
                }
                break;
              case (MR_Integer) 3:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Box mdb__declarative_debugger__Var_90 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Box mdb__declarative_debugger__Var_80 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));

                  {
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_83, mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Var_90, mdb__declarative_debugger__Var_80);
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
mdb__declarative_debugger____Unify____decl_answer_1_0(
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_23,
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Integer mdb__declarative_debugger__CastX_21 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
    MR_Integer mdb__declarative_debugger__CastY_22 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_21 == mdb__declarative_debugger__CastY_22);
    if (mdb__declarative_debugger__succeeded)
      mdb__declarative_debugger__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box mdb__declarative_debugger__Var_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mdb__declarative_debugger__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box mdb__declarative_debugger__Var_5;
            MR_Word mdb__declarative_debugger__Var_6;

            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mdb__declarative_debugger__succeeded)
              {
                mdb__declarative_debugger__Var_5 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
                mdb__declarative_debugger__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
                {
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__Var_3, mdb__declarative_debugger__Var_5);
                }
                if (mdb__declarative_debugger__succeeded)
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_4 == mdb__declarative_debugger__Var_6);
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_debugger__TypeInfo_25_25;
            MR_Box mdb__declarative_debugger__Var_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mdb__declarative_debugger__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_debugger__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mdb__declarative_debugger__Var_10 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 1);
            MR_Word mdb__declarative_debugger__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Box mdb__declarative_debugger__Var_12;
            MR_Word mdb__declarative_debugger__Var_13;
            MR_Word mdb__declarative_debugger__Var_14;
            MR_Word mdb__declarative_debugger__Var_15;
            MR_Word mdb__declarative_debugger__Var_16;

            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_debugger__succeeded)
              {
                mdb__declarative_debugger__Var_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
                mdb__declarative_debugger__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_debugger__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
                mdb__declarative_debugger__Var_15 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
                mdb__declarative_debugger__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                {
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__Var_7, mdb__declarative_debugger__Var_12);
                }
                if (mdb__declarative_debugger__succeeded)
                  {
                    {
                      mdb__declarative_debugger__succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(mdb__declarative_debugger__Var_8, mdb__declarative_debugger__Var_13);
                    }
                    if (mdb__declarative_debugger__succeeded)
                      {
                        mdb__declarative_debugger__TypeInfo_25_25 = (MR_Word) &mdb__declarative_debugger_scalar_common_1[2];
                        {
                          mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_25_25, ((MR_Box) (mdb__declarative_debugger__Var_9)), ((MR_Box) (mdb__declarative_debugger__Var_14)));
                        }
                        if (mdb__declarative_debugger__succeeded)
                          {
                            mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_10 == mdb__declarative_debugger__Var_15);
                            if (mdb__declarative_debugger__succeeded)
                              mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Var_11 == mdb__declarative_debugger__Var_16);
                          }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box mdb__declarative_debugger__Var_17 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mdb__declarative_debugger__Var_18;

            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_debugger__succeeded)
              {
                mdb__declarative_debugger__Var_18 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
                {
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__Var_17, mdb__declarative_debugger__Var_18);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Box mdb__declarative_debugger__Var_19 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mdb__declarative_debugger__Var_20;

            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (mdb__declarative_debugger__succeeded)
              {
                mdb__declarative_debugger__Var_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
                {
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__Var_19, mdb__declarative_debugger__Var_20);
                }
              }
          }
          break;
      }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger__debug_origin_3_p_0(
  MR_Integer * mdb__declarative_debugger__Flag_1)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

{
#define MR_PROC_LABEL mdb__declarative_debugger__debug_origin_3_p_0

	MR_Integer Flag;

		{

    Flag = MR_DD_debug_origin;


		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_debugger__Flag_1  = Flag;
}
  }
}

static void MR_CALL 
mdb__declarative_debugger__write_origin_4_p_0(
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_38,
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word mdb__declarative_debugger__Origin_6)
{
  {
    MR_bool mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__Origin_6)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mdb__declarative_debugger__Store_5 = ((MR_Box) (mdb__declarative_debugger__HeadVar__1_1));
    MR_Box mdb__declarative_debugger__NodeId_8;
    MR_Word mdb__declarative_debugger__ArgPos_9;
    MR_Word mdb__declarative_debugger__TermPath_10;
    MR_Word mdb__declarative_debugger__Var_17;

    if (mdb__declarative_debugger__succeeded)
      {
        mdb__declarative_debugger__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Origin_6, (MR_Integer) 0)));
        mdb__declarative_debugger__ArgPos_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Origin_6, (MR_Integer) 1)));
        mdb__declarative_debugger__TermPath_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Origin_6, (MR_Integer) 2)));
        mdb__declarative_debugger__NodeId_8 = ((MR_Box) (mdb__declarative_debugger__Var_17));
        mdb__declarative_debugger__succeeded = MR_TRUE;
      }
    if (mdb__declarative_debugger__succeeded)
      {
        MR_Word mdb__declarative_debugger__ExitNode_11;
        MR_Box mdb__declarative_debugger__ProcLayout_12;
        MR_Word mdb__declarative_debugger__ProcLabel_13;
        MR_String mdb__declarative_debugger__ProcName_14;
        MR_Box mdb__declarative_debugger__Var_18;
        MR_Box mdb__declarative_debugger__Var_31;
        MR_Box mdb__declarative_debugger__Var_32;
        MR_Box mdb__declarative_debugger__Var_33;
        MR_Word mdb__declarative_debugger__Var_34;
        MR_Integer mdb__declarative_debugger__Var_35;
        MR_Integer mdb__declarative_debugger__Var_36;
        MR_Integer mdb__declarative_debugger__Var_37;

        {
          mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_38, mdb__declarative_debugger__Store_5, mdb__declarative_debugger__NodeId_8, &mdb__declarative_debugger__ExitNode_11);
        }
        mdb__declarative_debugger__Var_31 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 0));
        mdb__declarative_debugger__Var_32 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 1));
        mdb__declarative_debugger__Var_33 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 2));
        mdb__declarative_debugger__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 3)));
        mdb__declarative_debugger__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 4)));
        mdb__declarative_debugger__Var_18 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 5)));
        mdb__declarative_debugger__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 6)));
        mdb__declarative_debugger__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 7)));
        {
          mdb__declarative_debugger__ProcLayout_12 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_debugger__Var_18);
        }
        {
          mdb__declarative_debugger__ProcLabel_13 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_debugger__ProcLayout_12);
        }
        {
          mdb__declarative_debugger__ProcName_14 = mdbcomp__rtti_access__get_proc_name_1_f_0(mdb__declarative_debugger__ProcLabel_13);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "output(");
        }
        {
          mercury__io__write_string_3_p_0(mdb__declarative_debugger__ProcName_14);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        {
          mercury__io__write_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0, ((MR_Box) (mdb__declarative_debugger__ArgPos_9)));
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        {
          mercury__io__write_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[2], ((MR_Box) (mdb__declarative_debugger__TermPath_10)));
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
    else
      {
        MR_Word mdb__declarative_debugger__TypeInfo_42_42;
        MR_Word mdb__declarative_debugger__TypeInfo_44_44;
        MR_Word mdb__declarative_debugger__TypeInfo_46_46;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_38, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_42_42);
        }
        {
          mdb__declarative_debugger__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_44_44, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_44_44, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_42_42));
        }
        {
          mdb__declarative_debugger__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_46_46, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_46_46, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_44_44));
        }
        {
          mercury__io__write_3_p_0(mdb__declarative_debugger__TypeInfo_46_46, ((MR_Box) (mdb__declarative_debugger__Origin_6)));
        }
      }
  }
}

static void MR_CALL 
mdb__declarative_debugger__handle_diagnoser_exception_6_p_0(
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_108,
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Word * mdb__declarative_debugger__Response_2,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_4)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdb__declarative_debugger__TypeInfo_110_110;
          MR_String mdb__declarative_debugger__Loc_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
          MR_String mdb__declarative_debugger__Msg_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word mdb__declarative_debugger__StdErr_12;
          MR_Word mdb__declarative_debugger__Analyser_13;
          MR_String mdb__declarative_debugger__Var_19;
          MR_String mdb__declarative_debugger__Var_22;
          MR_String mdb__declarative_debugger__Var_24;
          MR_String mdb__declarative_debugger__Var_26;
          MR_String mdb__declarative_debugger__Var_27;
          MR_String mdb__declarative_debugger__Var_29;
          MR_Word mdb__declarative_debugger__Var_37;
          MR_Word mdb__declarative_debugger__Var_87;
          MR_Word mdb__declarative_debugger__Var_88;
          MR_Word mdb__declarative_debugger__Var_89;
          MR_Word mdb__declarative_debugger__conv0_Analyser_13;
          MR_Word mdb__declarative_debugger__Var_91;
          MR_Word mdb__declarative_debugger__Var_92;
          MR_Word mdb__declarative_debugger__Var_93;
          MR_Word mdb__declarative_debugger__Var_90;

          {
            mercury__io__stderr_stream_3_p_0(&mdb__declarative_debugger__StdErr_12);
          }
          {
            mdb__declarative_debugger__Var_29 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__Msg_8, (MR_String) "\nPlease report bugs via the Mercury bug tracking system at\n<https://www.mercurylang.org/bugs> or via e-mail tobugs\100mercurylang.org.\n");
          }
          {
            mdb__declarative_debugger__Var_27 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdb__declarative_debugger__Var_29);
          }
          {
            mdb__declarative_debugger__Var_26 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__Loc_7, mdb__declarative_debugger__Var_27);
          }
          {
            mdb__declarative_debugger__Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "message follows:\n", mdb__declarative_debugger__Var_26);
          }
          {
            mdb__declarative_debugger__Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "diagnosis will be aborted. Debugging\n", mdb__declarative_debugger__Var_24);
          }
          {
            mdb__declarative_debugger__Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "An internal error has occurred; ", mdb__declarative_debugger__Var_22);
          }
          {
            mercury__io__write_string_4_p_0(mdb__declarative_debugger__StdErr_12, mdb__declarative_debugger__Var_19);
          }
          mdb__declarative_debugger__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
          mdb__declarative_debugger__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
          mdb__declarative_debugger__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
          mdb__declarative_debugger__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
          {
            mdb__declarative_debugger__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_110_110, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_110_110, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_108));
          }
          {
            mdb__declarative_analyser__reset_analyser_2_p_0(mdb__declarative_debugger__TypeInfo_110_110, (MR_Word) mdb__declarative_debugger__Var_37, &mdb__declarative_debugger__conv0_Analyser_13);
          }
          mdb__declarative_debugger__Analyser_13 = (MR_Word) mdb__declarative_debugger__conv0_Analyser_13;
          mdb__declarative_debugger__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
          mdb__declarative_debugger__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
          mdb__declarative_debugger__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
          mdb__declarative_debugger__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_13));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Var_91));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__Var_92));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__Var_93));
          }
          *mdb__declarative_debugger__Response_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_debugger__TypeInfo_112_112;
          MR_String mdb__declarative_debugger__Loc_39 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
          MR_String mdb__declarative_debugger__Msg_40 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word mdb__declarative_debugger__StdErr_44;
          MR_Word mdb__declarative_debugger__Analyser_45;
          MR_String mdb__declarative_debugger__Var_51;
          MR_String mdb__declarative_debugger__Var_54;
          MR_String mdb__declarative_debugger__Var_55;
          MR_String mdb__declarative_debugger__Var_57;
          MR_Word mdb__declarative_debugger__Var_61;
          MR_Word mdb__declarative_debugger__Var_94;
          MR_Word mdb__declarative_debugger__Var_95;
          MR_Word mdb__declarative_debugger__Var_96;
          MR_Word mdb__declarative_debugger__conv1_Analyser_45;
          MR_Word mdb__declarative_debugger__Var_98;
          MR_Word mdb__declarative_debugger__Var_99;
          MR_Word mdb__declarative_debugger__Var_100;
          MR_Word mdb__declarative_debugger__Var_97;

          {
            mercury__io__stderr_stream_3_p_0(&mdb__declarative_debugger__StdErr_44);
          }
          {
            mdb__declarative_debugger__Var_57 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__Msg_40, (MR_String) ".\nDiagnosis will be aborted.\n");
          }
          {
            mdb__declarative_debugger__Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdb__declarative_debugger__Var_57);
          }
          {
            mdb__declarative_debugger__Var_54 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__Loc_39, mdb__declarative_debugger__Var_55);
          }
          {
            mdb__declarative_debugger__Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error: ", mdb__declarative_debugger__Var_54);
          }
          {
            mercury__io__write_string_4_p_0(mdb__declarative_debugger__StdErr_44, mdb__declarative_debugger__Var_51);
          }
          mdb__declarative_debugger__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
          mdb__declarative_debugger__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
          mdb__declarative_debugger__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
          mdb__declarative_debugger__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
          {
            mdb__declarative_debugger__TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_112_112, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_112_112, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_108));
          }
          {
            mdb__declarative_analyser__reset_analyser_2_p_0(mdb__declarative_debugger__TypeInfo_112_112, (MR_Word) mdb__declarative_debugger__Var_61, &mdb__declarative_debugger__conv1_Analyser_45);
          }
          mdb__declarative_debugger__Analyser_45 = (MR_Word) mdb__declarative_debugger__conv1_Analyser_45;
          mdb__declarative_debugger__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
          mdb__declarative_debugger__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
          mdb__declarative_debugger__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
          mdb__declarative_debugger__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_45));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Var_98));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__Var_99));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__Var_100));
          }
          *mdb__declarative_debugger__Response_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_debugger__TypeInfo_114_114;
          MR_String mdb__declarative_debugger__Feature_63 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word mdb__declarative_debugger__Analyser_67;
          MR_String mdb__declarative_debugger__Var_72;
          MR_String mdb__declarative_debugger__Var_75;
          MR_String mdb__declarative_debugger__Var_77;
          MR_String mdb__declarative_debugger__Var_79;
          MR_Word mdb__declarative_debugger__Var_85;
          MR_Word mdb__declarative_debugger__Var_101;
          MR_Word mdb__declarative_debugger__Var_102;
          MR_Word mdb__declarative_debugger__Var_103;
          MR_Word mdb__declarative_debugger__conv2_Analyser_67;
          MR_Word mdb__declarative_debugger__Var_105;
          MR_Word mdb__declarative_debugger__Var_106;
          MR_Word mdb__declarative_debugger__Var_107;
          MR_Word mdb__declarative_debugger__Var_104;

          {
            mdb__declarative_debugger__Var_79 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__Feature_63, (MR_String) ".\nThe debugger is a work in progress, and this is not supported in the\ncurrent version.\n");
          }
          {
            mdb__declarative_debugger__Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "the following: ", mdb__declarative_debugger__Var_79);
          }
          {
            mdb__declarative_debugger__Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "it requires support for\n", mdb__declarative_debugger__Var_77);
          }
          {
            mdb__declarative_debugger__Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "Sorry, the diagnosis cannot continue because ", mdb__declarative_debugger__Var_75);
          }
          {
            mercury__io__write_string_3_p_0(mdb__declarative_debugger__Var_72);
          }
          mdb__declarative_debugger__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
          mdb__declarative_debugger__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
          mdb__declarative_debugger__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
          mdb__declarative_debugger__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
          {
            mdb__declarative_debugger__TypeInfo_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_114_114, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_114_114, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_108));
          }
          {
            mdb__declarative_analyser__reset_analyser_2_p_0(mdb__declarative_debugger__TypeInfo_114_114, (MR_Word) mdb__declarative_debugger__Var_85, &mdb__declarative_debugger__conv2_Analyser_67);
          }
          mdb__declarative_debugger__Analyser_67 = (MR_Word) mdb__declarative_debugger__conv2_Analyser_67;
          mdb__declarative_debugger__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
          mdb__declarative_debugger__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
          mdb__declarative_debugger__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
          mdb__declarative_debugger__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_67));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Var_105));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__Var_106));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__Var_107));
          }
          *mdb__declarative_debugger__Response_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__get_trusted_list_3_p_0(
  MR_Word mdb__declarative_debugger__Diagnoser_4,
  MR_Word mdb__declarative_debugger__MDBCommandFormat_5,
  MR_String * mdb__declarative_debugger__List_6)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_4, (MR_Integer) 1)));
    MR_Word mdb__declarative_debugger__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_4, (MR_Integer) 0)));
    MR_Word mdb__declarative_debugger__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_4, (MR_Integer) 2)));
    MR_Word mdb__declarative_debugger__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_4, (MR_Integer) 3)));

    {
      mdb__declarative_oracle__get_trusted_list_3_p_0(mdb__declarative_debugger__Var_7, mdb__declarative_debugger__MDBCommandFormat_5, mdb__declarative_debugger__List_6);
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger__remove_trusted_3_p_0(
  MR_Integer mdb__declarative_debugger__N_4,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Oracle_6;
    MR_Word mdb__declarative_debugger__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1)));
    MR_Word mdb__declarative_debugger__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 0)));
    MR_Word mdb__declarative_debugger__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 2)));
    MR_Word mdb__declarative_debugger__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3)));
    MR_Word mdb__declarative_debugger__Var_14;
    MR_Word mdb__declarative_debugger__Var_16;
    MR_Word mdb__declarative_debugger__Var_17;
    MR_Word mdb__declarative_debugger__Var_15;

    {
      mdb__declarative_debugger__succeeded = mdb__declarative_oracle__remove_trusted_3_p_0(mdb__declarative_debugger__N_4, mdb__declarative_debugger__Var_9, &mdb__declarative_debugger__Oracle_6);
    }
    if (mdb__declarative_debugger__succeeded)
      {
        mdb__declarative_debugger__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 0)));
        mdb__declarative_debugger__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1)));
        mdb__declarative_debugger__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 2)));
        mdb__declarative_debugger__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Var_14));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_6));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__Var_16));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__Var_17));
        }
        mdb__declarative_debugger__succeeded = MR_TRUE;
      }
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger__trust_standard_library_2_p_0(
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_6)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Oracle_4;
    MR_Word mdb__declarative_debugger__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 1)));
    MR_Word mdb__declarative_debugger__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 0)));
    MR_Word mdb__declarative_debugger__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 2)));
    MR_Word mdb__declarative_debugger__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 3)));
    MR_Word mdb__declarative_debugger__Var_12;
    MR_Word mdb__declarative_debugger__Var_14;
    MR_Word mdb__declarative_debugger__Var_15;
    MR_Word mdb__declarative_debugger__Var_13;

    {
      mdb__declarative_oracle__trust_standard_library_2_p_0(mdb__declarative_debugger__Var_7, &mdb__declarative_debugger__Oracle_4);
    }
    mdb__declarative_debugger__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 0)));
    mdb__declarative_debugger__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 1)));
    mdb__declarative_debugger__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 2)));
    mdb__declarative_debugger__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Var_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__Var_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__Var_15));
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__add_trusted_pred_or_func_3_p_0(
  MR_Box mdb__declarative_debugger__ProcLayout_4,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Oracle_6;
    MR_Word mdb__declarative_debugger__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1)));
    MR_Word mdb__declarative_debugger__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 0)));
    MR_Word mdb__declarative_debugger__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 2)));
    MR_Word mdb__declarative_debugger__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3)));
    MR_Word mdb__declarative_debugger__Var_14;
    MR_Word mdb__declarative_debugger__Var_16;
    MR_Word mdb__declarative_debugger__Var_17;
    MR_Word mdb__declarative_debugger__Var_15;

    {
      mdb__declarative_oracle__add_trusted_pred_or_func_3_p_0(mdb__declarative_debugger__ProcLayout_4, mdb__declarative_debugger__Var_9, &mdb__declarative_debugger__Oracle_6);
    }
    mdb__declarative_debugger__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 0)));
    mdb__declarative_debugger__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1)));
    mdb__declarative_debugger__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 2)));
    mdb__declarative_debugger__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Var_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__Var_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__Var_17));
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__add_trusted_module_3_p_0(
  MR_String mdb__declarative_debugger__ModuleName_4,
  MR_Word mdb__declarative_debugger__Diagnoser0_5,
  MR_Word * mdb__declarative_debugger__Diagnoser_6)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__SymModuleName_7;
    MR_Word mdb__declarative_debugger__Oracle_8;
    MR_Word mdb__declarative_debugger__Var_9;
    MR_Word mdb__declarative_debugger__Var_10;
    MR_Word mdb__declarative_debugger__Var_11;
    MR_Word mdb__declarative_debugger__Var_12;
    MR_Word mdb__declarative_debugger__Var_13;
    MR_Word mdb__declarative_debugger__Var_15;
    MR_Word mdb__declarative_debugger__Var_16;
    MR_Word mdb__declarative_debugger__Var_14;

    {
      mdb__declarative_debugger__SymModuleName_7 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdb__declarative_debugger__ModuleName_4);
    }
    mdb__declarative_debugger__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 0)));
    mdb__declarative_debugger__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 1)));
    mdb__declarative_debugger__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 2)));
    mdb__declarative_debugger__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 3)));
    {
      mdb__declarative_oracle__add_trusted_module_3_p_0(mdb__declarative_debugger__SymModuleName_7, mdb__declarative_debugger__Var_9, &mdb__declarative_debugger__Oracle_8);
    }
    mdb__declarative_debugger__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 0)));
    mdb__declarative_debugger__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 1)));
    mdb__declarative_debugger__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 2)));
    mdb__declarative_debugger__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_debugger__Diagnoser_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Var_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__Var_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__Var_16));
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_supertree_3_p_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Integer * mdb__declarative_debugger__Event_4,
  MR_Integer * mdb__declarative_debugger__SeqNo_5)
{
  {
    MR_bool mdb__declarative_debugger__succeeded = ((((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1)));

    if (mdb__declarative_debugger__succeeded)
      {
        *mdb__declarative_debugger__Event_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
        *mdb__declarative_debugger__SeqNo_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
      }
    return mdb__declarative_debugger__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_subtree_5_p_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Integer * mdb__declarative_debugger__Event_6,
  MR_Integer * mdb__declarative_debugger__SeqNo_7,
  MR_Word * mdb__declarative_debugger__CallPreceding_8,
  MR_Integer * mdb__declarative_debugger__MaxDepth_9)
{
  {
    MR_bool mdb__declarative_debugger__succeeded = ((((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0)));

    if (mdb__declarative_debugger__succeeded)
      {
        *mdb__declarative_debugger__Event_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
        *mdb__declarative_debugger__SeqNo_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
        *mdb__declarative_debugger__CallPreceding_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)));
        *mdb__declarative_debugger__MaxDepth_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 4)));
      }
    return mdb__declarative_debugger__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_no_bug_found_1_p_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1)
{
  {
    MR_bool mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return mdb__declarative_debugger__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_symptom_found_2_p_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Integer * mdb__declarative_debugger__Event_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));

    if (mdb__declarative_debugger__succeeded)
      *mdb__declarative_debugger__Event_3 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
    return mdb__declarative_debugger__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_bug_found_2_p_0(
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
  MR_Integer * mdb__declarative_debugger__Event_3)
{
  {
    MR_bool mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

    if (mdb__declarative_debugger__succeeded)
      *mdb__declarative_debugger__Event_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
    return mdb__declarative_debugger__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger__diagnosis_resume_previous_8_p_0(
  MR_Word mdb__declarative_debugger__Store_9,
  MR_Word * mdb__declarative_debugger__Response_10,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_14,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_15,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_16,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_17)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    {
      mdb__declarative_debugger__diagnosis_9_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_2[0], ((MR_Box) (mdb__declarative_debugger__Store_9)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_debugger__Response_10, mdb__declarative_debugger__STATE_VARIABLE_State_0_14, mdb__declarative_debugger__STATE_VARIABLE_State_15, mdb__declarative_debugger__STATE_VARIABLE_Browser_0_16, mdb__declarative_debugger__STATE_VARIABLE_Browser_17);
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__diagnosis_new_tree_9_p_0(
  MR_Word mdb__declarative_debugger__Store_10,
  MR_Word mdb__declarative_debugger__Node_11,
  MR_Word * mdb__declarative_debugger__Response_12,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_16,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_17,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_18,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_19)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Var_22;
    MR_Word mdb__declarative_debugger__Var_26 = (MR_Word) mdb__declarative_debugger__Node_11;

    {
      mdb__declarative_debugger__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Var_22, 0) = ((MR_Box) (mdb__declarative_debugger__Var_26));
    }
    {
      mdb__declarative_debugger__diagnosis_9_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_2[0], ((MR_Box) (mdb__declarative_debugger__Store_10)), mdb__declarative_debugger__Var_22, mdb__declarative_debugger__Response_12, mdb__declarative_debugger__STATE_VARIABLE_State_0_16, mdb__declarative_debugger__STATE_VARIABLE_State_17, mdb__declarative_debugger__STATE_VARIABLE_Browser_0_18, mdb__declarative_debugger__STATE_VARIABLE_Browser_19);
    }
  }
}

static MR_Word MR_CALL 
mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_f_0(void)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__HeadVar__1_1;

    {
      mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_analyser__suspicion_divide_and_query_search_mode_0_f_0();
    }
    return mdb__declarative_debugger__HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
mdb__declarative_debugger__divide_and_query_search_mode_0_f_0(void)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__HeadVar__1_1;

    {
      mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_analyser__divide_and_query_search_mode_0_f_0();
    }
    return mdb__declarative_debugger__HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
mdb__declarative_debugger__top_down_search_mode_0_f_0(void)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__HeadVar__1_1;

    {
      mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_analyser__top_down_search_mode_0_f_0();
    }
    return mdb__declarative_debugger__HeadVar__1_1;
  }
}

static void MR_CALL 
mdb__declarative_debugger__reset_knowledge_base_2_p_0(
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_7)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Oracle0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 1)));
    MR_Word mdb__declarative_debugger__Oracle_5;
    MR_Word mdb__declarative_debugger__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 0)));
    MR_Word mdb__declarative_debugger__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 2)));
    MR_Word mdb__declarative_debugger__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 3)));
    MR_Word mdb__declarative_debugger__Var_12;
    MR_Word mdb__declarative_debugger__Var_14;
    MR_Word mdb__declarative_debugger__Var_15;
    MR_Word mdb__declarative_debugger__Var_13;

    {
      mdb__declarative_oracle__reset_oracle_knowledge_base_2_p_0(mdb__declarative_debugger__Oracle0_4, &mdb__declarative_debugger__Oracle_5);
    }
    mdb__declarative_debugger__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 0)));
    mdb__declarative_debugger__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 1)));
    mdb__declarative_debugger__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 2)));
    mdb__declarative_debugger__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Var_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_5));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__Var_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__Var_15));
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__set_fallback_search_mode_4_p_0(
  MR_Word mdb__declarative_debugger__Store_5,
  MR_Word mdb__declarative_debugger__SearchMode_6,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_11)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Analyser0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 0)));
    MR_Word mdb__declarative_debugger__Analyser_9;
    MR_Word mdb__declarative_debugger__Var_12 = (MR_Word) mdb__declarative_debugger__Store_5;
    MR_Word mdb__declarative_debugger__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 1)));
    MR_Word mdb__declarative_debugger__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 2)));
    MR_Word mdb__declarative_debugger__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 3)));
    MR_Word mdb__declarative_debugger__Var_18;
    MR_Word mdb__declarative_debugger__Var_19;
    MR_Word mdb__declarative_debugger__Var_20;
    MR_Word mdb__declarative_debugger__Var_17;

    {
      mdb__declarative_analyser__set_fallback_search_mode_4_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_3[0], ((MR_Box) (mdb__declarative_debugger__Var_12)), mdb__declarative_debugger__SearchMode_6, mdb__declarative_debugger__Analyser0_8, &mdb__declarative_debugger__Analyser_9);
    }
    mdb__declarative_debugger__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 0)));
    mdb__declarative_debugger__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 1)));
    mdb__declarative_debugger__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 2)));
    mdb__declarative_debugger__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__Var_20));
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__set_diagnoser_testing_flag_3_p_0(
  MR_Word mdb__declarative_debugger__Testing_4,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_9)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Oracle0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 1)));
    MR_Word mdb__declarative_debugger__Oracle_7;
    MR_Word mdb__declarative_debugger__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 0)));
    MR_Word mdb__declarative_debugger__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 2)));
    MR_Word mdb__declarative_debugger__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 3)));
    MR_Word mdb__declarative_debugger__Var_14;
    MR_Word mdb__declarative_debugger__Var_16;
    MR_Word mdb__declarative_debugger__Var_17;
    MR_Word mdb__declarative_debugger__Var_15;

    {
      mdb__declarative_oracle__set_oracle_testing_flag_3_p_0(mdb__declarative_debugger__Testing_4, mdb__declarative_debugger__Oracle0_6, &mdb__declarative_debugger__Oracle_7);
    }
    mdb__declarative_debugger__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 0)));
    mdb__declarative_debugger__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 1)));
    mdb__declarative_debugger__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 2)));
    mdb__declarative_debugger__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Var_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__Var_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__Var_17));
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__diagnoser_session_init_2_p_0(
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 0)));
    MR_Word mdb__declarative_debugger__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 1)));
    MR_Word mdb__declarative_debugger__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 3)));
    MR_Word mdb__declarative_debugger__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Var_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__Var_11));
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__diagnoser_state_init_store_5_p_0(
  MR_Word mdb__declarative_debugger__InStr_6,
  MR_Word mdb__declarative_debugger__OutStr_7,
  MR_Word mdb__declarative_debugger__Browser_8,
  MR_Word mdb__declarative_debugger__HelpSystem_9,
  MR_Word * mdb__declarative_debugger__Diagnoser_10)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Analyser_17;
    MR_Word mdb__declarative_debugger__Oracle_18;

    {
      mdb__declarative_analyser__analyser_state_init_1_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[1], &mdb__declarative_debugger__Analyser_17);
    }
    {
      mdb__declarative_oracle__oracle_state_init_5_p_0(mdb__declarative_debugger__InStr_6, mdb__declarative_debugger__OutStr_7, mdb__declarative_debugger__Browser_8, mdb__declarative_debugger__HelpSystem_9, &mdb__declarative_debugger__Oracle_18);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_debugger__Diagnoser_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__confirm_bug_8_p_0(
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_35,
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_34,
  MR_Box mdb__declarative_debugger__Store_9,
  MR_Word mdb__declarative_debugger__Bug_10,
  MR_Word mdb__declarative_debugger__Evidence_11,
  MR_Word * mdb__declarative_debugger__Response_12,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_20)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Oracle0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 1)));
    MR_Word mdb__declarative_debugger__Confirmation_16;
    MR_Word mdb__declarative_debugger__Oracle_17;
    MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24;
    MR_Word mdb__declarative_debugger__Var_30;
    MR_Word mdb__declarative_debugger__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 0)));
    MR_Word mdb__declarative_debugger__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 2)));
    MR_Word mdb__declarative_debugger__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 3)));
    MR_Word mdb__declarative_debugger__Var_32;
    MR_Word mdb__declarative_debugger__Var_33;
    MR_Word mdb__declarative_debugger__Var_31;

    {
      mdb__declarative_oracle__oracle_confirm_bug_7_p_0(mdb__declarative_debugger__TypeInfo_for_T_35, mdb__declarative_debugger__Bug_10, mdb__declarative_debugger__Evidence_11, &mdb__declarative_debugger__Confirmation_16, mdb__declarative_debugger__Oracle0_15, &mdb__declarative_debugger__Oracle_17);
    }
    mdb__declarative_debugger__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 0)));
    mdb__declarative_debugger__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 1)));
    mdb__declarative_debugger__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 2)));
    mdb__declarative_debugger__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 3)));
    {
      mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, 0) = ((MR_Box) (mdb__declarative_debugger__Var_30));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_17));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, 2) = ((MR_Box) (mdb__declarative_debugger__Var_32));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, 3) = ((MR_Box) (mdb__declarative_debugger__Var_33));
    }
    switch (mdb__declarative_debugger__Confirmation_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          *mdb__declarative_debugger__Response_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_20 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Integer mdb__declarative_debugger__Event_18;

          if (((MR_tag((MR_Word) mdb__declarative_debugger__Bug_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word mdb__declarative_debugger__EBug_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Bug_10, (MR_Integer) 0)));

              switch (MR_tag((MR_Word) mdb__declarative_debugger__EBug_36)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word mdb__declarative_debugger__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__EBug_36, (MR_Integer) 0)));
                    MR_Word mdb__declarative_debugger__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__EBug_36, (MR_Integer) 1)));
                    MR_Word mdb__declarative_debugger__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__EBug_36, (MR_Integer) 2)));

                    mdb__declarative_debugger__Event_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__EBug_36, (MR_Integer) 3)));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word mdb__declarative_debugger__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__EBug_36, (MR_Integer) 0)));

                    mdb__declarative_debugger__Event_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__EBug_36, (MR_Integer) 1)));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word mdb__declarative_debugger__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__EBug_36, (MR_Integer) 0)));
                    MR_Word mdb__declarative_debugger__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__EBug_36, (MR_Integer) 1)));

                    mdb__declarative_debugger__Event_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__EBug_36, (MR_Integer) 2)));
                  }
                  break;
              }
            }
          else
            {
              MR_Word mdb__declarative_debugger__IBug_44 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__Bug_10), (MR_Integer) 0);
              MR_Word mdb__declarative_debugger__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__IBug_44, (MR_Integer) 0)));
              MR_Word mdb__declarative_debugger__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__IBug_44, (MR_Integer) 2)));

              mdb__declarative_debugger__Event_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__IBug_44, (MR_Integer) 3)));
            }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdb__declarative_debugger__Response_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_debugger__Event_18));
          }
          *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_20 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_debugger__TypeInfo_30_71;
          MR_Word mdb__declarative_debugger__TypeInfo_32_73;
          MR_Word mdb__declarative_debugger__TypeInfo_34_75;
          MR_Word mdb__declarative_debugger__TypeInfo_36_77;
          MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_79;
          MR_Word mdb__declarative_debugger__AnalyserResponse_57;
          MR_Word mdb__declarative_debugger__Analyser_58;
          MR_Word mdb__declarative_debugger__Diagnoser1_59;
          MR_Word mdb__declarative_debugger__MaybeOrigin_60;
          MR_Word mdb__declarative_debugger__Var_61 = ((MR_Word) mdb__declarative_debugger__Store_9);
          MR_Word mdb__declarative_debugger__Var_67;
          MR_Word mdb__declarative_debugger__Var_68;
          MR_Word mdb__declarative_debugger__Var_69;
          MR_Word mdb__declarative_debugger__Var_66;

          {
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_34, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_30_71);
          }
          {
            mdb__declarative_debugger__TypeInfo_32_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_32_73, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_32_73, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_30_71));
          }
          {
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_34, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_34_75);
          }
          {
            mdb__declarative_debugger__TypeInfo_36_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_36_77, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_36_77, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_34_75));
          }
          {
            mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_79, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_79, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_34));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_79, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_32_73));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_79, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_36_77));
          }
          {
            mdb__declarative_analyser__revise_analysis_4_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_79, ((MR_Box) (mdb__declarative_debugger__Var_61)), &mdb__declarative_debugger__AnalyserResponse_57, mdb__declarative_debugger__Var_30, &mdb__declarative_debugger__Analyser_58);
          }
          mdb__declarative_debugger__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, (MR_Integer) 0)));
          mdb__declarative_debugger__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, (MR_Integer) 1)));
          mdb__declarative_debugger__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, (MR_Integer) 2)));
          mdb__declarative_debugger__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, (MR_Integer) 3)));
          {
            mdb__declarative_debugger__Diagnoser1_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_59, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_58));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_59, 1) = ((MR_Box) (mdb__declarative_debugger__Var_67));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_59, 2) = ((MR_Box) (mdb__declarative_debugger__Var_68));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_59, 3) = ((MR_Box) (mdb__declarative_debugger__Var_69));
          }
          {
            mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_36_77, mdb__declarative_debugger__Analyser_58, &mdb__declarative_debugger__MaybeOrigin_60);
          }
          {
            mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_34, mdb__declarative_debugger__Store_9, mdb__declarative_debugger__AnalyserResponse_57, mdb__declarative_debugger__MaybeOrigin_60, mdb__declarative_debugger__Response_12, mdb__declarative_debugger__Diagnoser1_59, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_20);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__handle_oracle_response_7_p_0(
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108,
  MR_Box mdb__declarative_debugger__Store_8,
  MR_Word mdb__declarative_debugger__OracleResponse_9,
  MR_Word * mdb__declarative_debugger__DiagnoserResponse_10,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    switch (MR_tag((MR_Word) mdb__declarative_debugger__OracleResponse_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__declarative_debugger__OracleResponse_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mdb__declarative_debugger__TypeInfo_154_154;
              MR_Word mdb__declarative_debugger__TypeInfo_156_156;
              MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33;
              MR_Word mdb__declarative_debugger__Var_42;
              MR_Word mdb__declarative_debugger__AnalyserResponse_72;
              MR_Word mdb__declarative_debugger__MaybeOrigin_73;
              MR_Word mdb__declarative_debugger__PoppedDiagnoser_22;
              MR_Word mdb__declarative_debugger__TypeInfo_141_141;
              MR_Word mdb__declarative_debugger__AnalyserResponse0_71;
              MR_Word mdb__declarative_debugger__TypeInfo_143_143;
              MR_Word mdb__declarative_debugger__TypeInfo_145_145;
              MR_Word mdb__declarative_debugger__TypeInfo_147_147;
              MR_Word mdb__declarative_debugger__TypeInfo_149_149;
              MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151;
              MR_Word mdb__declarative_debugger__Var_37;
              MR_Word mdb__declarative_debugger__Var_38;
              MR_Word mdb__declarative_debugger__Var_102;
              MR_Word mdb__declarative_debugger__Var_103;
              MR_Word mdb__declarative_debugger__Var_104;
              MR_Word mdb__declarative_debugger__conv5_AnalyserResponse0_71;
              MR_Word mdb__declarative_debugger__Var_105;
              MR_Word mdb__declarative_debugger__Var_106;
              MR_Word mdb__declarative_debugger__Var_107;

              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_141_141);
              }
              {
                mdb__declarative_debugger__succeeded = mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, &mdb__declarative_debugger__PoppedDiagnoser_22);
              }
              if (mdb__declarative_debugger__succeeded)
                mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33 = mdb__declarative_debugger__PoppedDiagnoser_22;
              else
                {
                  MR_Word mdb__declarative_debugger__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
                  MR_Word mdb__declarative_debugger__OutStream_69;
                  MR_Word mdb__declarative_debugger__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
                  MR_Word mdb__declarative_debugger__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
                  MR_Word mdb__declarative_debugger__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));

                  {
                    mdb__declarative_debugger__OutStream_69 = mdb__declarative_oracle__get_user_output_stream_1_f_0(mdb__declarative_debugger__Var_34);
                  }
                  {
                    mercury__io__write_string_4_p_0(mdb__declarative_debugger__OutStream_69, (MR_String) "Undo stack empty.\n");
                  }
                  mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27;
                }
              mdb__declarative_debugger__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 0)));
              mdb__declarative_debugger__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 1)));
              mdb__declarative_debugger__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 2)));
              mdb__declarative_debugger__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 3)));
              mdb__declarative_debugger__Var_37 = ((MR_Word) mdb__declarative_debugger__Store_8);
              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_143_143);
              }
              {
                mdb__declarative_debugger__TypeInfo_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_145_145, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_145_145, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_143_143));
              }
              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_147_147);
              }
              {
                mdb__declarative_debugger__TypeInfo_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_149_149, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_149_149, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_147_147));
              }
              {
                mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_145_145));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_149_149));
              }
              {
                mdb__declarative_debugger__succeeded = mdb__declarative_analyser__reask_last_question_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151, ((MR_Box) (mdb__declarative_debugger__Var_37)), (MR_Word) mdb__declarative_debugger__Var_38, &mdb__declarative_debugger__conv5_AnalyserResponse0_71);
              }
              if (mdb__declarative_debugger__succeeded)
                {
                  mdb__declarative_debugger__AnalyserResponse0_71 = (MR_Word) mdb__declarative_debugger__conv5_AnalyserResponse0_71;
                  mdb__declarative_debugger__succeeded = MR_TRUE;
                }
              if (mdb__declarative_debugger__succeeded)
                mdb__declarative_debugger__AnalyserResponse_72 = mdb__declarative_debugger__AnalyserResponse0_71;
              else
                {
                  {
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[7])));
                    return;
                  }
                }
              mdb__declarative_debugger__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 0)));
              mdb__declarative_debugger__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 1)));
              mdb__declarative_debugger__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 2)));
              mdb__declarative_debugger__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 3)));
              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_154_154);
              }
              {
                mdb__declarative_debugger__TypeInfo_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_156_156, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_156_156, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_154_154));
              }
              {
                mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_156_156, mdb__declarative_debugger__Var_42, &mdb__declarative_debugger__MaybeOrigin_73);
              }
              {
                mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, mdb__declarative_debugger__Store_8, mdb__declarative_debugger__AnalyserResponse_72, mdb__declarative_debugger__MaybeOrigin_73, mdb__declarative_debugger__DiagnoserResponse_10, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *mdb__declarative_debugger__DiagnoserResponse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__io__write_string_3_p_0((MR_String) "Diagnosis aborted.\n");
              }
              *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_debugger__TypeInfo_110_110;
          MR_Word mdb__declarative_debugger__TypeInfo_112_112;
          MR_Word mdb__declarative_debugger__TypeInfo_114_114;
          MR_Word mdb__declarative_debugger__TypeInfo_116_116;
          MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118;
          MR_Word mdb__declarative_debugger__Answer_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__OracleResponse_9, (MR_Integer) 0)));
          MR_Word mdb__declarative_debugger__Analyser0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
          MR_Word mdb__declarative_debugger__AnalyserResponse_15;
          MR_Word mdb__declarative_debugger__Analyser_16;
          MR_Word mdb__declarative_debugger__MaybeOrigin_17;
          MR_Word mdb__declarative_debugger__Var_57 = ((MR_Word) mdb__declarative_debugger__Store_8);
          MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59;
          MR_Word mdb__declarative_debugger__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
          MR_Word mdb__declarative_debugger__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
          MR_Word mdb__declarative_debugger__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));
          MR_Word mdb__declarative_debugger__conv1_AnalyserResponse_15;
          MR_Word mdb__declarative_debugger__conv0_Analyser_16;
          MR_Word mdb__declarative_debugger__Var_83;
          MR_Word mdb__declarative_debugger__Var_84;
          MR_Word mdb__declarative_debugger__Var_85;
          MR_Word mdb__declarative_debugger__Var_82;

          {
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_110_110);
          }
          {
            mdb__declarative_debugger__TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_112_112, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_112_112, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_110_110));
          }
          {
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_114_114);
          }
          {
            mdb__declarative_debugger__TypeInfo_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_116_116, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_116_116, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_114_114));
          }
          {
            mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_112_112));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_116_116));
          }
          {
            mdb__declarative_analyser__continue_analysis_6_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118, ((MR_Box) (mdb__declarative_debugger__Var_57)), mdb__declarative_debugger__Var_76, (MR_Word) mdb__declarative_debugger__Answer_13, &mdb__declarative_debugger__conv1_AnalyserResponse_15, (MR_Word) mdb__declarative_debugger__Analyser0_14, &mdb__declarative_debugger__conv0_Analyser_16);
          }
          mdb__declarative_debugger__AnalyserResponse_15 = (MR_Word) mdb__declarative_debugger__conv1_AnalyserResponse_15;
          mdb__declarative_debugger__Analyser_16 = (MR_Word) mdb__declarative_debugger__conv0_Analyser_16;
          mdb__declarative_debugger__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
          mdb__declarative_debugger__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
          mdb__declarative_debugger__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
          mdb__declarative_debugger__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));
          {
            mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_16));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59, 1) = ((MR_Box) (mdb__declarative_debugger__Var_83));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59, 2) = ((MR_Box) (mdb__declarative_debugger__Var_84));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59, 3) = ((MR_Box) (mdb__declarative_debugger__Var_85));
          }
          {
            mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_116_116, mdb__declarative_debugger__Analyser_16, &mdb__declarative_debugger__MaybeOrigin_17);
          }
          {
            mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, mdb__declarative_debugger__Store_8, mdb__declarative_debugger__AnalyserResponse_15, mdb__declarative_debugger__MaybeOrigin_17, mdb__declarative_debugger__DiagnoserResponse_10, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_debugger__TypeInfo_120_120;
          MR_Word mdb__declarative_debugger__TypeInfo_122_122;
          MR_Word mdb__declarative_debugger__TypeInfo_124_124;
          MR_Word mdb__declarative_debugger__TypeInfo_126_126;
          MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128;
          MR_Word mdb__declarative_debugger__OutStream_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__OracleResponse_9, (MR_Integer) 0)));
          MR_Word mdb__declarative_debugger__Var_49 = ((MR_Word) mdb__declarative_debugger__Store_8);
          MR_Word mdb__declarative_debugger__AnalyserResponse_62;
          MR_Word mdb__declarative_debugger__Analyser_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
          MR_Word mdb__declarative_debugger__MaybeOrigin_64;
          MR_Word mdb__declarative_debugger__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
          MR_Word mdb__declarative_debugger__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
          MR_Word mdb__declarative_debugger__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));
          MR_Word mdb__declarative_debugger__AnalyserResponse0_19;
          MR_Word mdb__declarative_debugger__conv4_AnalyserResponse0_19;

          {
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_120_120);
          }
          {
            mdb__declarative_debugger__TypeInfo_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_122_122, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_122_122, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_120_120));
          }
          {
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_124_124);
          }
          {
            mdb__declarative_debugger__TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_126_126, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_126_126, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_124_124));
          }
          {
            mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_122_122));
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_126_126));
          }
          {
            mdb__declarative_analyser__show_info_5_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, ((MR_Box) (mdb__declarative_debugger__Var_49)), mdb__declarative_debugger__OutStream_18, (MR_Word) mdb__declarative_debugger__Analyser_63);
          }
          {
            mdb__declarative_debugger__succeeded = mdb__declarative_analyser__reask_last_question_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, ((MR_Box) (mdb__declarative_debugger__Var_49)), (MR_Word) mdb__declarative_debugger__Analyser_63, &mdb__declarative_debugger__conv4_AnalyserResponse0_19);
          }
          if (mdb__declarative_debugger__succeeded)
            {
              mdb__declarative_debugger__AnalyserResponse0_19 = (MR_Word) mdb__declarative_debugger__conv4_AnalyserResponse0_19;
              mdb__declarative_debugger__succeeded = MR_TRUE;
            }
          if (mdb__declarative_debugger__succeeded)
            mdb__declarative_debugger__AnalyserResponse_62 = mdb__declarative_debugger__AnalyserResponse0_19;
          else
            {
              {
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[6])));
                return;
              }
            }
          {
            mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_126_126, mdb__declarative_debugger__Analyser_63, &mdb__declarative_debugger__MaybeOrigin_64);
          }
          {
            mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, mdb__declarative_debugger__Store_8, mdb__declarative_debugger__AnalyserResponse_62, mdb__declarative_debugger__MaybeOrigin_64, mdb__declarative_debugger__DiagnoserResponse_10, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__OracleResponse_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mdb__declarative_debugger__TypeInfo_131_131;
              MR_Word mdb__declarative_debugger__TypeInfo_133_133;
              MR_Word mdb__declarative_debugger__TypeInfo_135_135;
              MR_Word mdb__declarative_debugger__TypeInfo_137_137;
              MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139;
              MR_Word mdb__declarative_debugger__Mode_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__OracleResponse_9, (MR_Integer) 1)));
              MR_Word mdb__declarative_debugger__Oracle_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
              MR_Word mdb__declarative_debugger__Var_45 = ((MR_Word) mdb__declarative_debugger__Store_8);
              MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46;
              MR_Word mdb__declarative_debugger__Analyser0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
              MR_Word mdb__declarative_debugger__AnalyserResponse_66;
              MR_Word mdb__declarative_debugger__Analyser_67;
              MR_Word mdb__declarative_debugger__MaybeOrigin_68;
              MR_Word mdb__declarative_debugger__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
              MR_Word mdb__declarative_debugger__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));
              MR_Word mdb__declarative_debugger__conv3_Analyser_67;
              MR_Word mdb__declarative_debugger__conv2_AnalyserResponse_66;
              MR_Word mdb__declarative_debugger__Var_96;
              MR_Word mdb__declarative_debugger__Var_97;
              MR_Word mdb__declarative_debugger__Var_98;
              MR_Word mdb__declarative_debugger__Var_95;

              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_131_131);
              }
              {
                mdb__declarative_debugger__TypeInfo_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_133_133, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_133_133, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_131_131));
              }
              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_135_135);
              }
              {
                mdb__declarative_debugger__TypeInfo_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_137_137, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_137_137, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_135_135));
              }
              {
                mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_133_133));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_137_137));
              }
              {
                mdb__declarative_analyser__change_search_mode_6_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139, ((MR_Box) (mdb__declarative_debugger__Var_45)), mdb__declarative_debugger__Oracle_21, mdb__declarative_debugger__Mode_20, (MR_Word) mdb__declarative_debugger__Analyser0_65, &mdb__declarative_debugger__conv3_Analyser_67, &mdb__declarative_debugger__conv2_AnalyserResponse_66);
              }
              mdb__declarative_debugger__Analyser_67 = (MR_Word) mdb__declarative_debugger__conv3_Analyser_67;
              mdb__declarative_debugger__AnalyserResponse_66 = (MR_Word) mdb__declarative_debugger__conv2_AnalyserResponse_66;
              mdb__declarative_debugger__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
              mdb__declarative_debugger__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
              mdb__declarative_debugger__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
              mdb__declarative_debugger__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));
              {
                mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_67));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46, 1) = ((MR_Box) (mdb__declarative_debugger__Var_96));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46, 2) = ((MR_Box) (mdb__declarative_debugger__Var_97));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46, 3) = ((MR_Box) (mdb__declarative_debugger__Var_98));
              }
              {
                mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_137_137, mdb__declarative_debugger__Analyser_67, &mdb__declarative_debugger__MaybeOrigin_68);
              }
              {
                mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, mdb__declarative_debugger__Store_8, mdb__declarative_debugger__AnalyserResponse_66, mdb__declarative_debugger__MaybeOrigin_68, mdb__declarative_debugger__DiagnoserResponse_10, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdb__declarative_debugger__Node_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__OracleResponse_9, (MR_Integer) 1)));
              MR_Integer mdb__declarative_debugger__Event_24;
              MR_Integer mdb__declarative_debugger__Var_25;
              MR_Box mdb__declarative_debugger__Var_26;

              {
                mdb__declarative_tree__edt_subtree_details_5_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, mdb__declarative_debugger__Store_8, mdb__declarative_debugger__Node_23, &mdb__declarative_debugger__Event_24, &mdb__declarative_debugger__Var_25, &mdb__declarative_debugger__Var_26);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_debugger__DiagnoserResponse_10 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_debugger__Event_24));
              }
              *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__handle_analyser_response_8_p_0(
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113,
  MR_Box mdb__declarative_debugger__Store_9,
  MR_Word mdb__declarative_debugger__AnalyserResponse_10,
  MR_Word mdb__declarative_debugger__MaybeOrigin_11,
  MR_Word * mdb__declarative_debugger__DiagnoserResponse_12,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__declarative_debugger__succeeded;

        switch (MR_tag((MR_Word) mdb__declarative_debugger__AnalyserResponse_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mdb__declarative_debugger__DiagnoserResponse_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__io__write_string_3_p_0((MR_String) "No bug found.\n");
              }
              *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdb__declarative_debugger__TypeInfo_115_115;
              MR_Word mdb__declarative_debugger__TypeInfo_117_117;
              MR_Word mdb__declarative_debugger__Bug_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 0)));
              MR_Word mdb__declarative_debugger__Evidence_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 1)));

              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_115_115);
              }
              {
                mdb__declarative_debugger__TypeInfo_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_117_117, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_117_117, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_115_115));
              }
              {
                mdb__declarative_debugger__confirm_bug_8_p_0(mdb__declarative_debugger__TypeInfo_117_117, mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__Store_9, mdb__declarative_debugger__Bug_15, (MR_Word) mdb__declarative_debugger__Evidence_16, mdb__declarative_debugger__DiagnoserResponse_12, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdb__declarative_debugger__TypeInfo_119_119;
              MR_Word mdb__declarative_debugger__TypeInfo_121_121;
              MR_Word mdb__declarative_debugger__Question_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 0)));
              MR_Word mdb__declarative_debugger__Oracle0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
              MR_Integer mdb__declarative_debugger__Flag_19;
              MR_Word mdb__declarative_debugger__OracleResponse_21;
              MR_Word mdb__declarative_debugger__FromUser_22;
              MR_Word mdb__declarative_debugger__Oracle_23;
              MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68;
              MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69;
              MR_Word mdb__declarative_debugger__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
              MR_Word mdb__declarative_debugger__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));
              MR_Word mdb__declarative_debugger__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
              MR_Word mdb__declarative_debugger__Origin_20;
              MR_Integer mdb__declarative_debugger__Var_59;
              MR_Word mdb__declarative_debugger__Var_89;
              MR_Word mdb__declarative_debugger__Var_91;
              MR_Word mdb__declarative_debugger__Var_92;
              MR_Word mdb__declarative_debugger__Var_90;

              {
                mdb__declarative_debugger__debug_origin_3_p_0(&mdb__declarative_debugger__Flag_19);
              }
              mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__MaybeOrigin_11)) == (MR_mktag((MR_Integer) 1)));
              if (mdb__declarative_debugger__succeeded)
                {
                  mdb__declarative_debugger__Origin_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__MaybeOrigin_11, (MR_Integer) 0)));
                  mdb__declarative_debugger__Var_59 = (MR_Integer) 0;
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Flag_19 > mdb__declarative_debugger__Var_59);
                }
              if (mdb__declarative_debugger__succeeded)
                {
                  MR_Word mdb__declarative_debugger__Var_62;

                  {
                    mercury__io__write_string_3_p_0((MR_String) "Origin: ");
                  }
                  mdb__declarative_debugger__Var_62 = ((MR_Word) mdb__declarative_debugger__Store_9);
                  {
                    mdb__declarative_debugger__write_origin_4_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__Var_62, mdb__declarative_debugger__Origin_20);
                  }
                  {
                    mercury__io__nl_2_p_0();
                  }
                }
              else
                {
                }
              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_119_119);
              }
              {
                mdb__declarative_debugger__TypeInfo_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_121_121, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_121_121, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_119_119));
              }
              {
                mdb__declarative_oracle__query_oracle_7_p_0(mdb__declarative_debugger__TypeInfo_121_121, mdb__declarative_debugger__Question_17, &mdb__declarative_debugger__OracleResponse_21, &mdb__declarative_debugger__FromUser_22, mdb__declarative_debugger__Oracle0_18, &mdb__declarative_debugger__Oracle_23);
              }
              switch (mdb__declarative_debugger__FromUser_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66;
                    MR_Word mdb__declarative_debugger__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
                    MR_Word mdb__declarative_debugger__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
                    MR_Word mdb__declarative_debugger__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
                    MR_Word mdb__declarative_debugger__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));

                    {
                      mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66, 0) = ((MR_Box) (mdb__declarative_debugger__Var_85));
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66, 1) = ((MR_Box) (mdb__declarative_debugger__Var_86));
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66, 2) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66, 3) = ((MR_Box) (mdb__declarative_debugger__Var_88));
                    }
                    {
                      mdb__declarative_debugger__succeeded = mdb__declarative_oracle__oracle_response_undoable_1_p_0(mdb__declarative_debugger__TypeInfo_121_121, mdb__declarative_debugger__OracleResponse_21);
                    }
                    if (mdb__declarative_debugger__succeeded)
                      {
                        MR_Word mdb__declarative_debugger__TypeInfo_122_122;

                        {
                          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_122_122);
                        }
                        {
                          mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66, &mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68);
                        }
                      }
                    else
                      mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66;
                  }
                  break;
              }
              mdb__declarative_debugger__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68, (MR_Integer) 0)));
              mdb__declarative_debugger__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68, (MR_Integer) 1)));
              mdb__declarative_debugger__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68, (MR_Integer) 2)));
              mdb__declarative_debugger__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68, (MR_Integer) 3)));
              {
                mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69, 0) = ((MR_Box) (mdb__declarative_debugger__Var_89));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_23));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69, 2) = ((MR_Box) (mdb__declarative_debugger__Var_91));
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69, 3) = ((MR_Box) (mdb__declarative_debugger__Var_92));
              }
              {
                mdb__declarative_debugger__handle_oracle_response_7_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__Store_9, mdb__declarative_debugger__OracleResponse_21, mdb__declarative_debugger__DiagnoserResponse_12, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mdb__declarative_debugger__Node_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 1)));
                  MR_Integer mdb__declarative_debugger__Event_25;
                  MR_Integer mdb__declarative_debugger__Seqno_26;
                  MR_Box mdb__declarative_debugger__CallPreceding_27;
                  MR_Integer mdb__declarative_debugger__IdealDepth_29;
                  MR_Word mdb__declarative_debugger__ImplicitTreeInfo_28;
                  MR_Word mdb__declarative_debugger__Var_54;

                  {
                    mdb__declarative_tree__edt_subtree_details_5_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__Store_9, mdb__declarative_debugger__Node_24, &mdb__declarative_debugger__Event_25, &mdb__declarative_debugger__Seqno_26, &mdb__declarative_debugger__CallPreceding_27);
                  }
                  mdb__declarative_debugger__Var_54 = ((MR_Word) mdb__declarative_debugger__Store_9);
                  {
                    mdb__declarative_debugger__succeeded = mdb__declarative_tree__trace_implicit_tree_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__Var_54, mdb__declarative_debugger__Node_24, &mdb__declarative_debugger__ImplicitTreeInfo_28);
                  }
                  if (mdb__declarative_debugger__succeeded)
                    mdb__declarative_debugger__IdealDepth_29 = (MR_Integer) mdb__declarative_debugger__ImplicitTreeInfo_28;
                  else
                    {
                      {
                        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[5])));
                        return;
                      }
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                    *mdb__declarative_debugger__DiagnoserResponse_12 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_debugger__Event_25));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_debugger__Seqno_26));
                    MR_hl_field(MR_mktag(3), base, 3) = mdb__declarative_debugger__CallPreceding_27;
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (mdb__declarative_debugger__IdealDepth_29));
                  }
                  *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__declarative_debugger__Node_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 1)));
                  MR_Integer mdb__declarative_debugger__Event_77;
                  MR_Integer mdb__declarative_debugger__Seqno_78;
                  MR_Word mdb__declarative_debugger__Var_131;
                  MR_Word mdb__declarative_debugger__Var_132;
                  MR_Box mdb__declarative_debugger__Var_30;
                  MR_Word mdb__declarative_debugger__Var_130;
                  MR_Word mdb__declarative_debugger__Var_133;

                  {
                    mdb__declarative_tree__edt_subtree_details_5_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__Store_9, mdb__declarative_debugger__Node_76, &mdb__declarative_debugger__Event_77, &mdb__declarative_debugger__Seqno_78, &mdb__declarative_debugger__Var_30);
                  }
                  mdb__declarative_debugger__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
                  mdb__declarative_debugger__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
                  mdb__declarative_debugger__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));
                  mdb__declarative_debugger__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
                  switch (mdb__declarative_debugger__Var_131) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *mdb__declarative_debugger__DiagnoserResponse_12 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_debugger__Event_77));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_debugger__Seqno_78));
                        }
                        *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word mdb__declarative_debugger__Out_31;
                        MR_Word mdb__declarative_debugger__Response_32;
                        MR_Word mdb__declarative_debugger__TypeInfo_125_125;
                        MR_Word mdb__declarative_debugger__Var_102;
                        MR_Word mdb__declarative_debugger__Var_103;
                        MR_Word mdb__declarative_debugger__Var_105;
                        MR_Word mdb__declarative_debugger__Var_104;

                        {
                          mdb__declarative_debugger__Out_31 = mdb__declarative_oracle__get_user_output_stream_1_f_0(mdb__declarative_debugger__Var_132);
                        }
                        {
                          mercury__io__write_string_4_p_0(mdb__declarative_debugger__Out_31, (MR_String) "All descendent calls are trusted.\nShall I continue searching in ancestor calls\?\n");
                        }
                        {
                          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_125_125);
                        }
                        {
                          mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_p_0(mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, &mdb__declarative_debugger__Response_32);
                        }
                        switch (mdb__declarative_debugger__Response_32) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              {
                                mercury__io__write_string_4_p_0(mdb__declarative_debugger__Out_31, (MR_String) "Diagnosis aborted.\n");
                              }
                              *mdb__declarative_debugger__DiagnoserResponse_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              *mdb__declarative_debugger__DiagnoserResponse_12 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_debugger__Event_77));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_debugger__Seqno_78));
                            }
                            break;
                        }
                        mdb__declarative_debugger__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
                        mdb__declarative_debugger__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
                        mdb__declarative_debugger__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));
                        mdb__declarative_debugger__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Var_102));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Var_103));
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__Var_105));
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mdb__declarative_debugger__TypeInfo_127_127;
                  MR_Word mdb__declarative_debugger__TypeInfo_129_129;
                  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37;
                  MR_Word mdb__declarative_debugger__Var_38;
                  MR_Word mdb__declarative_debugger__Question_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 1)));
                  MR_Word mdb__declarative_debugger__Oracle0_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
                  MR_Word mdb__declarative_debugger__Oracle_81;
                  MR_Word mdb__declarative_debugger__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
                  MR_Word mdb__declarative_debugger__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));
                  MR_Word mdb__declarative_debugger__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
                  MR_Word mdb__declarative_debugger__Var_109;
                  MR_Word mdb__declarative_debugger__Var_111;
                  MR_Word mdb__declarative_debugger__Var_112;
                  MR_Word mdb__declarative_debugger__Var_110;

                  {
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_127_127);
                  }
                  {
                    mdb__declarative_debugger__TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_129_129, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_129_129, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_127_127));
                  }
                  {
                    mdb__declarative_oracle__revise_oracle_3_p_0(mdb__declarative_debugger__TypeInfo_129_129, mdb__declarative_debugger__Question_79, mdb__declarative_debugger__Oracle0_80, &mdb__declarative_debugger__Oracle_81);
                  }
                  mdb__declarative_debugger__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
                  mdb__declarative_debugger__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
                  mdb__declarative_debugger__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));
                  mdb__declarative_debugger__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
                  {
                    mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37, 0) = ((MR_Box) (mdb__declarative_debugger__Var_109));
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_81));
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37, 2) = ((MR_Box) (mdb__declarative_debugger__Var_111));
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37, 3) = ((MR_Box) (mdb__declarative_debugger__Var_112));
                  }
                  {
                    mdb__declarative_debugger__Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mdb__declarative_debugger__Var_38, 0) = ((MR_Box) (mdb__declarative_debugger__Question_79));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mdb__declarative_debugger__next_value_of_AnalyserResponse_10 = mdb__declarative_debugger__Var_38;
                    MR_Word mdb__declarative_debugger__next_value_of_STATE_VARIABLE_Diagnoser_0_33 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37;

                    mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33 = mdb__declarative_debugger__next_value_of_STATE_VARIABLE_Diagnoser_0_33;
                    mdb__declarative_debugger__MaybeOrigin_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mdb__declarative_debugger__AnalyserResponse_10 = mdb__declarative_debugger__next_value_of_AnalyserResponse_10;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mdb__declarative_debugger__diagnosis_2_6_p_0(
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33,
  MR_Box mdb__declarative_debugger__Store_7,
  MR_Word mdb__declarative_debugger__AnalysisType_8,
  MR_Word mdb__declarative_debugger__Diagnoser0_9,
  MR_Tuple * mdb__declarative_debugger__HeadVar__4_4)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__TypeInfo_35_35;
    MR_Word mdb__declarative_debugger__TypeInfo_37_37;
    MR_Word mdb__declarative_debugger__TypeInfo_39_39;
    MR_Word mdb__declarative_debugger__TypeInfo_41_41;
    MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43;
    MR_Word mdb__declarative_debugger__Response_10;
    MR_Word mdb__declarative_debugger__Diagnoser_11;
    MR_Word mdb__declarative_debugger__Analyser0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 0)));
    MR_Word mdb__declarative_debugger__AnalyserResponse_14;
    MR_Word mdb__declarative_debugger__Analyser_15;
    MR_Word mdb__declarative_debugger__Diagnoser1_16;
    MR_Word mdb__declarative_debugger__MaybeOrigin_17;
    MR_Word mdb__declarative_debugger__Var_20 = ((MR_Word) mdb__declarative_debugger__Store_7);
    MR_Word mdb__declarative_debugger__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 1)));
    MR_Word mdb__declarative_debugger__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 2)));
    MR_Word mdb__declarative_debugger__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 3)));
    MR_Word mdb__declarative_debugger__conv1_AnalyserResponse_14;
    MR_Word mdb__declarative_debugger__conv0_Analyser_15;
    MR_Word mdb__declarative_debugger__Var_30;
    MR_Word mdb__declarative_debugger__Var_31;
    MR_Word mdb__declarative_debugger__Var_32;
    MR_Word mdb__declarative_debugger__Var_29;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_35_35);
    }
    {
      mdb__declarative_debugger__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_37_37, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_37_37, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_35_35));
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_39_39);
    }
    {
      mdb__declarative_debugger__TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_41_41, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_41_41, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_39_39));
    }
    {
      mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_37_37));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_41_41));
    }
    {
      mdb__declarative_analyser__start_or_resume_analysis_6_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43, ((MR_Box) (mdb__declarative_debugger__Var_20)), mdb__declarative_debugger__Var_23, (MR_Word) mdb__declarative_debugger__AnalysisType_8, &mdb__declarative_debugger__conv1_AnalyserResponse_14, (MR_Word) mdb__declarative_debugger__Analyser0_13, &mdb__declarative_debugger__conv0_Analyser_15);
    }
    mdb__declarative_debugger__AnalyserResponse_14 = (MR_Word) mdb__declarative_debugger__conv1_AnalyserResponse_14;
    mdb__declarative_debugger__Analyser_15 = (MR_Word) mdb__declarative_debugger__conv0_Analyser_15;
    mdb__declarative_debugger__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 0)));
    mdb__declarative_debugger__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 1)));
    mdb__declarative_debugger__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 2)));
    mdb__declarative_debugger__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 3)));
    {
      mdb__declarative_debugger__Diagnoser1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_16, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_15));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_16, 1) = ((MR_Box) (mdb__declarative_debugger__Var_30));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_16, 2) = ((MR_Box) (mdb__declarative_debugger__Var_31));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_16, 3) = ((MR_Box) (mdb__declarative_debugger__Var_32));
    }
    {
      mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_41_41, mdb__declarative_debugger__Analyser_15, &mdb__declarative_debugger__MaybeOrigin_17);
    }
    {
      mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33, mdb__declarative_debugger__Store_7, mdb__declarative_debugger__AnalyserResponse_14, mdb__declarative_debugger__MaybeOrigin_17, &mdb__declarative_debugger__Response_10, mdb__declarative_debugger__Diagnoser1_16, &mdb__declarative_debugger__Diagnoser_11);
    }
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_debugger__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Response_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Diagnoser_11));
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__diagnosis_9_p_0_1(
  MR_Box mdb__declarative_debugger__closure_arg,
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
  MR_Box * mdb__declarative_debugger__wrapper_arg_3)
{
  {
    MR_Box mdb__declarative_debugger__closure = mdb__declarative_debugger__closure_arg;
    MR_Tuple mdb__declarative_debugger__conv0_HeadVar__4_4;

    {
      mdb__declarative_debugger__diagnosis_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__closure, (MR_Integer) 4)), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__closure, (MR_Integer) 6))), &mdb__declarative_debugger__conv0_HeadVar__4_4);
    }
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__4_4));
  }
}

void MR_CALL 
mdb__declarative_debugger__diagnosis_9_p_0(
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_46,
  MR_Box mdb__declarative_debugger__Store_10,
  MR_Word mdb__declarative_debugger__AnalysisType_11,
  MR_Word * mdb__declarative_debugger__Response_12,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21,
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_22,
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_23)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__TypeInfo_51_51;
    MR_Word mdb__declarative_debugger__TypeInfo_53_53;
    MR_Word mdb__declarative_debugger__TypeInfo_54_54;
    MR_Word mdb__declarative_debugger__TypeInfo_56_56;
    MR_Word mdb__declarative_debugger__TypeInfo_58_58;
    MR_Word mdb__declarative_debugger__Oracle_16;
    MR_Word mdb__declarative_debugger__Result_17;
    MR_Word mdb__declarative_debugger__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 1)));
    MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27;
    MR_Word mdb__declarative_debugger__Var_28;
    MR_Word mdb__declarative_debugger__Var_35;
    MR_Word mdb__declarative_debugger__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 0)));
    MR_Word mdb__declarative_debugger__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 2)));
    MR_Word mdb__declarative_debugger__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 3)));
    MR_Word mdb__declarative_debugger__Var_39;
    MR_Word mdb__declarative_debugger__Var_41;
    MR_Word mdb__declarative_debugger__Var_42;
    MR_Word mdb__declarative_debugger__Var_40;
    MR_Word mdb__declarative_debugger__Var_43;
    MR_Word mdb__declarative_debugger__Var_44;
    MR_Word mdb__declarative_debugger__Var_45;

    {
      mdb__declarative_oracle__set_browser_state_3_p_0(mdb__declarative_debugger__STATE_VARIABLE_Browser_0_22, mdb__declarative_debugger__Var_26, &mdb__declarative_debugger__Oracle_16);
    }
    mdb__declarative_debugger__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 0)));
    mdb__declarative_debugger__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 1)));
    mdb__declarative_debugger__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 2)));
    mdb__declarative_debugger__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 3)));
    {
      mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27, 0) = ((MR_Box) (mdb__declarative_debugger__Var_39));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_16));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27, 2) = ((MR_Box) (mdb__declarative_debugger__Var_41));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27, 3) = ((MR_Box) (mdb__declarative_debugger__Var_42));
    }
    {
      mdb__declarative_debugger__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Var_28, 0) = ((MR_Box) (&mdb__declarative_debugger_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Var_28, 1) = ((MR_Box) (mdb__declarative_debugger__diagnosis_9_p_0_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Var_28, 3) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_46));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Var_28, 4) = mdb__declarative_debugger__Store_10;
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Var_28, 5) = ((MR_Box) (mdb__declarative_debugger__AnalysisType_11));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Var_28, 6) = ((MR_Box) (mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27));
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_46, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_51_51);
    }
    {
      mdb__declarative_debugger__TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_53_53, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_response_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_53_53, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_51_51));
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_46, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_54_54);
    }
    {
      mdb__declarative_debugger__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_56_56, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_56_56, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_54_54));
    }
    {
      mdb__declarative_debugger__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_58_58, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_58_58, 1) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_58_58, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_53_53));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_58_58, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_56_56));
    }
    {
      mercury__exception__try_io_4_p_1(mdb__declarative_debugger__TypeInfo_58_58, mdb__declarative_debugger__Var_28, &mdb__declarative_debugger__Result_17);
    }
    if (((MR_tag((MR_Word) mdb__declarative_debugger__Result_17)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word mdb__declarative_debugger__UnivException_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__Result_17, (MR_Integer) 0)));
        MR_Word mdb__declarative_debugger__DiagnoserException_19;
        MR_Box mdb__declarative_debugger__conv1_DiagnoserException_19;

        {
          mdb__declarative_debugger__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, mdb__declarative_debugger__UnivException_18, &mdb__declarative_debugger__conv1_DiagnoserException_19);
        }
        if (mdb__declarative_debugger__succeeded)
          {
            mdb__declarative_debugger__DiagnoserException_19 = ((MR_Word) mdb__declarative_debugger__conv1_DiagnoserException_19);
            mdb__declarative_debugger__succeeded = MR_TRUE;
          }
        if (mdb__declarative_debugger__succeeded)
          {
            MR_Word mdb__declarative_debugger__TypeInfo_60_60;

            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_46, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_60_60);
            }
            {
              mdb__declarative_debugger__handle_diagnoser_exception_6_p_0(mdb__declarative_debugger__TypeInfo_60_60, mdb__declarative_debugger__DiagnoserException_19, mdb__declarative_debugger__Response_12, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21);
            }
          }
        else
          {
            mercury__exception__rethrow_1_p_0(mdb__declarative_debugger__TypeInfo_58_58, mdb__declarative_debugger__Result_17);
            return;
          }
      }
    else
      {
        MR_Tuple mdb__declarative_debugger__Var_32 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Result_17, (MR_Integer) 0)));

        *mdb__declarative_debugger__Response_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Var_32, (MR_Integer) 0)));
        *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Var_32, (MR_Integer) 1)));
      }
    mdb__declarative_debugger__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21, (MR_Integer) 0)));
    mdb__declarative_debugger__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21, (MR_Integer) 1)));
    mdb__declarative_debugger__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21, (MR_Integer) 2)));
    mdb__declarative_debugger__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21, (MR_Integer) 3)));
    {
      *mdb__declarative_debugger__STATE_VARIABLE_Browser_23 = mdb__declarative_oracle__get_browser_state_1_f_0(mdb__declarative_debugger__Var_35);
    }
  }
}

void MR_CALL 
mdb__declarative_debugger__diagnoser_state_init_5_p_0(
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_15,
  MR_Word mdb__declarative_debugger__InStr_6,
  MR_Word mdb__declarative_debugger__OutStr_7,
  MR_Word mdb__declarative_debugger__Browser_8,
  MR_Word mdb__declarative_debugger__HelpSystem_9,
  MR_Word * mdb__declarative_debugger__Diagnoser_10)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__TypeInfo_17_17;
    MR_Word mdb__declarative_debugger__Analyser_11;
    MR_Word mdb__declarative_debugger__Oracle_12;
    MR_Word mdb__declarative_debugger__conv0_Analyser_11;

    {
      mdb__declarative_debugger__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_17_17, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_17_17, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_15));
    }
    {
      mdb__declarative_analyser__analyser_state_init_1_p_0(mdb__declarative_debugger__TypeInfo_17_17, &mdb__declarative_debugger__conv0_Analyser_11);
    }
    mdb__declarative_debugger__Analyser_11 = (MR_Word) mdb__declarative_debugger__conv0_Analyser_11;
    {
      mdb__declarative_oracle__oracle_state_init_5_p_0(mdb__declarative_debugger__InStr_6, mdb__declarative_debugger__OutStr_7, mdb__declarative_debugger__Browser_8, mdb__declarative_debugger__HelpSystem_9, &mdb__declarative_debugger__Oracle_12);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_debugger__Diagnoser_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

void MR_CALL 
mdb__declarative_debugger__unravel_decl_atom_3_p_0(
  MR_Word mdb__declarative_debugger__DeclAtom_4,
  MR_Word * mdb__declarative_debugger__TraceAtom_5,
  MR_Word * mdb__declarative_debugger__MaybeIoActions_6)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;

    if (((MR_tag((MR_Word) mdb__declarative_debugger__DeclAtom_4)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdb__declarative_debugger__Var_7 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__DeclAtom_4), (MR_Integer) 0);

        *mdb__declarative_debugger__TraceAtom_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Var_7, (MR_Integer) 0)));
        *mdb__declarative_debugger__MaybeIoActions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Var_7, (MR_Integer) 1)));
      }
    else
      {
        MR_Word mdb__declarative_debugger__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__DeclAtom_4, (MR_Integer) 0)));

        *mdb__declarative_debugger__TraceAtom_5 = (MR_Word) mdb__declarative_debugger__Var_8;
        *mdb__declarative_debugger__MaybeIoActions_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

MR_Word MR_CALL 
mdb__declarative_debugger__get_decl_question_atom_1_f_0(
  MR_Word mdb__declarative_debugger__TypeInfo_16_16,
  MR_Word mdb__declarative_debugger__HeadVar__1_1)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Word mdb__declarative_debugger__Atom_2;

    switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdb__declarative_debugger__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
          MR_Box mdb__declarative_debugger__Var_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mdb__declarative_debugger__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word mdb__declarative_debugger__Var_6;

          mdb__declarative_debugger__Atom_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Var_7, (MR_Integer) 0)));
          mdb__declarative_debugger__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Var_7, (MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_debugger__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
          MR_Box mdb__declarative_debugger__Var_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mdb__declarative_debugger__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));

          mdb__declarative_debugger__Atom_2 = (MR_Word) mdb__declarative_debugger__Var_11;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_debugger__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
          MR_Box mdb__declarative_debugger__Var_12 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mdb__declarative_debugger__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));

          mdb__declarative_debugger__Atom_2 = (MR_Word) mdb__declarative_debugger__Var_15;
        }
        break;
    }
    return mdb__declarative_debugger__Atom_2;
  }
}

MR_Box MR_CALL 
mdb__declarative_debugger__get_decl_question_node_1_f_0(
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_12,
  MR_Word mdb__declarative_debugger__HeadVar__1_1)
{
  {
    MR_bool mdb__declarative_debugger__succeeded;
    MR_Box mdb__declarative_debugger__Node_2;

    switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdb__declarative_debugger__Var_4;
          MR_Word mdb__declarative_debugger__Var_5;

          mdb__declarative_debugger__Node_2 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
          mdb__declarative_debugger__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
          mdb__declarative_debugger__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_debugger__Var_7;
          MR_Word mdb__declarative_debugger__Var_8;

          mdb__declarative_debugger__Node_2 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
          mdb__declarative_debugger__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
          mdb__declarative_debugger__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_debugger__Var_10;
          MR_Word mdb__declarative_debugger__Var_11;

          mdb__declarative_debugger__Node_2 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
          mdb__declarative_debugger__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
          mdb__declarative_debugger__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
        }
        break;
    }
    return mdb__declarative_debugger__Node_2;
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

/* :- end_module mdb.declarative_debugger. */
