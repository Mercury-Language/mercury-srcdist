/*
** Automatically generated from `declarative_user.m'
** by the Mercury compiler,
** version rotd-2019-11-21
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


// :- module mdb.declarative_user.
// :- implementation.

/*
INIT mercury__mdb__declarative_user__init
ENDINIT
*/

#include "mdb.declarative_user.mih"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.browse.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.declarative_analyser.mih"
#include "mdb.declarative_debugger.mih"
#include "mdb.declarative_edt.mih"
#include "mdb.declarative_execution.mih"
#include "mdb.declarative_tree.mih"
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
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__list__pti_list_1__plain_mdb__browser_info__type_ctor_info_down_dir_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_0;

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_1;

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_2;

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_3;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_4[1];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_4;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_5[1];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_5;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_6[1];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_6;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_7[2];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_7;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_8[2];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_8;

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_9;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_10[1];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_10;

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_11;

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_12;

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_13;

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_14;

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_15;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_16[1];

static const MR_DuArgLocn mdb__declarative_user__mdb__declarative_user__field_locns_user_command_0_16[1];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_16;

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_17;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_18[1];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_18;

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_19;

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_20;

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_0[13];

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_2[1];

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_3[6];

static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_command_0[4];

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_command_0[21];

static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_command_0[21];

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_0[1];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_0;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_1[2];

static const MR_DuArgLocn mdb__declarative_user__mdb__declarative_user__field_locns_user_question_1_1[2];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_1;

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_1[1];

static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_question_1[2];

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_question_1[2];

static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_question_1[2];

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_0[2];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_0;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_1[1];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_1;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_2[1];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_2;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_3[1];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_3;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_4[1];

static const MR_DuArgLocn mdb__declarative_user__mdb__declarative_user__field_locns_user_response_1_4[1];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_4;

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_5;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_6[1];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_6;

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_7;

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_0[2];

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_2[1];

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_3[4];

static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_response_1[4];

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_response_1[8];

static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_response_1[8];

static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_0;

static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_1;

static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_2;

static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_3;

static const MR_EnumFunctorDescPtr mdb__declarative_user__mdb__declarative_user__enum_value_ordered_user_search_mode_0[4];

static const MR_EnumFunctorDescPtr mdb__declarative_user__mdb__declarative_user__enum_name_ordered_user_search_mode_0[4];

static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_search_mode_0[4];

static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__list__ti_list_1mdb__help__type_ctor_info_entry_0;

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_state_0_0[6];

static const MR_ConstString mdb__declarative_user__mdb__declarative_user__field_names_user_state_0_0[6];

static const MR_DuArgLocn mdb__declarative_user__mdb__declarative_user__field_locns_user_state_0_0[6];

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_state_0_0;

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_state_0_0[1];

static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_state_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_state_0[1];

static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_state_0[1];

static MR_bool MR_CALL 
mdb__declarative_user__IntroducedFrom__pred__browse_xml_atom__717__1_2_p_0(
  MR_Word PredOrFunc_15,
  MR_Word HeadVar__2_22);

static MR_bool MR_CALL 
mdb__declarative_user__IntroducedFrom__pred__browse_atom__698__1_2_p_0(
  MR_Word PredOrFunc_20,
  MR_Word HeadVar__2_31);

static void MR_CALL 
mdb__declarative_user____Compare____user_command_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mdb__declarative_user____Index____user_command_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_command_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_user__trace_atom_arg_to_univ_2_p_0(
  MR_Word TraceAtomArg_3,
  MR_Word * Univ_4);

static MR_bool MR_CALL 
mdb__declarative_user__is_dash_1_p_0(
  MR_Char HeadVar__1_1);

static MR_bool MR_CALL 
mdb__declarative_user__help_cmd_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_user__search_mode_cmd_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_user__trust_arg_cmd_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_user__num_io_actions_cmd_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_user__format_param_arg_cmd_3_p_0(
  MR_String Cmd_4,
  MR_Word ArgWords0_5,
  MR_Word * Command_6);

static MR_bool MR_CALL 
mdb__declarative_user__format_arg_cmd_2_p_0(
  MR_Word ArgWords_3,
  MR_Word * UserCommand_4);

static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_user__browse_arg_cmd_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_user__one_word_cmd_3_p_0(
  MR_Word Cmd_4,
  MR_Word HeadVar__2_2,
  MR_Word * Cmd_3);

static MR_Word MR_CALL 
mdb__declarative_user__get_subterm_mode_from_atoms_for_arg_4_f_0(
  MR_Integer ArgNum_6,
  MR_Word InitAtom_7,
  MR_Word FinalAtom_8,
  MR_Word Dirs_9);

static MR_Word MR_CALL 
mdb__declarative_user__get_subterm_mode_from_atoms_3_f_0(
  MR_Word InitAtom_5,
  MR_Word FinalAtom_6,
  MR_Word Dirs_7);

static void MR_CALL 
mdb__declarative_user__write_decl_bug_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__declarative_user__write_decl_bug_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word User_2);

static void MR_CALL 
mdb__declarative_user__write_decl_init_atom_6_p_0(
  MR_Word User_7,
  MR_String Indent_8,
  MR_Word CallerType_9,
  MR_Word InitAtom_10);

static MR_Word MR_CALL 
mdb__declarative_user__decl_caller_type_0_f_0(void);

static MR_bool MR_CALL 
mdb__declarative_user__browse_xml_decl_bug_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
mdb__declarative_user__browse_xml_decl_bug_5_p_0(
  MR_Word Bug_6,
  MR_Word MaybeArgNum_7,
  MR_Word User_8);

static void MR_CALL 
mdb__declarative_user__browse_decl_bug_6_p_0(
  MR_Word Bug_7,
  MR_Word MaybeArgNum_8,
  MR_Word STATE_VARIABLE_User_0_16,
  MR_Word * STATE_VARIABLE_User_17);

static void MR_CALL 
mdb__declarative_user__decl_bug_io_actions_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mdb__declarative_user__handle_command_7_p_0(
  MR_Word TypeInfo_for_T_234,
  MR_Word Cmd_8,
  MR_Word UserQuestion_9,
  MR_Word * Response_10,
  MR_Word STATE_VARIABLE_User_0_57,
  MR_Word * STATE_VARIABLE_User_58);

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0(
  MR_Word Question_5,
  MR_Word User_6);

static void MR_CALL 
mdb__declarative_user__write_decl_final_atom_6_p_0(
  MR_Word User_7,
  MR_String Indent_8,
  MR_Word CallerType_9,
  MR_Word FinalAtom_10);

static void MR_CALL 
mdb__declarative_user__write_decl_atom_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__declarative_user__write_decl_atom_6_p_0(
  MR_Word User_7,
  MR_String Indent_8,
  MR_Word CallerType_9,
  MR_Word DeclAtom_10);

static void MR_CALL 
mdb__declarative_user__write_io_actions_5_p_0(
  MR_Word User_6,
  MR_Integer NumTabled_7,
  MR_Word IoActions_8);

static void MR_CALL 
mdb__declarative_user__print_tabled_io_actions_2_5_p_0(
  MR_Word User_6,
  MR_Integer Cur_7,
  MR_Integer End_8);

static void MR_CALL 
mdb__declarative_user__count_tabled_io_actions_2_8_p_0(
  MR_Integer Cur_9,
  MR_Integer End_10,
  MR_Integer PrevTabled_11,
  MR_Integer * Tabled_12,
  MR_Integer PrevUntabled_13,
  MR_Integer * Untabled_14);

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_113_117_101_115_116_105_111_110_95_112_114_111_109_112_116_95_95_91_49_93_95_48_2_p_0(
  MR_Word UserQuestion_3,
  MR_String * Prompt_4);

static MR_bool MR_CALL 
mdb__declarative_user__get_command_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__declarative_user__get_command_6_p_0(
  MR_String Prompt_7,
  MR_Word * Command_8,
  MR_Word User_9,
  MR_Word * User_4);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_33(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_32(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_31(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_30(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_29(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_105_111_95_97_99_116_105_111_110_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
mdb__declarative_user__print_atom_arguments_6_p_0(
  MR_Word Atom_7,
  MR_Integer From_8,
  MR_Integer To_9,
  MR_Word User_10);

static MR_bool MR_CALL 
mdb__declarative_user__browse_xml_atom_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
mdb__declarative_user__browse_xml_atom_4_p_0(
  MR_Word Atom_5,
  MR_Word User_6);

static MR_Box MR_CALL 
mdb__declarative_user__browse_atom_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdb__declarative_user__browse_atom_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
mdb__declarative_user__browse_atom_7_p_0(
  MR_Word InitAtom_8,
  MR_Word FinalAtom_9,
  MR_Word * MaybeTrack_10,
  MR_Word STATE_VARIABLE_User_0_26,
  MR_Word * STATE_VARIABLE_User_27);

static void MR_CALL 
mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mdb__declarative_user__get_user_arg_values_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mdb__declarative_user__browse_xml_atom_argument_5_p_0(
  MR_Word Atom_6,
  MR_Integer ArgNum_7,
  MR_Word User_8);

static MR_Box MR_CALL 
mdb__declarative_user__browse_atom_argument_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__declarative_user__browse_atom_argument_8_p_0(
  MR_Word InitAtom_9,
  MR_Word FinalAtom_10,
  MR_Integer ArgNum_11,
  MR_Word * MaybeTrack_12,
  MR_Word STATE_VARIABLE_User_0_26,
  MR_Word * STATE_VARIABLE_User_27);

static void MR_CALL 
mdb__declarative_user__print_chosen_io_actions_6_p_0(
  MR_Word MaybeIoActions_7,
  MR_Integer From_8,
  MR_Integer To_9,
  MR_Word User0_10);

static void MR_CALL 
mdb__declarative_user__browse_chosen_io_action_7_p_0(
  MR_Word MaybeIoActions_8,
  MR_Integer ActionNum_9,
  MR_Word * MaybeTrack_10,
  MR_Word STATE_VARIABLE_User_0_16,
  MR_Word * STATE_VARIABLE_User_17);

static void MR_CALL 
mdb__declarative_user__browse_io_action_6_p_0(
  MR_Word IoAction_7,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_User_0_17,
  MR_Word * STATE_VARIABLE_User_18);

static void MR_CALL 
mdb__declarative_user__find_tabled_io_action_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer TabledActionNum_8,
  MR_Word * MaybeIoAction_9);

static MR_Word MR_CALL 
mdb__declarative_user__arg_num_to_arg_pos_1_f_0(
  MR_Integer ArgNum_3);

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_command_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_user____Compare____user_command_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_question_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_user____Compare____user_question_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_user____Compare____user_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_search_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_user____Compare____user_search_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_user____Compare____user_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__declarative_user_scalar_common_1[22][2];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_2[1][8];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_3[3][5];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_4[1][7];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_5[18][3];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_6[2][6];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_7[21][4];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_9[1][9];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_10[3][1];


/* sealed */ struct mdb__declarative_user__vector_common_type_8_0_s {
  const MR_Word mdb__declarative_user__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct mdb__declarative_user__vector_common_type_8_0_s mdb__declarative_user_vector_common_8[33];

/* sealed */ struct mdb__declarative_user__vector_common_type_11_0_s {
  const MR_String mdb__declarative_user__vector_common_type_11_0__vct_11_f_0;
  const MR_Word mdb__declarative_user__vector_common_type_11_0__vct_11_f_1;
};

static /* final */ const struct mdb__declarative_user__vector_common_type_11_0_s mdb__declarative_user_vector_common_11[64];



static /* final */ const MR_Box mdb__declarative_user_scalar_common_1[22][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "decl_debug")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "concepts")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\th, \?\thelp\t\tthis help message\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "abort this diagnosis session and return to mdb\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\tq\tquit\t\t")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "\tb\tbrowse\t\tbrowse the suspect\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "\tn\tno\t\tdo not accept that the suspect is a bug\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\ty\tyes\t\tconfirm that the suspect is a bug\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "Answer one of:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "convert_dirs_to_term_path_from_atom")),
    ((MR_Box) ((MR_String) "argument list empty"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "convert_dirs_to_term_path_from_atom")),
    ((MR_Box) ((MR_String) "argument of atom cannot be named"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "convert_dirs_to_term_path_from_atom")),
    ((MR_Box) ((MR_String) "no value for first position in path"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_2[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0)),
    ((MR_Box) (&mdb__declarative_user__list__pti_list_1__plain_mdb__browser_info__type_ctor_info_down_dir_0)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_term_mode_0))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__declarative_user__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_command_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0)),
    ((MR_Box) (&mdb__declarative_user__list__pti_list_1__plain_mdb__browser_info__type_ctor_info_down_dir_0)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_term_mode_0))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_5[18][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_16)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_19)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_22)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_28)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_29)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[20])),
    ((MR_Box) (mdb__declarative_user__get_command_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[2])),
    ((MR_Box) (mdb__declarative_user__write_decl_atom_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[20])),
    ((MR_Box) (mdb__declarative_user__print_arg_cmd_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[20])),
    ((MR_Box) (mdb__declarative_user__print_arg_cmd_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_6[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_command_0)),
    ((MR_Box) (&mdb__declarative_user__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_command_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__declarative_user__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_command_0))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_7[21][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 40U))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 40U))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "depth"))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_11)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_12)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_13)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 28U))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_14)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "lines"))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_17)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_18)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_20)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[15])))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_21)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row 11 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_23)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 40U))
  },
  /* row 12 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_24)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 40U))
  },
  /* row 13 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_25)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row 14 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_26)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "size"))
  },
  /* row 15 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_27)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row 16 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_30)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 32U))
  },
  /* row 17 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_31)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "width"))
  },
  /* row 18 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_32)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_33)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_browse_caller_type_0)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_10[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
};


static /* final */ const struct mdb__declarative_user__vector_common_type_8_0_s mdb__declarative_user_vector_common_8[33] = {
  /* row 0 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_5[0]) },
  /* row 1 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[0]) },
  /* row 2 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[1]) },
  /* row 3 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_5[1]) },
  /* row 4 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_5[2]) },
  /* row 5 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_5[3]) },
  /* row 6 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[2]) },
  /* row 7 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_5[4]) },
  /* row 8 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_5[5]) },
  /* row 9 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_5[6]) },
  /* row 10 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[3]) },
  /* row 11 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[4]) },
  /* row 12 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[5]) },
  /* row 13 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[6]) },
  /* row 14 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_5[7]) },
  /* row 15 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_5[8]) },
  /* row 16 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[7]) },
  /* row 17 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[8]) },
  /* row 18 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_5[9]) },
  /* row 19 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[9]) },
  /* row 20 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[10]) },
  /* row 21 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_5[10]) },
  /* row 22 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[11]) },
  /* row 23 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[12]) },
  /* row 24 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[13]) },
  /* row 25 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[14]) },
  /* row 26 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[15]) },
  /* row 27 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_5[11]) },
  /* row 28 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_5[12]) },
  /* row 29 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[16]) },
  /* row 30 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[17]) },
  /* row 31 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[18]) },
  /* row 32 */   {     (MR_Word) (&mdb__declarative_user_scalar_common_7[19]) },
};

static /* final */ const struct mdb__declarative_user__vector_common_type_11_0_s mdb__declarative_user_vector_common_11[64] = {
  /* row 0 */
  {
    (MR_String) "top-down",
    (MR_Word) (MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[20]))
  },
  /* row 1 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 2 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 3 */
  {
    (MR_String) "binary",
    (MR_Word) (MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[17]))
  },
  /* row 4 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 5 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 6 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 7 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 8 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 9 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 10 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 11 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 12 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 13 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 14 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 15 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 16 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 17 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 18 */
  {
    (MR_String) "suspicion_divide_and_query",
    (MR_Word) (MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[19]))
  },
  /* row 19 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 20 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 21 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 22 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 23 */
  {
    (MR_String) "dq",
    (MR_Word) (MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[18]))
  },
  /* row 24 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 25 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 26 */
  {
    (MR_String) "td",
    (MR_Word) (MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[20]))
  },
  /* row 27 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 28 */
  {
    (MR_String) "divide_and_query",
    (MR_Word) (MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[18]))
  },
  /* row 29 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 30 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 31 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 32 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 33 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 34 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 35 */
  {
    (MR_String) "b",
    (MR_Word) (MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[17]))
  },
  /* row 36 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 37 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 38 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 39 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 40 */
  {
    (MR_String) "suspicion-divide-and-query",
    (MR_Word) (MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[19]))
  },
  /* row 41 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 42 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 43 */
  {
    (MR_String) "sdq",
    (MR_Word) (MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[19]))
  },
  /* row 44 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 45 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 46 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 47 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 48 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 49 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 50 */
  {
    (MR_String) "top_down",
    (MR_Word) (MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[20]))
  },
  /* row 51 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 52 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 53 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 54 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 55 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 56 */
  {
    (MR_String) "divide-and-query",
    (MR_Word) (MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[18]))
  },
  /* row 57 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 58 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 59 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 60 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 61 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 62 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 63 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
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
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__list__pti_list_1__plain_mdb__browser_info__type_ctor_info_down_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_0 = {
  (MR_String) "user_cmd_yes",
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

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_1 = {
  (MR_String) "user_cmd_no",
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

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_2 = {
  (MR_String) "user_cmd_inadmissible",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_3 = {
  (MR_String) "user_cmd_skip",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_4[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_4 = {
  (MR_String) "user_cmd_browse_arg",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(4),
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_5[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_5 = {
  (MR_String) "user_cmd_browse_xml_arg",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(5),
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_6[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_6 = {
  (MR_String) "user_cmd_browse_io",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(6),
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_7[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_7 = {
  (MR_String) "user_cmd_print_arg",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(7),
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_8[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_8 = {
  (MR_String) "user_cmd_print_io",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(8),
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_9 = {
  (MR_String) "user_cmd_pd",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(9),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_10[1] = {
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_param_cmd_0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_10 = {
  (MR_String) "user_cmd_param_command",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(10),
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_11 = {
  (MR_String) "user_cmd_trust_predicate",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(11),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_12 = {
  (MR_String) "user_cmd_trust_module",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(12),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_13 = {
  (MR_String) "user_cmd_info",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 7,
  INT32_C(13),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_14 = {
  (MR_String) "user_cmd_undo",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 8,
  INT32_C(14),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_15 = {
  (MR_String) "user_cmd_ask",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 9,
  INT32_C(15),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_16[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0)
};

static const MR_DuArgLocn mdb__declarative_user__mdb__declarative_user__field_locns_user_command_0_16[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_16 = {
  (MR_String) "user_cmd_change_search",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(16),
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_16,
  NULL,
  mdb__declarative_user__mdb__declarative_user__field_locns_user_command_0_16,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_17 = {
  (MR_String) "user_cmd_quit",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 10,
  INT32_C(17),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_18[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_18 = {
  (MR_String) "user_cmd_help",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(18),
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_18,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_19 = {
  (MR_String) "user_cmd_empty",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 11,
  INT32_C(19),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_20 = {
  (MR_String) "user_cmd_illegal",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 12,
  INT32_C(20),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_0[13] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_0,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_1,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_2,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_3,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_9,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_11,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_12,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_13,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_14,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_15,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_17,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_19,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_20
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_1[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_4
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_2[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_5
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_3[6] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_6,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_7,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_8,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_10,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_16,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_18
};

static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_command_0[4] = {
  {
    UINT32_C(13),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(6),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_command_0[21] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_15,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_4,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_6,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_5,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_16,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_19,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_18,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_20,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_2,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_13,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_1,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_10,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_9,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_7,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_8,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_17,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_3,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_12,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_11,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_14,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_0
};

static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_command_0[21] = {
  (MR_Integer) 20,
  (MR_Integer) 10,
  (MR_Integer) 8,
  (MR_Integer) 16,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 12,
  (MR_Integer) 11,
  (MR_Integer) 18,
  (MR_Integer) 17,
  (MR_Integer) 9,
  (MR_Integer) 19,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 15,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 7
};

const MR_TypeCtorInfo_Struct mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_command_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_user____Unify____user_command_0_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_command_0_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_command",
  {     mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_command_0 },
  {     mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_command_0 },
  (MR_Integer) 21,
  UINT16_C(4),
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_command_0
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_0[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_0 = {
  (MR_String) "plain_question",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_1[2] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0)
};

static const MR_DuArgLocn mdb__declarative_user__mdb__declarative_user__field_locns_user_question_1_1[2] = {
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

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_1 = {
  (MR_String) "question_with_default",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_1,
  NULL,
  mdb__declarative_user__mdb__declarative_user__field_locns_user_question_1_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_0[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_0
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_1[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_1
};

static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_question_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_question_1[2] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_0,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_1
};

static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_question_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_question_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_user____Unify____user_question_1_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_question_1_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_question",
  {     mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_question_1 },
  {     mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_question_1 },
  (MR_Integer) 2,
  UINT16_C(4),
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_question_1
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_answer_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_0[2] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mdb__declarative_user__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_0 = {
  (MR_String) "user_response_answer",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_1[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_1 = {
  (MR_String) "user_response_trust_predicate",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_2[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_2 = {
  (MR_String) "user_response_trust_module",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_3 = {
  (MR_String) "user_response_show_info",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_4[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0)
};

static const MR_DuArgLocn mdb__declarative_user__mdb__declarative_user__field_locns_user_response_1_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_4 = {
  (MR_String) "user_response_change_search",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(4),
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_4,
  NULL,
  mdb__declarative_user__mdb__declarative_user__field_locns_user_response_1_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_5 = {
  (MR_String) "user_response_undo",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_6[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_6 = {
  (MR_String) "user_response_exit_diagnosis",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_7 = {
  (MR_String) "user_response_abort_diagnosis",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_0[2] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_5,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_7
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_1[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_0
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_2[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_1
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_3[4] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_2,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_3,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_4,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_6
};

static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_response_1[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_2,
    INT8_C(-1)
  },
  {
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_response_1[8] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_7,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_0,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_4,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_6,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_3,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_2,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_1,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_5
};

static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_response_1[8] = {
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_response_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_user____Unify____user_response_1_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_response_1_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_response",
  {     mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_response_1 },
  {     mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_response_1 },
  (MR_Integer) 8,
  UINT16_C(4),
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_response_1
};

static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_0 = {
  (MR_String) "user_top_down",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_1 = {
  (MR_String) "user_divide_and_query",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_2 = {
  (MR_String) "user_suspicion_divide_and_query",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_3 = {
  (MR_String) "user_binary",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr mdb__declarative_user__mdb__declarative_user__enum_value_ordered_user_search_mode_0[4] = {
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_0,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_1,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_2,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_3
};

static const MR_EnumFunctorDescPtr mdb__declarative_user__mdb__declarative_user__enum_name_ordered_user_search_mode_0[4] = {
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_3,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_1,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_2,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_0
};

static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_search_mode_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_user____Unify____user_search_mode_0_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_search_mode_0_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_search_mode",
  {     mdb__declarative_user__mdb__declarative_user__enum_name_ordered_user_search_mode_0 },
  {     mdb__declarative_user__mdb__declarative_user__enum_value_ordered_user_search_mode_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_search_mode_0
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__list__ti_list_1mdb__help__type_ctor_info_entry_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mdb__help__mdb__help__type_ctor_info_entry_0)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_state_0_0[6] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_input_stream_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_user__list__ti_list_1mdb__help__type_ctor_info_entry_0)
};

static const MR_ConstString mdb__declarative_user__mdb__declarative_user__field_names_user_state_0_0[6] = {
  (MR_String) "instr",
  (MR_String) "outstr",
  (MR_String) "browser",
  (MR_String) "display_question",
  (MR_String) "testing",
  (MR_String) "help_system"
};

static const MR_DuArgLocn mdb__declarative_user__mdb__declarative_user__field_locns_user_state_0_0[6] = {
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
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_state_0_0 = {
  (MR_String) "user_state",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_user__mdb__declarative_user__field_types_user_state_0_0,
  mdb__declarative_user__mdb__declarative_user__field_names_user_state_0_0,
  mdb__declarative_user__mdb__declarative_user__field_locns_user_state_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_state_0_0[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_state_0_0
};

static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_state_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_state_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_state_0[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_state_0_0
};

static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_state_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_state_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_user____Unify____user_state_0_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_state_0_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_state",
  {     mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_state_0 },
  {     mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_state_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_state_0
};

static MR_bool MR_CALL 
mdb__declarative_user__IntroducedFrom__pred__browse_xml_atom__717__1_2_p_0(
  MR_Word PredOrFunc_15,
  MR_Word HeadVar__2_22)
{
  {
    MR_bool succeeded = (PredOrFunc_15 == HeadVar__2_22);

    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__IntroducedFrom__pred__browse_atom__698__1_2_p_0(
  MR_Word PredOrFunc_20,
  MR_Word HeadVar__2_31)
{
  {
    MR_bool succeeded = (PredOrFunc_20 == HeadVar__2_31);

    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_user____Compare____user_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;

      mercury__io____Compare____input_stream_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__io____Compare____output_stream_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mdb__browser_info____Compare____browser_persistent_state_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;
            MR_Integer Var_29 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_30 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_29 < Var_30);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_29 > Var_30);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;
              MR_Integer Var_31 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_32 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_31 < Var_32);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_31 > Var_32);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&mdb__help__mdb__help__type_ctor_info_system_0), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_user____Unify____user_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_20_20;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = mercury__io____Unify____input_stream_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = mercury__io____Unify____output_stream_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = mdb__browser_info____Unify____browser_persistent_state_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                TypeCtorInfo_20_20 = (MR_Word) (&mdb__help__mdb__help__type_ctor_info_system_0);
                succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_20_20, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_user____Compare____user_search_mode_0_0(
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
mdb__declarative_user____Unify____user_search_mode_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_user____Compare____user_response_1_0(
  MR_Word TypeInfo_for_T_119,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_117 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_118 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_117 == CastY_118);
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_6;

                  mdb__declarative_debugger____Compare____decl_question_1_0(TypeInfo_for_T_119, &SubResult1_6, Var_131, ArgY1_5);
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                    mdb__declarative_debugger____Compare____decl_answer_1_0(TypeInfo_for_T_119, HeadVar__1_1, Var_130, ArgY2_8);
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
            MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mdb__declarative_debugger____Compare____decl_question_1_0(TypeInfo_for_T_119, HeadVar__1_1, Var_136, ArgY1_32);
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
                MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                          MR_Word ArgY1_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mdb__declarative_debugger____Compare____decl_question_1_0(TypeInfo_for_T_119, HeadVar__1_1, Var_135, ArgY1_49);
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
                MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__io____Compare____output_stream_0_0(HeadVar__1_1, Var_134, ArgY1_66);
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
                MR_Word Var_132 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);

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
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ArgY1_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                          MR_Integer Var_137 = (MR_Integer) (Var_132);
                          MR_Integer Var_138 = (MR_Integer) (ArgY1_83);

                          succeeded = (Var_137 < Var_138);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_137 > Var_138);
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
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Box Var_133 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

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
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Box ArgY1_108 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));

                          mercury__builtin__compare_3_p_0(TypeInfo_for_T_119, HeadVar__1_1, Var_133, ArgY1_108);
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
mdb__declarative_user____Unify____user_response_1_0(
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
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_16 == CastX_15);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_20 == CastX_19);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(TypeInfo_for_T_23, ArgX1_3, ArgY1_4);
              if (succeeded)
                succeeded = mdb__declarative_debugger____Unify____decl_answer_1_0(TypeInfo_for_T_23, ArgX2_5, ArgY2_6);
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
              succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(TypeInfo_for_T_23, ArgX1_7, ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(TypeInfo_for_T_23, ArgX1_9, ArgY1_10);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = mercury__io____Unify____output_stream_0_0(ArgX1_11, ArgY1_12);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_Word ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  succeeded = (ArgX1_13 == ArgY1_14);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Box ArgX1_17 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_18 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_23, ArgX1_17, ArgY1_18);
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
mdb__declarative_user____Compare____user_question_1_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mdb__declarative_debugger____Compare____decl_question_1_0(TypeInfo_for_T_19, HeadVar__1_1, Var_25, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
        MR_Word SubResult1_14;

        mdb__declarative_debugger____Compare____decl_question_1_0(TypeInfo_for_T_19, &SubResult1_14, Var_27, ArgY1_13);
        succeeded = (SubResult1_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_14;
        else
        {
          MR_Integer Var_28 = (MR_Integer) (Var_26);
          MR_Integer Var_29 = (MR_Integer) (ArgY2_16);

          succeeded = (Var_28 < Var_29);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_28 > Var_29);
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

MR_bool MR_CALL 
mdb__declarative_user____Unify____user_question_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
      }
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
        succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(TypeInfo_for_T_11, ArgX1_5, ArgY1_6);
        if (succeeded)
          succeeded = (ArgX2_7 == ArgY2_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user____Compare____user_command_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_29 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_30 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_29 == CastY_30);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer Var_4;
      MR_Integer Var_5;

      mdb__declarative_user____Index____user_command_0_0(HeadVar__2_2, &Var_4);
      mdb__declarative_user____Index____user_command_0_0(HeadVar__3_3, &Var_5);
      succeeded = (Var_4 < Var_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_4 > Var_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Word Var_6;

          switch (MR_tag((MR_Word) HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__2_2)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 11:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 12:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_31_31;
                MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
                MR_Word ArgY1_8;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  TypeInfo_31_31 = (MR_Word) (&mdb__declarative_user_scalar_common_1[0]);
                  mercury__builtin__compare_3_p_0(TypeInfo_31_31, &Var_6, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeInfo_32_32;
                MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
                MR_Word ArgY1_10;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  TypeInfo_32_32 = (MR_Word) (&mdb__declarative_user_scalar_common_1[0]);
                  mercury__builtin__compare_3_p_0(TypeInfo_32_32, &Var_6, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_12;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgY1_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      succeeded = (ArgX1_11 < ArgY1_12);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_11 > ArgY1_12);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer ArgX1_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_14;
                    MR_Integer ArgX2_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Integer ArgY2_17;
                    MR_Word SubResult1_15;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      ArgY1_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      succeeded = (ArgX1_13 < ArgY1_14);
                      if (succeeded)
                      {
                        SubResult1_15 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX1_13 > ArgY1_14);
                        if (succeeded)
                        {
                          SubResult1_15 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult1_15 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult1_15;
                      else
                      {
                        succeeded = (ArgX2_16 < ArgY2_17);
                        if (succeeded)
                          Var_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX2_16 > ArgY2_17);
                          if (succeeded)
                            Var_6 = (MR_Integer) 2;
                          else
                            Var_6 = (MR_Integer) 0;
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Integer ArgX1_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_19;
                    MR_Integer ArgX2_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Integer ArgY2_22;
                    MR_Word SubResult1_20;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      ArgY1_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      succeeded = (ArgX1_18 < ArgY1_19);
                      if (succeeded)
                      {
                        SubResult1_20 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX1_18 > ArgY1_19);
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
                        Var_6 = SubResult1_20;
                      else
                      {
                        succeeded = (ArgX2_21 < ArgY2_22);
                        if (succeeded)
                          Var_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX2_21 > ArgY2_22);
                          if (succeeded)
                            Var_6 = (MR_Integer) 2;
                          else
                            Var_6 = (MR_Integer) 0;
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_24;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      ArgY1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mdb__browser_info____Compare____param_cmd_0_0(&Var_6, ArgX1_23, ArgY1_24);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word ArgX1_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                    MR_Word ArgY1_26;
                    MR_Integer Var_41;
                    MR_Integer Var_42;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (succeeded)
                    {
                      ArgY1_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                      Var_41 = (MR_Integer) (ArgX1_25);
                      Var_42 = (MR_Integer) (ArgY1_26);
                      succeeded = (Var_41 < Var_42);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_41 > Var_42);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word TypeInfo_40_40;
                    MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_28;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (succeeded)
                    {
                      ArgY1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      TypeInfo_40_40 = (MR_Word) (&mdb__declarative_user_scalar_common_1[1]);
                      mercury__builtin__compare_3_p_0(TypeInfo_40_40, &Var_6, ((MR_Box) (ArgX1_27)), ((MR_Box) (ArgY1_28)));
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
          if (succeeded)
            *HeadVar__1_1 = Var_6;
          else
            {
              mercury__private_builtin__compare_error_0_p_0();
              return;
            }
        }
      }
    }
  }
}

static void MR_CALL 
mdb__declarative_user____Index____user_command_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 2;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 20;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 4;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 5;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 18;
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_command_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_49 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_50 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_49 == CastY_50);
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
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_10 == CastX_9);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_26 == CastX_25);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_30 == CastX_29);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer CastX_31 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_32 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_32 == CastX_31);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_34 == CastX_33);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_36 == CastX_35);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Integer CastX_37 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_38 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_38 == CastX_37);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer CastX_41 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_42 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_42 == CastX_41);
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Integer CastX_45 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_46 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_46 == CastX_45);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Integer CastX_47 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_48 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_48 == CastX_47);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_51_51;
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_51_51 = (MR_Word) (&mdb__declarative_user_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_51_51, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_52_52;
            MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_52_52 = (MR_Word) (&mdb__declarative_user_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_52_52, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ArgX1_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_15 == ArgY1_16);
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
            case (MR_Integer) 2:
              {
                MR_Integer ArgX1_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_22;
                MR_Integer ArgX2_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_24;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (ArgX1_21 == ArgY1_22);
                  if (succeeded)
                    succeeded = (ArgX2_23 == ArgY2_24);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_28;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = mdb__browser_info____Unify____param_cmd_0_0(ArgX1_27, ArgY1_28);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ArgX1_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_Word ArgY1_40;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  succeeded = (ArgX1_39 == ArgY1_40);
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word TypeInfo_53_53;
                MR_Word ArgX1_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_44;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  ArgY1_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_53_53 = (MR_Word) (&mdb__declarative_user_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_53_53, ((MR_Box) (ArgX1_43)), ((MR_Box) (ArgY1_44)));
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user__trace_atom_arg_to_univ_2_p_0(
  MR_Word TraceAtomArg_3,
  MR_Word * Univ_4)
{
  {
    MR_Word MaybeUniv_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceAtomArg_3, (MR_Integer) 2))));

    if ((MaybeUniv_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *Univ_4 = mercury__univ__univ_1_f_1((MR_Word) (&mdb__browse__mdb__browse__type_ctor_info_unbound_0), ((MR_Box) ((MR_Integer) 0)));
    else
    {
      MR_Word Rep_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUniv_5, (MR_Integer) 0))));

      mdb__term_rep__rep_to_univ_2_p_0(Rep_6, Univ_4);
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__is_dash_1_p_0(
  MR_Char HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == (MR_Char) 45);

    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__help_cmd_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[21]));
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String Cmd_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_6;

      succeeded = (Var_5 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        {
          Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (Cmd_4));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_6));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__search_mode_cmd_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_36;
    MR_String Var_37;
    MR_Integer slot_0;
    MR_String str_1;

    if (succeeded)
    {
      Var_37 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        // hashed string simple lookup switch
        ;
        // compute the hash value of the input string
        ;
        slot_0 = ((MR_hash_string6(Var_37)) & (MR_Integer) 63);
        // no collisions; no hash chain loop
        ;
        // lookup the string for this hash slot
        ;
        str_1 = ((&mdb__declarative_user_vector_common_11[0 + slot_0]))->mdb__declarative_user__vector_common_type_11_0__vct_11_f_0;
        // did we find a match?
        ;
        if ((((str_1 != NULL)) && ((strcmp(str_1, Var_37) == 0))))
        {
          // we found a match; look up the results
          ;
          *HeadVar__2_2 = ((&mdb__declarative_user_vector_common_11[0 + slot_0]))->mdb__declarative_user__vector_common_type_11_0__vct_11_f_1;
          succeeded = MR_TRUE;
          // jump out of search loop
          ;
          goto label_0;
        }
        succeeded = MR_FALSE;
      label_0:;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__trust_arg_cmd_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 20U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String Var_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = (strcmp(Var_3, (MR_String) "module") == 0);
      if (succeeded)
      {
        succeeded = (Var_4 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 24U);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__num_io_actions_cmd_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_String Arg_3;
    MR_Integer N_4;
    MR_Word Var_5;
    MR_Word Var_6;

    if (succeeded)
    {
      Arg_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = (Var_5 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = mercury__string__to_int_2_p_0(Arg_3, &N_4);
        if (succeeded)
        {
          {
            Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) (N_4));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_6));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__format_param_arg_cmd_3_p_0(
  MR_String Cmd_4,
  MR_Word ArgWords0_5,
  MR_Word * Command_6)
{
  {
    MR_bool succeeded = (ArgWords0_5 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Setting_15;
    MR_Word MaybeOptionTable_17;
    MR_Word Var_29;
    MR_Word ArgWords1_7;
    MR_String Var_18;

    if (succeeded)
    {
      Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), ArgWords0_5, (MR_Integer) 0))));
      ArgWords1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgWords0_5, (MR_Integer) 1))));
      succeeded = (strcmp(Var_18, (MR_String) "io") == 0);
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_30_30;
      MR_Word TypeCtorInfo_31_31;
      MR_Word ParsedCommand_12;
      MR_Word FormatCmd_13;
      MR_Word MaybeOptionTable0_14;
      MR_Word Var_19;
      MR_Word STATE_VARIABLE_OptionTable_20_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word STATE_VARIABLE_OptionTable_23_23;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_OptionTable_27_27;

      succeeded = (ArgWords1_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        {
          Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Cmd_4));
          MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (ArgWords1_7));
        }
        succeeded = mdb__parse__parse_2_p_0(Var_19, &ParsedCommand_12);
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) ParsedCommand_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ParsedCommand_12, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            FormatCmd_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ParsedCommand_12, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) FormatCmd_13)) == (MR_Integer) 2);
            if (succeeded)
            {
              MaybeOptionTable0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FormatCmd_13, (MR_Integer) 0))));
              Setting_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FormatCmd_13, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) MaybeOptionTable0_14)) == (MR_Integer) 0);
              if (succeeded)
              {
                STATE_VARIABLE_OptionTable_20_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeOptionTable0_14, (MR_Integer) 0))));
                Var_21 = (MR_Integer) 0;
                TypeCtorInfo_30_30 = (MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0);
                TypeCtorInfo_31_31 = (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0);
                Var_22 = (MR_Word) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_10[1]));
                mercury__map__det_update_4_p_0(TypeCtorInfo_30_30, TypeCtorInfo_31_31, ((MR_Box) (Var_21)), ((MR_Box) (Var_22)), STATE_VARIABLE_OptionTable_20_20, &STATE_VARIABLE_OptionTable_23_23);
                Var_25 = (MR_Integer) 2;
                Var_26 = (MR_Word) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_10[2]));
                mercury__map__det_update_4_p_0(TypeCtorInfo_30_30, TypeCtorInfo_31_31, ((MR_Box) (Var_25)), ((MR_Box) (Var_26)), STATE_VARIABLE_OptionTable_23_23, &STATE_VARIABLE_OptionTable_27_27);
                {
                  MaybeOptionTable_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MaybeOptionTable_17, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_27_27));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
    else
    {
      MR_Word ParsedCommand_39;
      MR_Word FormatCmd_40;
      MR_Word Var_42;

      succeeded = (ArgWords0_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Cmd_4));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (ArgWords0_5));
        }
        succeeded = mdb__parse__parse_2_p_0(Var_42, &ParsedCommand_39);
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) ParsedCommand_39)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ParsedCommand_39, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            FormatCmd_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ParsedCommand_39, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) FormatCmd_40)) == (MR_Integer) 2);
            if (succeeded)
            {
              MaybeOptionTable_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FormatCmd_40, (MR_Integer) 0))));
              Setting_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FormatCmd_40, (MR_Integer) 1))));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_29, 0) = ((MR_Box) (MaybeOptionTable_17));
        MR_hl_field(MR_mktag(2), Var_29, 1) = ((MR_Box) (Setting_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Command_6 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_29));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__format_arg_cmd_2_p_0(
  MR_Word ArgWords_3,
  MR_Word * UserCommand_4)
{
  {
    MR_bool succeeded = (ArgWords_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Command_7;
    MR_Word FormatCmd_8;
    MR_Word Var_11;
    MR_String Var_12;

    if (succeeded)
    {
      Var_12 = (MR_String) "format";
      {
        Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (ArgWords_3));
      }
      succeeded = mdb__parse__parse_2_p_0(Var_11, &Command_7);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Command_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Command_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          FormatCmd_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Command_7, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) FormatCmd_8)) == (MR_Integer) 1);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *UserCommand_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (FormatCmd_8));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdb__declarative_user__is_dash_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdb__declarative_user__is_dash_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 36U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Var_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((Var_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer From_4;
        MR_Integer To_5;
        MR_Integer Num_18;

        succeeded = mercury__string__to_int_2_p_0(Var_14, &Num_18);
        if (succeeded)
        {
          From_4 = Num_18;
          To_5 = Num_18;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TypeInfo_18_29;
          MR_String FirstStr_19;
          MR_String SecondStr_20;
          MR_Integer First_21;
          MR_Integer Second_22;
          MR_Word Var_23;
          MR_Word Var_24;
          MR_Word Var_28;

          Var_23 = mercury__string__words_separator_2_f_0((MR_Word) (&mdb__declarative_user_scalar_common_5[16]), Var_14);
          succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FirstStr_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0))));
            Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1))));
            succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SecondStr_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0))));
              Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));
              TypeInfo_18_29 = (MR_Word) (&mdb__declarative_user_scalar_common_1[11]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_29, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_28)));
              if (succeeded)
              {
                succeeded = mercury__string__to_int_2_p_0(FirstStr_19, &First_21);
                if (succeeded)
                {
                  succeeded = mercury__string__to_int_2_p_0(SecondStr_20, &Second_22);
                  if (succeeded)
                  {
                    succeeded = (First_21 <= Second_22);
                    if (succeeded)
                    {
                      From_4 = First_21;
                      To_5 = Second_22;
                    }
                    else
                    {
                      From_4 = Second_22;
                      To_5 = First_21;
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (From_4));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (To_5));
          }
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_String Arg_7;
        MR_Integer From_8;
        MR_Integer To_9;
        MR_Word Var_12;
        MR_Integer Num_33;

        succeeded = (strcmp(Var_14, (MR_String) "io") == 0);
        if (succeeded)
        {
          Arg_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0))));
          Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 1))));
          succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = mercury__string__to_int_2_p_0(Arg_7, &Num_33);
            if (succeeded)
            {
              From_8 = Num_33;
              To_9 = Num_33;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word TypeInfo_18_44;
              MR_String FirstStr_34;
              MR_String SecondStr_35;
              MR_Integer First_36;
              MR_Integer Second_37;
              MR_Word Var_38;
              MR_Word Var_39;
              MR_Word Var_43;

              Var_38 = mercury__string__words_separator_2_f_0((MR_Word) (&mdb__declarative_user_scalar_common_5[17]), Arg_7);
              succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FirstStr_34 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0))));
                Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 1))));
                succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SecondStr_35 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0))));
                  Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1))));
                  TypeInfo_18_44 = (MR_Word) (&mdb__declarative_user_scalar_common_1[11]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_44, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_43)));
                  if (succeeded)
                  {
                    succeeded = mercury__string__to_int_2_p_0(FirstStr_34, &First_36);
                    if (succeeded)
                    {
                      succeeded = mercury__string__to_int_2_p_0(SecondStr_35, &Second_37);
                      if (succeeded)
                      {
                        succeeded = (First_36 <= Second_37);
                        if (succeeded)
                        {
                          From_8 = First_36;
                          To_9 = Second_37;
                        }
                        else
                        {
                          From_8 = Second_37;
                          To_9 = First_36;
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (From_8));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (To_9));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__browse_arg_cmd_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_10[0]));
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((Var_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer ArgNum_6;

        succeeded = mercury__string__to_int_2_p_0(Var_28, &ArgNum_6);
        if (succeeded)
        {
          MR_Word Var_8;

          {
            Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (ArgNum_6));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_8));
          }
          succeeded = MR_TRUE;
        }
        else
        {
          if ((strcmp(Var_28, (MR_String) "-x") == 0))
            succeeded = MR_TRUE;
          else
          if ((strcmp(Var_28, (MR_String) "--xml") == 0))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
          if (succeeded)
          {
            *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(2), &mdb__declarative_user_scalar_common_10[0]));
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
        MR_String Var_30 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));

        succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          if ((strcmp(Var_28, (MR_String) "-x") == 0))
          {
            MR_Integer ArgNum_11;
            MR_Word Var_15;

            succeeded = mercury__string__to_int_2_p_0(Var_30, &ArgNum_11);
            if (succeeded)
            {
              {
                Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (ArgNum_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_15));
              }
              succeeded = MR_TRUE;
            }
          }
          else
          if ((strcmp(Var_28, (MR_String) "io") == 0))
          {
            MR_Integer ArgNum_23;

            succeeded = mercury__string__to_int_2_p_0(Var_30, &ArgNum_23);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ArgNum_23));
              }
              succeeded = MR_TRUE;
            }
          }
          else
          if ((strcmp(Var_28, (MR_String) "--xml") == 0))
          {
            MR_Integer ArgNum_17;
            MR_Word Var_21;

            succeeded = mercury__string__to_int_2_p_0(Var_30, &ArgNum_17);
            if (succeeded)
            {
              {
                Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (ArgNum_17));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_21));
              }
              succeeded = MR_TRUE;
            }
          }
          else
            succeeded = MR_FALSE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__one_word_cmd_3_p_0(
  MR_Word Cmd_4,
  MR_Word HeadVar__2_2,
  MR_Word * Cmd_3)
{
  {
    MR_bool succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      *Cmd_3 = Cmd_4;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
mdb__declarative_user__get_subterm_mode_from_atoms_for_arg_4_f_0(
  MR_Integer ArgNum_6,
  MR_Word InitAtom_7,
  MR_Word FinalAtom_8,
  MR_Word Dirs_9)
{
  {
    MR_bool succeeded;
    MR_Word Mode_10;
    MR_Word TermPath_11;
    MR_Word ArgPos_12;
    MR_Word Which_15;

    mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(FinalAtom_8, Dirs_9, &TermPath_11);
    Which_15 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    switch (Which_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ArgPos_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ArgPos_12, 0) = ((MR_Box) (ArgNum_6));
        }
        break;
      case (MR_Integer) 1:
        {
          ArgPos_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgPos_12, 0) = ((MR_Box) (ArgNum_6));
        }
        break;
    }
    succeeded = mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(InitAtom_7, ArgPos_12, TermPath_11);
    if (succeeded)
      Mode_10 = (MR_Integer) 0;
    else
    {
      succeeded = mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(FinalAtom_8, ArgPos_12, TermPath_11);
      if (succeeded)
        Mode_10 = (MR_Integer) 1;
      else
        Mode_10 = (MR_Integer) 2;
    }
    return Mode_10;
  }
}

static MR_Word MR_CALL 
mdb__declarative_user__get_subterm_mode_from_atoms_3_f_0(
  MR_Word InitAtom_5,
  MR_Word FinalAtom_6,
  MR_Word Dirs_7)
{
  {
    MR_bool succeeded;
    MR_Word Mode_8;
    MR_Word Path_9;

    mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(FinalAtom_6, Dirs_7, &Path_9);
    if ((Path_9 == (MR_Word) ((MR_Unsigned) 0U)))
      Mode_8 = (MR_Integer) 3;
    else
    {
      MR_Integer ArgNum_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Path_9, (MR_Integer) 0))));
      MR_Word TermPath_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Path_9, (MR_Integer) 1))));
      MR_Word ArgPos_12;
      MR_Word Which_15;

      Which_15 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
      switch (Which_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ArgPos_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgPos_12, 0) = ((MR_Box) (ArgNum_10));
          }
          break;
        case (MR_Integer) 1:
          {
            ArgPos_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ArgPos_12, 0) = ((MR_Box) (ArgNum_10));
          }
          break;
      }
      succeeded = mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(InitAtom_5, ArgPos_12, TermPath_11);
      if (succeeded)
        Mode_8 = (MR_Integer) 0;
      else
      {
        succeeded = mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(FinalAtom_6, ArgPos_12, TermPath_11);
        if (succeeded)
          Mode_8 = (MR_Integer) 1;
        else
          Mode_8 = (MR_Integer) 2;
      }
    }
    return Mode_8;
  }
}

void MR_CALL 
mdb__declarative_user__set_user_testing_flag_3_p_0(
  MR_Word Testing_4,
  MR_Word User_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_5, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_5, (MR_Integer) 1))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_5, (MR_Integer) 2))));
    MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), User_5, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_5, (MR_Integer) 4))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) (((((MR_Unsigned) (Var_9) << 1)) | (MR_Unsigned) (Testing_4)));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_11));
    }
  }
}

MR_Word MR_CALL 
mdb__declarative_user__get_user_input_stream_1_f_0(
  MR_Word User_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_3, (MR_Integer) 0))));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mdb__declarative_user__get_user_output_stream_1_f_0(
  MR_Word User_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_3, (MR_Integer) 1))));

    return HeadVar__2_2;
  }
}

void MR_CALL 
mdb__declarative_user__set_browser_state_3_p_0(
  MR_Word Browser_4,
  MR_Word STATE_VARIABLE_User_0_6,
  MR_Word * STATE_VARIABLE_User_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_6, (MR_Integer) 1))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_6, (MR_Integer) 4))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_6, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_User_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Browser_4));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
    }
  }
}

MR_Word MR_CALL 
mdb__declarative_user__get_browser_state_1_f_0(
  MR_Word User_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_3, (MR_Integer) 2))));

    return HeadVar__2_2;
  }
}

void MR_CALL 
mdb__declarative_user__user_confirm_bug_6_p_0(
  MR_Word Bug_7,
  MR_Word * Response_8,
  MR_Word STATE_VARIABLE_User_0_23,
  MR_Word * STATE_VARIABLE_User_24)
{
  while (MR_TRUE)
  {
    MR_Word Var_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_23, (MR_Integer) 3))) & (MR_Integer) 1);

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (Var_59) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Command_11;
          MR_Word STATE_VARIABLE_User_30_30;

          mdb__declarative_user__write_decl_bug_4_p_0(Bug_7, STATE_VARIABLE_User_0_23);
          mdb__declarative_user__get_command_6_p_0((MR_String) "Is this a bug\? ", &Command_11, STATE_VARIABLE_User_0_23, &STATE_VARIABLE_User_30_30);
          switch (MR_tag((MR_Word) Command_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Command_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *Response_8 = (MR_Integer) 0;
                    *STATE_VARIABLE_User_24 = STATE_VARIABLE_User_30_30;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *Response_8 = (MR_Integer) 1;
                    *STATE_VARIABLE_User_24 = STATE_VARIABLE_User_30_30;
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                case (MR_Integer) 4:
                case (MR_Integer) 5:
                case (MR_Integer) 6:
                case (MR_Integer) 7:
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                case (MR_Integer) 11:
                case (MR_Integer) 12:
                  {
                    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_30_30, (MR_Integer) 1))));
                    MR_Word next_value_of_STATE_VARIABLE_User_0_23;

                    mercury__io__write_strings_4_p_0(Var_68, (MR_Word) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[10])));
                    // direct tailcall eliminated
                    ;
                    next_value_of_STATE_VARIABLE_User_0_23 = STATE_VARIABLE_User_30_30;
                    STATE_VARIABLE_User_0_23 = next_value_of_STATE_VARIABLE_User_0_23;
                    continue;
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    *Response_8 = (MR_Integer) 2;
                    *STATE_VARIABLE_User_24 = STATE_VARIABLE_User_30_30;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeArgNum_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Command_11, (MR_Integer) 0))));
                MR_Word STATE_VARIABLE_User_42_42;
                MR_Word next_value_of_STATE_VARIABLE_User_0_23;

                mdb__declarative_user__browse_decl_bug_6_p_0(Bug_7, MaybeArgNum_12, STATE_VARIABLE_User_30_30, &STATE_VARIABLE_User_42_42);
                // direct tailcall eliminated
                ;
                next_value_of_STATE_VARIABLE_User_0_23 = STATE_VARIABLE_User_42_42;
                STATE_VARIABLE_User_0_23 = next_value_of_STATE_VARIABLE_User_0_23;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word MaybeArgNum_47 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Command_11, (MR_Integer) 0))));
                MR_Word next_value_of_STATE_VARIABLE_User_0_23;

                mdb__declarative_user__browse_xml_decl_bug_5_p_0(Bug_7, MaybeArgNum_47, STATE_VARIABLE_User_30_30);
                // direct tailcall eliminated
                ;
                next_value_of_STATE_VARIABLE_User_0_23 = STATE_VARIABLE_User_30_30;
                STATE_VARIABLE_User_0_23 = next_value_of_STATE_VARIABLE_User_0_23;
                continue;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Command_11, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer ActionNum_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Command_11, (MR_Integer) 1))));
                    MR_Word MaybeIoActions_14;
                    MR_Word STATE_VARIABLE_User_35_35;
                    MR_Word _MaybeTrack_15;
                    MR_Word next_value_of_STATE_VARIABLE_User_0_23;

                    mdb__declarative_user__decl_bug_io_actions_2_p_0(Bug_7, &MaybeIoActions_14);
                    mdb__declarative_user__browse_chosen_io_action_7_p_0(MaybeIoActions_14, ActionNum_13, &_MaybeTrack_15, STATE_VARIABLE_User_30_30, &STATE_VARIABLE_User_35_35);
                    // direct tailcall eliminated
                    ;
                    next_value_of_STATE_VARIABLE_User_0_23 = STATE_VARIABLE_User_35_35;
                    STATE_VARIABLE_User_0_23 = next_value_of_STATE_VARIABLE_User_0_23;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                case (MR_Integer) 4:
                case (MR_Integer) 5:
                  {
                    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_30_30, (MR_Integer) 1))));
                    MR_Word next_value_of_STATE_VARIABLE_User_0_23;

                    mercury__io__write_strings_4_p_0(Var_68, (MR_Word) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[10])));
                    // direct tailcall eliminated
                    ;
                    next_value_of_STATE_VARIABLE_User_0_23 = STATE_VARIABLE_User_30_30;
                    STATE_VARIABLE_User_0_23 = next_value_of_STATE_VARIABLE_User_0_23;
                    continue;
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *Response_8 = (MR_Integer) 0;
          *STATE_VARIABLE_User_24 = STATE_VARIABLE_User_0_23;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_user__write_decl_bug_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mdb__declarative_user__write_decl_final_atom_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
mdb__declarative_user__write_decl_bug_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word User_2)
{
  {
    MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_2, (MR_Integer) 1))));

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word EBug_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) EBug_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Atom_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EBug_5, (MR_Integer) 1))));
            MR_Word Contour_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EBug_5, (MR_Integer) 2))));
            MR_Word Var_40;
            MR_Word Var_43;
            MR_Word Var_45;

            mercury__io__write_string_4_p_0(Var_114, (MR_String) "Found incorrect contour:\n");
            Var_43 = mdb__declarative_user__decl_caller_type_0_f_0();
            {
              Var_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_9[0]));
              MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (mdb__declarative_user__write_decl_bug_4_p_0_1));
              MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (User_2));
              MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) ((MR_String) ""));
              MR_hl_field(MR_mktag(0), Var_40, 5) = ((MR_Box) (Var_43));
            }
            mercury__io__write_list_5_p_1((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), Contour_10, (MR_String) "", Var_40);
            Var_45 = mdb__declarative_user__decl_caller_type_0_f_0();
            mdb__declarative_user__write_decl_final_atom_6_p_0(User_2, (MR_String) "", Var_45, Atom_9);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_34;
            MR_Word Atom_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EBug_5, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(Var_114, (MR_String) "Found partially uncovered atom:\n");
            Var_34 = mdb__declarative_user__decl_caller_type_0_f_0();
            mdb__declarative_user__write_decl_init_atom_6_p_0(User_2, (MR_String) "", Var_34, Atom_47);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_103_103;
            MR_Word ExceptionRep_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), EBug_5, (MR_Integer) 1))));
            MR_Word Exception_15;
            MR_Word Var_22;
            MR_Word Var_24;
            MR_Box Var_26;
            MR_Word Var_28;
            MR_Word Atom_48 = ((MR_Word) ((MR_hl_field(MR_mktag(2), EBug_5, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(Var_114, (MR_String) "Found unhandled or incorrect exception:\n");
            Var_22 = mdb__declarative_user__decl_caller_type_0_f_0();
            mdb__declarative_user__write_decl_init_atom_6_p_0(User_2, (MR_String) "", Var_22, Atom_48);
            mdb__term_rep__rep_to_univ_2_p_0(ExceptionRep_13, &Exception_15);
            Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_2, (MR_Integer) 1))));
            Var_26 = mercury__univ__univ_value_1_f_0(&TypeInfo_103_103, Exception_15);
            mercury__io__write_5_p_2(TypeInfo_103_103, Var_24, (MR_Integer) 2, Var_26);
            Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_2, (MR_Integer) 1))));
            mercury__io__nl_3_p_0(Var_28);
          }
          break;
      }
    }
    else
    {
      MR_Word IBug_49 = (MR_Word) ((MR_Word) (HeadVar__1_1));
      MR_Word Parent_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IBug_49, (MR_Integer) 0))));
      MR_Word Call_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IBug_49, (MR_Integer) 2))));
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_66;
      MR_Word Var_67;

      mercury__io__write_string_4_p_0(Var_114, (MR_String) "Found inadmissible call:\n");
      Var_62 = mdb__declarative_user__decl_caller_type_0_f_0();
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Parent_52));
      }
      mdb__declarative_user__write_decl_atom_6_p_0(User_2, (MR_String) "Parent ", Var_62, Var_63);
      Var_66 = mdb__declarative_user__decl_caller_type_0_f_0();
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Call_54));
      }
      mdb__declarative_user__write_decl_atom_6_p_0(User_2, (MR_String) "Call ", Var_66, Var_67);
    }
  }
}

static void MR_CALL 
mdb__declarative_user__write_decl_init_atom_6_p_0(
  MR_Word User_7,
  MR_String Indent_8,
  MR_Word CallerType_9,
  MR_Word InitAtom_10)
{
  {
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (InitAtom_10));
    }
    mdb__declarative_user__write_decl_atom_6_p_0(User_7, Indent_8, CallerType_9, Var_14);
  }
}

static MR_Word MR_CALL 
mdb__declarative_user__decl_caller_type_0_f_0(void)
{
  return (MR_Integer) 0;
}

static MR_bool MR_CALL 
mdb__declarative_user__browse_xml_decl_bug_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdb__declarative_user__IntroducedFrom__pred__browse_xml_atom__717__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user__browse_xml_decl_bug_5_p_0(
  MR_Word Bug_6,
  MR_Word MaybeArgNum_7,
  MR_Word User_8)
{
  {
    MR_bool succeeded;
    MR_Word FinalAtom_11;

    if (((MR_tag((MR_Word) Bug_6)) == (MR_Integer) 1))
    {
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Bug_6, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) Var_35)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FinalDeclAtom_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1))));

            FinalAtom_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinalDeclAtom_18, (MR_Integer) 0))));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InitDeclAtom_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0))));

            FinalAtom_11 = (MR_Word) (InitDeclAtom_22);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word InitDeclAtom_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_35, (MR_Integer) 0))));

            FinalAtom_11 = (MR_Word) (InitDeclAtom_25);
          }
          break;
      }
    }
    else
    {
      MR_Word InitDeclAtom_31;
      MR_Word Var_33 = (MR_Word) ((MR_Word) (Bug_6));

      InitDeclAtom_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 2))));
      FinalAtom_11 = (MR_Word) (InitDeclAtom_31);
    }
    if ((MaybeArgNum_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box ProcLayout_41 = ((MR_Box) ((MR_hl_field(MR_mktag(0), FinalAtom_11, (MR_Integer) 0))));
      MR_Word Args_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinalAtom_11, (MR_Integer) 1))));
      MR_Word ProcLabel_43;
      MR_Word ArgValues_44;
      MR_Word Module_45;
      MR_String Name_46;
      MR_Word PredOrFunc_48;
      MR_Word IsFunction_49;
      MR_String ModuleStr_50;
      MR_Word BrowserTerm_51;
      MR_Word Var_52;
      MR_String Var_54;
      MR_String Var_55;
      MR_Word Var_57;
      MR_Word Var_62;
      MR_Integer Var_47;

      ProcLabel_43 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(ProcLayout_41);
      mdb__declarative_user__get_user_arg_values_2_p_0(Args_42, &ArgValues_44);
      mdb__declarative_execution__get_pred_attributes_5_p_0(ProcLabel_43, &Module_45, &Name_46, &Var_47, &PredOrFunc_48);
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (mdb__declarative_user__browse_xml_decl_bug_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (PredOrFunc_48));
        MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      IsFunction_49 = mercury__bool__pred_to_bool_1_f_0(Var_52);
      ModuleStr_50 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Module_45);
      Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ".", Name_46);
      Var_54 = mercury__string__f_43_43_2_f_0(ModuleStr_50, Var_55);
      BrowserTerm_51 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(Var_54, ArgValues_44, IsFunction_49);
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_8, (MR_Integer) 1))));
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_8, (MR_Integer) 2))));
      mdb__browse__save_and_browse_browser_term_xml_6_p_0(BrowserTerm_51, Var_57, Var_57, Var_62);
    }
    else
    {
      MR_Integer ArgNum_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeArgNum_7, (MR_Integer) 0))));

      mdb__declarative_user__browse_xml_atom_argument_5_p_0(FinalAtom_11, ArgNum_12, User_8);
    }
  }
}

static void MR_CALL 
mdb__declarative_user__browse_decl_bug_6_p_0(
  MR_Word Bug_7,
  MR_Word MaybeArgNum_8,
  MR_Word STATE_VARIABLE_User_0_16,
  MR_Word * STATE_VARIABLE_User_17)
{
  {
    MR_Word InitAtom_11;
    MR_Word FinalAtom_12;

    if (((MR_tag((MR_Word) Bug_7)) == (MR_Integer) 1))
    {
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Bug_7, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) Var_42)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InitDeclAtom_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0))));
            MR_Word FinalDeclAtom_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 1))));

            InitAtom_11 = (MR_Word) (InitDeclAtom_24);
            FinalAtom_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinalDeclAtom_25, (MR_Integer) 0))));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InitDeclAtom_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0))));

            InitAtom_11 = (MR_Word) (InitDeclAtom_29);
            FinalAtom_12 = InitAtom_11;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word InitDeclAtom_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_42, (MR_Integer) 0))));

            InitAtom_11 = (MR_Word) (InitDeclAtom_32);
            FinalAtom_12 = InitAtom_11;
          }
          break;
      }
    }
    else
    {
      MR_Word InitDeclAtom_38;
      MR_Word Var_40 = (MR_Word) ((MR_Word) (Bug_7));

      InitDeclAtom_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 2))));
      InitAtom_11 = (MR_Word) (InitDeclAtom_38);
      FinalAtom_12 = InitAtom_11;
    }
    if ((MaybeArgNum_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_15;

      mdb__declarative_user__browse_atom_7_p_0(InitAtom_11, FinalAtom_12, &Var_15, STATE_VARIABLE_User_0_16, STATE_VARIABLE_User_17);
    }
    else
    {
      MR_Integer ArgNum_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeArgNum_8, (MR_Integer) 0))));
      MR_Word Var_14;

      mdb__declarative_user__browse_atom_argument_8_p_0(InitAtom_11, FinalAtom_12, ArgNum_13, &Var_14, STATE_VARIABLE_User_0_16, STATE_VARIABLE_User_17);
    }
  }
}

static void MR_CALL 
mdb__declarative_user__decl_bug_io_actions_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) Var_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FinalDeclAtom_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1))));

          *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinalDeclAtom_4, (MR_Integer) 1))));
        }
        break;
      case (MR_Integer) 1:
        *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
  else
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
mdb__declarative_user__handle_command_7_p_0(
  MR_Word TypeInfo_for_T_234,
  MR_Word Cmd_8,
  MR_Word UserQuestion_9,
  MR_Word * Response_10,
  MR_Word STATE_VARIABLE_User_0_57,
  MR_Word * STATE_VARIABLE_User_58)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Cmd_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Cmd_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Question_13;
              MR_Box Node_14;
              MR_Word Var_140;

              Question_13 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(UserQuestion_9);
              Node_14 = mdb__declarative_debugger__get_decl_question_node_1_f_0(TypeInfo_for_T_234, Question_13);
              {
                Var_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_140, 0) = Node_14;
                MR_hl_field(MR_mktag(0), Var_140, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Response_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Question_13));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_140));
              }
              *STATE_VARIABLE_User_58 = STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_138;
              MR_Word Question_142;
              MR_Box Node_143;

              Question_142 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(UserQuestion_9);
              Node_143 = mdb__declarative_debugger__get_decl_question_node_1_f_0(TypeInfo_for_T_234, Question_142);
              {
                Var_138 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_138, 0) = Node_143;
                MR_hl_field(MR_mktag(0), Var_138, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Response_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Question_142));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_138));
              }
              *STATE_VARIABLE_User_58 = STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_136;
              MR_Word Question_144;
              MR_Box Node_145;

              Question_144 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(UserQuestion_9);
              Node_145 = mdb__declarative_debugger__get_decl_question_node_1_f_0(TypeInfo_for_T_234, Question_144);
              {
                Var_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_136, 0) = Node_145;
                MR_hl_field(MR_mktag(0), Var_136, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Response_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Question_144));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_136));
              }
              *STATE_VARIABLE_User_58 = STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_135;
              MR_Word Question_146;
              MR_Box Node_147;

              Question_146 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(UserQuestion_9);
              Node_147 = mdb__declarative_debugger__get_decl_question_node_1_f_0(TypeInfo_for_T_234, Question_146);
              {
                Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_135, 0) = Node_147;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Response_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Question_146));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_135));
              }
              *STATE_VARIABLE_User_58 = STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Question_190;
              MR_Box Node_191;

              Question_190 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(UserQuestion_9);
              Node_191 = mdb__declarative_debugger__get_decl_question_node_1_f_0(TypeInfo_for_T_234, Question_190);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Response_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = Node_191;
              }
              *STATE_VARIABLE_User_58 = STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Question_183;

              Question_183 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(UserQuestion_9);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Response_10 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Question_183));
              }
              *STATE_VARIABLE_User_58 = STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Question_184;

              Question_184 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(UserQuestion_9);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Response_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Question_184));
              }
              *STATE_VARIABLE_User_58 = STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_57, (MR_Integer) 1))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Response_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_96));
              }
              *STATE_VARIABLE_User_58 = STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 8:
            {
              *Response_10 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_User_58 = STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word STATE_VARIABLE_User_85_85;
              MR_Word Var_213 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_57, (MR_Integer) 0))));
              MR_Word Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_57, (MR_Integer) 1))));
              MR_Word Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_57, (MR_Integer) 2))));
              MR_Word Var_217 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_57, (MR_Integer) 3))) & (MR_Integer) 1);
              MR_Word Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_57, (MR_Integer) 4))));

              {
                STATE_VARIABLE_User_85_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_85_85, 0) = ((MR_Box) (Var_213));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_85_85, 1) = ((MR_Box) (Var_214));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_85_85, 2) = ((MR_Box) (Var_215));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_85_85, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Var_217)));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_85_85, 4) = ((MR_Box) (Var_218));
              }
              mdb__declarative_user__query_user_6_p_0(TypeInfo_for_T_234, UserQuestion_9, Response_10, STATE_VARIABLE_User_85_85, STATE_VARIABLE_User_58);
            }
            break;
          case (MR_Integer) 10:
            {
              *Response_10 = (MR_Word) ((MR_Unsigned) 4U);
              *STATE_VARIABLE_User_58 = STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Command_54;
              MR_Word next_value_of_Cmd_8;

              if (((MR_tag((MR_Word) UserQuestion_9)) == (MR_Integer) 0))
                Command_54 = (MR_Word) ((MR_Unsigned) 12U);
              else
              {
                MR_Word Truth_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), UserQuestion_9, (MR_Integer) 1))) & (MR_Integer) 3);

                switch (Truth_56) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Command_54 = (MR_Word) ((MR_Unsigned) 0U);
                    break;
                  case (MR_Integer) 1:
                    Command_54 = (MR_Word) ((MR_Unsigned) 4U);
                    break;
                  case (MR_Integer) 2:
                    Command_54 = (MR_Word) ((MR_Unsigned) 8U);
                    break;
                }
              }
              // direct tailcall eliminated
              ;
              next_value_of_Cmd_8 = Command_54;
              Cmd_8 = next_value_of_Cmd_8;
              continue;
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_57, (MR_Integer) 1))));

              mercury__io__write_string_4_p_0(Var_61, (MR_String) "Unknown command, \'h\' for help.\n");
              mdb__declarative_user__query_user_6_p_0(TypeInfo_for_T_234, UserQuestion_9, Response_10, STATE_VARIABLE_User_0_57, STATE_VARIABLE_User_58);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeArgNum_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cmd_8, (MR_Integer) 0))));
          MR_Word InitAtom_16;
          MR_Word FinalAtom_17;
          MR_Word Question_174;

          Question_174 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(UserQuestion_9);
          mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(Question_174, &InitAtom_16, &FinalAtom_17);
          if ((MaybeArgNum_15 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word STATE_VARIABLE_User_118_118;
            MR_Word MaybeTrack_167;

            mdb__declarative_user__browse_atom_7_p_0(InitAtom_16, FinalAtom_17, &MaybeTrack_167, STATE_VARIABLE_User_0_57, &STATE_VARIABLE_User_118_118);
            if ((MaybeTrack_167 == (MR_Word) ((MR_Unsigned) 0U)))
              mdb__declarative_user__query_user_6_p_0(TypeInfo_for_T_234, UserQuestion_9, Response_10, STATE_VARIABLE_User_118_118, STATE_VARIABLE_User_58);
            else
            {
              MR_Word Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTrack_167, (MR_Integer) 1))));
              MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeTrack_167, (MR_Integer) 0)));

              if ((Var_235 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_118_118, (MR_Integer) 1))));

                mercury__io__write_string_4_p_0(Var_121, (MR_String) "Cannot track the entire atom. Please select a subterm to track.\n");
                mdb__declarative_user__query_user_6_p_0(TypeInfo_for_T_234, UserQuestion_9, Response_10, STATE_VARIABLE_User_118_118, STATE_VARIABLE_User_58);
              }
              else
              {
                MR_Box Node_151;
                MR_Integer ArgNum_152 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_235, (MR_Integer) 0))));
                MR_Word TermPath_155 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_235, (MR_Integer) 1))));
                MR_Word ArgPos_156;
                MR_Word Answer_157;

                ArgPos_156 = mdb__declarative_user__arg_num_to_arg_pos_1_f_0(ArgNum_152);
                Node_151 = mdb__declarative_debugger__get_decl_question_node_1_f_0(TypeInfo_for_T_234, Question_174);
                {
                  Answer_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Answer_157, 0) = Node_151;
                  MR_hl_field(MR_mktag(1), Answer_157, 1) = ((MR_Box) (ArgPos_156));
                  MR_hl_field(MR_mktag(1), Answer_157, 2) = ((MR_Box) (TermPath_155));
                  MR_hl_field(MR_mktag(1), Answer_157, 3) = (MR_Box) (packed_word_1);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Response_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Question_174));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Answer_157));
                }
                *STATE_VARIABLE_User_58 = STATE_VARIABLE_User_118_118;
              }
            }
          }
          else
          {
            MR_Integer ArgNum_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeArgNum_15, (MR_Integer) 0))));
            MR_Word MaybeTrack_19;
            MR_Word STATE_VARIABLE_User_131_131;

            mdb__declarative_user__browse_atom_argument_8_p_0(InitAtom_16, FinalAtom_17, ArgNum_18, &MaybeTrack_19, STATE_VARIABLE_User_0_57, &STATE_VARIABLE_User_131_131);
            if ((MaybeTrack_19 == (MR_Word) ((MR_Unsigned) 0U)))
              mdb__declarative_user__query_user_6_p_0(TypeInfo_for_T_234, UserQuestion_9, Response_10, STATE_VARIABLE_User_131_131, STATE_VARIABLE_User_58);
            else
            {
              MR_Word TermPath_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTrack_19, (MR_Integer) 1))));
              MR_Word ArgPos_23;
              MR_Word Answer_24;
              MR_Box Node_148;
              MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeTrack_19, (MR_Integer) 0)));

              ArgPos_23 = mdb__declarative_user__arg_num_to_arg_pos_1_f_0(ArgNum_18);
              Node_148 = mdb__declarative_debugger__get_decl_question_node_1_f_0(TypeInfo_for_T_234, Question_174);
              {
                Answer_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Answer_24, 0) = Node_148;
                MR_hl_field(MR_mktag(1), Answer_24, 1) = ((MR_Box) (ArgPos_23));
                MR_hl_field(MR_mktag(1), Answer_24, 2) = ((MR_Box) (TermPath_22));
                MR_hl_field(MR_mktag(1), Answer_24, 3) = (MR_Box) (packed_word_3);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Response_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Question_174));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Answer_24));
              }
              *STATE_VARIABLE_User_58 = STATE_VARIABLE_User_131_131;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Question_178;
          MR_Word MaybeArgNum_179 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Cmd_8, (MR_Integer) 0))));
          MR_Word FinalAtom_180;
          MR_Word Var_27;

          Question_178 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(UserQuestion_9);
          mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(Question_178, &Var_27, &FinalAtom_180);
          if ((MaybeArgNum_179 == (MR_Word) ((MR_Unsigned) 0U)))
            mdb__declarative_user__browse_xml_atom_4_p_0(FinalAtom_180, STATE_VARIABLE_User_0_57);
          else
          {
            MR_Integer ArgNum_176 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeArgNum_179, (MR_Integer) 0))));

            mdb__declarative_user__browse_xml_atom_argument_5_p_0(FinalAtom_180, ArgNum_176, STATE_VARIABLE_User_0_57);
          }
          mdb__declarative_user__query_user_6_p_0(TypeInfo_for_T_234, UserQuestion_9, Response_10, STATE_VARIABLE_User_0_57, STATE_VARIABLE_User_58);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Cmd_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ActionNum_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Cmd_8, (MR_Integer) 1))));
              MR_Word MaybeIoActions_45;
              MR_Word STATE_VARIABLE_User_92_92;
              MR_Word Question_185;
              MR_Word _MaybeTrack_46;

              Question_185 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(UserQuestion_9);
              mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_105_111_95_97_99_116_105_111_110_115_95_95_91_49_93_95_48_2_p_0(Question_185, &MaybeIoActions_45);
              mdb__declarative_user__browse_chosen_io_action_7_p_0(MaybeIoActions_45, ActionNum_44, &_MaybeTrack_46, STATE_VARIABLE_User_0_57, &STATE_VARIABLE_User_92_92);
              mdb__declarative_user__query_user_6_p_0(TypeInfo_for_T_234, UserQuestion_9, Response_10, STATE_VARIABLE_User_92_92, STATE_VARIABLE_User_58);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer From_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Cmd_8, (MR_Integer) 1))));
              MR_Integer To_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Cmd_8, (MR_Integer) 2))));
              MR_Word TraceAtom_31;
              MR_Word Question_182;
              MR_Word Var_30;

              Question_182 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(UserQuestion_9);
              mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(Question_182, &Var_30, &TraceAtom_31);
              mdb__declarative_user__print_atom_arguments_6_p_0(TraceAtom_31, From_28, To_29, STATE_VARIABLE_User_0_57);
              mdb__declarative_user__query_user_6_p_0(TypeInfo_for_T_234, UserQuestion_9, Response_10, STATE_VARIABLE_User_0_57, STATE_VARIABLE_User_58);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Question_186;
              MR_Integer From_187 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Cmd_8, (MR_Integer) 1))));
              MR_Integer To_188 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Cmd_8, (MR_Integer) 2))));
              MR_Word MaybeIoActions_189;

              Question_186 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(UserQuestion_9);
              mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_105_111_95_97_99_116_105_111_110_115_95_95_91_49_93_95_48_2_p_0(Question_186, &MaybeIoActions_189);
              mdb__declarative_user__print_chosen_io_actions_6_p_0(MaybeIoActions_189, From_187, To_188, STATE_VARIABLE_User_0_57);
              mdb__declarative_user__query_user_6_p_0(TypeInfo_for_T_234, UserQuestion_9, Response_10, STATE_VARIABLE_User_0_57, STATE_VARIABLE_User_58);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ParamCommand_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Cmd_8, (MR_Integer) 1))));
              MR_Word Browser0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_57, (MR_Integer) 2))));
              MR_Word Info0_35;
              MR_Word Info_36;
              MR_Word Browser_41;
              MR_Word STATE_VARIABLE_User_108_108;
              MR_Word Var_202;
              MR_Word Var_203;
              MR_Word Var_207;
              MR_Unsigned packed_word_11;

              {
                Info0_35 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Info0_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_5[15])));
                MR_hl_field(MR_mktag(0), Info0_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Info0_35, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), Info0_35, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Info0_35, 4) = ((MR_Box) (Browser0_33));
                MR_hl_field(MR_mktag(0), Info0_35, 5) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Info0_35, 6) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mdb__browser_info__run_param_command_7_p_0((MR_Integer) 0, ParamCommand_32, (MR_Integer) 0, Info0_35, &Info_36);
              Browser_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_36, (MR_Integer) 4))));
              Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_57, (MR_Integer) 0))));
              Var_203 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_57, (MR_Integer) 1))));
              packed_word_11 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_57, (MR_Integer) 3)));
              Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_57, (MR_Integer) 4))));
              {
                STATE_VARIABLE_User_108_108 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_108_108, 0) = ((MR_Box) (Var_202));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_108_108, 1) = ((MR_Box) (Var_203));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_108_108, 2) = ((MR_Box) (Browser_41));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_108_108, 3) = (MR_Box) (packed_word_11);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_108_108, 4) = ((MR_Box) (Var_207));
              }
              mdb__declarative_user__query_user_6_p_0(TypeInfo_for_T_234, UserQuestion_9, Response_10, STATE_VARIABLE_User_108_108, STATE_VARIABLE_User_58);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Mode_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Cmd_8, (MR_Integer) 1))) & (MR_Integer) 3);

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Response_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Mode_47));
              }
              *STATE_VARIABLE_User_58 = STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MaybeCmd_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Cmd_8, (MR_Integer) 1))));
              MR_Word Path_50;
              MR_Word Res_51;
              MR_Word Var_75;
              MR_Word Var_220;

              if ((MaybeCmd_48 == (MR_Word) ((MR_Unsigned) 0U)))
                Path_50 = (MR_Word) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[3]));
              else
              {
                MR_String CmdName_49 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeCmd_48, (MR_Integer) 0))));
                MR_Word Var_73;

                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (CmdName_49));
                  MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Path_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Path_50, 0) = ((MR_Box) ((MR_String) "decl"));
                  MR_hl_field(MR_mktag(1), Path_50, 1) = ((MR_Box) (Var_73));
                }
              }
              Var_220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_57, (MR_Integer) 1))));
              Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_57, (MR_Integer) 4))));
              mdb__help__path_6_p_0(Var_75, Path_50, Var_220, &Res_51);
              if (!((Res_51 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_String Message_52 = ((MR_String) ((MR_hl_field(MR_mktag(1), Res_51, (MR_Integer) 0))));
                MR_Word Var_78;

                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Message_52));
                  MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[16])));
                }
                mercury__io__write_strings_3_p_0(Var_78);
              }
              mdb__declarative_user__query_user_6_p_0(TypeInfo_for_T_234, UserQuestion_9, Response_10, STATE_VARIABLE_User_0_57, STATE_VARIABLE_User_58);
            }
            break;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mdb__declarative_user__query_user_6_p_0(
  MR_Word TypeInfo_for_T_67,
  MR_Word UserQuestion_7,
  MR_Word * Response_8,
  MR_Word STATE_VARIABLE_User_0_16,
  MR_Word * STATE_VARIABLE_User_17)
{
  {
    MR_bool succeeded;
    MR_Word Question_11;
    MR_Word Var_69;
    MR_Word Var_70;

    if (((MR_tag((MR_Word) UserQuestion_7)) == (MR_Integer) 0))
      Question_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UserQuestion_7, (MR_Integer) 0))));
    else
      Question_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserQuestion_7, (MR_Integer) 0))));
    Var_70 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_16, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
    Var_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_16, (MR_Integer) 3))) & (MR_Integer) 1);
    switch (Var_69) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Prompt_13;
          MR_Word Command_14;
          MR_Word STATE_VARIABLE_User_24_24;
          MR_Word STATE_VARIABLE_User_26_26;
          MR_Word STATE_VARIABLE_User_28_28;

          switch (Var_70) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Prompt_13 = (MR_String) "dd> ";
                STATE_VARIABLE_User_24_24 = STATE_VARIABLE_User_0_16;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word Var_52;
                MR_Word Var_54;
                MR_Word Var_55;

                mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0(Question_11, STATE_VARIABLE_User_0_16);
                mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_113_117_101_115_116_105_111_110_95_112_114_111_109_112_116_95_95_91_49_93_95_48_2_p_0(UserQuestion_7, &Prompt_13);
                Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_16, (MR_Integer) 0))));
                Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_16, (MR_Integer) 1))));
                Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_16, (MR_Integer) 2))));
                Var_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_16, (MR_Integer) 3))) & (MR_Integer) 1);
                Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_16, (MR_Integer) 4))));
                {
                  STATE_VARIABLE_User_24_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_24_24, 0) = ((MR_Box) (Var_50));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_24_24, 1) = ((MR_Box) (Var_51));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_24_24, 2) = ((MR_Box) (Var_52));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_24_24, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (Var_54)));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_24_24, 4) = ((MR_Box) (Var_55));
                }
              }
              break;
          }
          mdb__declarative_user__get_command_6_p_0(Prompt_13, &Command_14, STATE_VARIABLE_User_24_24, &STATE_VARIABLE_User_26_26);
          mdb__declarative_user__handle_command_7_p_0(TypeInfo_for_T_67, Command_14, UserQuestion_7, Response_8, STATE_VARIABLE_User_26_26, &STATE_VARIABLE_User_28_28);
          succeeded = ((((MR_tag((MR_Word) *Response_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), *Response_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
          }
          succeeded = !(succeeded);
          if (succeeded)
          {
            MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_28_28, (MR_Integer) 0))));
            MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_28_28, (MR_Integer) 1))));
            MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_28_28, (MR_Integer) 2))));
            MR_Word Var_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_28_28, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_28_28, (MR_Integer) 4))));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_User_17 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_61));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_62));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_63));
              MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Var_65)));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_66));
            }
          }
          else
            *STATE_VARIABLE_User_17 = STATE_VARIABLE_User_28_28;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box Node_12;
          MR_Word Var_33;

          Node_12 = mdb__declarative_debugger__get_decl_question_node_1_f_0(TypeInfo_for_T_67, Question_11);
          {
            Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_33, 0) = Node_12;
            MR_hl_field(MR_mktag(0), Var_33, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Response_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Question_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_33));
          }
          *STATE_VARIABLE_User_17 = STATE_VARIABLE_User_0_16;
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mdb__declarative_user__write_decl_final_atom_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0(
  MR_Word Question_5,
  MR_Word User_6)
{
  switch (MR_tag((MR_Word) Question_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Atom_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Question_5, (MR_Integer) 2))));

        mdb__declarative_user__write_decl_final_atom_6_p_0(User_6, (MR_String) "", (MR_Integer) 0, Atom_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Call_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Question_5, (MR_Integer) 1))));
        MR_Word Solns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Question_5, (MR_Integer) 2))));
        MR_Word Var_81;

        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Call_12));
        }
        mdb__declarative_user__write_decl_atom_6_p_0(User_6, (MR_String) "Call ", (MR_Integer) 0, Var_81);
        if (!((Solns_13 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_6, (MR_Integer) 1))));
          MR_Word Var_39;
          MR_Box conv0_STATE_VARIABLE_IO_20;

          mercury__io__write_string_4_p_0(Var_36, (MR_String) "Solutions:\n");
          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_9[0]));
            MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (User_6));
            MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) ((MR_String) "\t"));
            MR_hl_field(MR_mktag(0), Var_39, 5) = ((MR_Box) ((MR_Integer) 2));
          }
          mercury__list__foldl_4_p_10((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, Solns_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_20);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeInfo_73_73;
        MR_Word ExceptionRep_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Question_5, (MR_Integer) 2))));
        MR_Word Exception_18;
        MR_Word Var_24;
        MR_Word Var_27;
        MR_Box Var_29;
        MR_Word Var_31;
        MR_Word Call_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Question_5, (MR_Integer) 1))));
        MR_Word Var_90;

        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Call_46));
        }
        mdb__declarative_user__write_decl_atom_6_p_0(User_6, (MR_String) "Call ", (MR_Integer) 0, Var_90);
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_6, (MR_Integer) 1))));
        mercury__io__write_string_4_p_0(Var_24, (MR_String) "Throws ");
        mdb__term_rep__rep_to_univ_2_p_0(ExceptionRep_17, &Exception_18);
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_6, (MR_Integer) 1))));
        Var_29 = mercury__univ__univ_value_1_f_0(&TypeInfo_73_73, Exception_18);
        mercury__io__write_5_p_2(TypeInfo_73_73, Var_27, (MR_Integer) 2, Var_29);
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_6, (MR_Integer) 1))));
        mercury__io__nl_3_p_0(Var_31);
      }
      break;
  }
}

static void MR_CALL 
mdb__declarative_user__write_decl_final_atom_6_p_0(
  MR_Word User_7,
  MR_String Indent_8,
  MR_Word CallerType_9,
  MR_Word FinalAtom_10)
{
  {
    MR_Word Var_14 = (MR_Word) ((MR_Word) (FinalAtom_10));

    mdb__declarative_user__write_decl_atom_6_p_0(User_7, Indent_8, CallerType_9, Var_14);
  }
}

static void MR_CALL 
mdb__declarative_user__write_decl_atom_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Univ_4;

    mdb__declarative_user__trace_atom_arg_to_univ_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Univ_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Univ_4));
  }
}

static void MR_CALL 
mdb__declarative_user__write_decl_atom_6_p_0(
  MR_Word User_7,
  MR_String Indent_8,
  MR_Word CallerType_9,
  MR_Word DeclAtom_10)
{
  {
    MR_bool succeeded;
    MR_Word TraceAtom_12;
    MR_Word MaybeIoActions_13;
    MR_Box ProcLayout_14;
    MR_Word Args0_15;
    MR_Word ProcLabel_16;
    MR_String Functor_18;
    MR_Word PredOrFunc_20;
    MR_Word Which_21;
    MR_Word Args1_22;
    MR_Word Args_23;
    MR_Word BrowserTerm_24;
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_7, (MR_Integer) 1))));
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_41;
    MR_Word Var_17;
    MR_Integer Var_19;

    mercury__io__write_string_4_p_0(Var_27, Indent_8);
    mdb__declarative_debugger__unravel_decl_atom_3_p_0(DeclAtom_10, &TraceAtom_12, &MaybeIoActions_13);
    ProcLayout_14 = ((MR_Box) ((MR_hl_field(MR_mktag(0), TraceAtom_12, (MR_Integer) 0))));
    Args0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceAtom_12, (MR_Integer) 1))));
    ProcLabel_16 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(ProcLayout_14);
    mdb__declarative_execution__get_pred_attributes_5_p_0(ProcLabel_16, &Var_17, &Functor_18, &Var_19, &PredOrFunc_20);
    Which_21 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    mdb__declarative_execution__maybe_filter_headvars_3_p_0(Which_21, Args0_15, &Args1_22);
    mercury__list__map_3_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mdb__declarative_user_scalar_common_5[14]), Args1_22, &Args_23);
    Var_30 = mdb__util__is_function_1_f_0(PredOrFunc_20);
    BrowserTerm_24 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(Functor_18, Args_23, Var_30);
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_7, (MR_Integer) 1))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_7, (MR_Integer) 2))));
    mdb__browse__print_browser_term_6_p_0(BrowserTerm_24, Var_31, CallerType_9, Var_41);
    if (!((MaybeIoActions_13 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word IoActions_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIoActions_13, (MR_Integer) 0))));
      MR_Integer NumTabled_60;
      MR_Integer NumUntabled_61;
      MR_Integer Start_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IoActions_59, (MR_Integer) 0))));
      MR_Integer End_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IoActions_59, (MR_Integer) 1))));

      mdb__declarative_user__count_tabled_io_actions_2_8_p_0(Start_79, End_80, (MR_Integer) 0, &NumTabled_60, (MR_Integer) 0, &NumUntabled_61);
      mdb__declarative_user__write_io_actions_5_p_0(User_7, NumTabled_60, IoActions_59);
      succeeded = (NumUntabled_61 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_7, (MR_Integer) 1))));

        mercury__io__write_string_4_p_0(Var_65, (MR_String) "Warning: some IO actions for this atom are not tabled.\n");
      }
    }
  }
}

static void MR_CALL 
mdb__declarative_user__write_io_actions_5_p_0(
  MR_Word User_6,
  MR_Integer NumTabled_7,
  MR_Word IoActions_8)
{
  {
    MR_bool succeeded = (NumTabled_7 == (MR_Integer) 0);

    if (!(succeeded))
    {
      MR_Integer NumPrinted_10;
      MR_Word Var_21;
      MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_6, (MR_Integer) 1))));
      MR_Word Var_75;

      succeeded = (NumTabled_7 == (MR_Integer) 1);
      if (succeeded)
        mercury__io__write_string_4_p_0(Var_69, (MR_String) "1 tabled IO action:");
      else
      {
        MR_Word Var_18;

        mercury__io__write_int_4_p_0(Var_69, NumTabled_7);
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_6, (MR_Integer) 1))));
        mercury__io__write_string_4_p_0(Var_18, (MR_String) " tabled IO actions:");
      }
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_6, (MR_Integer) 2))));
      NumPrinted_10 = mdb__browser_info__get_num_printed_io_actions_1_f_0(Var_21);
      Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_6, (MR_Integer) 1))));
      succeeded = (NumTabled_7 <= NumPrinted_10);
      if (succeeded)
      {
        MR_Integer Start_82;
        MR_Integer End_83;

        mercury__io__nl_3_p_0(Var_75);
        Start_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IoActions_8, (MR_Integer) 0))));
        End_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IoActions_8, (MR_Integer) 1))));
        mdb__declarative_user__print_tabled_io_actions_2_5_p_0(User_6, Start_82, End_83);
      }
      else
      {
        MR_Word Var_28;

        mercury__io__write_string_4_p_0(Var_75, (MR_String) " too many to show");
        Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_6, (MR_Integer) 1))));
        mercury__io__nl_3_p_0(Var_28);
      }
    }
  }
}

static void MR_CALL 
mdb__declarative_user__print_tabled_io_actions_2_5_p_0(
  MR_Word User_6,
  MR_Integer Cur_7,
  MR_Integer End_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Cur_7 == End_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!(succeeded))
    {
      MR_Word MaybeIoAction_10;
      MR_Integer Var_15;
      MR_Integer next_value_of_Cur_7;

      mdb__io_action__get_maybe_io_action_4_p_0(Cur_7, &MaybeIoAction_10);
      if (!((MaybeIoAction_10 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word IoAction_23 = (MR_Word) (MR_body((MR_Word) (MaybeIoAction_10), (MR_Integer) 1));
        MR_Word Term_25;
        MR_Word Var_28;
        MR_Word Var_33;

        Term_25 = mdb__io_action__io_action_to_browser_term_1_f_0(IoAction_23);
        Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_6, (MR_Integer) 1))));
        Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_6, (MR_Integer) 2))));
        mdb__browse__print_browser_term_6_p_0(Term_25, Var_28, (MR_Integer) 2, Var_33);
      }
      Var_15 = (MR_Integer) ((MR_Unsigned) Cur_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Cur_7 = Var_15;
      Cur_7 = next_value_of_Cur_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_user__count_tabled_io_actions_2_8_p_0(
  MR_Integer Cur_9,
  MR_Integer End_10,
  MR_Integer PrevTabled_11,
  MR_Integer * Tabled_12,
  MR_Integer PrevUntabled_13,
  MR_Integer * Untabled_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Cur_9 == End_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *Untabled_14 = PrevUntabled_13;
      *Tabled_12 = PrevTabled_11;
    }
    else
    {
      MR_Word MaybeIoAction_16;
      MR_Integer NewPrevUntabled_18;
      MR_Integer NewPrevTabled_19;
      MR_Integer Var_25;
      MR_Integer next_value_of_Cur_9;
      MR_Integer next_value_of_PrevTabled_11;
      MR_Integer next_value_of_PrevUntabled_13;

      mdb__io_action__get_maybe_io_action_4_p_0(Cur_9, &MaybeIoAction_16);
      if ((MaybeIoAction_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        NewPrevUntabled_18 = (MR_Integer) ((MR_Unsigned) PrevUntabled_13 + (MR_Unsigned) 1);
        NewPrevTabled_19 = PrevTabled_11;
      }
      else
      {
        NewPrevUntabled_18 = PrevUntabled_13;
        NewPrevTabled_19 = (MR_Integer) ((MR_Unsigned) PrevTabled_11 + (MR_Unsigned) 1);
      }
      Var_25 = (MR_Integer) ((MR_Unsigned) Cur_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Cur_9 = Var_25;
      next_value_of_PrevTabled_11 = NewPrevTabled_19;
      next_value_of_PrevUntabled_13 = NewPrevUntabled_18;
      Cur_9 = next_value_of_Cur_9;
      PrevTabled_11 = next_value_of_PrevTabled_11;
      PrevUntabled_13 = next_value_of_PrevUntabled_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_113_117_101_115_116_105_111_110_95_112_114_111_109_112_116_95_95_91_49_93_95_48_2_p_0(
  MR_Word UserQuestion_3,
  MR_String * Prompt_4)
{
  if (((MR_tag((MR_Word) UserQuestion_3)) == (MR_Integer) 0))
  {
    MR_Word Question_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UserQuestion_3, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) Question_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Prompt_4 = (MR_String) "Valid\? ";
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Question_5, (MR_Integer) 2))));

          if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
            *Prompt_4 = (MR_String) "Unsatisfiable\? ";
          else
            *Prompt_4 = (MR_String) "Complete\? ";
        }
        break;
      case (MR_Integer) 2:
        *Prompt_4 = (MR_String) "Expected\? ";
        break;
    }
  }
  else
  {
    MR_Word DefaultTruth_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), UserQuestion_3, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_String QuestionPrompt_7;
    MR_String DefaultPrompt_8;
    MR_Word Question_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserQuestion_3, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) Question_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        QuestionPrompt_7 = (MR_String) "Valid\? ";
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Question_9, (MR_Integer) 2))));

          if ((Var_42 == (MR_Word) ((MR_Unsigned) 0U)))
            QuestionPrompt_7 = (MR_String) "Unsatisfiable\? ";
          else
            QuestionPrompt_7 = (MR_String) "Complete\? ";
        }
        break;
      case (MR_Integer) 2:
        QuestionPrompt_7 = (MR_String) "Expected\? ";
        break;
    }
    switch (DefaultTruth_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DefaultPrompt_8 = (MR_String) "[yes] ";
        break;
      case (MR_Integer) 1:
        DefaultPrompt_8 = (MR_String) "[no] ";
        break;
      case (MR_Integer) 2:
        DefaultPrompt_8 = (MR_String) "[inadmissible] ";
        break;
    }
    *Prompt_4 = mercury__string__f_43_43_2_f_0(QuestionPrompt_7, DefaultPrompt_8);
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__get_command_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user__get_command_6_p_0(
  MR_String Prompt_7,
  MR_Word * Command_8,
  MR_Word User_9,
  MR_Word * User_4)
{
  {
    MR_bool succeeded;
    MR_Word Result_11;
    MR_Word Var_22;
    MR_Word Var_30;

    *User_4 = User_9;
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_9, (MR_Integer) 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_9, (MR_Integer) 1))));
    mdb__util__trace_getline_6_p_0(Prompt_7, &Result_11, Var_22, Var_30);
    switch (MR_tag((MR_Word) Result_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Command_8 = (MR_Word) ((MR_Unsigned) 40U);
        break;
      case (MR_Integer) 1:
        {
          MR_String String_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_11, (MR_Integer) 0))));
          MR_Word Words_13;

          Words_13 = mercury__string__words_separator_2_f_0((MR_Word) (&mdb__declarative_user_scalar_common_5[13]), String_12);
          if ((Words_13 == (MR_Word) ((MR_Unsigned) 0U)))
            *Command_8 = (MR_Word) ((MR_Unsigned) 44U);
          else
          {
            MR_String CmdWord_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), Words_13, (MR_Integer) 0))));
            MR_Word CmdArgs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Words_13, (MR_Integer) 1))));
            MR_Word CommandPrime_17;
            MR_Word CmdHandler_16;
            MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
            MR_Box conv1_CommandPrime_17;

            succeeded = mdb__declarative_user__cmd_handler_2_p_0(CmdWord_14, &CmdHandler_16);
            if (succeeded)
            {
              func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), CmdHandler_16, (MR_Integer) 1))));
              succeeded = func_0(((MR_Box) (CmdHandler_16)), ((MR_Box) (CmdArgs_15)), &conv1_CommandPrime_17);
              if (succeeded)
              {
                CommandPrime_17 = ((MR_Word) (conv1_CommandPrime_17));
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              *Command_8 = CommandPrime_17;
            else
              *Command_8 = (MR_Word) ((MR_Unsigned) 48U);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_11, (MR_Integer) 0))));
          MR_String Msg_19;
          MR_Word Var_25;
          MR_Word Var_27;

          mercury__io__error_message_2_p_0(Error_18, &Msg_19);
          Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_9, (MR_Integer) 1))));
          mercury__io__write_string_4_p_0(Var_25, Msg_19);
          Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_9, (MR_Integer) 1))));
          mercury__io__nl_3_p_0(Var_27);
          *Command_8 = (MR_Word) ((MR_Unsigned) 40U);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_33(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv32_Cmd_3;

    succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv32_Cmd_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv32_Cmd_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_32(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv31_Cmd_3;

    succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv31_Cmd_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv31_Cmd_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_31(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv30_Command_6;

    succeeded = mdb__declarative_user__format_param_arg_cmd_3_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv30_Command_6);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv30_Command_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_30(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv29_Cmd_3;

    succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv29_Cmd_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv29_Cmd_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_29(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv28_HeadVar__2_2;

    succeeded = mdb__declarative_user__trust_arg_cmd_2_p_0(((MR_Word) (wrapper_arg_1)), &conv28_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv28_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv27_HeadVar__2_2;

    succeeded = mdb__declarative_user__trust_arg_cmd_2_p_0(((MR_Word) (wrapper_arg_1)), &conv27_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv27_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv26_Cmd_3;

    succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv26_Cmd_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv26_Cmd_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv25_Command_6;

    succeeded = mdb__declarative_user__format_param_arg_cmd_3_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv25_Command_6);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv25_Command_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv24_Cmd_3;

    succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv24_Cmd_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv24_Cmd_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv23_Cmd_3;

    succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv23_Cmd_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv23_Cmd_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv22_Cmd_3;

    succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv22_Cmd_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv22_Cmd_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv21_HeadVar__2_2;

    succeeded = mdb__declarative_user__print_arg_cmd_2_p_0(((MR_Word) (wrapper_arg_1)), &conv21_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv21_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv20_Cmd_3;

    succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv20_Cmd_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv20_Cmd_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv19_Cmd_3;

    succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv19_Cmd_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv19_Cmd_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv18_HeadVar__2_2;

    succeeded = mdb__declarative_user__print_arg_cmd_2_p_0(((MR_Word) (wrapper_arg_1)), &conv18_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv18_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv17_Cmd_3;

    succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv17_Cmd_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv17_Cmd_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv16_Cmd_3;

    succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv16_Cmd_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv16_Cmd_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv15_HeadVar__2_2;

    succeeded = mdb__declarative_user__search_mode_cmd_2_p_0(((MR_Word) (wrapper_arg_1)), &conv15_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv15_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv14_HeadVar__2_2;

    succeeded = mdb__declarative_user__search_mode_cmd_2_p_0(((MR_Word) (wrapper_arg_1)), &conv14_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv14_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv13_Command_6;

    succeeded = mdb__declarative_user__format_param_arg_cmd_3_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv13_Command_6);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv13_Command_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv12_Cmd_3;

    succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv12_Cmd_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv12_Cmd_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv11_Cmd_3;

    succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv11_Cmd_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv11_Cmd_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv10_Cmd_3;

    succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv10_Cmd_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv10_Cmd_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv9_HeadVar__2_2;

    succeeded = mdb__declarative_user__help_cmd_2_p_0(((MR_Word) (wrapper_arg_1)), &conv9_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__2_2;

    succeeded = mdb__declarative_user__help_cmd_2_p_0(((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv7_UserCommand_4;

    succeeded = mdb__declarative_user__format_arg_cmd_2_p_0(((MR_Word) (wrapper_arg_1)), &conv7_UserCommand_4);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv7_UserCommand_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv6_Command_6;

    succeeded = mdb__declarative_user__format_param_arg_cmd_3_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv6_Command_6);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv6_Command_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    succeeded = mdb__declarative_user__browse_arg_cmd_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    succeeded = mdb__declarative_user__browse_arg_cmd_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    succeeded = mdb__declarative_user__num_io_actions_cmd_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_Cmd_3;

    succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Cmd_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_Cmd_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_Cmd_3;

    succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Cmd_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_Cmd_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = mdb__declarative_user__help_cmd_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(HeadVar__1_1, 0)) {
        case (MR_Integer) 63:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "\?"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 97:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 1;
              break;
            case (MR_Integer) 98:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "abort"))
                case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 99:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "actions"))
                case_num_0 = (MR_Integer) 3;
              break;
          }
          break;
        case (MR_Integer) 98:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 4;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "browse"))
                case_num_0 = (MR_Integer) 5;
              break;
          }
          break;
        case (MR_Integer) 100:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "depth"))
            case_num_0 = (MR_Integer) 6;
          break;
        case (MR_Integer) 102:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "format"))
            case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 104:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 8;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "help"))
                case_num_0 = (MR_Integer) 9;
              break;
          }
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "inadmissible"))
                    case_num_0 = (MR_Integer) 11;
                  break;
                case (MR_Integer) 102:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "info"))
                    case_num_0 = (MR_Integer) 12;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 108:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "lines"))
            case_num_0 = (MR_Integer) 13;
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "mode"))
                case_num_0 = (MR_Integer) 15;
              break;
          }
          break;
        case (MR_Integer) 110:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 16;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "no"))
                case_num_0 = (MR_Integer) 17;
              break;
          }
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 18;
              break;
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "params"))
                case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 100:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "pd"))
                case_num_0 = (MR_Integer) 20;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "print"))
                case_num_0 = (MR_Integer) 21;
              break;
          }
          break;
        case (MR_Integer) 113:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 22;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "quit"))
                case_num_0 = (MR_Integer) 23;
              break;
          }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 24;
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "size"))
                case_num_0 = (MR_Integer) 25;
              break;
            case (MR_Integer) 107:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "skip"))
                case_num_0 = (MR_Integer) 26;
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 27;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "trust"))
                case_num_0 = (MR_Integer) 28;
              break;
          }
          break;
        case (MR_Integer) 117:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "undo"))
            case_num_0 = (MR_Integer) 29;
          break;
        case (MR_Integer) 119:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "width"))
            case_num_0 = (MR_Integer) 30;
          break;
        case (MR_Integer) 121:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 31;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "yes"))
                case_num_0 = (MR_Integer) 32;
              break;
          }
          break;
      }
      if ((case_num_0 < (MR_Integer) 0))
        succeeded = MR_FALSE;
      else
      {
        // we found a match; look up the results
        ;
        *HeadVar__2_2 = ((&mdb__declarative_user_vector_common_8[0 + case_num_0]))->mdb__declarative_user__vector_common_type_8_0__vct_8_f_0;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_105_111_95_97_99_116_105_111_110_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FinalDeclAtom_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));

        *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinalDeclAtom_5, (MR_Integer) 1))));
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word InitDeclAtom_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word FinalDeclAtom_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));

        *HeadVar__2_2 = (MR_Word) (InitDeclAtom_5);
        *HeadVar__3_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinalDeclAtom_6, (MR_Integer) 0))));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InitDeclAtom_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

        *HeadVar__2_2 = (MR_Word) (InitDeclAtom_8);
        *HeadVar__3_3 = *HeadVar__2_2;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InitDeclAtom_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));

        *HeadVar__2_2 = (MR_Word) (InitDeclAtom_11);
        *HeadVar__3_3 = *HeadVar__2_2;
      }
      break;
  }
}

static MR_Word MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Q_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
      Q_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    else
      Q_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    return Q_2;
  }
}

static void MR_CALL 
mdb__declarative_user__print_atom_arguments_6_p_0(
  MR_Word Atom_7,
  MR_Integer From_8,
  MR_Integer To_9,
  MR_Word User_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word OK_12;
    MR_Word Args0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Atom_7, (MR_Integer) 1))));
    MR_Word Args_30;
    MR_Word Var_37;
    MR_Word Arg_36;
    MR_Word ArgInfo_31;
    MR_Word MaybeArg_34;
    MR_Word ArgRep_35;
    MR_Box conv0_ArgInfo_31;
    MR_Integer Var_16;
    MR_Integer Var_17;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_37 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    mdb__declarative_execution__maybe_filter_headvars_3_p_0(Var_37, Args0_29, &Args_30);
    succeeded = mercury__list__index1_3_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), Args_30, From_8, &conv0_ArgInfo_31);
    if (succeeded)
    {
      ArgInfo_31 = ((MR_Word) (conv0_ArgInfo_31));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MaybeArg_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfo_31, (MR_Integer) 2))));
      succeeded = (MaybeArg_34 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgRep_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArg_34, (MR_Integer) 0))));
        mdb__term_rep__rep_to_univ_2_p_0(ArgRep_35, &Arg_36);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_47;

      Var_38 = mdb__browser_term__univ_to_browser_term_1_f_0(Arg_36);
      Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_10, (MR_Integer) 1))));
      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_10, (MR_Integer) 2))));
      mdb__browse__print_browser_term_6_p_0(Var_38, Var_39, (MR_Integer) 0, Var_47);
      OK_12 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_10, (MR_Integer) 1))));

      mercury__io__write_string_4_p_0(Var_43, (MR_String) "Invalid argument number\n");
      OK_12 = (MR_Integer) 0;
    }
    succeeded = (OK_12 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_17 = (MR_Integer) 1;
      Var_16 = (MR_Integer) ((MR_Unsigned) From_8 + (MR_Unsigned) Var_17);
      succeeded = (Var_16 <= To_9);
    }
    if (succeeded)
    {
      MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) From_8 + (MR_Unsigned) 1);
      MR_Integer next_value_of_From_8 = Var_18;

      // direct tailcall eliminated
      ;
      From_8 = next_value_of_From_8;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__browse_xml_atom_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdb__declarative_user__IntroducedFrom__pred__browse_xml_atom__717__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user__browse_xml_atom_4_p_0(
  MR_Word Atom_5,
  MR_Word User_6)
{
  {
    MR_bool succeeded;
    MR_Box ProcLayout_8 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Atom_5, (MR_Integer) 0))));
    MR_Word Args_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Atom_5, (MR_Integer) 1))));
    MR_Word ProcLabel_10;
    MR_Word ArgValues_11;
    MR_Word Module_12;
    MR_String Name_13;
    MR_Word PredOrFunc_15;
    MR_Word IsFunction_16;
    MR_String ModuleStr_17;
    MR_Word BrowserTerm_18;
    MR_Word Var_21;
    MR_String Var_23;
    MR_String Var_24;
    MR_Word Var_26;
    MR_Word Var_31;
    MR_Integer Var_14;

    ProcLabel_10 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(ProcLayout_8);
    mdb__declarative_user__get_user_arg_values_2_p_0(Args_9, &ArgValues_11);
    mdb__declarative_execution__get_pred_attributes_5_p_0(ProcLabel_10, &Module_12, &Name_13, &Var_14, &PredOrFunc_15);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (mdb__declarative_user__browse_xml_atom_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (PredOrFunc_15));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    IsFunction_16 = mercury__bool__pred_to_bool_1_f_0(Var_21);
    ModuleStr_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Module_12);
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) ".", Name_13);
    Var_23 = mercury__string__f_43_43_2_f_0(ModuleStr_17, Var_24);
    BrowserTerm_18 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(Var_23, ArgValues_11, IsFunction_16);
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_6, (MR_Integer) 1))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_6, (MR_Integer) 2))));
    mdb__browse__save_and_browse_browser_term_xml_6_p_0(BrowserTerm_18, Var_26, Var_26, Var_31);
  }
}

static MR_Box MR_CALL 
mdb__declarative_user__browse_atom_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Mode_8;

    conv0_Mode_8 = mdb__declarative_user__get_subterm_mode_from_atoms_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Mode_8));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__browse_atom_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdb__declarative_user__IntroducedFrom__pred__browse_atom__698__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user__browse_atom_7_p_0(
  MR_Word InitAtom_8,
  MR_Word FinalAtom_9,
  MR_Word * MaybeTrack_10,
  MR_Word STATE_VARIABLE_User_0_26,
  MR_Word * STATE_VARIABLE_User_27)
{
  {
    MR_bool succeeded;
    MR_Box ProcLayout_13 = ((MR_Box) ((MR_hl_field(MR_mktag(0), FinalAtom_9, (MR_Integer) 0))));
    MR_Word Args_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinalAtom_9, (MR_Integer) 1))));
    MR_Word ProcLabel_15;
    MR_Word ArgValues_16;
    MR_Word Module_17;
    MR_String Name_18;
    MR_Word PredOrFunc_20;
    MR_Word IsFunction_21;
    MR_String ModuleStr_22;
    MR_Word BrowserTerm_23;
    MR_Word MaybeTrackDirs_24;
    MR_Word Browser_25;
    MR_Word Var_30;
    MR_String Var_32;
    MR_String Var_33;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Integer Var_19;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_62;
    MR_Unsigned packed_word_2;

    ProcLabel_15 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(ProcLayout_13);
    mdb__declarative_user__get_user_arg_values_2_p_0(Args_14, &ArgValues_16);
    mdb__declarative_execution__get_pred_attributes_5_p_0(ProcLabel_15, &Module_17, &Name_18, &Var_19, &PredOrFunc_20);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (mdb__declarative_user__browse_atom_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (PredOrFunc_20));
      MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    IsFunction_21 = mercury__bool__pred_to_bool_1_f_0(Var_30);
    ModuleStr_22 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Module_17);
    Var_33 = mercury__string__f_43_43_2_f_0((MR_String) ".", Name_18);
    Var_32 = mercury__string__f_43_43_2_f_0(ModuleStr_22, Var_33);
    BrowserTerm_23 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(Var_32, ArgValues_16, IsFunction_21);
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_26, (MR_Integer) 0))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_26, (MR_Integer) 1))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_26, (MR_Integer) 2))));
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (mdb__declarative_user__browse_atom_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (InitAtom_8));
      MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (FinalAtom_9));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_40));
    }
    mdb__browse__browse_browser_term_9_p_0(BrowserTerm_23, Var_35, Var_42, Var_37, &MaybeTrackDirs_24, Var_43, &Browser_25);
    if ((MaybeTrackDirs_24 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeTrack_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Dirs_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTrackDirs_24, (MR_Integer) 1))));
      MR_Word TermPath_73;
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeTrackDirs_24, (MR_Integer) 0)));

      mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(FinalAtom_9, Dirs_72, &TermPath_73);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTrack_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) (packed_word_1);
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TermPath_73));
      }
    }
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_26, (MR_Integer) 0))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_26, (MR_Integer) 1))));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_26, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_User_27 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Browser_25));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) (packed_word_2);
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_62));
    }
  }
}

static void MR_CALL 
mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Args_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Dir_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Dirs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Pos_10;
      MR_Word MaybeValue_14;

      if (((MR_tag((MR_Word) Dir_7)) == (MR_Integer) 1))
      {
        MR_String Name_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), Dir_7, (MR_Integer) 0))));

        succeeded = mdb__browse__string_is_return_value_alias_1_p_0(Name_15);
        if (succeeded)
        {
          MR_Word LastArg_16;
          MR_Box conv0_LastArg_16;

          succeeded = mercury__list__last_2_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), Args_6, &conv0_LastArg_16);
          if (succeeded)
          {
            LastArg_16 = ((MR_Word) (conv0_LastArg_16));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MaybeValue_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LastArg_16, (MR_Integer) 2))));
            Pos_10 = mercury__list__length_1_f_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), Args_6);
          }
          else
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_user_scalar_common_1[12])));
              return;
            }
        }
        else
          {
            mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_user_scalar_common_1[13])));
            return;
          }
      }
      else
      {
        MR_Word Arg_11;
        MR_Box conv1_Arg_11;

        Pos_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Dir_7, (MR_Integer) 0))));
        conv1_Arg_11 = mercury__list__det_index1_2_f_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), Args_6, Pos_10);
        Arg_11 = ((MR_Word) (conv1_Arg_11));
        MaybeValue_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 2))));
      }
      if ((MaybeValue_14 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((Dirs_8 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Pos_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        else
          {
            mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_user_scalar_common_1[14])));
            return;
          }
      else
      {
        MR_Word TermRep_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeValue_14, (MR_Integer) 0))));
        MR_Word TermPath0_20;

        mdb__browser_info__convert_dirs_to_term_path_3_p_0(TermRep_19, Dirs_8, &TermPath0_20);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Pos_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TermPath0_20));
        }
      }
    }
  }
}

static void MR_CALL 
mdb__declarative_user__get_user_arg_values_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word UserVisible_3;
    MR_Word MaybeValue_5;
    MR_Word Args_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Values0_8;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    UserVisible_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))) & (MR_Integer) 1);
    MaybeValue_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2))));
    mdb__declarative_user__get_user_arg_values_2_p_0(Args_6, &Values0_8);
    switch (UserVisible_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__2_2 = Values0_8;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Value_10;

          if ((MaybeValue_5 == (MR_Word) ((MR_Unsigned) 0U)))
            Value_10 = mercury__univ__univ_1_f_1((MR_Word) (&mdb__browse__mdb__browse__type_ctor_info_unbound_0), ((MR_Box) ((MR_Integer) 0)));
          else
          {
            MR_Word ValueRep_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeValue_5, (MR_Integer) 0))));

            mdb__term_rep__rep_to_univ_2_p_0(ValueRep_9, &Value_10);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Value_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Values0_8));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__declarative_user__browse_xml_atom_argument_5_p_0(
  MR_Word Atom_6,
  MR_Integer ArgNum_7,
  MR_Word User_8)
{
  {
    MR_bool succeeded;
    MR_Word Args0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Atom_6, (MR_Integer) 1))));
    MR_Word Args_12;
    MR_Word Var_21;
    MR_Word Arg_18;
    MR_Word ArgInfo_13;
    MR_Word MaybeArg_16;
    MR_Word ArgRep_17;
    MR_Box conv0_ArgInfo_13;

    Var_21 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    mdb__declarative_execution__maybe_filter_headvars_3_p_0(Var_21, Args0_11, &Args_12);
    succeeded = mercury__list__index1_3_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), Args_12, ArgNum_7, &conv0_ArgInfo_13);
    if (succeeded)
    {
      ArgInfo_13 = ((MR_Word) (conv0_ArgInfo_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MaybeArg_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfo_13, (MR_Integer) 2))));
      succeeded = (MaybeArg_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgRep_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArg_16, (MR_Integer) 0))));
        mdb__term_rep__rep_to_univ_2_p_0(ArgRep_17, &Arg_18);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_31;

      Var_22 = mdb__browser_term__univ_to_browser_term_1_f_0(Arg_18);
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_8, (MR_Integer) 1))));
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_8, (MR_Integer) 2))));
      mdb__browse__save_and_browse_browser_term_xml_6_p_0(Var_22, Var_23, Var_23, Var_31);
    }
    else
    {
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User_8, (MR_Integer) 1))));

      mercury__io__write_string_4_p_0(Var_27, (MR_String) "Invalid argument number\n");
    }
  }
}

static MR_Box MR_CALL 
mdb__declarative_user__browse_atom_argument_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Mode_10;

    conv1_Mode_10 = mdb__declarative_user__get_subterm_mode_from_atoms_for_arg_4_f_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Mode_10));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
mdb__declarative_user__browse_atom_argument_8_p_0(
  MR_Word InitAtom_9,
  MR_Word FinalAtom_10,
  MR_Integer ArgNum_11,
  MR_Word * MaybeTrack_12,
  MR_Word STATE_VARIABLE_User_0_26,
  MR_Word * STATE_VARIABLE_User_27)
{
  {
    MR_bool succeeded;
    MR_Word Args0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinalAtom_10, (MR_Integer) 1))));
    MR_Word Args_17;
    MR_Word Var_30;
    MR_Word ArgRep_22;
    MR_Word Arg_23;
    MR_Word ArgInfo_18;
    MR_Word MaybeArg_21;
    MR_Box conv0_ArgInfo_18;

    Var_30 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    mdb__declarative_execution__maybe_filter_headvars_3_p_0(Var_30, Args0_16, &Args_17);
    succeeded = mercury__list__index1_3_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), Args_17, ArgNum_11, &conv0_ArgInfo_18);
    if (succeeded)
    {
      ArgInfo_18 = ((MR_Word) (conv0_ArgInfo_18));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MaybeArg_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfo_18, (MR_Integer) 2))));
      succeeded = (MaybeArg_21 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgRep_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArg_21, (MR_Integer) 0))));
        mdb__term_rep__rep_to_univ_2_p_0(ArgRep_22, &Arg_23);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word MaybeTrackDirs_24;
      MR_Word Browser_25;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_34;
      MR_Word Var_37;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_62;
      MR_Unsigned packed_word_3;

      Var_31 = mdb__browser_term__univ_to_browser_term_1_f_0(Arg_23);
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_26, (MR_Integer) 0))));
      Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_26, (MR_Integer) 1))));
      Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_26, (MR_Integer) 2))));
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (mdb__declarative_user__browse_atom_argument_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (ArgNum_11));
        MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (InitAtom_9));
        MR_hl_field(MR_mktag(0), Var_37, 5) = ((MR_Box) (FinalAtom_10));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_37));
      }
      mdb__browse__browse_browser_term_9_p_0(Var_31, Var_32, Var_42, Var_34, &MaybeTrackDirs_24, Var_43, &Browser_25);
      if ((MaybeTrackDirs_24 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeTrack_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Dirs_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTrackDirs_24, (MR_Integer) 1))));
        MR_Word TermPath_78;
        MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeTrackDirs_24, (MR_Integer) 0)));

        mdb__browser_info__convert_dirs_to_term_path_3_p_0(ArgRep_22, Dirs_77, &TermPath_78);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTrack_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) (packed_word_2);
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TermPath_78));
        }
      }
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_26, (MR_Integer) 0))));
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_26, (MR_Integer) 1))));
      packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_26, (MR_Integer) 4))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_User_27 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Browser_25));
        MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) (packed_word_3);
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_62));
      }
    }
    else
    {
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_26, (MR_Integer) 1))));

      mercury__io__write_string_4_p_0(Var_39, (MR_String) "Invalid argument number\n");
      *MaybeTrack_12 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_User_27 = STATE_VARIABLE_User_0_26;
    }
  }
}

static void MR_CALL 
mdb__declarative_user__print_chosen_io_actions_6_p_0(
  MR_Word MaybeIoActions_7,
  MR_Integer From_8,
  MR_Integer To_9,
  MR_Word User0_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word OK_12;
    MR_Integer Var_16;
    MR_Integer Var_17;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((MaybeIoActions_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "No such IO action.\n");
      OK_12 = (MR_Integer) 0;
    }
    else
    {
      MR_Word IoActions_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIoActions_7, (MR_Integer) 0))));
      MR_Word MaybeIoAction_29;

      mdb__declarative_user__find_tabled_io_action_5_p_0(IoActions_28, From_8, &MaybeIoAction_29);
      if ((MaybeIoAction_29 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_3_p_0((MR_String) "No such IO action.\n");
        OK_12 = (MR_Integer) 0;
      }
      else
      {
        MR_Word IoAction_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIoAction_29, (MR_Integer) 0))));
        MR_Word Term_45;
        MR_Word Var_48;
        MR_Word Var_53;

        Term_45 = mdb__io_action__io_action_to_browser_term_1_f_0(IoAction_43);
        Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User0_10, (MR_Integer) 1))));
        Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), User0_10, (MR_Integer) 2))));
        mdb__browse__print_browser_term_6_p_0(Term_45, Var_48, (MR_Integer) 2, Var_53);
        OK_12 = (MR_Integer) 1;
      }
    }
    succeeded = (OK_12 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_17 = (MR_Integer) 1;
      Var_16 = (MR_Integer) ((MR_Unsigned) From_8 + (MR_Unsigned) Var_17);
      succeeded = (Var_16 <= To_9);
    }
    if (succeeded)
    {
      MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) From_8 + (MR_Unsigned) 1);
      MR_Integer next_value_of_From_8 = Var_18;

      // direct tailcall eliminated
      ;
      From_8 = next_value_of_From_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_user__browse_chosen_io_action_7_p_0(
  MR_Word MaybeIoActions_8,
  MR_Integer ActionNum_9,
  MR_Word * MaybeTrack_10,
  MR_Word STATE_VARIABLE_User_0_16,
  MR_Word * STATE_VARIABLE_User_17)
{
  if ((MaybeIoActions_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_3_p_0((MR_String) "No such IO action.\n");
    *MaybeTrack_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_User_17 = STATE_VARIABLE_User_0_16;
  }
  else
  {
    MR_Word IoActions_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIoActions_8, (MR_Integer) 0))));
    MR_Word MaybeIoAction_14;

    mdb__declarative_user__find_tabled_io_action_5_p_0(IoActions_13, ActionNum_9, &MaybeIoAction_14);
    if ((MaybeIoAction_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeTrack_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_User_17 = STATE_VARIABLE_User_0_16;
    }
    else
    {
      MR_Word IoAction_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIoAction_14, (MR_Integer) 0))));

      mdb__declarative_user__browse_io_action_6_p_0(IoAction_15, MaybeTrack_10, STATE_VARIABLE_User_0_16, STATE_VARIABLE_User_17);
    }
  }
}

static void MR_CALL 
mdb__declarative_user__browse_io_action_6_p_0(
  MR_Word IoAction_7,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_User_0_17,
  MR_Word * STATE_VARIABLE_User_18)
{
  {
    MR_Word Term_10;
    MR_Word MaybeTrackDirs_11;
    MR_Word Browser_12;
    MR_Word Var_21;
    MR_Word STATE_VARIABLE_User_29_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_57;
    MR_Unsigned packed_word_2;

    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    Term_10 = mdb__io_action__io_action_to_browser_term_1_f_0(IoAction_7);
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_17, (MR_Integer) 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_17, (MR_Integer) 1))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_17, (MR_Integer) 2))));
    mdb__browse__browse_browser_term_9_p_0(Term_10, Var_21, Var_32, (MR_Word) ((MR_Unsigned) 0U), &MaybeTrackDirs_11, Var_33, &Browser_12);
    if ((MaybeTrackDirs_11 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_User_29_29 = STATE_VARIABLE_User_0_17;
    else
    {
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_0_17, (MR_Integer) 1))));
      MR_Word Var_16;

      mercury__io__write_string_4_p_0(Var_26, (MR_String) "Sorry, tracking of I/O actions is not yet supported.\n");
      mdb__declarative_user__browse_io_action_6_p_0(IoAction_7, &Var_16, STATE_VARIABLE_User_0_17, &STATE_VARIABLE_User_29_29);
    }
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_29_29, (MR_Integer) 0))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_29_29, (MR_Integer) 1))));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_29_29, (MR_Integer) 3)));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_User_29_29, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_User_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Browser_12));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) (packed_word_2);
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_57));
    }
  }
}

static void MR_CALL 
mdb__declarative_user__find_tabled_io_action_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer TabledActionNum_8,
  MR_Word * MaybeIoAction_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Cur_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer End_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (Cur_6 == End_7);
    if (succeeded)
      *MaybeIoAction_9 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word MaybeTabledIoAction_11;

      mdb__io_action__get_maybe_io_action_4_p_0(Cur_6, &MaybeTabledIoAction_11);
      if ((MaybeTabledIoAction_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_16;
        MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) Cur_6 + (MR_Unsigned) 1);
        MR_Word next_value_of_HeadVar__1_1;

        {
          Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Var_18));
          MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (End_7));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_16;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Word IoAction_12 = (MR_Word) (MR_body((MR_Word) (MaybeTabledIoAction_11), (MR_Integer) 1));

        succeeded = (TabledActionNum_8 == (MR_Integer) 1);
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIoAction_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IoAction_12));
          }
        else
        {
          MR_Word Var_20;
          MR_Integer Var_21;
          MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) Cur_6 + (MR_Unsigned) 1);
          MR_Word next_value_of_HeadVar__1_1;
          MR_Integer next_value_of_TabledActionNum_8;

          {
            Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (Var_23));
            MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (End_7));
          }
          Var_21 = (MR_Integer) ((MR_Unsigned) TabledActionNum_8 - (MR_Unsigned) 1);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Var_20;
          next_value_of_TabledActionNum_8 = Var_21;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          TabledActionNum_8 = next_value_of_TabledActionNum_8;
          continue;
        }
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
mdb__declarative_user__arg_num_to_arg_pos_1_f_0(
  MR_Integer ArgNum_3)
{
  {
    MR_Word ArgPos_4;
    MR_Word Which_5;

    Which_5 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    switch (Which_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ArgPos_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ArgPos_4, 0) = ((MR_Box) (ArgNum_3));
        }
        break;
      case (MR_Integer) 1:
        {
          ArgPos_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgPos_4, 0) = ((MR_Box) (ArgNum_3));
        }
        break;
    }
    return ArgPos_4;
  }
}

void MR_CALL 
mdb__declarative_user__user_state_init_5_p_0(
  MR_Word InStr_6,
  MR_Word OutStr_7,
  MR_Word Browser_8,
  MR_Word HelpSystem_9,
  MR_Word * State_10)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *State_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InStr_6));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OutStr_7));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Browser_8));
    MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HelpSystem_9));
  }
}

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_command_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_user____Unify____user_command_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user____Compare____user_command_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_user____Compare____user_command_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_question_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_user____Unify____user_question_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user____Compare____user_question_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_user____Compare____user_question_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_user____Unify____user_response_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user____Compare____user_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_user____Compare____user_response_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_search_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_user____Unify____user_search_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user____Compare____user_search_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_user____Compare____user_search_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_user____Unify____user_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user____Compare____user_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_user____Compare____user_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__mdb__declarative_user__init(void)
{
}

void mercury__mdb__declarative_user__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_command_0);
	MR_register_type_ctor_info(&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_question_1);
	MR_register_type_ctor_info(&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_response_1);
	MR_register_type_ctor_info(&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0);
	MR_register_type_ctor_info(&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_state_0);
}

void mercury__mdb__declarative_user__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__declarative_user__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.declarative_user.
