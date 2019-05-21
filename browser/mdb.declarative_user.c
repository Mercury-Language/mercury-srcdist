/*
** Automatically generated from `declarative_user.m'
** by the Mercury compiler,
** version rotd-2017-08-07
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


/* :- module mdb.declarative_user. */
/* :- implementation. */

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
#include "mdb.declarative_oracle.mih"
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

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_state_0_0;

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_state_0_0[1];

static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_state_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_state_0[1];

static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_state_0[1];

static MR_bool MR_CALL 
mdb__declarative_user__IntroducedFrom__pred__browse_xml_atom__716__1_2_p_0(
  MR_Word mdb__declarative_user__PredOrFunc_15,
  MR_Word mdb__declarative_user__HeadVar__2_22);

static MR_bool MR_CALL 
mdb__declarative_user__IntroducedFrom__pred__browse_atom__697__1_2_p_0(
  MR_Word mdb__declarative_user__PredOrFunc_20,
  MR_Word mdb__declarative_user__HeadVar__2_31);

static void MR_CALL 
mdb__declarative_user____Compare____user_command_0_0(
  MR_Word * mdb__declarative_user__HeadVar__1_1,
  MR_Word mdb__declarative_user__HeadVar__2_2,
  MR_Word mdb__declarative_user__HeadVar__3_3);

static void MR_CALL 
mdb__declarative_user____Index____user_command_0_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Integer * mdb__declarative_user__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_command_0_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word mdb__declarative_user__HeadVar__2_2);

static void MR_CALL 
mdb__declarative_user__trace_atom_arg_to_univ_2_p_0(
  MR_Word mdb__declarative_user__TraceAtomArg_3,
  MR_Word * mdb__declarative_user__Univ_4);

static MR_bool MR_CALL 
mdb__declarative_user__is_dash_1_p_0(
  MR_Char mdb__declarative_user__HeadVar__1_1);

static MR_bool MR_CALL 
mdb__declarative_user__help_cmd_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_user__search_mode_cmd_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_user__trust_arg_cmd_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_user__num_io_actions_cmd_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_user__format_param_arg_cmd_3_p_0(
  MR_String mdb__declarative_user__Cmd_4,
  MR_Word mdb__declarative_user__ArgWords0_5,
  MR_Word * mdb__declarative_user__Command_6);

static MR_bool MR_CALL 
mdb__declarative_user__format_arg_cmd_2_p_0(
  MR_Word mdb__declarative_user__ArgWords_3,
  MR_Word * mdb__declarative_user__UserCommand_4);

static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0_2(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1);

static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0_1(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1);

static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_user__browse_arg_cmd_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_user__one_word_cmd_3_p_0(
  MR_Word mdb__declarative_user__Cmd_4,
  MR_Word mdb__declarative_user__HeadVar__2_2,
  MR_Word * mdb__declarative_user__Cmd_3);

static MR_Word MR_CALL 
mdb__declarative_user__get_subterm_mode_from_atoms_for_arg_4_f_0(
  MR_Integer mdb__declarative_user__ArgNum_6,
  MR_Word mdb__declarative_user__InitAtom_7,
  MR_Word mdb__declarative_user__FinalAtom_8,
  MR_Word mdb__declarative_user__Dirs_9);

static MR_Word MR_CALL 
mdb__declarative_user__get_subterm_mode_from_atoms_3_f_0(
  MR_Word mdb__declarative_user__InitAtom_5,
  MR_Word mdb__declarative_user__FinalAtom_6,
  MR_Word mdb__declarative_user__Dirs_7);

static void MR_CALL 
mdb__declarative_user__write_decl_bug_4_p_0_1(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2,
  MR_Box * mdb__declarative_user__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_user__write_decl_bug_4_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word mdb__declarative_user__User_2);

static void MR_CALL 
mdb__declarative_user__write_decl_init_atom_6_p_0(
  MR_Word mdb__declarative_user__User_7,
  MR_String mdb__declarative_user__Indent_8,
  MR_Word mdb__declarative_user__CallerType_9,
  MR_Word mdb__declarative_user__InitAtom_10);

static MR_Word MR_CALL 
mdb__declarative_user__decl_caller_type_0_f_0(void);

static MR_bool MR_CALL 
mdb__declarative_user__browse_xml_decl_bug_5_p_0_1(
  MR_Box mdb__declarative_user__closure_arg);

static void MR_CALL 
mdb__declarative_user__browse_xml_decl_bug_5_p_0(
  MR_Word mdb__declarative_user__Bug_6,
  MR_Word mdb__declarative_user__MaybeArgNum_7,
  MR_Word mdb__declarative_user__User_8);

static void MR_CALL 
mdb__declarative_user__browse_decl_bug_6_p_0(
  MR_Word mdb__declarative_user__Bug_7,
  MR_Word mdb__declarative_user__MaybeArgNum_8,
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_16,
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_17);

static void MR_CALL 
mdb__declarative_user__decl_bug_io_actions_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2);

static void MR_CALL 
mdb__declarative_user__handle_command_7_p_0(
  MR_Word mdb__declarative_user__TypeInfo_for_T_234,
  MR_Word mdb__declarative_user__Cmd_8,
  MR_Word mdb__declarative_user__UserQuestion_9,
  MR_Word * mdb__declarative_user__Response_10,
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_57,
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_58);

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2,
  MR_Box * mdb__declarative_user__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0(
  MR_Word mdb__declarative_user__Question_5,
  MR_Word mdb__declarative_user__User_6);

static void MR_CALL 
mdb__declarative_user__write_decl_final_atom_6_p_0(
  MR_Word mdb__declarative_user__User_7,
  MR_String mdb__declarative_user__Indent_8,
  MR_Word mdb__declarative_user__CallerType_9,
  MR_Word mdb__declarative_user__FinalAtom_10);

static void MR_CALL 
mdb__declarative_user__write_decl_atom_6_p_0_1(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_user__write_decl_atom_6_p_0(
  MR_Word mdb__declarative_user__User_7,
  MR_String mdb__declarative_user__Indent_8,
  MR_Word mdb__declarative_user__CallerType_9,
  MR_Word mdb__declarative_user__DeclAtom_10);

static void MR_CALL 
mdb__declarative_user__write_io_actions_5_p_0(
  MR_Word mdb__declarative_user__User_6,
  MR_Integer mdb__declarative_user__NumTabled_7,
  MR_Word mdb__declarative_user__IoActions_8);

static void MR_CALL 
mdb__declarative_user__print_tabled_io_actions_2_5_p_0(
  MR_Word mdb__declarative_user__User_6,
  MR_Integer mdb__declarative_user__Cur_7,
  MR_Integer mdb__declarative_user__End_8);

static void MR_CALL 
mdb__declarative_user__count_tabled_io_actions_2_8_p_0(
  MR_Integer mdb__declarative_user__Cur_9,
  MR_Integer mdb__declarative_user__End_10,
  MR_Integer mdb__declarative_user__PrevTabled_11,
  MR_Integer * mdb__declarative_user__Tabled_12,
  MR_Integer mdb__declarative_user__PrevUntabled_13,
  MR_Integer * mdb__declarative_user__Untabled_14);

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_113_117_101_115_116_105_111_110_95_112_114_111_109_112_116_95_95_91_49_93_95_48_2_p_0(
  MR_Word mdb__declarative_user__UserQuestion_3,
  MR_String * mdb__declarative_user__Prompt_4);

static MR_bool MR_CALL 
mdb__declarative_user__get_command_6_p_0_1(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1);

static void MR_CALL 
mdb__declarative_user__get_command_6_p_0(
  MR_String mdb__declarative_user__Prompt_7,
  MR_Word * mdb__declarative_user__Command_8,
  MR_Word mdb__declarative_user__User_9,
  MR_Word * mdb__declarative_user__User_4);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_33(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_32(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_31(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_30(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_29(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_28(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_27(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_26(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_25(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_24(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_23(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_22(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_21(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_20(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_19(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_18(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_17(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_16(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_15(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_14(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_13(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_12(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_11(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_10(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_9(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_8(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_7(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_6(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_5(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_4(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_3(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_2(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_1(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0(
  MR_String mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2);

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_105_111_95_97_99_116_105_111_110_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2);

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2,
  MR_Word * mdb__declarative_user__HeadVar__3_3);

static MR_Word MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(
  MR_Word mdb__declarative_user__HeadVar__1_1);

static void MR_CALL 
mdb__declarative_user__print_atom_arguments_6_p_0(
  MR_Word mdb__declarative_user__Atom_7,
  MR_Integer mdb__declarative_user__From_8,
  MR_Integer mdb__declarative_user__To_9,
  MR_Word mdb__declarative_user__User_10);

static MR_bool MR_CALL 
mdb__declarative_user__browse_xml_atom_4_p_0_1(
  MR_Box mdb__declarative_user__closure_arg);

static void MR_CALL 
mdb__declarative_user__browse_xml_atom_4_p_0(
  MR_Word mdb__declarative_user__Atom_5,
  MR_Word mdb__declarative_user__User_6);

static MR_Box MR_CALL 
mdb__declarative_user__browse_atom_7_p_0_2(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1);

static MR_bool MR_CALL 
mdb__declarative_user__browse_atom_7_p_0_1(
  MR_Box mdb__declarative_user__closure_arg);

static void MR_CALL 
mdb__declarative_user__browse_atom_7_p_0(
  MR_Word mdb__declarative_user__InitAtom_8,
  MR_Word mdb__declarative_user__FinalAtom_9,
  MR_Word * mdb__declarative_user__MaybeTrack_10,
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_26,
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_27);

static void MR_CALL 
mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word mdb__declarative_user__HeadVar__2_2,
  MR_Word * mdb__declarative_user__HeadVar__3_3);

static void MR_CALL 
mdb__declarative_user__get_user_arg_values_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2);

static void MR_CALL 
mdb__declarative_user__browse_xml_atom_argument_5_p_0(
  MR_Word mdb__declarative_user__Atom_6,
  MR_Integer mdb__declarative_user__ArgNum_7,
  MR_Word mdb__declarative_user__User_8);

static MR_Box MR_CALL 
mdb__declarative_user__browse_atom_argument_8_p_0_1(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1);

static void MR_CALL 
mdb__declarative_user__browse_atom_argument_8_p_0(
  MR_Word mdb__declarative_user__InitAtom_9,
  MR_Word mdb__declarative_user__FinalAtom_10,
  MR_Integer mdb__declarative_user__ArgNum_11,
  MR_Word * mdb__declarative_user__MaybeTrack_12,
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_26,
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_27);

static void MR_CALL 
mdb__declarative_user__print_chosen_io_actions_6_p_0(
  MR_Word mdb__declarative_user__MaybeIoActions_7,
  MR_Integer mdb__declarative_user__From_8,
  MR_Integer mdb__declarative_user__To_9,
  MR_Word mdb__declarative_user__User0_10);

static void MR_CALL 
mdb__declarative_user__browse_chosen_io_action_7_p_0(
  MR_Word mdb__declarative_user__MaybeIoActions_8,
  MR_Integer mdb__declarative_user__ActionNum_9,
  MR_Word * mdb__declarative_user__MaybeTrack_10,
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_16,
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_17);

static void MR_CALL 
mdb__declarative_user__browse_io_action_6_p_0(
  MR_Word mdb__declarative_user__IoAction_7,
  MR_Word * mdb__declarative_user__HeadVar__2_2,
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_17,
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_18);

static void MR_CALL 
mdb__declarative_user__find_tabled_io_action_5_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Integer mdb__declarative_user__TabledActionNum_8,
  MR_Word * mdb__declarative_user__MaybeIoAction_9);

static MR_Word MR_CALL 
mdb__declarative_user__arg_num_to_arg_pos_1_f_0(
  MR_Integer mdb__declarative_user__ArgNum_3);

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_command_0_0_10001(
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_user____Compare____user_command_0_0_10001(
  MR_Box * mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2,
  MR_Box mdb__declarative_user__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_question_1_0_10001(
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2,
  MR_Box mdb__declarative_user__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_user____Compare____user_question_1_0_10001(
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2,
  MR_Box mdb__declarative_user__wrapper_arg_3,
  MR_Box mdb__declarative_user__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_response_1_0_10001(
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2,
  MR_Box mdb__declarative_user__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_user____Compare____user_response_1_0_10001(
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2,
  MR_Box mdb__declarative_user__wrapper_arg_3,
  MR_Box mdb__declarative_user__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_search_mode_0_0_10001(
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_user____Compare____user_search_mode_0_0_10001(
  MR_Box * mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2,
  MR_Box mdb__declarative_user__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_state_0_0_10001(
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_user____Compare____user_state_0_0_10001(
  MR_Box * mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2,
  MR_Box mdb__declarative_user__wrapper_arg_3);


static /* final */ const MR_Box mdb__declarative_user_scalar_common_1[23][2];

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



static /* final */ const MR_Box mdb__declarative_user_scalar_common_1[23][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__help__mdb__help__type_ctor_info_entry_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "decl_debug")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "concepts")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "\th, \?\thelp\t\tthis help message\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "abort this diagnosis session and return to mdb\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "\tq\tquit\t\t")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "\tb\tbrowse\t\tbrowse the suspect\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\tn\tno\t\tdo not accept that the suspect is a bug\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\ty\tyes\t\tconfirm that the suspect is a bug\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "Answer one of:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "convert_dirs_to_term_path_from_atom")),
    ((MR_Box) ((MR_String) "argument list empty"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "convert_dirs_to_term_path_from_atom")),
    ((MR_Box) ((MR_String) "argument of atom cannot be named"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "convert_dirs_to_term_path_from_atom")),
    ((MR_Box) ((MR_String) "no value for first position in path"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_2[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__declarative_user__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_command_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_15)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_16)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_19)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_22)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_28)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_29)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[20])),
    ((MR_Box) (mdb__declarative_user__get_command_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[2])),
    ((MR_Box) (mdb__declarative_user__write_decl_atom_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[20])),
    ((MR_Box) (mdb__declarative_user__print_arg_cmd_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[20])),
    ((MR_Box) (mdb__declarative_user__print_arg_cmd_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_6[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_command_0)),
    ((MR_Box) (&mdb__declarative_user__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_command_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "depth"))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_14)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "lines"))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_17)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_18)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_20)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[16])))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_21)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 11 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_23)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))))
  },
  /* row 12 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_24)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))))
  },
  /* row 13 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_25)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 14 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_26)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "size"))
  },
  /* row 15 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_27)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 16 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_30)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))))
  },
  /* row 17 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_31)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "width"))
  },
  /* row 18 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_32)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_33)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};


static /* final */ const struct mdb__declarative_user__vector_common_type_8_0_s mdb__declarative_user_vector_common_8[33] = {
  /* row 0 */   {     (MR_Word) &mdb__declarative_user_scalar_common_5[0] },
  /* row 1 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[0] },
  /* row 2 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[1] },
  /* row 3 */   {     (MR_Word) &mdb__declarative_user_scalar_common_5[1] },
  /* row 4 */   {     (MR_Word) &mdb__declarative_user_scalar_common_5[2] },
  /* row 5 */   {     (MR_Word) &mdb__declarative_user_scalar_common_5[3] },
  /* row 6 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[2] },
  /* row 7 */   {     (MR_Word) &mdb__declarative_user_scalar_common_5[4] },
  /* row 8 */   {     (MR_Word) &mdb__declarative_user_scalar_common_5[5] },
  /* row 9 */   {     (MR_Word) &mdb__declarative_user_scalar_common_5[6] },
  /* row 10 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[3] },
  /* row 11 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[4] },
  /* row 12 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[5] },
  /* row 13 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[6] },
  /* row 14 */   {     (MR_Word) &mdb__declarative_user_scalar_common_5[7] },
  /* row 15 */   {     (MR_Word) &mdb__declarative_user_scalar_common_5[8] },
  /* row 16 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[7] },
  /* row 17 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[8] },
  /* row 18 */   {     (MR_Word) &mdb__declarative_user_scalar_common_5[9] },
  /* row 19 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[9] },
  /* row 20 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[10] },
  /* row 21 */   {     (MR_Word) &mdb__declarative_user_scalar_common_5[10] },
  /* row 22 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[11] },
  /* row 23 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[12] },
  /* row 24 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[13] },
  /* row 25 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[14] },
  /* row 26 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[15] },
  /* row 27 */   {     (MR_Word) &mdb__declarative_user_scalar_common_5[11] },
  /* row 28 */   {     (MR_Word) &mdb__declarative_user_scalar_common_5[12] },
  /* row 29 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[16] },
  /* row 30 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[17] },
  /* row 31 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[18] },
  /* row 32 */   {     (MR_Word) &mdb__declarative_user_scalar_common_7[19] },
};

static /* final */ const struct mdb__declarative_user__vector_common_type_11_0_s mdb__declarative_user_vector_common_11[64] = {
  /* row 0 */
  {
    (MR_String) "top-down",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[21])
  },
  /* row 1 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 2 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 3 */
  {
    (MR_String) "binary",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[18])
  },
  /* row 4 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 5 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 6 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 7 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 8 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 9 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 10 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 11 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 12 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 13 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 14 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 15 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 16 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 17 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 18 */
  {
    (MR_String) "suspicion_divide_and_query",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[20])
  },
  /* row 19 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 20 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 21 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 22 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 23 */
  {
    (MR_String) "dq",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[19])
  },
  /* row 24 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 25 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 26 */
  {
    (MR_String) "td",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[21])
  },
  /* row 27 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 28 */
  {
    (MR_String) "divide_and_query",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[19])
  },
  /* row 29 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 30 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 31 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 32 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 33 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 34 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 35 */
  {
    (MR_String) "b",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[18])
  },
  /* row 36 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 37 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 38 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 39 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 40 */
  {
    (MR_String) "suspicion-divide-and-query",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[20])
  },
  /* row 41 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 42 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 43 */
  {
    (MR_String) "sdq",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[20])
  },
  /* row 44 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 45 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 46 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 47 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 48 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 49 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 50 */
  {
    (MR_String) "top_down",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[21])
  },
  /* row 51 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 52 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 53 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 54 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 55 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 56 */
  {
    (MR_String) "divide-and-query",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[19])
  },
  /* row 57 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 58 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 59 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 60 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 61 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 62 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 63 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
};


#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__list__pti_list_1__plain_mdb__browser_info__type_ctor_info_down_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_0 = {
  (MR_String) "user_cmd_yes",
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

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_1 = {
  (MR_String) "user_cmd_no",
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

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_2 = {
  (MR_String) "user_cmd_inadmissible",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_3 = {
  (MR_String) "user_cmd_skip",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_4[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_4 = {
  (MR_String) "user_cmd_browse_arg",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_5[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_5 = {
  (MR_String) "user_cmd_browse_xml_arg",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 5,
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_6 = {
  (MR_String) "user_cmd_browse_io",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 6,
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_7[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_7 = {
  (MR_String) "user_cmd_print_arg",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 7,
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_8[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_8 = {
  (MR_String) "user_cmd_print_io",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 8,
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_9 = {
  (MR_String) "user_cmd_pd",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_10[1] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_param_cmd_0
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_10 = {
  (MR_String) "user_cmd_param_command",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 10,
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_11 = {
  (MR_String) "user_cmd_trust_predicate",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_12 = {
  (MR_String) "user_cmd_trust_module",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_13 = {
  (MR_String) "user_cmd_info",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 13,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_14 = {
  (MR_String) "user_cmd_undo",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 14,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_15 = {
  (MR_String) "user_cmd_ask",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 15,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_16[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_16 = {
  (MR_String) "user_cmd_change_search",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 16,
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_16,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_17 = {
  (MR_String) "user_cmd_quit",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 17,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_18[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_18 = {
  (MR_String) "user_cmd_help",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 18,
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_18,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_19 = {
  (MR_String) "user_cmd_empty",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 19,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_20 = {
  (MR_String) "user_cmd_illegal",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 12,
  (MR_Integer) 20,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 13,
    MR_SECTAG_LOCAL,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_2
  },
  {
    (MR_Integer) 6,
    MR_SECTAG_REMOTE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_user____Unify____user_command_0_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_command_0_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_command",
  {     mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_command_0 },
  {     mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_command_0 },
  (MR_Integer) 21,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_command_0
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_0[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_0 = {
  (MR_String) "plain_question",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_1[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_1 = {
  (MR_String) "question_with_default",
  (MR_Integer) 2,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_0[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_0
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_1[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_1
};

static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_question_1[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_user____Unify____user_question_1_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_question_1_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_question",
  {     mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_question_1 },
  {     mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_question_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_question_1
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_answer_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_0[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_0 = {
  (MR_String) "user_response_answer",
  (MR_Integer) 2,
  (MR_Integer) 3,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_1[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_1 = {
  (MR_String) "user_response_trust_predicate",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_2[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_2 = {
  (MR_String) "user_response_trust_module",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_3[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_output_stream_0
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_3 = {
  (MR_String) "user_response_show_info",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_4[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_4 = {
  (MR_String) "user_response_change_search",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_5 = {
  (MR_String) "user_response_undo",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_6[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_6 = {
  (MR_String) "user_response_exit_diagnosis",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_7 = {
  (MR_String) "user_response_abort_diagnosis",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_2
  },
  {
    (MR_Integer) 4,
    MR_SECTAG_REMOTE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_user____Unify____user_response_1_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_response_1_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_response",
  {     mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_response_1 },
  {     mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_response_1 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_response_1
};

static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_0 = {
  (MR_String) "user_top_down",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_1 = {
  (MR_String) "user_divide_and_query",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_2 = {
  (MR_String) "user_suspicion_divide_and_query",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_3 = {
  (MR_String) "user_binary",
  (MR_Integer) 3
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_user____Unify____user_search_mode_0_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_search_mode_0_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_search_mode",
  {     mdb__declarative_user__mdb__declarative_user__enum_name_ordered_user_search_mode_0 },
  {     mdb__declarative_user__mdb__declarative_user__enum_value_ordered_user_search_mode_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_search_mode_0
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__list__ti_list_1mdb__help__type_ctor_info_entry_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__help__mdb__help__type_ctor_info_entry_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_state_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_input_stream_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_output_stream_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mdb__declarative_user__list__ti_list_1mdb__help__type_ctor_info_entry_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString mdb__declarative_user__mdb__declarative_user__field_names_user_state_0_0[6] = {
  (MR_String) "instr",
  (MR_String) "outstr",
  (MR_String) "browser",
  (MR_String) "display_question",
  (MR_String) "help_system",
  (MR_String) "testing"
};

static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_state_0_0 = {
  (MR_String) "user_state",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_user__mdb__declarative_user__field_types_user_state_0_0,
  mdb__declarative_user__mdb__declarative_user__field_names_user_state_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_state_0_0[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_state_0_0
};

static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_state_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_state_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_user____Unify____user_state_0_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_state_0_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_state",
  {     mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_state_0 },
  {     mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_state_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_state_0
};

static MR_bool MR_CALL 
mdb__declarative_user__IntroducedFrom__pred__browse_xml_atom__716__1_2_p_0(
  MR_Word mdb__declarative_user__PredOrFunc_15,
  MR_Word mdb__declarative_user__HeadVar__2_22)
{
  {
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__PredOrFunc_15 == mdb__declarative_user__HeadVar__2_22);

    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__IntroducedFrom__pred__browse_atom__697__1_2_p_0(
  MR_Word mdb__declarative_user__PredOrFunc_20,
  MR_Word mdb__declarative_user__HeadVar__2_31)
{
  {
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__PredOrFunc_20 == mdb__declarative_user__HeadVar__2_31);

    return mdb__declarative_user__succeeded;
  }
}

void MR_CALL 
mdb__declarative_user____Compare____user_state_0_0(
  MR_Word * mdb__declarative_user__HeadVar__1_1,
  MR_Word mdb__declarative_user__HeadVar__2_2,
  MR_Word mdb__declarative_user__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Integer mdb__declarative_user__CastX_21 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;
    MR_Integer mdb__declarative_user__CastY_22 = (MR_Integer) mdb__declarative_user__HeadVar__3_3;

    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_21 == mdb__declarative_user__CastY_22);
    if (mdb__declarative_user__succeeded)
      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word mdb__declarative_user__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word mdb__declarative_user__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word mdb__declarative_user__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word mdb__declarative_user__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word mdb__declarative_user__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word mdb__declarative_user__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word mdb__declarative_user__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word mdb__declarative_user__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 5)));
      MR_Word mdb__declarative_user__Var_16;

      mercury__io____Compare____input_stream_0_0(&mdb__declarative_user__Var_16, mdb__declarative_user__ArgX1_4, mdb__declarative_user__ArgY1_5);
      mdb__declarative_user__succeeded = (mdb__declarative_user__Var_16 == (MR_Integer) 0);
      mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
      if (mdb__declarative_user__succeeded)
        *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__Var_16;
      else
      {
        MR_Word mdb__declarative_user__Var_17;

        mercury__io____Compare____output_stream_0_0(&mdb__declarative_user__Var_17, mdb__declarative_user__ArgX2_6, mdb__declarative_user__ArgY2_7);
        mdb__declarative_user__succeeded = (mdb__declarative_user__Var_17 == (MR_Integer) 0);
        mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
        if (mdb__declarative_user__succeeded)
          *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__Var_17;
        else
        {
          MR_Word mdb__declarative_user__Var_18;

          mdb__browser_info____Compare____browser_persistent_state_0_0(&mdb__declarative_user__Var_18, mdb__declarative_user__ArgX3_8, mdb__declarative_user__ArgY3_9);
          mdb__declarative_user__succeeded = (mdb__declarative_user__Var_18 == (MR_Integer) 0);
          mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
          if (mdb__declarative_user__succeeded)
            *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__Var_18;
          else
          {
            MR_Word mdb__declarative_user__Var_19;
            MR_Integer mdb__declarative_user__Var_29 = (MR_Integer) mdb__declarative_user__ArgX4_10;
            MR_Integer mdb__declarative_user__Var_30 = (MR_Integer) mdb__declarative_user__ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__Var_19, mdb__declarative_user__Var_29, mdb__declarative_user__Var_30);
            mdb__declarative_user__succeeded = (mdb__declarative_user__Var_19 == (MR_Integer) 0);
            mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
            if (mdb__declarative_user__succeeded)
              *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__Var_19;
            else
            {
              MR_Word mdb__declarative_user__Var_20;

              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_user_scalar_common_1[2], &mdb__declarative_user__Var_20, ((MR_Box) (mdb__declarative_user__ArgX5_12)), ((MR_Box) (mdb__declarative_user__ArgY5_13)));
              mdb__declarative_user__succeeded = (mdb__declarative_user__Var_20 == (MR_Integer) 0);
              mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
              if (mdb__declarative_user__succeeded)
                *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__Var_20;
              else
              {
                MR_Integer mdb__declarative_user__Var_31 = (MR_Integer) mdb__declarative_user__ArgX6_14;
                MR_Integer mdb__declarative_user__Var_32 = (MR_Integer) mdb__declarative_user__ArgY6_15;

                mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__Var_31, mdb__declarative_user__Var_32);
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_user____Unify____user_state_0_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word mdb__declarative_user__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Integer mdb__declarative_user__CastX_15 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
    MR_Integer mdb__declarative_user__CastY_16 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_15 == mdb__declarative_user__CastY_16);
    if (mdb__declarative_user__succeeded)
      mdb__declarative_user__succeeded = MR_TRUE;
    else
    {
      MR_Word mdb__declarative_user__TypeInfo_20_20;
      MR_Word mdb__declarative_user__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word mdb__declarative_user__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word mdb__declarative_user__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word mdb__declarative_user__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word mdb__declarative_user__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word mdb__declarative_user__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word mdb__declarative_user__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 5)));
      MR_Word mdb__declarative_user__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 5)));

      mdb__declarative_user__succeeded = mercury__io____Unify____input_stream_0_0(mdb__declarative_user__ArgX1_3, mdb__declarative_user__ArgY1_4);
      if (mdb__declarative_user__succeeded)
      {
        mdb__declarative_user__succeeded = mercury__io____Unify____output_stream_0_0(mdb__declarative_user__ArgX2_5, mdb__declarative_user__ArgY2_6);
        if (mdb__declarative_user__succeeded)
        {
          mdb__declarative_user__succeeded = mdb__browser_info____Unify____browser_persistent_state_0_0(mdb__declarative_user__ArgX3_7, mdb__declarative_user__ArgY3_8);
          if (mdb__declarative_user__succeeded)
          {
            mdb__declarative_user__succeeded = (mdb__declarative_user__ArgX4_9 == mdb__declarative_user__ArgY4_10);
            if (mdb__declarative_user__succeeded)
            {
              mdb__declarative_user__TypeInfo_20_20 = (MR_Word) &mdb__declarative_user_scalar_common_1[2];
              mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_20_20, ((MR_Box) (mdb__declarative_user__ArgX5_11)), ((MR_Box) (mdb__declarative_user__ArgY5_12)));
              if (mdb__declarative_user__succeeded)
                mdb__declarative_user__succeeded = (mdb__declarative_user__ArgX6_13 == mdb__declarative_user__ArgY6_14);
            }
          }
        }
      }
    }
    return mdb__declarative_user__succeeded;
  }
}

void MR_CALL 
mdb__declarative_user____Compare____user_search_mode_0_0(
  MR_Word * mdb__declarative_user__HeadVar__1_1,
  MR_Word mdb__declarative_user__HeadVar__2_2,
  MR_Word mdb__declarative_user__HeadVar__3_3)
{
  {
    MR_Integer mdb__declarative_user__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;
    MR_Integer mdb__declarative_user__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_user__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__Cast_HeadVar1_4, mdb__declarative_user__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__declarative_user____Unify____user_search_mode_0_0(
  MR_Word mdb__declarative_user__HeadVar__2_1,
  MR_Word mdb__declarative_user__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__HeadVar__2_1 == mdb__declarative_user__HeadVar__2_2);

    return mdb__declarative_user__succeeded;
  }
}

void MR_CALL 
mdb__declarative_user____Compare____user_response_1_0(
  MR_Word mdb__declarative_user__TypeInfo_for_T_119,
  MR_Word * mdb__declarative_user__HeadVar__1_1,
  MR_Word mdb__declarative_user__HeadVar__2_2,
  MR_Word mdb__declarative_user__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Integer mdb__declarative_user__CastX_117 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;
    MR_Integer mdb__declarative_user__CastY_118 = (MR_Integer) mdb__declarative_user__HeadVar__3_3;

    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_117 == mdb__declarative_user__CastY_118);
    if (mdb__declarative_user__succeeded)
      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__declarative_user__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_user__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_user__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_user__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdb__declarative_user__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_user__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__declarative_user__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mdb__declarative_user__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_user__Var_8;

                  mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_119, &mdb__declarative_user__Var_8, mdb__declarative_user__Var_131, mdb__declarative_user__ArgY1_5);
                  mdb__declarative_user__succeeded = (mdb__declarative_user__Var_8 == (MR_Integer) 0);
                  mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
                  if (mdb__declarative_user__succeeded)
                    *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__Var_8;
                  else
                    mdb__declarative_debugger____Compare____decl_answer_1_0(mdb__declarative_user__TypeInfo_for_T_119, mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__Var_130, mdb__declarative_user__ArgY2_7);
                }
                break;
              case (MR_Integer) 2:
                *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_user__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_user__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mdb__declarative_user__ArgY1_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));

                  mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_119, mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__Var_136, mdb__declarative_user__ArgY1_32);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdb__declarative_user__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdb__declarative_user__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word mdb__declarative_user__ArgY1_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));

                          mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_119, mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__Var_135, mdb__declarative_user__ArgY1_49);
                        }
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mdb__declarative_user__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdb__declarative_user__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word mdb__declarative_user__ArgY1_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));

                          mercury__io____Compare____output_stream_0_0(mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__Var_134, mdb__declarative_user__ArgY1_66);
                        }
                        break;
                      case (MR_Integer) 2:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mdb__declarative_user__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdb__declarative_user__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word mdb__declarative_user__ArgY1_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mdb__declarative_user__Var_137 = (MR_Integer) mdb__declarative_user__Var_132;
                          MR_Integer mdb__declarative_user__Var_138 = (MR_Integer) mdb__declarative_user__ArgY1_83;

                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__Var_137, mdb__declarative_user__Var_138);
                        }
                        break;
                      case (MR_Integer) 3:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Box mdb__declarative_user__Var_133 = (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdb__declarative_user__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Box mdb__declarative_user__ArgY1_108 = (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1));

                          mercury__builtin__compare_3_p_0(mdb__declarative_user__TypeInfo_for_T_119, mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__Var_133, mdb__declarative_user__ArgY1_108);
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
  MR_Word mdb__declarative_user__TypeInfo_for_T_23,
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word mdb__declarative_user__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Integer mdb__declarative_user__CastX_21 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
    MR_Integer mdb__declarative_user__CastY_22 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_21 == mdb__declarative_user__CastY_22);
    if (mdb__declarative_user__succeeded)
      mdb__declarative_user__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__declarative_user__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__declarative_user__CastX_15 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
                MR_Integer mdb__declarative_user__CastY_16 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_16 == mdb__declarative_user__CastX_15);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__declarative_user__CastX_19 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
                MR_Integer mdb__declarative_user__CastY_20 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_20 == mdb__declarative_user__CastX_19);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_user__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_user__ArgY1_4;
            MR_Word mdb__declarative_user__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_user__ArgY2_6;

            mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_user__succeeded)
            {
              mdb__declarative_user__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
              mdb__declarative_user__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
              mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_23, mdb__declarative_user__ArgX1_3, mdb__declarative_user__ArgY1_4);
              if (mdb__declarative_user__succeeded)
                mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_answer_1_0(mdb__declarative_user__TypeInfo_for_T_23, mdb__declarative_user__ArgX2_5, mdb__declarative_user__ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_user__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_user__ArgY1_8;

            mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_user__succeeded)
            {
              mdb__declarative_user__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
              mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_23, mdb__declarative_user__ArgX1_7, mdb__declarative_user__ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdb__declarative_user__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__declarative_user__ArgY1_10;

                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mdb__declarative_user__succeeded)
                {
                  mdb__declarative_user__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
                  mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_23, mdb__declarative_user__ArgX1_9, mdb__declarative_user__ArgY1_10);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mdb__declarative_user__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__declarative_user__ArgY1_12;

                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mdb__declarative_user__succeeded)
                {
                  mdb__declarative_user__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
                  mdb__declarative_user__succeeded = mercury__io____Unify____output_stream_0_0(mdb__declarative_user__ArgX1_11, mdb__declarative_user__ArgY1_12);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mdb__declarative_user__ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__declarative_user__ArgY1_14;

                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mdb__declarative_user__succeeded)
                {
                  mdb__declarative_user__ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
                  mdb__declarative_user__succeeded = (mdb__declarative_user__ArgX1_13 == mdb__declarative_user__ArgY1_14);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Box mdb__declarative_user__ArgX1_17 = (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__declarative_user__ArgY1_18;

                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (mdb__declarative_user__succeeded)
                {
                  mdb__declarative_user__ArgY1_18 = (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1));
                  mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_for_T_23, mdb__declarative_user__ArgX1_17, mdb__declarative_user__ArgY1_18);
                }
              }
              break;
          }
          break;
      }
    return mdb__declarative_user__succeeded;
  }
}

void MR_CALL 
mdb__declarative_user____Compare____user_question_1_0(
  MR_Word mdb__declarative_user__TypeInfo_for_T_19,
  MR_Word * mdb__declarative_user__HeadVar__1_1,
  MR_Word mdb__declarative_user__HeadVar__2_2,
  MR_Word mdb__declarative_user__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Integer mdb__declarative_user__CastX_17 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;
    MR_Integer mdb__declarative_user__CastY_18 = (MR_Integer) mdb__declarative_user__HeadVar__3_3;

    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_17 == mdb__declarative_user__CastY_18);
    if (mdb__declarative_user__succeeded)
      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word mdb__declarative_user__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdb__declarative_user__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));

        mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_19, mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__Var_25, mdb__declarative_user__ArgY1_5);
      }
      else
        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word mdb__declarative_user__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word mdb__declarative_user__ArgY1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__declarative_user__ArgY2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__declarative_user__Var_16;

        mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_19, &mdb__declarative_user__Var_16, mdb__declarative_user__Var_27, mdb__declarative_user__ArgY1_13);
        mdb__declarative_user__succeeded = (mdb__declarative_user__Var_16 == (MR_Integer) 0);
        mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
        if (mdb__declarative_user__succeeded)
          *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__Var_16;
        else
        {
          MR_Integer mdb__declarative_user__Var_28 = (MR_Integer) mdb__declarative_user__Var_26;
          MR_Integer mdb__declarative_user__Var_29 = (MR_Integer) mdb__declarative_user__ArgY2_15;

          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__Var_28, mdb__declarative_user__Var_29);
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_user____Unify____user_question_1_0(
  MR_Word mdb__declarative_user__TypeInfo_for_T_11,
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word mdb__declarative_user__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Integer mdb__declarative_user__CastX_9 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
    MR_Integer mdb__declarative_user__CastY_10 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_9 == mdb__declarative_user__CastY_10);
    if (mdb__declarative_user__succeeded)
      mdb__declarative_user__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word mdb__declarative_user__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__ArgY1_4;

      mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (mdb__declarative_user__succeeded)
      {
        mdb__declarative_user__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
        mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_11, mdb__declarative_user__ArgX1_3, mdb__declarative_user__ArgY1_4);
      }
    }
    else
    {
      MR_Word mdb__declarative_user__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__ArgY1_6;
      MR_Word mdb__declarative_user__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__ArgY2_8;

      mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (mdb__declarative_user__succeeded)
      {
        mdb__declarative_user__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
        mdb__declarative_user__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
        mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_11, mdb__declarative_user__ArgX1_5, mdb__declarative_user__ArgY1_6);
        if (mdb__declarative_user__succeeded)
          mdb__declarative_user__succeeded = (mdb__declarative_user__ArgX2_7 == mdb__declarative_user__ArgY2_8);
      }
    }
    return mdb__declarative_user__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user____Compare____user_command_0_0(
  MR_Word * mdb__declarative_user__HeadVar__1_1,
  MR_Word mdb__declarative_user__HeadVar__2_2,
  MR_Word mdb__declarative_user__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Integer mdb__declarative_user__CastX_29 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;
    MR_Integer mdb__declarative_user__CastY_30 = (MR_Integer) mdb__declarative_user__HeadVar__3_3;

    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_29 == mdb__declarative_user__CastY_30);
    if (mdb__declarative_user__succeeded)
      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer mdb__declarative_user__Var_4;
      MR_Integer mdb__declarative_user__Var_5;

      mdb__declarative_user____Index____user_command_0_0(mdb__declarative_user__HeadVar__2_2, &mdb__declarative_user__Var_4);
      mdb__declarative_user____Index____user_command_0_0(mdb__declarative_user__HeadVar__3_3, &mdb__declarative_user__Var_5);
      mdb__declarative_user__succeeded = (mdb__declarative_user__Var_4 < mdb__declarative_user__Var_5);
      if (mdb__declarative_user__succeeded)
        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        mdb__declarative_user__succeeded = (mdb__declarative_user__Var_4 > mdb__declarative_user__Var_5);
        if (mdb__declarative_user__succeeded)
          *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Word mdb__declarative_user__Var_6;

          switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(mdb__declarative_user__HeadVar__2_2)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mdb__declarative_user__Var_6 = (MR_Integer) 0;
                    mdb__declarative_user__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mdb__declarative_user__Var_6 = (MR_Integer) 0;
                    mdb__declarative_user__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mdb__declarative_user__Var_6 = (MR_Integer) 0;
                    mdb__declarative_user__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mdb__declarative_user__Var_6 = (MR_Integer) 0;
                    mdb__declarative_user__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mdb__declarative_user__Var_6 = (MR_Integer) 0;
                    mdb__declarative_user__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mdb__declarative_user__Var_6 = (MR_Integer) 0;
                    mdb__declarative_user__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    mdb__declarative_user__Var_6 = (MR_Integer) 0;
                    mdb__declarative_user__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    mdb__declarative_user__Var_6 = (MR_Integer) 0;
                    mdb__declarative_user__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    mdb__declarative_user__Var_6 = (MR_Integer) 0;
                    mdb__declarative_user__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    mdb__declarative_user__Var_6 = (MR_Integer) 0;
                    mdb__declarative_user__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    mdb__declarative_user__Var_6 = (MR_Integer) 0;
                    mdb__declarative_user__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 11:
                  {
                    mdb__declarative_user__Var_6 = (MR_Integer) 0;
                    mdb__declarative_user__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 12:
                  {
                    mdb__declarative_user__Var_6 = (MR_Integer) 0;
                    mdb__declarative_user__succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mdb__declarative_user__TypeInfo_31_31;
                MR_Word mdb__declarative_user__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word mdb__declarative_user__ArgY1_8;

                mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                if (mdb__declarative_user__succeeded)
                {
                  mdb__declarative_user__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));
                  mdb__declarative_user__TypeInfo_31_31 = (MR_Word) &mdb__declarative_user_scalar_common_1[0];
                  mercury__builtin__compare_3_p_0(mdb__declarative_user__TypeInfo_31_31, &mdb__declarative_user__Var_6, ((MR_Box) (mdb__declarative_user__ArgX1_7)), ((MR_Box) (mdb__declarative_user__ArgY1_8)));
                  mdb__declarative_user__succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mdb__declarative_user__TypeInfo_32_32;
                MR_Word mdb__declarative_user__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word mdb__declarative_user__ArgY1_10;

                mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
                if (mdb__declarative_user__succeeded)
                {
                  mdb__declarative_user__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));
                  mdb__declarative_user__TypeInfo_32_32 = (MR_Word) &mdb__declarative_user_scalar_common_1[0];
                  mercury__builtin__compare_3_p_0(mdb__declarative_user__TypeInfo_32_32, &mdb__declarative_user__Var_6, ((MR_Box) (mdb__declarative_user__ArgX1_9)), ((MR_Box) (mdb__declarative_user__ArgY1_10)));
                  mdb__declarative_user__succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer mdb__declarative_user__ArgX1_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
                    MR_Integer mdb__declarative_user__ArgY1_12;

                    mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (mdb__declarative_user__succeeded)
                    {
                      mdb__declarative_user__ArgY1_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__Var_6, mdb__declarative_user__ArgX1_11, mdb__declarative_user__ArgY1_12);
                      mdb__declarative_user__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer mdb__declarative_user__ArgX1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
                    MR_Integer mdb__declarative_user__ArgY1_14;
                    MR_Integer mdb__declarative_user__ArgX2_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Integer mdb__declarative_user__ArgY2_16;
                    MR_Word mdb__declarative_user__Var_17;

                    mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (mdb__declarative_user__succeeded)
                    {
                      mdb__declarative_user__ArgY1_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
                      mdb__declarative_user__ArgY2_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 2)));
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__Var_17, mdb__declarative_user__ArgX1_13, mdb__declarative_user__ArgY1_14);
                      mdb__declarative_user__succeeded = (mdb__declarative_user__Var_17 == (MR_Integer) 0);
                      mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
                      if (mdb__declarative_user__succeeded)
                        mdb__declarative_user__Var_6 = mdb__declarative_user__Var_17;
                      else
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__Var_6, mdb__declarative_user__ArgX2_15, mdb__declarative_user__ArgY2_16);
                      mdb__declarative_user__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Integer mdb__declarative_user__ArgX1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
                    MR_Integer mdb__declarative_user__ArgY1_19;
                    MR_Integer mdb__declarative_user__ArgX2_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Integer mdb__declarative_user__ArgY2_21;
                    MR_Word mdb__declarative_user__Var_22;

                    mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (mdb__declarative_user__succeeded)
                    {
                      mdb__declarative_user__ArgY1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
                      mdb__declarative_user__ArgY2_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 2)));
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__Var_22, mdb__declarative_user__ArgX1_18, mdb__declarative_user__ArgY1_19);
                      mdb__declarative_user__succeeded = (mdb__declarative_user__Var_22 == (MR_Integer) 0);
                      mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
                      if (mdb__declarative_user__succeeded)
                        mdb__declarative_user__Var_6 = mdb__declarative_user__Var_22;
                      else
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__Var_6, mdb__declarative_user__ArgX2_20, mdb__declarative_user__ArgY2_21);
                      mdb__declarative_user__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word mdb__declarative_user__ArgX1_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word mdb__declarative_user__ArgY1_24;

                    mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (mdb__declarative_user__succeeded)
                    {
                      mdb__declarative_user__ArgY1_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
                      mdb__browser_info____Compare____param_cmd_0_0(&mdb__declarative_user__Var_6, mdb__declarative_user__ArgX1_23, mdb__declarative_user__ArgY1_24);
                      mdb__declarative_user__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word mdb__declarative_user__ArgX1_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word mdb__declarative_user__ArgY1_26;
                    MR_Integer mdb__declarative_user__Var_41;
                    MR_Integer mdb__declarative_user__Var_42;

                    mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (mdb__declarative_user__succeeded)
                    {
                      mdb__declarative_user__ArgY1_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
                      mdb__declarative_user__Var_41 = (MR_Integer) mdb__declarative_user__ArgX1_25;
                      mdb__declarative_user__Var_42 = (MR_Integer) mdb__declarative_user__ArgY1_26;
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__Var_6, mdb__declarative_user__Var_41, mdb__declarative_user__Var_42);
                      mdb__declarative_user__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word mdb__declarative_user__TypeInfo_40_40;
                    MR_Word mdb__declarative_user__ArgX1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word mdb__declarative_user__ArgY1_28;

                    mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (mdb__declarative_user__succeeded)
                    {
                      mdb__declarative_user__ArgY1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
                      mdb__declarative_user__TypeInfo_40_40 = (MR_Word) &mdb__declarative_user_scalar_common_1[1];
                      mercury__builtin__compare_3_p_0(mdb__declarative_user__TypeInfo_40_40, &mdb__declarative_user__Var_6, ((MR_Box) (mdb__declarative_user__ArgX1_27)), ((MR_Box) (mdb__declarative_user__ArgY1_28)));
                      mdb__declarative_user__succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
          if (mdb__declarative_user__succeeded)
            *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__Var_6;
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
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Integer * mdb__declarative_user__HeadVar__2_2)
{
  switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(mdb__declarative_user__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 2;
          break;
        case (MR_Integer) 3:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 4:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 5:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 6:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 7:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 8:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 9:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 10:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 11:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 19;
          break;
        case (MR_Integer) 12:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 20;
          break;
      }
      break;
    case (MR_Integer) 1:
      *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 4;
      break;
    case (MR_Integer) 2:
      *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 5;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 1:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 2:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 3:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 4:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 5:
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 18;
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_command_0_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word mdb__declarative_user__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Integer mdb__declarative_user__CastX_49 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
    MR_Integer mdb__declarative_user__CastY_50 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_49 == mdb__declarative_user__CastY_50);
    if (mdb__declarative_user__succeeded)
      mdb__declarative_user__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__declarative_user__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__declarative_user__CastX_3 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
                MR_Integer mdb__declarative_user__CastY_4 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_4 == mdb__declarative_user__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__declarative_user__CastX_5 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
                MR_Integer mdb__declarative_user__CastY_6 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_6 == mdb__declarative_user__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mdb__declarative_user__CastX_7 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
                MR_Integer mdb__declarative_user__CastY_8 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_8 == mdb__declarative_user__CastX_7);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer mdb__declarative_user__CastX_9 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
                MR_Integer mdb__declarative_user__CastY_10 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_10 == mdb__declarative_user__CastX_9);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer mdb__declarative_user__CastX_25 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
                MR_Integer mdb__declarative_user__CastY_26 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_26 == mdb__declarative_user__CastX_25);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer mdb__declarative_user__CastX_29 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
                MR_Integer mdb__declarative_user__CastY_30 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_30 == mdb__declarative_user__CastX_29);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer mdb__declarative_user__CastX_31 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
                MR_Integer mdb__declarative_user__CastY_32 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_32 == mdb__declarative_user__CastX_31);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer mdb__declarative_user__CastX_33 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
                MR_Integer mdb__declarative_user__CastY_34 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_34 == mdb__declarative_user__CastX_33);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer mdb__declarative_user__CastX_35 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
                MR_Integer mdb__declarative_user__CastY_36 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_36 == mdb__declarative_user__CastX_35);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Integer mdb__declarative_user__CastX_37 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
                MR_Integer mdb__declarative_user__CastY_38 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_38 == mdb__declarative_user__CastX_37);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer mdb__declarative_user__CastX_41 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
                MR_Integer mdb__declarative_user__CastY_42 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_42 == mdb__declarative_user__CastX_41);
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Integer mdb__declarative_user__CastX_45 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
                MR_Integer mdb__declarative_user__CastY_46 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_46 == mdb__declarative_user__CastX_45);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Integer mdb__declarative_user__CastX_47 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
                MR_Integer mdb__declarative_user__CastY_48 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_48 == mdb__declarative_user__CastX_47);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_user__TypeInfo_51_51;
            MR_Word mdb__declarative_user__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_user__ArgY1_12;

            mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_user__succeeded)
            {
              mdb__declarative_user__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
              mdb__declarative_user__TypeInfo_51_51 = (MR_Word) &mdb__declarative_user_scalar_common_1[0];
              mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_51_51, ((MR_Box) (mdb__declarative_user__ArgX1_11)), ((MR_Box) (mdb__declarative_user__ArgY1_12)));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_user__TypeInfo_52_52;
            MR_Word mdb__declarative_user__ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_user__ArgY1_14;

            mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_user__succeeded)
            {
              mdb__declarative_user__ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
              mdb__declarative_user__TypeInfo_52_52 = (MR_Word) &mdb__declarative_user_scalar_common_1[0];
              mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_52_52, ((MR_Box) (mdb__declarative_user__ArgX1_13)), ((MR_Box) (mdb__declarative_user__ArgY1_14)));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__declarative_user__ArgX1_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mdb__declarative_user__ArgY1_16;

                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mdb__declarative_user__succeeded)
                {
                  mdb__declarative_user__ArgY1_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
                  mdb__declarative_user__succeeded = (mdb__declarative_user__ArgX1_15 == mdb__declarative_user__ArgY1_16);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__declarative_user__ArgX1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mdb__declarative_user__ArgY1_18;
                MR_Integer mdb__declarative_user__ArgX2_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer mdb__declarative_user__ArgY2_20;

                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mdb__declarative_user__succeeded)
                {
                  mdb__declarative_user__ArgY1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
                  mdb__declarative_user__ArgY2_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
                  mdb__declarative_user__succeeded = (mdb__declarative_user__ArgX1_17 == mdb__declarative_user__ArgY1_18);
                  if (mdb__declarative_user__succeeded)
                    mdb__declarative_user__succeeded = (mdb__declarative_user__ArgX2_19 == mdb__declarative_user__ArgY2_20);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mdb__declarative_user__ArgX1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mdb__declarative_user__ArgY1_22;
                MR_Integer mdb__declarative_user__ArgX2_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer mdb__declarative_user__ArgY2_24;

                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mdb__declarative_user__succeeded)
                {
                  mdb__declarative_user__ArgY1_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
                  mdb__declarative_user__ArgY2_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
                  mdb__declarative_user__succeeded = (mdb__declarative_user__ArgX1_21 == mdb__declarative_user__ArgY1_22);
                  if (mdb__declarative_user__succeeded)
                    mdb__declarative_user__succeeded = (mdb__declarative_user__ArgX2_23 == mdb__declarative_user__ArgY2_24);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word mdb__declarative_user__ArgX1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__declarative_user__ArgY1_28;

                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (mdb__declarative_user__succeeded)
                {
                  mdb__declarative_user__ArgY1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
                  mdb__declarative_user__succeeded = mdb__browser_info____Unify____param_cmd_0_0(mdb__declarative_user__ArgX1_27, mdb__declarative_user__ArgY1_28);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word mdb__declarative_user__ArgX1_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__declarative_user__ArgY1_40;

                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (mdb__declarative_user__succeeded)
                {
                  mdb__declarative_user__ArgY1_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
                  mdb__declarative_user__succeeded = (mdb__declarative_user__ArgX1_39 == mdb__declarative_user__ArgY1_40);
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word mdb__declarative_user__TypeInfo_53_53;
                MR_Word mdb__declarative_user__ArgX1_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__declarative_user__ArgY1_44;

                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (mdb__declarative_user__succeeded)
                {
                  mdb__declarative_user__ArgY1_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
                  mdb__declarative_user__TypeInfo_53_53 = (MR_Word) &mdb__declarative_user_scalar_common_1[1];
                  mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_53_53, ((MR_Box) (mdb__declarative_user__ArgX1_43)), ((MR_Box) (mdb__declarative_user__ArgY1_44)));
                }
              }
              break;
          }
          break;
      }
    return mdb__declarative_user__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user__trace_atom_arg_to_univ_2_p_0(
  MR_Word mdb__declarative_user__TraceAtomArg_3,
  MR_Word * mdb__declarative_user__Univ_4)
{
  {
    MR_Word mdb__declarative_user__MaybeUniv_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__TraceAtomArg_3, (MR_Integer) 2)));
    MR_Word mdb__declarative_user__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__TraceAtomArg_3, (MR_Integer) 0)));
    MR_Integer mdb__declarative_user__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__TraceAtomArg_3, (MR_Integer) 1)));

    if ((mdb__declarative_user__MaybeUniv_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__private_builtin__dummy_var = (MR_Integer) 0;
      *mdb__declarative_user__Univ_4 = mercury__univ__univ_1_f_1((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_unbound_0, ((MR_Box) ((MR_Integer) 0)));
    }
    else
    {
      MR_Word mdb__declarative_user__Rep_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeUniv_5, (MR_Integer) 0)));

      mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__Rep_6, mdb__declarative_user__Univ_4);
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__is_dash_1_p_0(
  MR_Char mdb__declarative_user__HeadVar__1_1)
{
  {
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__HeadVar__1_1 == (MR_Char) 45);

    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__help_cmd_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;

    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[22]);
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    else
    {
      MR_String mdb__declarative_user__Cmd_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__Var_6;

      mdb__declarative_user__succeeded = (mdb__declarative_user__Var_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (mdb__declarative_user__succeeded)
      {
        {
          mdb__declarative_user__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_6, 0) = ((MR_Box) (mdb__declarative_user__Cmd_4));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mdb__declarative_user__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__Var_6));
        }
        mdb__declarative_user__succeeded = MR_TRUE;
      }
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__search_mode_cmd_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mdb__declarative_user__Var_36;
    MR_String mdb__declarative_user__Var_37;
    MR_Integer mdb__declarative_user__slot_0;
    MR_String mdb__declarative_user__str_1;

    if (mdb__declarative_user__succeeded)
    {
      mdb__declarative_user__Var_37 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
      mdb__declarative_user__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
      mdb__declarative_user__succeeded = (mdb__declarative_user__Var_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (mdb__declarative_user__succeeded)
      {
        /* hashed string simple lookup switch */
        /* compute the hash value of the input string */
        mdb__declarative_user__slot_0 = ((MR_hash_string6(mdb__declarative_user__Var_37)) & (MR_Integer) 63);
        /* no collisions; no hash chain loop */
        /* lookup the string for this hash slot */
        mdb__declarative_user__str_1 = ((&mdb__declarative_user_vector_common_11[0 + mdb__declarative_user__slot_0]))->mdb__declarative_user__vector_common_type_11_0__vct_11_f_0;
        /* did we find a match? */
        if ((((mdb__declarative_user__str_1 != NULL)) && ((strcmp(mdb__declarative_user__str_1, mdb__declarative_user__Var_37) == 0))))
        {
          /* we found a match; look up the results */
          *mdb__declarative_user__HeadVar__2_2 = ((&mdb__declarative_user_vector_common_11[0 + mdb__declarative_user__slot_0]))->mdb__declarative_user__vector_common_type_11_0__vct_11_f_1;
          mdb__declarative_user__succeeded = MR_TRUE;
          /* jump out of search loop */
          goto label_0;
        }
        mdb__declarative_user__succeeded = MR_FALSE;
      label_0:;
      }
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__trust_arg_cmd_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;

    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    else
    {
      MR_String mdb__declarative_user__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));

      mdb__declarative_user__succeeded = (strcmp(mdb__declarative_user__Var_3, (MR_String) "module") == 0);
      if (mdb__declarative_user__succeeded)
      {
        mdb__declarative_user__succeeded = (mdb__declarative_user__Var_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mdb__declarative_user__succeeded)
        {
          *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
          mdb__declarative_user__succeeded = MR_TRUE;
        }
      }
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__num_io_actions_cmd_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_String mdb__declarative_user__Arg_3;
    MR_Integer mdb__declarative_user__N_4;
    MR_Word mdb__declarative_user__Var_5;
    MR_Word mdb__declarative_user__Var_6;

    if (mdb__declarative_user__succeeded)
    {
      mdb__declarative_user__Arg_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
      mdb__declarative_user__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
      mdb__declarative_user__succeeded = (mdb__declarative_user__Var_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (mdb__declarative_user__succeeded)
      {
        mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__Arg_3, &mdb__declarative_user__N_4);
        if (mdb__declarative_user__succeeded)
        {
          {
            mdb__declarative_user__Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), mdb__declarative_user__Var_6, 0) = ((MR_Box) (mdb__declarative_user__N_4));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mdb__declarative_user__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__Var_6));
          }
          mdb__declarative_user__succeeded = MR_TRUE;
        }
      }
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__format_param_arg_cmd_3_p_0(
  MR_String mdb__declarative_user__Cmd_4,
  MR_Word mdb__declarative_user__ArgWords0_5,
  MR_Word * mdb__declarative_user__Command_6)
{
  {
    MR_bool mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__ArgWords0_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mdb__declarative_user__Setting_15;
    MR_Word mdb__declarative_user__MaybeOptionTable_17;
    MR_Word mdb__declarative_user__Var_29;
    MR_Word mdb__declarative_user__ArgWords1_7;
    MR_String mdb__declarative_user__Var_18;

    if (mdb__declarative_user__succeeded)
    {
      mdb__declarative_user__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords0_5, (MR_Integer) 0)));
      mdb__declarative_user__ArgWords1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords0_5, (MR_Integer) 1)));
      mdb__declarative_user__succeeded = (strcmp(mdb__declarative_user__Var_18, (MR_String) "io") == 0);
    }
    if (mdb__declarative_user__succeeded)
    {
      MR_Word mdb__declarative_user__TypeCtorInfo_30_30;
      MR_Word mdb__declarative_user__TypeCtorInfo_31_31;
      MR_Word mdb__declarative_user__ParsedCommand_12;
      MR_Word mdb__declarative_user__FormatCmd_13;
      MR_Word mdb__declarative_user__MaybeOptionTable0_14;
      MR_Word mdb__declarative_user__Var_19;
      MR_Word mdb__declarative_user__STATE_VARIABLE_OptionTable_20_20;
      MR_Word mdb__declarative_user__Var_21;
      MR_Word mdb__declarative_user__Var_22;
      MR_Word mdb__declarative_user__STATE_VARIABLE_OptionTable_23_23;
      MR_Word mdb__declarative_user__Var_24;
      MR_Word mdb__declarative_user__Var_25;
      MR_Word mdb__declarative_user__Var_26;
      MR_Word mdb__declarative_user__STATE_VARIABLE_OptionTable_27_27;
      MR_Word mdb__declarative_user__Var_28;
      MR_String mdb__declarative_user__Var_10;
      MR_Word mdb__declarative_user__Var_11;

      mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__ArgWords1_7)) == (MR_mktag((MR_Integer) 1)));
      if (mdb__declarative_user__succeeded)
      {
        mdb__declarative_user__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords1_7, (MR_Integer) 0)));
        mdb__declarative_user__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords1_7, (MR_Integer) 1)));
        {
          mdb__declarative_user__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_19, 0) = ((MR_Box) (mdb__declarative_user__Cmd_4));
          MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_19, 1) = ((MR_Box) (mdb__declarative_user__ArgWords1_7));
        }
        mdb__declarative_user__succeeded = mdb__parse__parse_2_p_0(mdb__declarative_user__Var_19, &mdb__declarative_user__ParsedCommand_12);
        if (mdb__declarative_user__succeeded)
        {
          mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__ParsedCommand_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__ParsedCommand_12, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (mdb__declarative_user__succeeded)
          {
            mdb__declarative_user__FormatCmd_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__ParsedCommand_12, (MR_Integer) 1)));
            mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__FormatCmd_13)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_user__succeeded)
            {
              mdb__declarative_user__MaybeOptionTable0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__FormatCmd_13, (MR_Integer) 0)));
              mdb__declarative_user__Setting_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__FormatCmd_13, (MR_Integer) 1)));
              mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__MaybeOptionTable0_14)) == (MR_mktag((MR_Integer) 0)));
              if (mdb__declarative_user__succeeded)
              {
                mdb__declarative_user__STATE_VARIABLE_OptionTable_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__MaybeOptionTable0_14, (MR_Integer) 0)));
                mdb__declarative_user__Var_21 = (MR_Integer) 0;
                mdb__declarative_user__Var_24 = (MR_Integer) 0;
                mdb__declarative_user__TypeCtorInfo_30_30 = (MR_Word) &mdb__parse__mdb__parse__type_ctor_info_setting_option_0;
                mdb__declarative_user__TypeCtorInfo_31_31 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
                mdb__declarative_user__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_10[1]);
                mercury__map__det_update_4_p_0(mdb__declarative_user__TypeCtorInfo_30_30, mdb__declarative_user__TypeCtorInfo_31_31, ((MR_Box) (mdb__declarative_user__Var_21)), ((MR_Box) (mdb__declarative_user__Var_22)), mdb__declarative_user__STATE_VARIABLE_OptionTable_20_20, &mdb__declarative_user__STATE_VARIABLE_OptionTable_23_23);
                mdb__declarative_user__Var_25 = (MR_Integer) 2;
                mdb__declarative_user__Var_28 = (MR_Integer) 1;
                mdb__declarative_user__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_10[2]);
                mercury__map__det_update_4_p_0(mdb__declarative_user__TypeCtorInfo_30_30, mdb__declarative_user__TypeCtorInfo_31_31, ((MR_Box) (mdb__declarative_user__Var_25)), ((MR_Box) (mdb__declarative_user__Var_26)), mdb__declarative_user__STATE_VARIABLE_OptionTable_23_23, &mdb__declarative_user__STATE_VARIABLE_OptionTable_27_27);
                {
                  mdb__declarative_user__MaybeOptionTable_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__MaybeOptionTable_17, 0) = ((MR_Box) (mdb__declarative_user__STATE_VARIABLE_OptionTable_27_27));
                }
                mdb__declarative_user__succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
    else
    {
      MR_Word mdb__declarative_user__ParsedCommand_39;
      MR_Word mdb__declarative_user__FormatCmd_40;
      MR_Word mdb__declarative_user__Var_42;
      MR_String mdb__declarative_user__Var_32;
      MR_Word mdb__declarative_user__Var_33;

      mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__ArgWords0_5)) == (MR_mktag((MR_Integer) 1)));
      if (mdb__declarative_user__succeeded)
      {
        mdb__declarative_user__Var_32 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords0_5, (MR_Integer) 0)));
        mdb__declarative_user__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords0_5, (MR_Integer) 1)));
        {
          mdb__declarative_user__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_42, 0) = ((MR_Box) (mdb__declarative_user__Cmd_4));
          MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_42, 1) = ((MR_Box) (mdb__declarative_user__ArgWords0_5));
        }
        mdb__declarative_user__succeeded = mdb__parse__parse_2_p_0(mdb__declarative_user__Var_42, &mdb__declarative_user__ParsedCommand_39);
        if (mdb__declarative_user__succeeded)
        {
          mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__ParsedCommand_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__ParsedCommand_39, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (mdb__declarative_user__succeeded)
          {
            mdb__declarative_user__FormatCmd_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__ParsedCommand_39, (MR_Integer) 1)));
            mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__FormatCmd_40)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_user__succeeded)
            {
              mdb__declarative_user__MaybeOptionTable_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__FormatCmd_40, (MR_Integer) 0)));
              mdb__declarative_user__Setting_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__FormatCmd_40, (MR_Integer) 1)));
            }
          }
        }
      }
    }
    if (mdb__declarative_user__succeeded)
    {
      {
        mdb__declarative_user__Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), mdb__declarative_user__Var_29, 0) = ((MR_Box) (mdb__declarative_user__MaybeOptionTable_17));
        MR_hl_field(MR_mktag(2), mdb__declarative_user__Var_29, 1) = ((MR_Box) (mdb__declarative_user__Setting_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mdb__declarative_user__Command_6 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__Var_29));
      }
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__format_arg_cmd_2_p_0(
  MR_Word mdb__declarative_user__ArgWords_3,
  MR_Word * mdb__declarative_user__UserCommand_4)
{
  {
    MR_bool mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__ArgWords_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mdb__declarative_user__Command_7;
    MR_Word mdb__declarative_user__FormatCmd_8;
    MR_Word mdb__declarative_user__Var_11;
    MR_String mdb__declarative_user__Var_12;
    MR_String mdb__declarative_user__Var_5;
    MR_Word mdb__declarative_user__Var_6;
    MR_Word mdb__declarative_user__MaybeOptionTable_9;
    MR_Word mdb__declarative_user__Setting_10;

    if (mdb__declarative_user__succeeded)
    {
      mdb__declarative_user__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords_3, (MR_Integer) 0)));
      mdb__declarative_user__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords_3, (MR_Integer) 1)));
      mdb__declarative_user__Var_12 = (MR_String) "format";
      {
        mdb__declarative_user__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_11, 0) = ((MR_Box) (mdb__declarative_user__Var_12));
        MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_11, 1) = ((MR_Box) (mdb__declarative_user__ArgWords_3));
      }
      mdb__declarative_user__succeeded = mdb__parse__parse_2_p_0(mdb__declarative_user__Var_11, &mdb__declarative_user__Command_7);
      if (mdb__declarative_user__succeeded)
      {
        mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__Command_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Command_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (mdb__declarative_user__succeeded)
        {
          mdb__declarative_user__FormatCmd_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Command_7, (MR_Integer) 1)));
          mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__FormatCmd_8)) == (MR_mktag((MR_Integer) 1)));
          if (mdb__declarative_user__succeeded)
          {
            mdb__declarative_user__MaybeOptionTable_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__FormatCmd_8, (MR_Integer) 0)));
            mdb__declarative_user__Setting_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__FormatCmd_8, (MR_Integer) 1)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mdb__declarative_user__UserCommand_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__FormatCmd_8));
            }
            mdb__declarative_user__succeeded = MR_TRUE;
          }
        }
      }
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0_2(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

    mdb__declarative_user__succeeded = mdb__declarative_user__is_dash_1_p_0(((MR_Char) (MR_Word) mdb__declarative_user__wrapper_arg_1));
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0_1(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

    mdb__declarative_user__succeeded = mdb__declarative_user__is_dash_1_p_0(((MR_Char) (MR_Word) mdb__declarative_user__wrapper_arg_1));
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;

    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word mdb__declarative_user__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
      MR_String mdb__declarative_user__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));

      if ((mdb__declarative_user__Var_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mdb__declarative_user__From_4;
        MR_Integer mdb__declarative_user__To_5;
        MR_Integer mdb__declarative_user__Num_18;

        mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__Var_14, &mdb__declarative_user__Num_18);
        if (mdb__declarative_user__succeeded)
        {
          mdb__declarative_user__From_4 = mdb__declarative_user__Num_18;
          mdb__declarative_user__To_5 = mdb__declarative_user__Num_18;
          mdb__declarative_user__succeeded = MR_TRUE;
        }
        else
        {
          MR_Word mdb__declarative_user__TypeInfo_18_29;
          MR_String mdb__declarative_user__FirstStr_19;
          MR_String mdb__declarative_user__SecondStr_20;
          MR_Integer mdb__declarative_user__First_21;
          MR_Integer mdb__declarative_user__Second_22;
          MR_Word mdb__declarative_user__Var_23;
          MR_Word mdb__declarative_user__Var_24;
          MR_Word mdb__declarative_user__Var_28;

          mdb__declarative_user__Var_23 = mercury__string__words_separator_2_f_0((MR_Word) &mdb__declarative_user_scalar_common_5[16], mdb__declarative_user__Var_14);
          mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__Var_23)) == (MR_mktag((MR_Integer) 1)));
          if (mdb__declarative_user__succeeded)
          {
            mdb__declarative_user__FirstStr_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_23, (MR_Integer) 0)));
            mdb__declarative_user__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_23, (MR_Integer) 1)));
            mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__Var_24)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_user__succeeded)
            {
              mdb__declarative_user__SecondStr_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_24, (MR_Integer) 0)));
              mdb__declarative_user__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_24, (MR_Integer) 1)));
              mdb__declarative_user__TypeInfo_18_29 = (MR_Word) &mdb__declarative_user_scalar_common_1[12];
              mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_18_29, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (mdb__declarative_user__Var_28)));
              if (mdb__declarative_user__succeeded)
              {
                mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__FirstStr_19, &mdb__declarative_user__First_21);
                if (mdb__declarative_user__succeeded)
                {
                  mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__SecondStr_20, &mdb__declarative_user__Second_22);
                  if (mdb__declarative_user__succeeded)
                  {
                    mdb__declarative_user__succeeded = (mdb__declarative_user__First_21 <= mdb__declarative_user__Second_22);
                    if (mdb__declarative_user__succeeded)
                    {
                      mdb__declarative_user__From_4 = mdb__declarative_user__First_21;
                      mdb__declarative_user__To_5 = mdb__declarative_user__Second_22;
                    }
                    else
                    {
                      mdb__declarative_user__From_4 = mdb__declarative_user__Second_22;
                      mdb__declarative_user__To_5 = mdb__declarative_user__First_21;
                    }
                    mdb__declarative_user__succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        if (mdb__declarative_user__succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *mdb__declarative_user__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__From_4));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_user__To_5));
          }
          mdb__declarative_user__succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_String mdb__declarative_user__Arg_7;
        MR_Integer mdb__declarative_user__From_8;
        MR_Integer mdb__declarative_user__To_9;
        MR_Word mdb__declarative_user__Var_12;
        MR_Integer mdb__declarative_user__Num_33;

        mdb__declarative_user__succeeded = (strcmp(mdb__declarative_user__Var_14, (MR_String) "io") == 0);
        if (mdb__declarative_user__succeeded)
        {
          mdb__declarative_user__Arg_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_13, (MR_Integer) 0)));
          mdb__declarative_user__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_13, (MR_Integer) 1)));
          mdb__declarative_user__succeeded = (mdb__declarative_user__Var_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (mdb__declarative_user__succeeded)
          {
            mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__Arg_7, &mdb__declarative_user__Num_33);
            if (mdb__declarative_user__succeeded)
            {
              mdb__declarative_user__From_8 = mdb__declarative_user__Num_33;
              mdb__declarative_user__To_9 = mdb__declarative_user__Num_33;
              mdb__declarative_user__succeeded = MR_TRUE;
            }
            else
            {
              MR_Word mdb__declarative_user__TypeInfo_18_44;
              MR_String mdb__declarative_user__FirstStr_34;
              MR_String mdb__declarative_user__SecondStr_35;
              MR_Integer mdb__declarative_user__First_36;
              MR_Integer mdb__declarative_user__Second_37;
              MR_Word mdb__declarative_user__Var_38;
              MR_Word mdb__declarative_user__Var_39;
              MR_Word mdb__declarative_user__Var_43;

              mdb__declarative_user__Var_38 = mercury__string__words_separator_2_f_0((MR_Word) &mdb__declarative_user_scalar_common_5[17], mdb__declarative_user__Arg_7);
              mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__Var_38)) == (MR_mktag((MR_Integer) 1)));
              if (mdb__declarative_user__succeeded)
              {
                mdb__declarative_user__FirstStr_34 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_38, (MR_Integer) 0)));
                mdb__declarative_user__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_38, (MR_Integer) 1)));
                mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__Var_39)) == (MR_mktag((MR_Integer) 1)));
                if (mdb__declarative_user__succeeded)
                {
                  mdb__declarative_user__SecondStr_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_39, (MR_Integer) 0)));
                  mdb__declarative_user__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_39, (MR_Integer) 1)));
                  mdb__declarative_user__TypeInfo_18_44 = (MR_Word) &mdb__declarative_user_scalar_common_1[12];
                  mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_18_44, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (mdb__declarative_user__Var_43)));
                  if (mdb__declarative_user__succeeded)
                  {
                    mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__FirstStr_34, &mdb__declarative_user__First_36);
                    if (mdb__declarative_user__succeeded)
                    {
                      mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__SecondStr_35, &mdb__declarative_user__Second_37);
                      if (mdb__declarative_user__succeeded)
                      {
                        mdb__declarative_user__succeeded = (mdb__declarative_user__First_36 <= mdb__declarative_user__Second_37);
                        if (mdb__declarative_user__succeeded)
                        {
                          mdb__declarative_user__From_8 = mdb__declarative_user__First_36;
                          mdb__declarative_user__To_9 = mdb__declarative_user__Second_37;
                        }
                        else
                        {
                          mdb__declarative_user__From_8 = mdb__declarative_user__Second_37;
                          mdb__declarative_user__To_9 = mdb__declarative_user__First_36;
                        }
                        mdb__declarative_user__succeeded = MR_TRUE;
                      }
                    }
                  }
                }
              }
            }
            if (mdb__declarative_user__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_user__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__From_8));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_user__To_9));
              }
              mdb__declarative_user__succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__browse_arg_cmd_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;

    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_10[0]);
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word mdb__declarative_user__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
      MR_String mdb__declarative_user__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));

      if ((mdb__declarative_user__Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mdb__declarative_user__ArgNum_6;

        mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__Var_28, &mdb__declarative_user__ArgNum_6);
        if (mdb__declarative_user__succeeded)
        {
          MR_Word mdb__declarative_user__Var_8;

          {
            mdb__declarative_user__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_8, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_6));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdb__declarative_user__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Var_8));
          }
          mdb__declarative_user__succeeded = MR_TRUE;
        }
        else
        {
          MR_Word mdb__declarative_user__Var_9;

          if ((strcmp(mdb__declarative_user__Var_28, (MR_String) "-x") == 0))
            mdb__declarative_user__succeeded = MR_TRUE;
          else
          if ((strcmp(mdb__declarative_user__Var_28, (MR_String) "--xml") == 0))
            mdb__declarative_user__succeeded = MR_TRUE;
          else
            mdb__declarative_user__succeeded = MR_FALSE;
          if (mdb__declarative_user__succeeded)
          {
            mdb__declarative_user__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), &mdb__declarative_user_scalar_common_10[0]);
            mdb__declarative_user__succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        MR_Word mdb__declarative_user__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_27, (MR_Integer) 1)));
        MR_String mdb__declarative_user__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_27, (MR_Integer) 0)));

        mdb__declarative_user__succeeded = (mdb__declarative_user__Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mdb__declarative_user__succeeded)
        {
          if ((strcmp(mdb__declarative_user__Var_28, (MR_String) "-x") == 0))
          {
            MR_Integer mdb__declarative_user__ArgNum_11;
            MR_Word mdb__declarative_user__Var_15;

            mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__Var_30, &mdb__declarative_user__ArgNum_11);
            if (mdb__declarative_user__succeeded)
            {
              {
                mdb__declarative_user__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_15, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_user__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_user__Var_15));
              }
              mdb__declarative_user__succeeded = MR_TRUE;
            }
          }
          else
          if ((strcmp(mdb__declarative_user__Var_28, (MR_String) "io") == 0))
          {
            MR_Integer mdb__declarative_user__ArgNum_23;

            mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__Var_30, &mdb__declarative_user__ArgNum_23);
            if (mdb__declarative_user__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_user__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__ArgNum_23));
              }
              mdb__declarative_user__succeeded = MR_TRUE;
            }
          }
          else
          if ((strcmp(mdb__declarative_user__Var_28, (MR_String) "--xml") == 0))
          {
            MR_Integer mdb__declarative_user__ArgNum_17;
            MR_Word mdb__declarative_user__Var_21;

            mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__Var_30, &mdb__declarative_user__ArgNum_17);
            if (mdb__declarative_user__succeeded)
            {
              {
                mdb__declarative_user__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_21, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_17));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_user__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_user__Var_21));
              }
              mdb__declarative_user__succeeded = MR_TRUE;
            }
          }
          else
            mdb__declarative_user__succeeded = MR_FALSE;
        }
      }
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__one_word_cmd_3_p_0(
  MR_Word mdb__declarative_user__Cmd_4,
  MR_Word mdb__declarative_user__HeadVar__2_2,
  MR_Word * mdb__declarative_user__Cmd_3)
{
  {
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__Cmd_3 = mdb__declarative_user__Cmd_4;
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_Word MR_CALL 
mdb__declarative_user__get_subterm_mode_from_atoms_for_arg_4_f_0(
  MR_Integer mdb__declarative_user__ArgNum_6,
  MR_Word mdb__declarative_user__InitAtom_7,
  MR_Word mdb__declarative_user__FinalAtom_8,
  MR_Word mdb__declarative_user__Dirs_9)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Word mdb__declarative_user__Mode_10;
    MR_Word mdb__declarative_user__TermPath_11;
    MR_Word mdb__declarative_user__ArgPos_12;
    MR_Word mdb__declarative_user__Which_15;

    mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(mdb__declarative_user__FinalAtom_8, mdb__declarative_user__Dirs_9, &mdb__declarative_user__TermPath_11);
    mdb__declarative_user__Which_15 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    switch (mdb__declarative_user__Which_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mdb__declarative_user__ArgPos_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgPos_12, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_6));
        }
        break;
      case (MR_Integer) 1:
        {
          mdb__declarative_user__ArgPos_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgPos_12, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_6));
        }
        break;
    }
    mdb__declarative_user__succeeded = mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(mdb__declarative_user__InitAtom_7, mdb__declarative_user__ArgPos_12, mdb__declarative_user__TermPath_11);
    if (mdb__declarative_user__succeeded)
      mdb__declarative_user__Mode_10 = (MR_Integer) 0;
    else
    {
      mdb__declarative_user__succeeded = mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(mdb__declarative_user__FinalAtom_8, mdb__declarative_user__ArgPos_12, mdb__declarative_user__TermPath_11);
      if (mdb__declarative_user__succeeded)
        mdb__declarative_user__Mode_10 = (MR_Integer) 1;
      else
        mdb__declarative_user__Mode_10 = (MR_Integer) 2;
    }
    return mdb__declarative_user__Mode_10;
  }
}

static MR_Word MR_CALL 
mdb__declarative_user__get_subterm_mode_from_atoms_3_f_0(
  MR_Word mdb__declarative_user__InitAtom_5,
  MR_Word mdb__declarative_user__FinalAtom_6,
  MR_Word mdb__declarative_user__Dirs_7)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Word mdb__declarative_user__Mode_8;
    MR_Word mdb__declarative_user__Path_9;

    mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(mdb__declarative_user__FinalAtom_6, mdb__declarative_user__Dirs_7, &mdb__declarative_user__Path_9);
    if ((mdb__declarative_user__Path_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdb__declarative_user__Mode_8 = (MR_Integer) 3;
    else
    {
      MR_Integer mdb__declarative_user__ArgNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Path_9, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__TermPath_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Path_9, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__ArgPos_12;
      MR_Word mdb__declarative_user__Which_15;

      mdb__declarative_user__Which_15 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
      switch (mdb__declarative_user__Which_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mdb__declarative_user__ArgPos_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgPos_12, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_10));
          }
          break;
        case (MR_Integer) 1:
          {
            mdb__declarative_user__ArgPos_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgPos_12, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_10));
          }
          break;
      }
      mdb__declarative_user__succeeded = mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(mdb__declarative_user__InitAtom_5, mdb__declarative_user__ArgPos_12, mdb__declarative_user__TermPath_11);
      if (mdb__declarative_user__succeeded)
        mdb__declarative_user__Mode_8 = (MR_Integer) 0;
      else
      {
        mdb__declarative_user__succeeded = mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(mdb__declarative_user__FinalAtom_6, mdb__declarative_user__ArgPos_12, mdb__declarative_user__TermPath_11);
        if (mdb__declarative_user__succeeded)
          mdb__declarative_user__Mode_8 = (MR_Integer) 1;
        else
          mdb__declarative_user__Mode_8 = (MR_Integer) 2;
      }
    }
    return mdb__declarative_user__Mode_8;
  }
}

void MR_CALL 
mdb__declarative_user__set_user_testing_flag_3_p_0(
  MR_Word mdb__declarative_user__Testing_4,
  MR_Word mdb__declarative_user__User_5,
  MR_Word * mdb__declarative_user__HeadVar__3_3)
{
  {
    MR_Word mdb__declarative_user__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 0)));
    MR_Word mdb__declarative_user__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 1)));
    MR_Word mdb__declarative_user__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 2)));
    MR_Word mdb__declarative_user__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 3)));
    MR_Word mdb__declarative_user__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 4)));
    MR_Word mdb__declarative_user__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_user__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__Var_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__Var_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Var_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_user__Var_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__Var_10));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__Testing_4));
    }
  }
}

MR_Word MR_CALL 
mdb__declarative_user__get_user_input_stream_1_f_0(
  MR_Word mdb__declarative_user__User_3)
{
  {
    MR_Word mdb__declarative_user__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 0)));
    MR_Word mdb__declarative_user__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 1)));
    MR_Word mdb__declarative_user__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 2)));
    MR_Word mdb__declarative_user__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 3)));
    MR_Word mdb__declarative_user__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 4)));
    MR_Word mdb__declarative_user__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 5)));

    return mdb__declarative_user__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mdb__declarative_user__get_user_output_stream_1_f_0(
  MR_Word mdb__declarative_user__User_3)
{
  {
    MR_Word mdb__declarative_user__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 1)));
    MR_Word mdb__declarative_user__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 0)));
    MR_Word mdb__declarative_user__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 2)));
    MR_Word mdb__declarative_user__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 3)));
    MR_Word mdb__declarative_user__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 4)));
    MR_Word mdb__declarative_user__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 5)));

    return mdb__declarative_user__HeadVar__2_2;
  }
}

void MR_CALL 
mdb__declarative_user__set_browser_state_3_p_0(
  MR_Word mdb__declarative_user__Browser_4,
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_6,
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_7)
{
  {
    MR_Word mdb__declarative_user__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 0)));
    MR_Word mdb__declarative_user__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 1)));
    MR_Word mdb__declarative_user__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 3)));
    MR_Word mdb__declarative_user__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 4)));
    MR_Word mdb__declarative_user__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 5)));
    MR_Word mdb__declarative_user__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_user__STATE_VARIABLE_User_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Browser_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_user__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__Var_14));
    }
  }
}

MR_Word MR_CALL 
mdb__declarative_user__get_browser_state_1_f_0(
  MR_Word mdb__declarative_user__User_3)
{
  {
    MR_Word mdb__declarative_user__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 2)));
    MR_Word mdb__declarative_user__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 0)));
    MR_Word mdb__declarative_user__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 1)));
    MR_Word mdb__declarative_user__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 3)));
    MR_Word mdb__declarative_user__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 4)));
    MR_Word mdb__declarative_user__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 5)));

    return mdb__declarative_user__HeadVar__2_2;
  }
}

void MR_CALL 
mdb__declarative_user__user_confirm_bug_6_p_0(
  MR_Word mdb__declarative_user__Bug_7,
  MR_Word * mdb__declarative_user__Response_8,
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_23,
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_24)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word mdb__declarative_user__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 5)));
      MR_Word mdb__declarative_user__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 4)));
      MR_Word mdb__declarative_user__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 3)));
      MR_Word mdb__declarative_user__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 2)));
      MR_Word mdb__declarative_user__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 0)));

      switch (mdb__declarative_user__Var_58) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mdb__declarative_user__Command_11;
            MR_Word mdb__declarative_user__STATE_VARIABLE_User_30_30;

            mdb__declarative_user__write_decl_bug_4_p_0(mdb__declarative_user__Bug_7, mdb__declarative_user__STATE_VARIABLE_User_0_23);
            mdb__declarative_user__get_command_6_p_0((MR_String) "Is this a bug\? ", &mdb__declarative_user__Command_11, mdb__declarative_user__STATE_VARIABLE_User_0_23, &mdb__declarative_user__STATE_VARIABLE_User_30_30);
            switch (MR_tag((MR_Word) mdb__declarative_user__Command_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_user__Command_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *mdb__declarative_user__Response_8 = (MR_Integer) 0;
                      *mdb__declarative_user__STATE_VARIABLE_User_24 = mdb__declarative_user__STATE_VARIABLE_User_30_30;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *mdb__declarative_user__Response_8 = (MR_Integer) 1;
                      *mdb__declarative_user__STATE_VARIABLE_User_24 = mdb__declarative_user__STATE_VARIABLE_User_30_30;
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
                      MR_Word mdb__declarative_user__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 1)));
                      MR_Word mdb__declarative_user__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 0)));
                      MR_Word mdb__declarative_user__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 2)));
                      MR_Word mdb__declarative_user__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 3)));
                      MR_Word mdb__declarative_user__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 4)));
                      MR_Word mdb__declarative_user__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 5)));

                      mercury__io__write_strings_4_p_0(mdb__declarative_user__Var_68, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[11]));
                      /* direct tailcall eliminated */
                      {
                        MR_Word mdb__declarative_user__next_value_of_STATE_VARIABLE_User_0_23 = mdb__declarative_user__STATE_VARIABLE_User_30_30;

                        mdb__declarative_user__STATE_VARIABLE_User_0_23 = mdb__declarative_user__next_value_of_STATE_VARIABLE_User_0_23;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 10:
                    {
                      *mdb__declarative_user__Response_8 = (MR_Integer) 2;
                      *mdb__declarative_user__STATE_VARIABLE_User_24 = mdb__declarative_user__STATE_VARIABLE_User_30_30;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__declarative_user__MaybeArgNum_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Command_11, (MR_Integer) 0)));
                  MR_Word mdb__declarative_user__STATE_VARIABLE_User_42_42;

                  mdb__declarative_user__browse_decl_bug_6_p_0(mdb__declarative_user__Bug_7, mdb__declarative_user__MaybeArgNum_12, mdb__declarative_user__STATE_VARIABLE_User_30_30, &mdb__declarative_user__STATE_VARIABLE_User_42_42);
                  /* direct tailcall eliminated */
                  {
                    MR_Word mdb__declarative_user__next_value_of_STATE_VARIABLE_User_0_23 = mdb__declarative_user__STATE_VARIABLE_User_42_42;

                    mdb__declarative_user__STATE_VARIABLE_User_0_23 = mdb__declarative_user__next_value_of_STATE_VARIABLE_User_0_23;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mdb__declarative_user__MaybeArgNum_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Command_11, (MR_Integer) 0)));

                  mdb__declarative_user__browse_xml_decl_bug_5_p_0(mdb__declarative_user__Bug_7, mdb__declarative_user__MaybeArgNum_47, mdb__declarative_user__STATE_VARIABLE_User_30_30);
                  /* direct tailcall eliminated */
                  {
                    MR_Word mdb__declarative_user__next_value_of_STATE_VARIABLE_User_0_23 = mdb__declarative_user__STATE_VARIABLE_User_30_30;

                    mdb__declarative_user__STATE_VARIABLE_User_0_23 = mdb__declarative_user__next_value_of_STATE_VARIABLE_User_0_23;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Command_11, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Integer mdb__declarative_user__ActionNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Command_11, (MR_Integer) 1)));
                      MR_Word mdb__declarative_user__MaybeIoActions_14;
                      MR_Word mdb__declarative_user__STATE_VARIABLE_User_35_35;
                      MR_Word mdb__declarative_user___MaybeTrack_15;

                      mdb__declarative_user__decl_bug_io_actions_2_p_0(mdb__declarative_user__Bug_7, &mdb__declarative_user__MaybeIoActions_14);
                      mdb__declarative_user__browse_chosen_io_action_7_p_0(mdb__declarative_user__MaybeIoActions_14, mdb__declarative_user__ActionNum_13, &mdb__declarative_user___MaybeTrack_15, mdb__declarative_user__STATE_VARIABLE_User_30_30, &mdb__declarative_user__STATE_VARIABLE_User_35_35);
                      /* direct tailcall eliminated */
                      {
                        MR_Word mdb__declarative_user__next_value_of_STATE_VARIABLE_User_0_23 = mdb__declarative_user__STATE_VARIABLE_User_35_35;

                        mdb__declarative_user__STATE_VARIABLE_User_0_23 = mdb__declarative_user__next_value_of_STATE_VARIABLE_User_0_23;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    {
                      MR_Word mdb__declarative_user__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 1)));
                      MR_Word mdb__declarative_user__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 0)));
                      MR_Word mdb__declarative_user__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 2)));
                      MR_Word mdb__declarative_user__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 3)));
                      MR_Word mdb__declarative_user__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 4)));
                      MR_Word mdb__declarative_user__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 5)));

                      mercury__io__write_strings_4_p_0(mdb__declarative_user__Var_68, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[11]));
                      /* direct tailcall eliminated */
                      {
                        MR_Word mdb__declarative_user__next_value_of_STATE_VARIABLE_User_0_23 = mdb__declarative_user__STATE_VARIABLE_User_30_30;

                        mdb__declarative_user__STATE_VARIABLE_User_0_23 = mdb__declarative_user__next_value_of_STATE_VARIABLE_User_0_23;
                      }
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
            *mdb__declarative_user__Response_8 = (MR_Integer) 0;
            *mdb__declarative_user__STATE_VARIABLE_User_24 = mdb__declarative_user__STATE_VARIABLE_User_0_23;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_user__write_decl_bug_4_p_0_1(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2,
  MR_Box * mdb__declarative_user__wrapper_arg_3)
{
  {
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

    mdb__declarative_user__write_decl_final_atom_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 5))), ((MR_Word) mdb__declarative_user__wrapper_arg_1));
  }
}

static void MR_CALL 
mdb__declarative_user__write_decl_bug_4_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word mdb__declarative_user__User_2)
{
  {
    MR_Word mdb__declarative_user__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 1)));
    MR_Word mdb__declarative_user__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 5)));
    MR_Word mdb__declarative_user__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 4)));
    MR_Word mdb__declarative_user__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 3)));
    MR_Word mdb__declarative_user__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 2)));
    MR_Word mdb__declarative_user__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 0)));

    if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mdb__declarative_user__EBug_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));

      switch (MR_tag((MR_Word) mdb__declarative_user__EBug_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mdb__declarative_user__Atom_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__EBug_5, (MR_Integer) 1)));
            MR_Word mdb__declarative_user__Contour_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__EBug_5, (MR_Integer) 2)));
            MR_Word mdb__declarative_user__Var_40;
            MR_Word mdb__declarative_user__Var_43;
            MR_Word mdb__declarative_user__Var_45;
            MR_Word mdb__declarative_user__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__EBug_5, (MR_Integer) 0)));
            MR_Integer mdb__declarative_user__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__EBug_5, (MR_Integer) 3)));

            mercury__io__write_string_4_p_0(mdb__declarative_user__Var_114, (MR_String) "Found incorrect contour:\n");
            mdb__declarative_user__Var_43 = mdb__declarative_user__decl_caller_type_0_f_0();
            {
              mdb__declarative_user__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_40, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_9[0]));
              MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_40, 1) = ((MR_Box) (mdb__declarative_user__write_decl_bug_4_p_0_1));
              MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_40, 3) = ((MR_Box) (mdb__declarative_user__User_2));
              MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_40, 4) = ((MR_Box) ((MR_String) ""));
              MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_40, 5) = ((MR_Box) (mdb__declarative_user__Var_43));
            }
            mercury__io__write_list_5_p_1((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, mdb__declarative_user__Contour_10, (MR_String) "", mdb__declarative_user__Var_40);
            mdb__declarative_user__Var_45 = mdb__declarative_user__decl_caller_type_0_f_0();
            mdb__declarative_user__write_decl_final_atom_6_p_0(mdb__declarative_user__User_2, (MR_String) "", mdb__declarative_user__Var_45, mdb__declarative_user__Atom_9);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_user__Var_34;
            MR_Word mdb__declarative_user__Atom_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__EBug_5, (MR_Integer) 0)));
            MR_Integer mdb__declarative_user__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__EBug_5, (MR_Integer) 1)));

            mercury__io__write_string_4_p_0(mdb__declarative_user__Var_114, (MR_String) "Found partially uncovered atom:\n");
            mdb__declarative_user__Var_34 = mdb__declarative_user__decl_caller_type_0_f_0();
            mdb__declarative_user__write_decl_init_atom_6_p_0(mdb__declarative_user__User_2, (MR_String) "", mdb__declarative_user__Var_34, mdb__declarative_user__Atom_47);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_user__TypeInfo_103_103;
            MR_Word mdb__declarative_user__ExceptionRep_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__EBug_5, (MR_Integer) 1)));
            MR_Word mdb__declarative_user__Exception_15;
            MR_Word mdb__declarative_user__Var_22;
            MR_Word mdb__declarative_user__Var_24;
            MR_Box mdb__declarative_user__Var_26;
            MR_Word mdb__declarative_user__Var_28;
            MR_Word mdb__declarative_user__Atom_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__EBug_5, (MR_Integer) 0)));
            MR_Integer mdb__declarative_user__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_user__EBug_5, (MR_Integer) 2)));
            MR_Word mdb__declarative_user__Var_84;
            MR_Word mdb__declarative_user__Var_85;
            MR_Word mdb__declarative_user__Var_86;
            MR_Word mdb__declarative_user__Var_87;
            MR_Word mdb__declarative_user__Var_88;
            MR_Word mdb__declarative_user__Var_89;
            MR_Word mdb__declarative_user__Var_90;
            MR_Word mdb__declarative_user__Var_91;
            MR_Word mdb__declarative_user__Var_92;
            MR_Word mdb__declarative_user__Var_93;

            mercury__io__write_string_4_p_0(mdb__declarative_user__Var_114, (MR_String) "Found unhandled or incorrect exception:\n");
            mdb__declarative_user__Var_22 = mdb__declarative_user__decl_caller_type_0_f_0();
            mdb__declarative_user__write_decl_init_atom_6_p_0(mdb__declarative_user__User_2, (MR_String) "", mdb__declarative_user__Var_22, mdb__declarative_user__Atom_48);
            mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ExceptionRep_13, &mdb__declarative_user__Exception_15);
            mdb__declarative_user__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 0)));
            mdb__declarative_user__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 1)));
            mdb__declarative_user__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 2)));
            mdb__declarative_user__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 3)));
            mdb__declarative_user__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 4)));
            mdb__declarative_user__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 5)));
            mdb__declarative_user__Var_26 = mercury__univ__univ_value_1_f_0(&mdb__declarative_user__TypeInfo_103_103, mdb__declarative_user__Exception_15);
            mercury__io__write_5_p_2(mdb__declarative_user__TypeInfo_103_103, mdb__declarative_user__Var_24, (MR_Integer) 2, mdb__declarative_user__Var_26);
            mdb__declarative_user__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 0)));
            mdb__declarative_user__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 1)));
            mdb__declarative_user__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 2)));
            mdb__declarative_user__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 3)));
            mdb__declarative_user__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 4)));
            mdb__declarative_user__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 5)));
            mercury__io__nl_3_p_0(mdb__declarative_user__Var_28);
          }
          break;
      }
    }
    else
    {
      MR_Word mdb__declarative_user__IBug_49 = (MR_Word) MR_body(((MR_Word) mdb__declarative_user__HeadVar__1_1), (MR_Integer) 0);
      MR_Word mdb__declarative_user__Parent_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IBug_49, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__Call_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IBug_49, (MR_Integer) 2)));
      MR_Word mdb__declarative_user__Var_62;
      MR_Word mdb__declarative_user__Var_63;
      MR_Word mdb__declarative_user__Var_66;
      MR_Word mdb__declarative_user__Var_67;
      MR_Integer mdb__declarative_user__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IBug_49, (MR_Integer) 3)));

      mercury__io__write_string_4_p_0(mdb__declarative_user__Var_114, (MR_String) "Found inadmissible call:\n");
      mdb__declarative_user__Var_62 = mdb__declarative_user__decl_caller_type_0_f_0();
      {
        mdb__declarative_user__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_63, 0) = ((MR_Box) (mdb__declarative_user__Parent_52));
      }
      mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_2, (MR_String) "Parent ", mdb__declarative_user__Var_62, mdb__declarative_user__Var_63);
      mdb__declarative_user__Var_66 = mdb__declarative_user__decl_caller_type_0_f_0();
      {
        mdb__declarative_user__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_67, 0) = ((MR_Box) (mdb__declarative_user__Call_54));
      }
      mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_2, (MR_String) "Call ", mdb__declarative_user__Var_66, mdb__declarative_user__Var_67);
    }
  }
}

static void MR_CALL 
mdb__declarative_user__write_decl_init_atom_6_p_0(
  MR_Word mdb__declarative_user__User_7,
  MR_String mdb__declarative_user__Indent_8,
  MR_Word mdb__declarative_user__CallerType_9,
  MR_Word mdb__declarative_user__InitAtom_10)
{
  {
    MR_Word mdb__declarative_user__Var_14;

    {
      mdb__declarative_user__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_14, 0) = ((MR_Box) (mdb__declarative_user__InitAtom_10));
    }
    mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_7, mdb__declarative_user__Indent_8, mdb__declarative_user__CallerType_9, mdb__declarative_user__Var_14);
  }
}

static MR_Word MR_CALL 
mdb__declarative_user__decl_caller_type_0_f_0(void)
{
  {
    return (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__browse_xml_decl_bug_5_p_0_1(
  MR_Box mdb__declarative_user__closure_arg)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

    mdb__declarative_user__succeeded = mdb__declarative_user__IntroducedFrom__pred__browse_xml_atom__716__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))));
    return mdb__declarative_user__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user__browse_xml_decl_bug_5_p_0(
  MR_Word mdb__declarative_user__Bug_6,
  MR_Word mdb__declarative_user__MaybeArgNum_7,
  MR_Word mdb__declarative_user__User_8)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Word mdb__declarative_user__FinalAtom_11;

    if (((MR_tag((MR_Word) mdb__declarative_user__Bug_6)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mdb__declarative_user__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Bug_6, (MR_Integer) 0)));

      switch (MR_tag((MR_Word) mdb__declarative_user__Var_35)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mdb__declarative_user__FinalDeclAtom_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_35, (MR_Integer) 1)));
            MR_Word mdb__declarative_user__InitDeclAtom_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_35, (MR_Integer) 0)));
            MR_Word mdb__declarative_user__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_35, (MR_Integer) 2)));
            MR_Integer mdb__declarative_user__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_35, (MR_Integer) 3)));
            MR_Word mdb__declarative_user__Var_34;

            mdb__declarative_user__FinalAtom_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_18, (MR_Integer) 0)));
            mdb__declarative_user__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_18, (MR_Integer) 1)));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_user__InitDeclAtom_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_35, (MR_Integer) 0)));
            MR_Integer mdb__declarative_user__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_35, (MR_Integer) 1)));

            mdb__declarative_user__FinalAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_22;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_user__InitDeclAtom_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Var_35, (MR_Integer) 0)));
            MR_Word mdb__declarative_user__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Var_35, (MR_Integer) 1)));
            MR_Integer mdb__declarative_user__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Var_35, (MR_Integer) 2)));

            mdb__declarative_user__FinalAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_25;
          }
          break;
      }
    }
    else
    {
      MR_Word mdb__declarative_user__InitDeclAtom_31;
      MR_Word mdb__declarative_user__Var_33 = (MR_Word) MR_body(((MR_Word) mdb__declarative_user__Bug_6), (MR_Integer) 0);
      MR_Word mdb__declarative_user__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_33, (MR_Integer) 0)));
      MR_Integer mdb__declarative_user__Var_32;

      mdb__declarative_user__InitDeclAtom_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_33, (MR_Integer) 2)));
      mdb__declarative_user__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_33, (MR_Integer) 3)));
      mdb__declarative_user__FinalAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_31;
    }
    if ((mdb__declarative_user__MaybeArgNum_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Box mdb__declarative_user__ProcLayout_41 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_11, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__Args_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_11, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__ProcLabel_43;
      MR_Word mdb__declarative_user__ArgValues_44;
      MR_Word mdb__declarative_user__Module_45;
      MR_String mdb__declarative_user__Name_46;
      MR_Word mdb__declarative_user__PredOrFunc_48;
      MR_Word mdb__declarative_user__IsFunction_49;
      MR_String mdb__declarative_user__ModuleStr_50;
      MR_Word mdb__declarative_user__BrowserTerm_51;
      MR_Word mdb__declarative_user__Var_52;
      MR_String mdb__declarative_user__Var_54;
      MR_String mdb__declarative_user__Var_55;
      MR_Word mdb__declarative_user__Var_57;
      MR_Word mdb__declarative_user__Var_62;
      MR_Integer mdb__declarative_user__Var_47;
      MR_Word mdb__declarative_user__Var_61;
      MR_Word mdb__declarative_user__Var_63;
      MR_Word mdb__declarative_user__Var_64;
      MR_Word mdb__declarative_user__Var_65;

      mdb__declarative_user__ProcLabel_43 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_user__ProcLayout_41);
      mdb__declarative_user__get_user_arg_values_2_p_0(mdb__declarative_user__Args_42, &mdb__declarative_user__ArgValues_44);
      mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_user__ProcLabel_43, &mdb__declarative_user__Module_45, &mdb__declarative_user__Name_46, &mdb__declarative_user__Var_47, &mdb__declarative_user__PredOrFunc_48);
      {
        mdb__declarative_user__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_52, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_52, 1) = ((MR_Box) (mdb__declarative_user__browse_xml_decl_bug_5_p_0_1));
        MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_52, 3) = ((MR_Box) (mdb__declarative_user__PredOrFunc_48));
        MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_52, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mdb__declarative_user__IsFunction_49 = mercury__bool__pred_to_bool_1_f_0(mdb__declarative_user__Var_52);
      mdb__declarative_user__ModuleStr_50 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_user__Module_45);
      mdb__declarative_user__Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_user__Name_46);
      mdb__declarative_user__Var_54 = mercury__string__f_43_43_2_f_0(mdb__declarative_user__ModuleStr_50, mdb__declarative_user__Var_55);
      mdb__declarative_user__BrowserTerm_51 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(mdb__declarative_user__Var_54, mdb__declarative_user__ArgValues_44, mdb__declarative_user__IsFunction_49);
      mdb__declarative_user__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 0)));
      mdb__declarative_user__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 1)));
      mdb__declarative_user__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 2)));
      mdb__declarative_user__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 3)));
      mdb__declarative_user__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 4)));
      mdb__declarative_user__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 5)));
      mdb__browse__save_and_browse_browser_term_xml_6_p_0(mdb__declarative_user__BrowserTerm_51, mdb__declarative_user__Var_57, mdb__declarative_user__Var_57, mdb__declarative_user__Var_62);
    }
    else
    {
      MR_Integer mdb__declarative_user__ArgNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArgNum_7, (MR_Integer) 0)));

      mdb__declarative_user__browse_xml_atom_argument_5_p_0(mdb__declarative_user__FinalAtom_11, mdb__declarative_user__ArgNum_12, mdb__declarative_user__User_8);
    }
  }
}

static void MR_CALL 
mdb__declarative_user__browse_decl_bug_6_p_0(
  MR_Word mdb__declarative_user__Bug_7,
  MR_Word mdb__declarative_user__MaybeArgNum_8,
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_16,
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_17)
{
  {
    MR_Word mdb__declarative_user__InitAtom_11;
    MR_Word mdb__declarative_user__FinalAtom_12;

    if (((MR_tag((MR_Word) mdb__declarative_user__Bug_7)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mdb__declarative_user__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Bug_7, (MR_Integer) 0)));

      switch (MR_tag((MR_Word) mdb__declarative_user__Var_42)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mdb__declarative_user__InitDeclAtom_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_42, (MR_Integer) 0)));
            MR_Word mdb__declarative_user__FinalDeclAtom_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_42, (MR_Integer) 1)));
            MR_Word mdb__declarative_user__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_42, (MR_Integer) 2)));
            MR_Integer mdb__declarative_user__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_42, (MR_Integer) 3)));
            MR_Word mdb__declarative_user__Var_41;

            mdb__declarative_user__InitAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_24;
            mdb__declarative_user__FinalAtom_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_25, (MR_Integer) 0)));
            mdb__declarative_user__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_25, (MR_Integer) 1)));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_user__InitDeclAtom_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_42, (MR_Integer) 0)));
            MR_Integer mdb__declarative_user__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_42, (MR_Integer) 1)));

            mdb__declarative_user__InitAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_29;
            mdb__declarative_user__FinalAtom_12 = mdb__declarative_user__InitAtom_11;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_user__InitDeclAtom_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Var_42, (MR_Integer) 0)));
            MR_Word mdb__declarative_user__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Var_42, (MR_Integer) 1)));
            MR_Integer mdb__declarative_user__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Var_42, (MR_Integer) 2)));

            mdb__declarative_user__InitAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_32;
            mdb__declarative_user__FinalAtom_12 = mdb__declarative_user__InitAtom_11;
          }
          break;
      }
    }
    else
    {
      MR_Word mdb__declarative_user__InitDeclAtom_38;
      MR_Word mdb__declarative_user__Var_40 = (MR_Word) MR_body(((MR_Word) mdb__declarative_user__Bug_7), (MR_Integer) 0);
      MR_Word mdb__declarative_user__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_40, (MR_Integer) 0)));
      MR_Integer mdb__declarative_user__Var_39;

      mdb__declarative_user__InitDeclAtom_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_40, (MR_Integer) 2)));
      mdb__declarative_user__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_40, (MR_Integer) 3)));
      mdb__declarative_user__InitAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_38;
      mdb__declarative_user__FinalAtom_12 = mdb__declarative_user__InitAtom_11;
    }
    if ((mdb__declarative_user__MaybeArgNum_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word mdb__declarative_user__Var_15;

      mdb__declarative_user__browse_atom_7_p_0(mdb__declarative_user__InitAtom_11, mdb__declarative_user__FinalAtom_12, &mdb__declarative_user__Var_15, mdb__declarative_user__STATE_VARIABLE_User_0_16, mdb__declarative_user__STATE_VARIABLE_User_17);
    }
    else
    {
      MR_Integer mdb__declarative_user__ArgNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArgNum_8, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__Var_14;

      mdb__declarative_user__browse_atom_argument_8_p_0(mdb__declarative_user__InitAtom_11, mdb__declarative_user__FinalAtom_12, mdb__declarative_user__ArgNum_13, &mdb__declarative_user__Var_14, mdb__declarative_user__STATE_VARIABLE_User_0_16, mdb__declarative_user__STATE_VARIABLE_User_17);
    }
  }
}

static void MR_CALL 
mdb__declarative_user__decl_bug_io_actions_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2)
{
  if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word mdb__declarative_user__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));

    switch (MR_tag((MR_Word) mdb__declarative_user__Var_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdb__declarative_user__FinalDeclAtom_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_21, (MR_Integer) 1)));
          MR_Word mdb__declarative_user__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_21, (MR_Integer) 0)));
          MR_Word mdb__declarative_user__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_21, (MR_Integer) 2)));
          MR_Integer mdb__declarative_user__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_21, (MR_Integer) 3)));
          MR_Word mdb__declarative_user__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_4, (MR_Integer) 0)));

          *mdb__declarative_user__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_4, (MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 1:
        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
  }
  else
    *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
}

static void MR_CALL 
mdb__declarative_user__handle_command_7_p_0(
  MR_Word mdb__declarative_user__TypeInfo_for_T_234,
  MR_Word mdb__declarative_user__Cmd_8,
  MR_Word mdb__declarative_user__UserQuestion_9,
  MR_Word * mdb__declarative_user__Response_10,
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_57,
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_58)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    switch (MR_tag((MR_Word) mdb__declarative_user__Cmd_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__declarative_user__Cmd_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mdb__declarative_user__Question_13;
              MR_Box mdb__declarative_user__Node_14;
              MR_Word mdb__declarative_user__Var_140;

              mdb__declarative_user__Question_13 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
              mdb__declarative_user__Node_14 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_13);
              {
                mdb__declarative_user__Var_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_140, 0) = mdb__declarative_user__Node_14;
                MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_140, 1) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_user__Response_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_13));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__Var_140));
              }
              *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdb__declarative_user__Var_138;
              MR_Word mdb__declarative_user__Question_142;
              MR_Box mdb__declarative_user__Node_143;

              mdb__declarative_user__Question_142 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
              mdb__declarative_user__Node_143 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_142);
              {
                mdb__declarative_user__Var_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_138, 0) = mdb__declarative_user__Node_143;
                MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_138, 1) = ((MR_Box) ((MR_Integer) 1));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_user__Response_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_142));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__Var_138));
              }
              *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdb__declarative_user__Var_136;
              MR_Word mdb__declarative_user__Question_144;
              MR_Box mdb__declarative_user__Node_145;

              mdb__declarative_user__Question_144 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
              mdb__declarative_user__Node_145 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_144);
              {
                mdb__declarative_user__Var_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_136, 0) = mdb__declarative_user__Node_145;
                MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_136, 1) = ((MR_Box) ((MR_Integer) 2));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_user__Response_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_144));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__Var_136));
              }
              *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word mdb__declarative_user__Var_135;
              MR_Word mdb__declarative_user__Question_146;
              MR_Box mdb__declarative_user__Node_147;

              mdb__declarative_user__Question_146 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
              mdb__declarative_user__Node_147 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_146);
              {
                mdb__declarative_user__Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), mdb__declarative_user__Var_135, 0) = mdb__declarative_user__Node_147;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_user__Response_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_146));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__Var_135));
              }
              *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word mdb__declarative_user__Question_190;
              MR_Box mdb__declarative_user__Node_191;

              mdb__declarative_user__Question_190 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
              mdb__declarative_user__Node_191 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_190);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_user__Response_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = mdb__declarative_user__Node_191;
              }
              *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word mdb__declarative_user__Question_183;

              mdb__declarative_user__Question_183 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_user__Response_10 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_user__Question_183));
              }
              *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word mdb__declarative_user__Question_184;

              mdb__declarative_user__Question_184 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_user__Response_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__Question_184));
              }
              *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word mdb__declarative_user__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
              MR_Word mdb__declarative_user__Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
              MR_Word mdb__declarative_user__Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
              MR_Word mdb__declarative_user__Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));
              MR_Word mdb__declarative_user__Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
              MR_Word mdb__declarative_user__Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_user__Response_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__Var_96));
              }
              *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 8:
            {
              *mdb__declarative_user__Response_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word mdb__declarative_user__STATE_VARIABLE_User_85_85;
              MR_Word mdb__declarative_user__Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
              MR_Word mdb__declarative_user__Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
              MR_Word mdb__declarative_user__Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
              MR_Word mdb__declarative_user__Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
              MR_Word mdb__declarative_user__Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));
              MR_Word mdb__declarative_user__Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));

              {
                mdb__declarative_user__STATE_VARIABLE_User_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 0) = ((MR_Box) (mdb__declarative_user__Var_213));
                MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 1) = ((MR_Box) (mdb__declarative_user__Var_214));
                MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 2) = ((MR_Box) (mdb__declarative_user__Var_215));
                MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 3) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 4) = ((MR_Box) (mdb__declarative_user__Var_217));
                MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 5) = ((MR_Box) (mdb__declarative_user__Var_218));
              }
              mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_85_85, mdb__declarative_user__STATE_VARIABLE_User_58);
            }
            break;
          case (MR_Integer) 10:
            {
              *mdb__declarative_user__Response_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word mdb__declarative_user__Command_54;

              if (((MR_tag((MR_Word) mdb__declarative_user__UserQuestion_9)) == (MR_mktag((MR_Integer) 0))))
                mdb__declarative_user__Command_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
              else
              {
                MR_Word mdb__declarative_user__Truth_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_9, (MR_Integer) 1)));
                MR_Word mdb__declarative_user__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_9, (MR_Integer) 0)));

                switch (mdb__declarative_user__Truth_56) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    mdb__declarative_user__Command_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    mdb__declarative_user__Command_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                    break;
                  case (MR_Integer) 2:
                    mdb__declarative_user__Command_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                    break;
                }
              }
              /* direct tailcall eliminated */
              {
                MR_Word mdb__declarative_user__next_value_of_Cmd_8 = mdb__declarative_user__Command_54;

                mdb__declarative_user__Cmd_8 = mdb__declarative_user__next_value_of_Cmd_8;
              }
              continue;
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word mdb__declarative_user__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
              MR_Word mdb__declarative_user__Var_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
              MR_Word mdb__declarative_user__Var_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
              MR_Word mdb__declarative_user__Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));
              MR_Word mdb__declarative_user__Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
              MR_Word mdb__declarative_user__Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));

              mercury__io__write_string_4_p_0(mdb__declarative_user__Var_61, (MR_String) "Unknown command, \'h\' for help.\n");
              mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_0_57, mdb__declarative_user__STATE_VARIABLE_User_58);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_user__MaybeArgNum_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Cmd_8, (MR_Integer) 0)));
          MR_Word mdb__declarative_user__InitAtom_16;
          MR_Word mdb__declarative_user__FinalAtom_17;
          MR_Word mdb__declarative_user__Question_174;

          mdb__declarative_user__Question_174 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
          mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(mdb__declarative_user__Question_174, &mdb__declarative_user__InitAtom_16, &mdb__declarative_user__FinalAtom_17);
          if ((mdb__declarative_user__MaybeArgNum_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mdb__declarative_user__STATE_VARIABLE_User_118_118;
            MR_Word mdb__declarative_user__MaybeTrack_167;

            mdb__declarative_user__browse_atom_7_p_0(mdb__declarative_user__InitAtom_16, mdb__declarative_user__FinalAtom_17, &mdb__declarative_user__MaybeTrack_167, mdb__declarative_user__STATE_VARIABLE_User_0_57, &mdb__declarative_user__STATE_VARIABLE_User_118_118);
            if ((mdb__declarative_user__MaybeTrack_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_118_118, mdb__declarative_user__STATE_VARIABLE_User_58);
            else
            {
              MR_Word mdb__declarative_user__Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_167, (MR_Integer) 1)));
              MR_Word mdb__declarative_user__Var_236 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_167, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word mdb__declarative_user__Var_237 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_167, (MR_Integer) 0)))) & (MR_Integer) 1);

              if ((mdb__declarative_user__Var_235 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mdb__declarative_user__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 1)));
                MR_Word mdb__declarative_user__Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 0)));
                MR_Word mdb__declarative_user__Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 2)));
                MR_Word mdb__declarative_user__Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 3)));
                MR_Word mdb__declarative_user__Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 4)));
                MR_Word mdb__declarative_user__Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 5)));

                mercury__io__write_string_4_p_0(mdb__declarative_user__Var_121, (MR_String) "Cannot track the entire atom. Please select a subterm to track.\n");
                mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_118_118, mdb__declarative_user__STATE_VARIABLE_User_58);
              }
              else
              {
                MR_Box mdb__declarative_user__Node_151;
                MR_Integer mdb__declarative_user__ArgNum_152 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_235, (MR_Integer) 0)));
                MR_Word mdb__declarative_user__TermPath_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_235, (MR_Integer) 1)));
                MR_Word mdb__declarative_user__ArgPos_156;
                MR_Word mdb__declarative_user__Answer_157;

                mdb__declarative_user__ArgPos_156 = mdb__declarative_user__arg_num_to_arg_pos_1_f_0(mdb__declarative_user__ArgNum_152);
                mdb__declarative_user__Node_151 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_174);
                {
                  mdb__declarative_user__Answer_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_157, 0) = mdb__declarative_user__Node_151;
                  MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_157, 1) = ((MR_Box) (mdb__declarative_user__ArgPos_156));
                  MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_157, 2) = ((MR_Box) (mdb__declarative_user__TermPath_155));
                  MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_157, 3) = ((MR_Box) ((mdb__declarative_user__Var_237 | ((mdb__declarative_user__Var_236 << (MR_Integer) 1)))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mdb__declarative_user__Response_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_174));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__Answer_157));
                }
                *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_118_118;
              }
            }
          }
          else
          {
            MR_Integer mdb__declarative_user__ArgNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArgNum_15, (MR_Integer) 0)));
            MR_Word mdb__declarative_user__MaybeTrack_19;
            MR_Word mdb__declarative_user__STATE_VARIABLE_User_131_131;

            mdb__declarative_user__browse_atom_argument_8_p_0(mdb__declarative_user__InitAtom_16, mdb__declarative_user__FinalAtom_17, mdb__declarative_user__ArgNum_18, &mdb__declarative_user__MaybeTrack_19, mdb__declarative_user__STATE_VARIABLE_User_0_57, &mdb__declarative_user__STATE_VARIABLE_User_131_131);
            if ((mdb__declarative_user__MaybeTrack_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_131_131, mdb__declarative_user__STATE_VARIABLE_User_58);
            else
            {
              MR_Word mdb__declarative_user__HowTrack_20 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_19, (MR_Integer) 0)))) & (MR_Integer) 1);
              MR_Word mdb__declarative_user__ShouldAssertInvalid_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_19, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word mdb__declarative_user__TermPath_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_19, (MR_Integer) 1)));
              MR_Word mdb__declarative_user__ArgPos_23;
              MR_Word mdb__declarative_user__Answer_24;
              MR_Box mdb__declarative_user__Node_148;

              mdb__declarative_user__ArgPos_23 = mdb__declarative_user__arg_num_to_arg_pos_1_f_0(mdb__declarative_user__ArgNum_18);
              mdb__declarative_user__Node_148 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_174);
              {
                mdb__declarative_user__Answer_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_24, 0) = mdb__declarative_user__Node_148;
                MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_24, 1) = ((MR_Box) (mdb__declarative_user__ArgPos_23));
                MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_24, 2) = ((MR_Box) (mdb__declarative_user__TermPath_22));
                MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_24, 3) = ((MR_Box) ((mdb__declarative_user__HowTrack_20 | ((mdb__declarative_user__ShouldAssertInvalid_21 << (MR_Integer) 1)))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_user__Response_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_174));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__Answer_24));
              }
              *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_131_131;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_user__Question_178;
          MR_Word mdb__declarative_user__MaybeArgNum_179 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Cmd_8, (MR_Integer) 0)));
          MR_Word mdb__declarative_user__FinalAtom_180;
          MR_Word mdb__declarative_user__Var_27;

          mdb__declarative_user__Question_178 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
          mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(mdb__declarative_user__Question_178, &mdb__declarative_user__Var_27, &mdb__declarative_user__FinalAtom_180);
          if ((mdb__declarative_user__MaybeArgNum_179 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            mdb__declarative_user__browse_xml_atom_4_p_0(mdb__declarative_user__FinalAtom_180, mdb__declarative_user__STATE_VARIABLE_User_0_57);
          else
          {
            MR_Integer mdb__declarative_user__ArgNum_176 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArgNum_179, (MR_Integer) 0)));

            mdb__declarative_user__browse_xml_atom_argument_5_p_0(mdb__declarative_user__FinalAtom_180, mdb__declarative_user__ArgNum_176, mdb__declarative_user__STATE_VARIABLE_User_0_57);
          }
          mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_0_57, mdb__declarative_user__STATE_VARIABLE_User_58);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer mdb__declarative_user__ActionNum_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));
              MR_Word mdb__declarative_user__MaybeIoActions_45;
              MR_Word mdb__declarative_user__STATE_VARIABLE_User_92_92;
              MR_Word mdb__declarative_user__Question_185;
              MR_Word mdb__declarative_user___MaybeTrack_46;

              mdb__declarative_user__Question_185 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
              mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_105_111_95_97_99_116_105_111_110_115_95_95_91_49_93_95_48_2_p_0(mdb__declarative_user__Question_185, &mdb__declarative_user__MaybeIoActions_45);
              mdb__declarative_user__browse_chosen_io_action_7_p_0(mdb__declarative_user__MaybeIoActions_45, mdb__declarative_user__ActionNum_44, &mdb__declarative_user___MaybeTrack_46, mdb__declarative_user__STATE_VARIABLE_User_0_57, &mdb__declarative_user__STATE_VARIABLE_User_92_92);
              mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_92_92, mdb__declarative_user__STATE_VARIABLE_User_58);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mdb__declarative_user__From_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));
              MR_Integer mdb__declarative_user__To_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 2)));
              MR_Word mdb__declarative_user__TraceAtom_31;
              MR_Word mdb__declarative_user__Question_182;
              MR_Word mdb__declarative_user__Var_30;

              mdb__declarative_user__Question_182 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
              mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(mdb__declarative_user__Question_182, &mdb__declarative_user__Var_30, &mdb__declarative_user__TraceAtom_31);
              mdb__declarative_user__print_atom_arguments_6_p_0(mdb__declarative_user__TraceAtom_31, mdb__declarative_user__From_28, mdb__declarative_user__To_29, mdb__declarative_user__STATE_VARIABLE_User_0_57);
              mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_0_57, mdb__declarative_user__STATE_VARIABLE_User_58);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdb__declarative_user__Question_186;
              MR_Integer mdb__declarative_user__From_187 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));
              MR_Integer mdb__declarative_user__To_188 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 2)));
              MR_Word mdb__declarative_user__MaybeIoActions_189;

              mdb__declarative_user__Question_186 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
              mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_105_111_95_97_99_116_105_111_110_115_95_95_91_49_93_95_48_2_p_0(mdb__declarative_user__Question_186, &mdb__declarative_user__MaybeIoActions_189);
              mdb__declarative_user__print_chosen_io_actions_6_p_0(mdb__declarative_user__MaybeIoActions_189, mdb__declarative_user__From_187, mdb__declarative_user__To_188, mdb__declarative_user__STATE_VARIABLE_User_0_57);
              mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_0_57, mdb__declarative_user__STATE_VARIABLE_User_58);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word mdb__declarative_user__ParamCommand_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));
              MR_Word mdb__declarative_user__Browser0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
              MR_Word mdb__declarative_user__Info0_35;
              MR_Word mdb__declarative_user__Info_36;
              MR_Word mdb__declarative_user__Browser_41;
              MR_Word mdb__declarative_user__STATE_VARIABLE_User_108_108;
              MR_Word mdb__declarative_user__Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
              MR_Word mdb__declarative_user__Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
              MR_Word mdb__declarative_user__Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));
              MR_Word mdb__declarative_user__Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
              MR_Word mdb__declarative_user__Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));
              MR_Word mdb__declarative_user__Var_37;
              MR_Word mdb__declarative_user__Var_38;
              MR_Word mdb__declarative_user__Var_39;
              MR_Word mdb__declarative_user__Var_40;
              MR_Word mdb__declarative_user__Var_42;
              MR_Word mdb__declarative_user__Var_43;
              MR_Word mdb__declarative_user__Var_202;
              MR_Word mdb__declarative_user__Var_203;
              MR_Word mdb__declarative_user__Var_205;
              MR_Word mdb__declarative_user__Var_206;
              MR_Word mdb__declarative_user__Var_207;
              MR_Word mdb__declarative_user__Var_204;

              {
                mdb__declarative_user__Info0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_5[15])));
                MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 2) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 4) = ((MR_Box) (mdb__declarative_user__Browser0_33));
                MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mdb__browser_info__run_param_command_7_p_0((MR_Integer) 0, mdb__declarative_user__ParamCommand_32, (MR_Integer) 0, mdb__declarative_user__Info0_35, &mdb__declarative_user__Info_36);
              mdb__declarative_user__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 0)));
              mdb__declarative_user__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 1)));
              mdb__declarative_user__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 2)));
              mdb__declarative_user__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 3)));
              mdb__declarative_user__Browser_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 4)));
              mdb__declarative_user__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 5)));
              mdb__declarative_user__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 6)));
              mdb__declarative_user__Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
              mdb__declarative_user__Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
              mdb__declarative_user__Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
              mdb__declarative_user__Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));
              mdb__declarative_user__Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
              mdb__declarative_user__Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));
              {
                mdb__declarative_user__STATE_VARIABLE_User_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 0) = ((MR_Box) (mdb__declarative_user__Var_202));
                MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 1) = ((MR_Box) (mdb__declarative_user__Var_203));
                MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 2) = ((MR_Box) (mdb__declarative_user__Browser_41));
                MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 3) = ((MR_Box) (mdb__declarative_user__Var_205));
                MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 4) = ((MR_Box) (mdb__declarative_user__Var_206));
                MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 5) = ((MR_Box) (mdb__declarative_user__Var_207));
              }
              mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_108_108, mdb__declarative_user__STATE_VARIABLE_User_58);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word mdb__declarative_user__Mode_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_user__Response_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__Mode_47));
              }
              *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word mdb__declarative_user__MaybeCmd_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));
              MR_Word mdb__declarative_user__Path_50;
              MR_Word mdb__declarative_user__Res_51;
              MR_Word mdb__declarative_user__Var_75;
              MR_Word mdb__declarative_user__Var_220;
              MR_Word mdb__declarative_user__Var_219;
              MR_Word mdb__declarative_user__Var_221;
              MR_Word mdb__declarative_user__Var_222;
              MR_Word mdb__declarative_user__Var_223;

              if ((mdb__declarative_user__MaybeCmd_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                mdb__declarative_user__Path_50 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[4]);
              else
              {
                MR_String mdb__declarative_user__CmdName_49 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeCmd_48, (MR_Integer) 0)));
                MR_Word mdb__declarative_user__Var_73;

                {
                  mdb__declarative_user__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_73, 0) = ((MR_Box) (mdb__declarative_user__CmdName_49));
                  MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  mdb__declarative_user__Path_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__declarative_user__Path_50, 0) = ((MR_Box) ((MR_String) "decl"));
                  MR_hl_field(MR_mktag(1), mdb__declarative_user__Path_50, 1) = ((MR_Box) (mdb__declarative_user__Var_73));
                }
              }
              mdb__declarative_user__Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
              mdb__declarative_user__Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
              mdb__declarative_user__Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
              mdb__declarative_user__Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));
              mdb__declarative_user__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
              mdb__declarative_user__Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));
              mdb__help__path_6_p_0(mdb__declarative_user__Var_75, mdb__declarative_user__Path_50, mdb__declarative_user__Var_220, &mdb__declarative_user__Res_51);
              if (!((mdb__declarative_user__Res_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
              {
                MR_String mdb__declarative_user__Message_52 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Res_51, (MR_Integer) 0)));
                MR_Word mdb__declarative_user__Var_78;

                {
                  mdb__declarative_user__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_78, 0) = ((MR_Box) (mdb__declarative_user__Message_52));
                  MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[17])));
                }
                mercury__io__write_strings_3_p_0(mdb__declarative_user__Var_78);
              }
              mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_0_57, mdb__declarative_user__STATE_VARIABLE_User_58);
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
  MR_Word mdb__declarative_user__TypeInfo_for_T_67,
  MR_Word mdb__declarative_user__UserQuestion_7,
  MR_Word * mdb__declarative_user__Response_8,
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_16,
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_17)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Word mdb__declarative_user__Question_11;
    MR_Word mdb__declarative_user__Var_68;
    MR_Word mdb__declarative_user__Var_70;
    MR_Word mdb__declarative_user__Var_69;
    MR_Word mdb__declarative_user__Var_71;
    MR_Word mdb__declarative_user__Var_72;
    MR_Word mdb__declarative_user__Var_73;

    if (((MR_tag((MR_Word) mdb__declarative_user__UserQuestion_7)) == (MR_mktag((MR_Integer) 0))))
      mdb__declarative_user__Question_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__UserQuestion_7, (MR_Integer) 0)));
    else
    {
      MR_Word mdb__declarative_user__Var_82;

      mdb__declarative_user__Question_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_7, (MR_Integer) 0)));
      mdb__declarative_user__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_7, (MR_Integer) 1)));
    }
    mdb__declarative_user__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 0)));
    mdb__declarative_user__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 1)));
    mdb__declarative_user__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 2)));
    mdb__declarative_user__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 3)));
    mdb__declarative_user__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 4)));
    mdb__declarative_user__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 5)));
    switch (mdb__declarative_user__Var_68) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String mdb__declarative_user__Prompt_13;
          MR_Word mdb__declarative_user__Command_14;
          MR_Word mdb__declarative_user__STATE_VARIABLE_User_24_24;
          MR_Word mdb__declarative_user__STATE_VARIABLE_User_26_26;
          MR_Word mdb__declarative_user__STATE_VARIABLE_User_28_28;
          MR_Word mdb__declarative_user__Var_15;

          switch (mdb__declarative_user__Var_70) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mdb__declarative_user__Prompt_13 = (MR_String) "dd> ";
                mdb__declarative_user__STATE_VARIABLE_User_24_24 = mdb__declarative_user__STATE_VARIABLE_User_0_16;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mdb__declarative_user__Var_50;
                MR_Word mdb__declarative_user__Var_51;
                MR_Word mdb__declarative_user__Var_52;
                MR_Word mdb__declarative_user__Var_54;
                MR_Word mdb__declarative_user__Var_55;
                MR_Word mdb__declarative_user__Var_53;

                mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0(mdb__declarative_user__Question_11, mdb__declarative_user__STATE_VARIABLE_User_0_16);
                mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_113_117_101_115_116_105_111_110_95_112_114_111_109_112_116_95_95_91_49_93_95_48_2_p_0(mdb__declarative_user__UserQuestion_7, &mdb__declarative_user__Prompt_13);
                mdb__declarative_user__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 0)));
                mdb__declarative_user__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 1)));
                mdb__declarative_user__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 2)));
                mdb__declarative_user__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 3)));
                mdb__declarative_user__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 4)));
                mdb__declarative_user__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 5)));
                {
                  mdb__declarative_user__STATE_VARIABLE_User_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 0) = ((MR_Box) (mdb__declarative_user__Var_50));
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 1) = ((MR_Box) (mdb__declarative_user__Var_51));
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 2) = ((MR_Box) (mdb__declarative_user__Var_52));
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 3) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 4) = ((MR_Box) (mdb__declarative_user__Var_54));
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 5) = ((MR_Box) (mdb__declarative_user__Var_55));
                }
              }
              break;
          }
          mdb__declarative_user__get_command_6_p_0(mdb__declarative_user__Prompt_13, &mdb__declarative_user__Command_14, mdb__declarative_user__STATE_VARIABLE_User_24_24, &mdb__declarative_user__STATE_VARIABLE_User_26_26);
          mdb__declarative_user__handle_command_7_p_0(mdb__declarative_user__TypeInfo_for_T_67, mdb__declarative_user__Command_14, mdb__declarative_user__UserQuestion_7, mdb__declarative_user__Response_8, mdb__declarative_user__STATE_VARIABLE_User_26_26, &mdb__declarative_user__STATE_VARIABLE_User_28_28);
          mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) *mdb__declarative_user__Response_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), *mdb__declarative_user__Response_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (mdb__declarative_user__succeeded)
            mdb__declarative_user__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), *mdb__declarative_user__Response_8, (MR_Integer) 1)));
          mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
          if (mdb__declarative_user__succeeded)
          {
            MR_Word mdb__declarative_user__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 0)));
            MR_Word mdb__declarative_user__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 1)));
            MR_Word mdb__declarative_user__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 2)));
            MR_Word mdb__declarative_user__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 4)));
            MR_Word mdb__declarative_user__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 5)));
            MR_Word mdb__declarative_user__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 3)));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              *mdb__declarative_user__STATE_VARIABLE_User_17 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__Var_61));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__Var_62));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Var_63));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__Var_65));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__Var_66));
            }
          }
          else
            *mdb__declarative_user__STATE_VARIABLE_User_17 = mdb__declarative_user__STATE_VARIABLE_User_28_28;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mdb__declarative_user__Node_12;
          MR_Word mdb__declarative_user__Var_33;

          mdb__declarative_user__Node_12 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_67, mdb__declarative_user__Question_11);
          {
            mdb__declarative_user__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_33, 0) = mdb__declarative_user__Node_12;
            MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_33, 1) = ((MR_Box) ((MR_Integer) 1));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mdb__declarative_user__Response_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__Var_33));
          }
          *mdb__declarative_user__STATE_VARIABLE_User_17 = mdb__declarative_user__STATE_VARIABLE_User_0_16;
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2,
  MR_Box * mdb__declarative_user__wrapper_arg_3)
{
  {
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

    mdb__declarative_user__write_decl_final_atom_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 5))), ((MR_Word) mdb__declarative_user__wrapper_arg_1));
  }
}

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0(
  MR_Word mdb__declarative_user__Question_5,
  MR_Word mdb__declarative_user__User_6)
{
  switch (MR_tag((MR_Word) mdb__declarative_user__Question_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word mdb__declarative_user__Atom_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Question_5, (MR_Integer) 2)));
        MR_Box mdb__declarative_user__Var_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_user__Question_5, (MR_Integer) 0));
        MR_Word mdb__declarative_user__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Question_5, (MR_Integer) 1)));

        mdb__declarative_user__write_decl_final_atom_6_p_0(mdb__declarative_user__User_6, (MR_String) "", (MR_Integer) 0, mdb__declarative_user__Atom_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word mdb__declarative_user__Call_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 1)));
        MR_Word mdb__declarative_user__Solns_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 2)));
        MR_Word mdb__declarative_user__Var_81;
        MR_Box mdb__declarative_user__Var_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 0));

        {
          mdb__declarative_user__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_81, 0) = ((MR_Box) (mdb__declarative_user__Call_12));
        }
        mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_6, (MR_String) "Call ", (MR_Integer) 0, mdb__declarative_user__Var_81);
        if (!((mdb__declarative_user__Solns_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          MR_Word mdb__declarative_user__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
          MR_Word mdb__declarative_user__Var_39;
          MR_Word mdb__declarative_user__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
          MR_Word mdb__declarative_user__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
          MR_Word mdb__declarative_user__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
          MR_Word mdb__declarative_user__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
          MR_Word mdb__declarative_user__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
          MR_Box mdb__declarative_user__conv0_STATE_VARIABLE_IO_20;

          mercury__io__write_string_4_p_0(mdb__declarative_user__Var_36, (MR_String) "Solutions:\n");
          {
            mdb__declarative_user__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_39, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_9[0]));
            MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_39, 1) = ((MR_Box) (mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0_1));
            MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_39, 3) = ((MR_Box) (mdb__declarative_user__User_6));
            MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_39, 4) = ((MR_Box) ((MR_String) "\t"));
            MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_39, 5) = ((MR_Box) ((MR_Integer) 2));
          }
          mercury__list__foldl_4_p_10((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, mdb__declarative_user__Var_39, mdb__declarative_user__Solns_13, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_user__conv0_STATE_VARIABLE_IO_20);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word mdb__declarative_user__TypeInfo_73_73;
        MR_Word mdb__declarative_user__ExceptionRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Question_5, (MR_Integer) 2)));
        MR_Word mdb__declarative_user__Exception_18;
        MR_Word mdb__declarative_user__Var_24;
        MR_Word mdb__declarative_user__Var_27;
        MR_Box mdb__declarative_user__Var_29;
        MR_Word mdb__declarative_user__Var_31;
        MR_Word mdb__declarative_user__Call_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Question_5, (MR_Integer) 1)));
        MR_Word mdb__declarative_user__Var_90;
        MR_Box mdb__declarative_user__Var_16 = (MR_hl_field(MR_mktag(2), mdb__declarative_user__Question_5, (MR_Integer) 0));
        MR_Word mdb__declarative_user__Var_52;
        MR_Word mdb__declarative_user__Var_53;
        MR_Word mdb__declarative_user__Var_54;
        MR_Word mdb__declarative_user__Var_55;
        MR_Word mdb__declarative_user__Var_56;
        MR_Word mdb__declarative_user__Var_57;
        MR_Word mdb__declarative_user__Var_58;
        MR_Word mdb__declarative_user__Var_59;
        MR_Word mdb__declarative_user__Var_60;
        MR_Word mdb__declarative_user__Var_61;
        MR_Word mdb__declarative_user__Var_62;
        MR_Word mdb__declarative_user__Var_63;
        MR_Word mdb__declarative_user__Var_64;
        MR_Word mdb__declarative_user__Var_65;
        MR_Word mdb__declarative_user__Var_66;

        {
          mdb__declarative_user__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_90, 0) = ((MR_Box) (mdb__declarative_user__Call_46));
        }
        mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_6, (MR_String) "Call ", (MR_Integer) 0, mdb__declarative_user__Var_90);
        mdb__declarative_user__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
        mdb__declarative_user__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
        mdb__declarative_user__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
        mdb__declarative_user__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
        mdb__declarative_user__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
        mdb__declarative_user__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
        mercury__io__write_string_4_p_0(mdb__declarative_user__Var_24, (MR_String) "Throws ");
        mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ExceptionRep_17, &mdb__declarative_user__Exception_18);
        mdb__declarative_user__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
        mdb__declarative_user__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
        mdb__declarative_user__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
        mdb__declarative_user__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
        mdb__declarative_user__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
        mdb__declarative_user__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
        mdb__declarative_user__Var_29 = mercury__univ__univ_value_1_f_0(&mdb__declarative_user__TypeInfo_73_73, mdb__declarative_user__Exception_18);
        mercury__io__write_5_p_2(mdb__declarative_user__TypeInfo_73_73, mdb__declarative_user__Var_27, (MR_Integer) 2, mdb__declarative_user__Var_29);
        mdb__declarative_user__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
        mdb__declarative_user__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
        mdb__declarative_user__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
        mdb__declarative_user__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
        mdb__declarative_user__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
        mdb__declarative_user__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
        mercury__io__nl_3_p_0(mdb__declarative_user__Var_31);
      }
      break;
  }
}

static void MR_CALL 
mdb__declarative_user__write_decl_final_atom_6_p_0(
  MR_Word mdb__declarative_user__User_7,
  MR_String mdb__declarative_user__Indent_8,
  MR_Word mdb__declarative_user__CallerType_9,
  MR_Word mdb__declarative_user__FinalAtom_10)
{
  {
    MR_Word mdb__declarative_user__Var_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) mdb__declarative_user__FinalAtom_10);

    mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_7, mdb__declarative_user__Indent_8, mdb__declarative_user__CallerType_9, mdb__declarative_user__Var_14);
  }
}

static void MR_CALL 
mdb__declarative_user__write_decl_atom_6_p_0_1(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv0_Univ_4;

    mdb__declarative_user__trace_atom_arg_to_univ_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv0_Univ_4);
    *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv0_Univ_4));
  }
}

static void MR_CALL 
mdb__declarative_user__write_decl_atom_6_p_0(
  MR_Word mdb__declarative_user__User_7,
  MR_String mdb__declarative_user__Indent_8,
  MR_Word mdb__declarative_user__CallerType_9,
  MR_Word mdb__declarative_user__DeclAtom_10)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Word mdb__declarative_user__TraceAtom_12;
    MR_Word mdb__declarative_user__MaybeIoActions_13;
    MR_Box mdb__declarative_user__ProcLayout_14;
    MR_Word mdb__declarative_user__Args0_15;
    MR_Word mdb__declarative_user__ProcLabel_16;
    MR_String mdb__declarative_user__Functor_18;
    MR_Word mdb__declarative_user__PredOrFunc_20;
    MR_Word mdb__declarative_user__Which_21;
    MR_Word mdb__declarative_user__Args1_22;
    MR_Word mdb__declarative_user__Args_23;
    MR_Word mdb__declarative_user__BrowserTerm_24;
    MR_Word mdb__declarative_user__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 1)));
    MR_Word mdb__declarative_user__Var_30;
    MR_Word mdb__declarative_user__Var_31;
    MR_Word mdb__declarative_user__Var_41;
    MR_Word mdb__declarative_user__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 0)));
    MR_Word mdb__declarative_user__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 2)));
    MR_Word mdb__declarative_user__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 3)));
    MR_Word mdb__declarative_user__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 4)));
    MR_Word mdb__declarative_user__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 5)));
    MR_Word mdb__declarative_user__Var_17;
    MR_Integer mdb__declarative_user__Var_19;
    MR_Word mdb__declarative_user__Var_40;
    MR_Word mdb__declarative_user__Var_42;
    MR_Word mdb__declarative_user__Var_43;
    MR_Word mdb__declarative_user__Var_44;

    mercury__io__write_string_4_p_0(mdb__declarative_user__Var_27, mdb__declarative_user__Indent_8);
    mdb__declarative_debugger__unravel_decl_atom_3_p_0(mdb__declarative_user__DeclAtom_10, &mdb__declarative_user__TraceAtom_12, &mdb__declarative_user__MaybeIoActions_13);
    mdb__declarative_user__ProcLayout_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__TraceAtom_12, (MR_Integer) 0)));
    mdb__declarative_user__Args0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__TraceAtom_12, (MR_Integer) 1)));
    mdb__declarative_user__ProcLabel_16 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_user__ProcLayout_14);
    mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_user__ProcLabel_16, &mdb__declarative_user__Var_17, &mdb__declarative_user__Functor_18, &mdb__declarative_user__Var_19, &mdb__declarative_user__PredOrFunc_20);
    mdb__declarative_user__Which_21 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    mdb__declarative_execution__maybe_filter_headvars_3_p_0(mdb__declarative_user__Which_21, mdb__declarative_user__Args0_15, &mdb__declarative_user__Args1_22);
    mercury__list__map_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, (MR_Word) &mdb__declarative_user_scalar_common_5[14], mdb__declarative_user__Args1_22, &mdb__declarative_user__Args_23);
    mdb__declarative_user__Var_30 = mdb__util__is_function_1_f_0(mdb__declarative_user__PredOrFunc_20);
    mdb__declarative_user__BrowserTerm_24 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(mdb__declarative_user__Functor_18, mdb__declarative_user__Args_23, mdb__declarative_user__Var_30);
    mdb__declarative_user__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 0)));
    mdb__declarative_user__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 1)));
    mdb__declarative_user__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 2)));
    mdb__declarative_user__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 3)));
    mdb__declarative_user__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 4)));
    mdb__declarative_user__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 5)));
    mdb__browse__print_browser_term_6_p_0(mdb__declarative_user__BrowserTerm_24, mdb__declarative_user__Var_31, mdb__declarative_user__CallerType_9, mdb__declarative_user__Var_41);
    if (!((mdb__declarative_user__MaybeIoActions_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word mdb__declarative_user__IoActions_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeIoActions_13, (MR_Integer) 0)));
      MR_Integer mdb__declarative_user__NumTabled_60;
      MR_Integer mdb__declarative_user__NumUntabled_61;
      MR_Integer mdb__declarative_user__Start_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IoActions_59, (MR_Integer) 0)));
      MR_Integer mdb__declarative_user__End_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IoActions_59, (MR_Integer) 1)));

      mdb__declarative_user__count_tabled_io_actions_2_8_p_0(mdb__declarative_user__Start_79, mdb__declarative_user__End_80, (MR_Integer) 0, &mdb__declarative_user__NumTabled_60, (MR_Integer) 0, &mdb__declarative_user__NumUntabled_61);
      mdb__declarative_user__write_io_actions_5_p_0(mdb__declarative_user__User_7, mdb__declarative_user__NumTabled_60, mdb__declarative_user__IoActions_59);
      mdb__declarative_user__succeeded = (mdb__declarative_user__NumUntabled_61 > (MR_Integer) 0);
      if (mdb__declarative_user__succeeded)
      {
        MR_Word mdb__declarative_user__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 1)));
        MR_Word mdb__declarative_user__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 0)));
        MR_Word mdb__declarative_user__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 2)));
        MR_Word mdb__declarative_user__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 3)));
        MR_Word mdb__declarative_user__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 4)));
        MR_Word mdb__declarative_user__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 5)));

        mercury__io__write_string_4_p_0(mdb__declarative_user__Var_65, (MR_String) "Warning: some IO actions for this atom are not tabled.\n");
      }
      else
      {
      }
    }
  }
}

static void MR_CALL 
mdb__declarative_user__write_io_actions_5_p_0(
  MR_Word mdb__declarative_user__User_6,
  MR_Integer mdb__declarative_user__NumTabled_7,
  MR_Word mdb__declarative_user__IoActions_8)
{
  {
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__NumTabled_7 == (MR_Integer) 0);

    if (!(mdb__declarative_user__succeeded))
    {
      MR_Integer mdb__declarative_user__NumPrinted_10;
      MR_Word mdb__declarative_user__Var_21;
      MR_Word mdb__declarative_user__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__Var_75;
      MR_Word mdb__declarative_user__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
      MR_Word mdb__declarative_user__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
      MR_Word mdb__declarative_user__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
      MR_Word mdb__declarative_user__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
      MR_Word mdb__declarative_user__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__Var_45;
      MR_Word mdb__declarative_user__Var_46;
      MR_Word mdb__declarative_user__Var_47;
      MR_Word mdb__declarative_user__Var_48;
      MR_Word mdb__declarative_user__Var_49;
      MR_Word mdb__declarative_user__Var_71;
      MR_Word mdb__declarative_user__Var_72;
      MR_Word mdb__declarative_user__Var_73;
      MR_Word mdb__declarative_user__Var_74;
      MR_Word mdb__declarative_user__Var_76;

      mdb__declarative_user__succeeded = (mdb__declarative_user__NumTabled_7 == (MR_Integer) 1);
      if (mdb__declarative_user__succeeded)
      {
        mercury__io__write_string_4_p_0(mdb__declarative_user__Var_69, (MR_String) "1 tabled IO action:");
      }
      else
      {
        MR_Word mdb__declarative_user__Var_18;
        MR_Word mdb__declarative_user__Var_40;
        MR_Word mdb__declarative_user__Var_41;
        MR_Word mdb__declarative_user__Var_42;
        MR_Word mdb__declarative_user__Var_43;
        MR_Word mdb__declarative_user__Var_44;

        mercury__io__write_int_4_p_0(mdb__declarative_user__Var_69, mdb__declarative_user__NumTabled_7);
        mdb__declarative_user__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
        mdb__declarative_user__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
        mdb__declarative_user__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
        mdb__declarative_user__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
        mdb__declarative_user__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
        mdb__declarative_user__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
        mercury__io__write_string_4_p_0(mdb__declarative_user__Var_18, (MR_String) " tabled IO actions:");
      }
      mdb__declarative_user__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
      mdb__declarative_user__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
      mdb__declarative_user__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
      mdb__declarative_user__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
      mdb__declarative_user__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
      mdb__declarative_user__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
      mdb__declarative_user__NumPrinted_10 = mdb__browser_info__get_num_printed_io_actions_1_f_0(mdb__declarative_user__Var_21);
      mdb__declarative_user__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
      mdb__declarative_user__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
      mdb__declarative_user__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
      mdb__declarative_user__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
      mdb__declarative_user__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
      mdb__declarative_user__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
      mdb__declarative_user__succeeded = (mdb__declarative_user__NumTabled_7 <= mdb__declarative_user__NumPrinted_10);
      if (mdb__declarative_user__succeeded)
      {
        MR_Integer mdb__declarative_user__Start_82;
        MR_Integer mdb__declarative_user__End_83;

        mercury__io__nl_3_p_0(mdb__declarative_user__Var_75);
        mdb__declarative_user__Start_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IoActions_8, (MR_Integer) 0)));
        mdb__declarative_user__End_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IoActions_8, (MR_Integer) 1)));
        mdb__declarative_user__print_tabled_io_actions_2_5_p_0(mdb__declarative_user__User_6, mdb__declarative_user__Start_82, mdb__declarative_user__End_83);
      }
      else
      {
        MR_Word mdb__declarative_user__Var_28;
        MR_Word mdb__declarative_user__Var_60;
        MR_Word mdb__declarative_user__Var_61;
        MR_Word mdb__declarative_user__Var_62;
        MR_Word mdb__declarative_user__Var_63;
        MR_Word mdb__declarative_user__Var_64;

        mercury__io__write_string_4_p_0(mdb__declarative_user__Var_75, (MR_String) " too many to show");
        mdb__declarative_user__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
        mdb__declarative_user__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
        mdb__declarative_user__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
        mdb__declarative_user__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
        mdb__declarative_user__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
        mdb__declarative_user__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
        mercury__io__nl_3_p_0(mdb__declarative_user__Var_28);
      }
    }
  }
}

static void MR_CALL 
mdb__declarative_user__print_tabled_io_actions_2_5_p_0(
  MR_Word mdb__declarative_user__User_6,
  MR_Integer mdb__declarative_user__Cur_7,
  MR_Integer mdb__declarative_user__End_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__Cur_7 == mdb__declarative_user__End_8);

      if (!(mdb__declarative_user__succeeded))
      {
        MR_Word mdb__declarative_user__MaybeIoAction_10;
        MR_Integer mdb__declarative_user__Var_15;

        mdb__io_action__get_maybe_io_action_4_p_0(mdb__declarative_user__Cur_7, &mdb__declarative_user__MaybeIoAction_10);
        if (!((mdb__declarative_user__MaybeIoAction_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          MR_Word mdb__declarative_user__IoAction_23 = (MR_Word) MR_body(((MR_Word) mdb__declarative_user__MaybeIoAction_10), (MR_Integer) 1);
          MR_Word mdb__declarative_user__Term_25;
          MR_Word mdb__declarative_user__Var_28;
          MR_Word mdb__declarative_user__Var_33;
          MR_Word mdb__declarative_user__Var_32;
          MR_Word mdb__declarative_user__Var_34;
          MR_Word mdb__declarative_user__Var_35;
          MR_Word mdb__declarative_user__Var_36;

          mdb__declarative_user__Term_25 = mdb__io_action__io_action_to_browser_term_1_f_0(mdb__declarative_user__IoAction_23);
          mdb__declarative_user__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
          mdb__declarative_user__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
          mdb__declarative_user__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
          mdb__declarative_user__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
          mdb__declarative_user__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
          mdb__declarative_user__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
          mdb__browse__print_browser_term_6_p_0(mdb__declarative_user__Term_25, mdb__declarative_user__Var_28, (MR_Integer) 2, mdb__declarative_user__Var_33);
        }
        mdb__declarative_user__Var_15 = (mdb__declarative_user__Cur_7 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mdb__declarative_user__next_value_of_Cur_7 = mdb__declarative_user__Var_15;

          mdb__declarative_user__Cur_7 = mdb__declarative_user__next_value_of_Cur_7;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_user__count_tabled_io_actions_2_8_p_0(
  MR_Integer mdb__declarative_user__Cur_9,
  MR_Integer mdb__declarative_user__End_10,
  MR_Integer mdb__declarative_user__PrevTabled_11,
  MR_Integer * mdb__declarative_user__Tabled_12,
  MR_Integer mdb__declarative_user__PrevUntabled_13,
  MR_Integer * mdb__declarative_user__Untabled_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__Cur_9 == mdb__declarative_user__End_10);

      if (mdb__declarative_user__succeeded)
      {
        *mdb__declarative_user__Untabled_14 = mdb__declarative_user__PrevUntabled_13;
        *mdb__declarative_user__Tabled_12 = mdb__declarative_user__PrevTabled_11;
      }
      else
      {
        MR_Word mdb__declarative_user__MaybeIoAction_16;
        MR_Integer mdb__declarative_user__NewPrevUntabled_18;
        MR_Integer mdb__declarative_user__NewPrevTabled_19;
        MR_Integer mdb__declarative_user__Var_25;

        mdb__io_action__get_maybe_io_action_4_p_0(mdb__declarative_user__Cur_9, &mdb__declarative_user__MaybeIoAction_16);
        if ((mdb__declarative_user__MaybeIoAction_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          mdb__declarative_user__NewPrevUntabled_18 = (mdb__declarative_user__PrevUntabled_13 + (MR_Integer) 1);
          mdb__declarative_user__NewPrevTabled_19 = mdb__declarative_user__PrevTabled_11;
        }
        else
        {
          mdb__declarative_user__NewPrevUntabled_18 = mdb__declarative_user__PrevUntabled_13;
          mdb__declarative_user__NewPrevTabled_19 = (mdb__declarative_user__PrevTabled_11 + (MR_Integer) 1);
        }
        mdb__declarative_user__Var_25 = (mdb__declarative_user__Cur_9 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mdb__declarative_user__next_value_of_Cur_9 = mdb__declarative_user__Var_25;
          MR_Integer mdb__declarative_user__next_value_of_PrevTabled_11 = mdb__declarative_user__NewPrevTabled_19;
          MR_Integer mdb__declarative_user__next_value_of_PrevUntabled_13 = mdb__declarative_user__NewPrevUntabled_18;

          mdb__declarative_user__Cur_9 = mdb__declarative_user__next_value_of_Cur_9;
          mdb__declarative_user__PrevTabled_11 = mdb__declarative_user__next_value_of_PrevTabled_11;
          mdb__declarative_user__PrevUntabled_13 = mdb__declarative_user__next_value_of_PrevUntabled_13;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_113_117_101_115_116_105_111_110_95_112_114_111_109_112_116_95_95_91_49_93_95_48_2_p_0(
  MR_Word mdb__declarative_user__UserQuestion_3,
  MR_String * mdb__declarative_user__Prompt_4)
{
  if (((MR_tag((MR_Word) mdb__declarative_user__UserQuestion_3)) == (MR_mktag((MR_Integer) 0))))
  {
    MR_Word mdb__declarative_user__Question_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__UserQuestion_3, (MR_Integer) 0)));

    switch (MR_tag((MR_Word) mdb__declarative_user__Question_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mdb__declarative_user__Prompt_4 = (MR_String) "Valid\? ";
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_user__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 2)));
          MR_Word mdb__declarative_user__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 1)));
          MR_Box mdb__declarative_user__Var_27 = (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 0));

          if ((mdb__declarative_user__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mdb__declarative_user__Prompt_4 = (MR_String) "Unsatisfiable\? ";
          else
            *mdb__declarative_user__Prompt_4 = (MR_String) "Complete\? ";
        }
        break;
      case (MR_Integer) 2:
        *mdb__declarative_user__Prompt_4 = (MR_String) "Expected\? ";
        break;
    }
  }
  else
  {
    MR_Word mdb__declarative_user__DefaultTruth_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_3, (MR_Integer) 1)));
    MR_String mdb__declarative_user__QuestionPrompt_7;
    MR_String mdb__declarative_user__DefaultPrompt_8;
    MR_Word mdb__declarative_user__Question_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_3, (MR_Integer) 0)));

    switch (MR_tag((MR_Word) mdb__declarative_user__Question_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mdb__declarative_user__QuestionPrompt_7 = (MR_String) "Valid\? ";
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_user__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_9, (MR_Integer) 2)));
          MR_Word mdb__declarative_user__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_9, (MR_Integer) 1)));
          MR_Box mdb__declarative_user__Var_44 = (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_9, (MR_Integer) 0));

          if ((mdb__declarative_user__Var_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            mdb__declarative_user__QuestionPrompt_7 = (MR_String) "Unsatisfiable\? ";
          else
            mdb__declarative_user__QuestionPrompt_7 = (MR_String) "Complete\? ";
        }
        break;
      case (MR_Integer) 2:
        mdb__declarative_user__QuestionPrompt_7 = (MR_String) "Expected\? ";
        break;
    }
    switch (mdb__declarative_user__DefaultTruth_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mdb__declarative_user__DefaultPrompt_8 = (MR_String) "[yes] ";
        break;
      case (MR_Integer) 1:
        mdb__declarative_user__DefaultPrompt_8 = (MR_String) "[no] ";
        break;
      case (MR_Integer) 2:
        mdb__declarative_user__DefaultPrompt_8 = (MR_String) "[inadmissible] ";
        break;
    }
    *mdb__declarative_user__Prompt_4 = mercury__string__f_43_43_2_f_0(mdb__declarative_user__QuestionPrompt_7, mdb__declarative_user__DefaultPrompt_8);
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__get_command_6_p_0_1(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

    mdb__declarative_user__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) mdb__declarative_user__wrapper_arg_1));
    return mdb__declarative_user__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user__get_command_6_p_0(
  MR_String mdb__declarative_user__Prompt_7,
  MR_Word * mdb__declarative_user__Command_8,
  MR_Word mdb__declarative_user__User_9,
  MR_Word * mdb__declarative_user__User_4)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Word mdb__declarative_user__Result_11;
    MR_Word mdb__declarative_user__Var_22;
    MR_Word mdb__declarative_user__Var_30;
    MR_Word mdb__declarative_user__Var_31;
    MR_Word mdb__declarative_user__Var_32;
    MR_Word mdb__declarative_user__Var_33;
    MR_Word mdb__declarative_user__Var_34;

    *mdb__declarative_user__User_4 = mdb__declarative_user__User_9;
    mdb__declarative_user__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 0)));
    mdb__declarative_user__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 1)));
    mdb__declarative_user__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 2)));
    mdb__declarative_user__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 3)));
    mdb__declarative_user__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 4)));
    mdb__declarative_user__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 5)));
    mdb__util__trace_getline_6_p_0(mdb__declarative_user__Prompt_7, &mdb__declarative_user__Result_11, mdb__declarative_user__Var_22, mdb__declarative_user__Var_30);
    switch (MR_tag((MR_Word) mdb__declarative_user__Result_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mdb__declarative_user__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
        break;
      case (MR_Integer) 1:
        {
          MR_String mdb__declarative_user__String_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Result_11, (MR_Integer) 0)));
          MR_Word mdb__declarative_user__Words_13;

          mdb__declarative_user__Words_13 = mercury__string__words_separator_2_f_0((MR_Word) &mdb__declarative_user_scalar_common_5[13], mdb__declarative_user__String_12);
          if ((mdb__declarative_user__Words_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mdb__declarative_user__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
          else
          {
            MR_String mdb__declarative_user__CmdWord_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Words_13, (MR_Integer) 0)));
            MR_Word mdb__declarative_user__CmdArgs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Words_13, (MR_Integer) 1)));
            MR_Word mdb__declarative_user__CommandPrime_17;
            MR_Word mdb__declarative_user__CmdHandler_16;
            MR_bool MR_CALL (* mdb__declarative_user__func_0)(MR_Box, MR_Box, MR_Box *);
            MR_Box mdb__declarative_user__conv1_CommandPrime_17;

            mdb__declarative_user__succeeded = mdb__declarative_user__cmd_handler_2_p_0(mdb__declarative_user__CmdWord_14, &mdb__declarative_user__CmdHandler_16);
            if (mdb__declarative_user__succeeded)
            {
              mdb__declarative_user__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mdb__declarative_user__CmdHandler_16, (MR_Integer) 1)));
              mdb__declarative_user__succeeded = mdb__declarative_user__func_0(((MR_Box) mdb__declarative_user__CmdHandler_16), ((MR_Box) (mdb__declarative_user__CmdArgs_15)), &mdb__declarative_user__conv1_CommandPrime_17);
              if (mdb__declarative_user__succeeded)
              {
                mdb__declarative_user__CommandPrime_17 = ((MR_Word) mdb__declarative_user__conv1_CommandPrime_17);
                mdb__declarative_user__succeeded = MR_TRUE;
              }
            }
            if (mdb__declarative_user__succeeded)
              *mdb__declarative_user__Command_8 = mdb__declarative_user__CommandPrime_17;
            else
              *mdb__declarative_user__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_user__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Result_11, (MR_Integer) 0)));
          MR_String mdb__declarative_user__Msg_19;
          MR_Word mdb__declarative_user__Var_25;
          MR_Word mdb__declarative_user__Var_27;
          MR_Word mdb__declarative_user__Var_40;
          MR_Word mdb__declarative_user__Var_41;
          MR_Word mdb__declarative_user__Var_42;
          MR_Word mdb__declarative_user__Var_43;
          MR_Word mdb__declarative_user__Var_44;
          MR_Word mdb__declarative_user__Var_45;
          MR_Word mdb__declarative_user__Var_46;
          MR_Word mdb__declarative_user__Var_47;
          MR_Word mdb__declarative_user__Var_48;
          MR_Word mdb__declarative_user__Var_49;

          mercury__io__error_message_2_p_0(mdb__declarative_user__Error_18, &mdb__declarative_user__Msg_19);
          mdb__declarative_user__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 0)));
          mdb__declarative_user__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 1)));
          mdb__declarative_user__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 2)));
          mdb__declarative_user__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 3)));
          mdb__declarative_user__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 4)));
          mdb__declarative_user__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 5)));
          mercury__io__write_string_4_p_0(mdb__declarative_user__Var_25, mdb__declarative_user__Msg_19);
          mdb__declarative_user__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 0)));
          mdb__declarative_user__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 1)));
          mdb__declarative_user__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 2)));
          mdb__declarative_user__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 3)));
          mdb__declarative_user__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 4)));
          mdb__declarative_user__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 5)));
          mercury__io__nl_3_p_0(mdb__declarative_user__Var_27);
          *mdb__declarative_user__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_33(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv32_Cmd_3;

    mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv32_Cmd_3);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv32_Cmd_3));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_32(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv31_Cmd_3;

    mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv31_Cmd_3);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv31_Cmd_3));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_31(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv30_Command_6;

    mdb__declarative_user__succeeded = mdb__declarative_user__format_param_arg_cmd_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv30_Command_6);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv30_Command_6));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_30(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv29_Cmd_3;

    mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv29_Cmd_3);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv29_Cmd_3));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_29(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv28_HeadVar__2_2;

    mdb__declarative_user__succeeded = mdb__declarative_user__trust_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv28_HeadVar__2_2);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv28_HeadVar__2_2));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_28(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv27_HeadVar__2_2;

    mdb__declarative_user__succeeded = mdb__declarative_user__trust_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv27_HeadVar__2_2);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv27_HeadVar__2_2));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_27(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv26_Cmd_3;

    mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv26_Cmd_3);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv26_Cmd_3));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_26(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv25_Command_6;

    mdb__declarative_user__succeeded = mdb__declarative_user__format_param_arg_cmd_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv25_Command_6);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv25_Command_6));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_25(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv24_Cmd_3;

    mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv24_Cmd_3);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv24_Cmd_3));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_24(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv23_Cmd_3;

    mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv23_Cmd_3);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv23_Cmd_3));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_23(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv22_Cmd_3;

    mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv22_Cmd_3);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv22_Cmd_3));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_22(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv21_HeadVar__2_2;

    mdb__declarative_user__succeeded = mdb__declarative_user__print_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv21_HeadVar__2_2);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv21_HeadVar__2_2));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_21(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv20_Cmd_3;

    mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv20_Cmd_3);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv20_Cmd_3));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_20(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv19_Cmd_3;

    mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv19_Cmd_3);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv19_Cmd_3));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_19(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv18_HeadVar__2_2;

    mdb__declarative_user__succeeded = mdb__declarative_user__print_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv18_HeadVar__2_2);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv18_HeadVar__2_2));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_18(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv17_Cmd_3;

    mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv17_Cmd_3);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv17_Cmd_3));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_17(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv16_Cmd_3;

    mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv16_Cmd_3);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv16_Cmd_3));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_16(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv15_HeadVar__2_2;

    mdb__declarative_user__succeeded = mdb__declarative_user__search_mode_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv15_HeadVar__2_2);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv15_HeadVar__2_2));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_15(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv14_HeadVar__2_2;

    mdb__declarative_user__succeeded = mdb__declarative_user__search_mode_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv14_HeadVar__2_2);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv14_HeadVar__2_2));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_14(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv13_Command_6;

    mdb__declarative_user__succeeded = mdb__declarative_user__format_param_arg_cmd_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv13_Command_6);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv13_Command_6));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_13(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv12_Cmd_3;

    mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv12_Cmd_3);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv12_Cmd_3));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_12(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv11_Cmd_3;

    mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv11_Cmd_3);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv11_Cmd_3));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_11(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv10_Cmd_3;

    mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv10_Cmd_3);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv10_Cmd_3));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_10(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv9_HeadVar__2_2;

    mdb__declarative_user__succeeded = mdb__declarative_user__help_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv9_HeadVar__2_2);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv9_HeadVar__2_2));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_9(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv8_HeadVar__2_2;

    mdb__declarative_user__succeeded = mdb__declarative_user__help_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv8_HeadVar__2_2);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv8_HeadVar__2_2));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_8(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv7_UserCommand_4;

    mdb__declarative_user__succeeded = mdb__declarative_user__format_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv7_UserCommand_4);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv7_UserCommand_4));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_7(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv6_Command_6;

    mdb__declarative_user__succeeded = mdb__declarative_user__format_param_arg_cmd_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv6_Command_6);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv6_Command_6));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_6(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv5_HeadVar__2_2;

    mdb__declarative_user__succeeded = mdb__declarative_user__browse_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv5_HeadVar__2_2);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv5_HeadVar__2_2));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_5(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv4_HeadVar__2_2;

    mdb__declarative_user__succeeded = mdb__declarative_user__browse_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv4_HeadVar__2_2);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv4_HeadVar__2_2));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_4(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv3_HeadVar__2_2;

    mdb__declarative_user__succeeded = mdb__declarative_user__num_io_actions_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv3_HeadVar__2_2);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv3_HeadVar__2_2));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_3(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv2_Cmd_3;

    mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv2_Cmd_3);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv2_Cmd_3));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_2(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv1_Cmd_3;

    mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv1_Cmd_3);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv1_Cmd_3));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_1(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv0_HeadVar__2_2;

    mdb__declarative_user__succeeded = mdb__declarative_user__help_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv0_HeadVar__2_2);
    if (mdb__declarative_user__succeeded)
    {
      *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__2_2));
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    return mdb__declarative_user__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0(
  MR_String mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;

    {
      MR_Integer mdb__declarative_user__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 0)) {
        case (MR_Integer) 63:
          if (MR_offset_streq(1, mdb__declarative_user__HeadVar__1_1, (MR_String) "\?"))
            mdb__declarative_user__case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 97:
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              mdb__declarative_user__case_num_0 = (MR_Integer) 1;
              break;
            case (MR_Integer) 98:
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "abort"))
                mdb__declarative_user__case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 99:
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "actions"))
                mdb__declarative_user__case_num_0 = (MR_Integer) 3;
              break;
          }
          break;
        case (MR_Integer) 98:
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              mdb__declarative_user__case_num_0 = (MR_Integer) 4;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "browse"))
                mdb__declarative_user__case_num_0 = (MR_Integer) 5;
              break;
          }
          break;
        case (MR_Integer) 100:
          if (MR_offset_streq(1, mdb__declarative_user__HeadVar__1_1, (MR_String) "depth"))
            mdb__declarative_user__case_num_0 = (MR_Integer) 6;
          break;
        case (MR_Integer) 102:
          if (MR_offset_streq(1, mdb__declarative_user__HeadVar__1_1, (MR_String) "format"))
            mdb__declarative_user__case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 104:
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              mdb__declarative_user__case_num_0 = (MR_Integer) 8;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "help"))
                mdb__declarative_user__case_num_0 = (MR_Integer) 9;
              break;
          }
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              mdb__declarative_user__case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, mdb__declarative_user__HeadVar__1_1, (MR_String) "inadmissible"))
                    mdb__declarative_user__case_num_0 = (MR_Integer) 11;
                  break;
                case (MR_Integer) 102:
                  if (MR_offset_streq(3, mdb__declarative_user__HeadVar__1_1, (MR_String) "info"))
                    mdb__declarative_user__case_num_0 = (MR_Integer) 12;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 108:
          if (MR_offset_streq(1, mdb__declarative_user__HeadVar__1_1, (MR_String) "lines"))
            mdb__declarative_user__case_num_0 = (MR_Integer) 13;
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              mdb__declarative_user__case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "mode"))
                mdb__declarative_user__case_num_0 = (MR_Integer) 15;
              break;
          }
          break;
        case (MR_Integer) 110:
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              mdb__declarative_user__case_num_0 = (MR_Integer) 16;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "no"))
                mdb__declarative_user__case_num_0 = (MR_Integer) 17;
              break;
          }
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              mdb__declarative_user__case_num_0 = (MR_Integer) 18;
              break;
            case (MR_Integer) 97:
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "params"))
                mdb__declarative_user__case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 100:
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "pd"))
                mdb__declarative_user__case_num_0 = (MR_Integer) 20;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "print"))
                mdb__declarative_user__case_num_0 = (MR_Integer) 21;
              break;
          }
          break;
        case (MR_Integer) 113:
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              mdb__declarative_user__case_num_0 = (MR_Integer) 22;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "quit"))
                mdb__declarative_user__case_num_0 = (MR_Integer) 23;
              break;
          }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              mdb__declarative_user__case_num_0 = (MR_Integer) 24;
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "size"))
                mdb__declarative_user__case_num_0 = (MR_Integer) 25;
              break;
            case (MR_Integer) 107:
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "skip"))
                mdb__declarative_user__case_num_0 = (MR_Integer) 26;
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              mdb__declarative_user__case_num_0 = (MR_Integer) 27;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "trust"))
                mdb__declarative_user__case_num_0 = (MR_Integer) 28;
              break;
          }
          break;
        case (MR_Integer) 117:
          if (MR_offset_streq(1, mdb__declarative_user__HeadVar__1_1, (MR_String) "undo"))
            mdb__declarative_user__case_num_0 = (MR_Integer) 29;
          break;
        case (MR_Integer) 119:
          if (MR_offset_streq(1, mdb__declarative_user__HeadVar__1_1, (MR_String) "width"))
            mdb__declarative_user__case_num_0 = (MR_Integer) 30;
          break;
        case (MR_Integer) 121:
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              mdb__declarative_user__case_num_0 = (MR_Integer) 31;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "yes"))
                mdb__declarative_user__case_num_0 = (MR_Integer) 32;
              break;
          }
          break;
      }
      if ((mdb__declarative_user__case_num_0 < (MR_Integer) 0))
        mdb__declarative_user__succeeded = MR_FALSE;
      else
      {
        /* we found a match; look up the results */
        *mdb__declarative_user__HeadVar__2_2 = ((&mdb__declarative_user_vector_common_8[0 + mdb__declarative_user__case_num_0]))->mdb__declarative_user__vector_common_type_8_0__vct_8_f_0;
        mdb__declarative_user__succeeded = MR_TRUE;
      }
    }
    return mdb__declarative_user__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_105_111_95_97_99_116_105_111_110_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2)
{
  switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word mdb__declarative_user__FinalDeclAtom_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));
        MR_Box mdb__declarative_user__Var_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mdb__declarative_user__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__declarative_user__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_5, (MR_Integer) 0)));

        *mdb__declarative_user__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_5, (MR_Integer) 1)));
      }
      break;
    case (MR_Integer) 1:
      *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      break;
    case (MR_Integer) 2:
      *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      break;
  }
}

static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2,
  MR_Word * mdb__declarative_user__HeadVar__3_3)
{
  switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word mdb__declarative_user__InitDeclAtom_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__declarative_user__FinalDeclAtom_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));
        MR_Box mdb__declarative_user__Var_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mdb__declarative_user__Var_13;

        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) mdb__declarative_user__InitDeclAtom_5;
        *mdb__declarative_user__HeadVar__3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_6, (MR_Integer) 0)));
        mdb__declarative_user__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_6, (MR_Integer) 1)));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word mdb__declarative_user__InitDeclAtom_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
        MR_Box mdb__declarative_user__Var_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mdb__declarative_user__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));

        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) mdb__declarative_user__InitDeclAtom_8;
        *mdb__declarative_user__HeadVar__3_3 = *mdb__declarative_user__HeadVar__2_2;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word mdb__declarative_user__InitDeclAtom_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
        MR_Box mdb__declarative_user__Var_10 = (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mdb__declarative_user__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));

        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) mdb__declarative_user__InitDeclAtom_11;
        *mdb__declarative_user__HeadVar__3_3 = *mdb__declarative_user__HeadVar__2_2;
      }
      break;
  }
}

static MR_Word MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(
  MR_Word mdb__declarative_user__HeadVar__1_1)
{
  {
    MR_Word mdb__declarative_user__Q_2;

    if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      mdb__declarative_user__Q_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
    else
    {
      MR_Word mdb__declarative_user__Var_5;

      mdb__declarative_user__Q_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
      mdb__declarative_user__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
    }
    return mdb__declarative_user__Q_2;
  }
}

static void MR_CALL 
mdb__declarative_user__print_atom_arguments_6_p_0(
  MR_Word mdb__declarative_user__Atom_7,
  MR_Integer mdb__declarative_user__From_8,
  MR_Integer mdb__declarative_user__To_9,
  MR_Word mdb__declarative_user__User_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mdb__declarative_user__succeeded;
      MR_Word mdb__declarative_user__OK_12;
      MR_Word mdb__declarative_user__Args0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_7, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__Args_30;
      MR_Word mdb__declarative_user__Var_37;
      MR_Box mdb__declarative_user__Var_28 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_7, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__Arg_36;
      MR_Word mdb__declarative_user__ArgInfo_31;
      MR_Word mdb__declarative_user__MaybeArg_34;
      MR_Word mdb__declarative_user__ArgRep_35;
      MR_Box mdb__declarative_user__conv0_ArgInfo_31;
      MR_Word mdb__declarative_user__Var_32;
      MR_Integer mdb__declarative_user__Var_33;
      MR_Integer mdb__declarative_user__Var_16;
      MR_Integer mdb__declarative_user__Var_17;

      mdb__declarative_user__Var_37 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
      mdb__declarative_execution__maybe_filter_headvars_3_p_0(mdb__declarative_user__Var_37, mdb__declarative_user__Args0_29, &mdb__declarative_user__Args_30);
      mdb__declarative_user__succeeded = mercury__list__index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_30, mdb__declarative_user__From_8, &mdb__declarative_user__conv0_ArgInfo_31);
      if (mdb__declarative_user__succeeded)
      {
        mdb__declarative_user__ArgInfo_31 = ((MR_Word) mdb__declarative_user__conv0_ArgInfo_31);
        mdb__declarative_user__succeeded = MR_TRUE;
      }
      if (mdb__declarative_user__succeeded)
      {
        mdb__declarative_user__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_31, (MR_Integer) 0)));
        mdb__declarative_user__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_31, (MR_Integer) 1)));
        mdb__declarative_user__MaybeArg_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_31, (MR_Integer) 2)));
        mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__MaybeArg_34)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__declarative_user__succeeded)
        {
          mdb__declarative_user__ArgRep_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArg_34, (MR_Integer) 0)));
          mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ArgRep_35, &mdb__declarative_user__Arg_36);
          mdb__declarative_user__succeeded = MR_TRUE;
        }
      }
      if (mdb__declarative_user__succeeded)
      {
        MR_Word mdb__declarative_user__Var_38;
        MR_Word mdb__declarative_user__Var_39;
        MR_Word mdb__declarative_user__Var_47;
        MR_Word mdb__declarative_user__Var_46;
        MR_Word mdb__declarative_user__Var_48;
        MR_Word mdb__declarative_user__Var_49;
        MR_Word mdb__declarative_user__Var_50;

        mdb__declarative_user__Var_38 = mdb__browser_term__univ_to_browser_term_1_f_0(mdb__declarative_user__Arg_36);
        mdb__declarative_user__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 0)));
        mdb__declarative_user__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 1)));
        mdb__declarative_user__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 2)));
        mdb__declarative_user__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 3)));
        mdb__declarative_user__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 4)));
        mdb__declarative_user__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 5)));
        mdb__browse__print_browser_term_6_p_0(mdb__declarative_user__Var_38, mdb__declarative_user__Var_39, (MR_Integer) 0, mdb__declarative_user__Var_47);
        mdb__declarative_user__OK_12 = (MR_Integer) 1;
      }
      else
      {
        MR_Word mdb__declarative_user__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 1)));
        MR_Word mdb__declarative_user__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 0)));
        MR_Word mdb__declarative_user__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 2)));
        MR_Word mdb__declarative_user__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 3)));
        MR_Word mdb__declarative_user__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 4)));
        MR_Word mdb__declarative_user__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 5)));

        mercury__io__write_string_4_p_0(mdb__declarative_user__Var_43, (MR_String) "Invalid argument number\n");
        mdb__declarative_user__OK_12 = (MR_Integer) 0;
      }
      mdb__declarative_user__succeeded = (mdb__declarative_user__OK_12 == (MR_Integer) 1);
      if (mdb__declarative_user__succeeded)
      {
        mdb__declarative_user__Var_17 = (MR_Integer) 1;
        mdb__declarative_user__Var_16 = (mdb__declarative_user__From_8 + mdb__declarative_user__Var_17);
        mdb__declarative_user__succeeded = (mdb__declarative_user__Var_16 <= mdb__declarative_user__To_9);
      }
      if (mdb__declarative_user__succeeded)
      {
        MR_Integer mdb__declarative_user__Var_18 = (mdb__declarative_user__From_8 + (MR_Integer) 1);

        /* direct tailcall eliminated */
        {
          MR_Integer mdb__declarative_user__next_value_of_From_8 = mdb__declarative_user__Var_18;

          mdb__declarative_user__From_8 = mdb__declarative_user__next_value_of_From_8;
        }
        continue;
      }
      else
      {
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__browse_xml_atom_4_p_0_1(
  MR_Box mdb__declarative_user__closure_arg)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

    mdb__declarative_user__succeeded = mdb__declarative_user__IntroducedFrom__pred__browse_xml_atom__716__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))));
    return mdb__declarative_user__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user__browse_xml_atom_4_p_0(
  MR_Word mdb__declarative_user__Atom_5,
  MR_Word mdb__declarative_user__User_6)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__ProcLayout_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_5, (MR_Integer) 0)));
    MR_Word mdb__declarative_user__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_5, (MR_Integer) 1)));
    MR_Word mdb__declarative_user__ProcLabel_10;
    MR_Word mdb__declarative_user__ArgValues_11;
    MR_Word mdb__declarative_user__Module_12;
    MR_String mdb__declarative_user__Name_13;
    MR_Word mdb__declarative_user__PredOrFunc_15;
    MR_Word mdb__declarative_user__IsFunction_16;
    MR_String mdb__declarative_user__ModuleStr_17;
    MR_Word mdb__declarative_user__BrowserTerm_18;
    MR_Word mdb__declarative_user__Var_21;
    MR_String mdb__declarative_user__Var_23;
    MR_String mdb__declarative_user__Var_24;
    MR_Word mdb__declarative_user__Var_26;
    MR_Word mdb__declarative_user__Var_31;
    MR_Integer mdb__declarative_user__Var_14;
    MR_Word mdb__declarative_user__Var_30;
    MR_Word mdb__declarative_user__Var_32;
    MR_Word mdb__declarative_user__Var_33;
    MR_Word mdb__declarative_user__Var_34;

    mdb__declarative_user__ProcLabel_10 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_user__ProcLayout_8);
    mdb__declarative_user__get_user_arg_values_2_p_0(mdb__declarative_user__Args_9, &mdb__declarative_user__ArgValues_11);
    mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_user__ProcLabel_10, &mdb__declarative_user__Module_12, &mdb__declarative_user__Name_13, &mdb__declarative_user__Var_14, &mdb__declarative_user__PredOrFunc_15);
    {
      mdb__declarative_user__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_21, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_21, 1) = ((MR_Box) (mdb__declarative_user__browse_xml_atom_4_p_0_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_21, 3) = ((MR_Box) (mdb__declarative_user__PredOrFunc_15));
      MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_21, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mdb__declarative_user__IsFunction_16 = mercury__bool__pred_to_bool_1_f_0(mdb__declarative_user__Var_21);
    mdb__declarative_user__ModuleStr_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_user__Module_12);
    mdb__declarative_user__Var_24 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_user__Name_13);
    mdb__declarative_user__Var_23 = mercury__string__f_43_43_2_f_0(mdb__declarative_user__ModuleStr_17, mdb__declarative_user__Var_24);
    mdb__declarative_user__BrowserTerm_18 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(mdb__declarative_user__Var_23, mdb__declarative_user__ArgValues_11, mdb__declarative_user__IsFunction_16);
    mdb__declarative_user__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
    mdb__declarative_user__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
    mdb__declarative_user__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
    mdb__declarative_user__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
    mdb__declarative_user__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
    mdb__declarative_user__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
    mdb__browse__save_and_browse_browser_term_xml_6_p_0(mdb__declarative_user__BrowserTerm_18, mdb__declarative_user__Var_26, mdb__declarative_user__Var_26, mdb__declarative_user__Var_31);
  }
}

static MR_Box MR_CALL 
mdb__declarative_user__browse_atom_7_p_0_2(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1)
{
  {
    MR_Box mdb__declarative_user__wrapper_arg_2;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv0_Mode_8;

    mdb__declarative_user__conv0_Mode_8 = mdb__declarative_user__get_subterm_mode_from_atoms_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))), ((MR_Word) mdb__declarative_user__wrapper_arg_1));
    mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv0_Mode_8));
    return mdb__declarative_user__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
mdb__declarative_user__browse_atom_7_p_0_1(
  MR_Box mdb__declarative_user__closure_arg)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

    mdb__declarative_user__succeeded = mdb__declarative_user__IntroducedFrom__pred__browse_atom__697__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))));
    return mdb__declarative_user__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user__browse_atom_7_p_0(
  MR_Word mdb__declarative_user__InitAtom_8,
  MR_Word mdb__declarative_user__FinalAtom_9,
  MR_Word * mdb__declarative_user__MaybeTrack_10,
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_26,
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_27)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Box mdb__declarative_user__ProcLayout_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_9, (MR_Integer) 0)));
    MR_Word mdb__declarative_user__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_9, (MR_Integer) 1)));
    MR_Word mdb__declarative_user__ProcLabel_15;
    MR_Word mdb__declarative_user__ArgValues_16;
    MR_Word mdb__declarative_user__Module_17;
    MR_String mdb__declarative_user__Name_18;
    MR_Word mdb__declarative_user__PredOrFunc_20;
    MR_Word mdb__declarative_user__IsFunction_21;
    MR_String mdb__declarative_user__ModuleStr_22;
    MR_Word mdb__declarative_user__BrowserTerm_23;
    MR_Word mdb__declarative_user__MaybeTrackDirs_24;
    MR_Word mdb__declarative_user__Browser_25;
    MR_Word mdb__declarative_user__Var_30;
    MR_String mdb__declarative_user__Var_32;
    MR_String mdb__declarative_user__Var_33;
    MR_Word mdb__declarative_user__Var_35;
    MR_Word mdb__declarative_user__Var_37;
    MR_Word mdb__declarative_user__Var_40;
    MR_Word mdb__declarative_user__Var_42;
    MR_Word mdb__declarative_user__Var_43;
    MR_Integer mdb__declarative_user__Var_19;
    MR_Word mdb__declarative_user__Var_44;
    MR_Word mdb__declarative_user__Var_45;
    MR_Word mdb__declarative_user__Var_46;
    MR_Word mdb__declarative_user__Var_57;
    MR_Word mdb__declarative_user__Var_58;
    MR_Word mdb__declarative_user__Var_60;
    MR_Word mdb__declarative_user__Var_61;
    MR_Word mdb__declarative_user__Var_62;
    MR_Word mdb__declarative_user__Var_59;

    mdb__declarative_user__ProcLabel_15 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_user__ProcLayout_13);
    mdb__declarative_user__get_user_arg_values_2_p_0(mdb__declarative_user__Args_14, &mdb__declarative_user__ArgValues_16);
    mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_user__ProcLabel_15, &mdb__declarative_user__Module_17, &mdb__declarative_user__Name_18, &mdb__declarative_user__Var_19, &mdb__declarative_user__PredOrFunc_20);
    {
      mdb__declarative_user__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_30, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_30, 1) = ((MR_Box) (mdb__declarative_user__browse_atom_7_p_0_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_30, 3) = ((MR_Box) (mdb__declarative_user__PredOrFunc_20));
      MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_30, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mdb__declarative_user__IsFunction_21 = mercury__bool__pred_to_bool_1_f_0(mdb__declarative_user__Var_30);
    mdb__declarative_user__ModuleStr_22 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_user__Module_17);
    mdb__declarative_user__Var_33 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_user__Name_18);
    mdb__declarative_user__Var_32 = mercury__string__f_43_43_2_f_0(mdb__declarative_user__ModuleStr_22, mdb__declarative_user__Var_33);
    mdb__declarative_user__BrowserTerm_23 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(mdb__declarative_user__Var_32, mdb__declarative_user__ArgValues_16, mdb__declarative_user__IsFunction_21);
    mdb__declarative_user__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 0)));
    mdb__declarative_user__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 1)));
    mdb__declarative_user__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 2)));
    mdb__declarative_user__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
    mdb__declarative_user__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 4)));
    mdb__declarative_user__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 5)));
    {
      mdb__declarative_user__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_40, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_40, 1) = ((MR_Box) (mdb__declarative_user__browse_atom_7_p_0_2));
      MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_40, 3) = ((MR_Box) (mdb__declarative_user__InitAtom_8));
      MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_40, 4) = ((MR_Box) (mdb__declarative_user__FinalAtom_9));
    }
    {
      mdb__declarative_user__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_37, 0) = ((MR_Box) (mdb__declarative_user__Var_40));
    }
    mdb__browse__browse_browser_term_9_p_0(mdb__declarative_user__BrowserTerm_23, mdb__declarative_user__Var_35, mdb__declarative_user__Var_42, mdb__declarative_user__Var_37, &mdb__declarative_user__MaybeTrackDirs_24, mdb__declarative_user__Var_43, &mdb__declarative_user__Browser_25);
    if ((mdb__declarative_user__MaybeTrackDirs_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mdb__declarative_user__MaybeTrack_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word mdb__declarative_user__HowTrack_70 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word mdb__declarative_user__ShouldAssertInvalid_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word mdb__declarative_user__Dirs_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__TermPath_73;

      mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(mdb__declarative_user__FinalAtom_9, mdb__declarative_user__Dirs_72, &mdb__declarative_user__TermPath_73);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mdb__declarative_user__MaybeTrack_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((mdb__declarative_user__HowTrack_70 | ((mdb__declarative_user__ShouldAssertInvalid_71 << (MR_Integer) 1)))));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__TermPath_73));
      }
    }
    mdb__declarative_user__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 0)));
    mdb__declarative_user__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 1)));
    mdb__declarative_user__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 2)));
    mdb__declarative_user__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
    mdb__declarative_user__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 4)));
    mdb__declarative_user__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 5)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_user__STATE_VARIABLE_User_27 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__Var_57));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__Var_58));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Browser_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_user__Var_60));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__Var_61));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__Var_62));
    }
  }
}

static void MR_CALL 
mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word mdb__declarative_user__HeadVar__2_2,
  MR_Word * mdb__declarative_user__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_user__succeeded;

    if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mdb__declarative_user__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word mdb__declarative_user__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__Dir_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__Dirs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mdb__declarative_user__Pos_10;
      MR_Word mdb__declarative_user__MaybeValue_14;
      MR_Box mdb__declarative_user__Var_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) mdb__declarative_user__Dir_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mdb__declarative_user__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Dir_7, (MR_Integer) 0)));

        mdb__declarative_user__succeeded = mdb__browse__string_is_return_value_alias_1_p_0(mdb__declarative_user__Name_15);
        if (mdb__declarative_user__succeeded)
        {
          MR_Word mdb__declarative_user__LastArg_16;
          MR_Box mdb__declarative_user__conv0_LastArg_16;

          mdb__declarative_user__succeeded = mercury__list__last_2_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_6, &mdb__declarative_user__conv0_LastArg_16);
          if (mdb__declarative_user__succeeded)
          {
            mdb__declarative_user__LastArg_16 = ((MR_Word) mdb__declarative_user__conv0_LastArg_16);
            mdb__declarative_user__succeeded = MR_TRUE;
          }
          if (mdb__declarative_user__succeeded)
          {
            MR_Word mdb__declarative_user__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__LastArg_16, (MR_Integer) 0)));
            MR_Integer mdb__declarative_user__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__LastArg_16, (MR_Integer) 1)));

            mdb__declarative_user__MaybeValue_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__LastArg_16, (MR_Integer) 2)));
            mdb__declarative_user__Pos_10 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_6);
          }
          else
          {
            {
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_user_scalar_common_1[13])));
              return;
            }
          }
        }
        else
        {
          {
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_user_scalar_common_1[14])));
            return;
          }
        }
      }
      else
      {
        MR_Word mdb__declarative_user__Arg_11;
        MR_Box mdb__declarative_user__conv1_Arg_11;
        MR_Word mdb__declarative_user__Var_12;
        MR_Integer mdb__declarative_user__Var_13;

        mdb__declarative_user__Pos_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Dir_7, (MR_Integer) 0)));
        mdb__declarative_user__conv1_Arg_11 = mercury__list__det_index1_2_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_6, mdb__declarative_user__Pos_10);
        mdb__declarative_user__Arg_11 = ((MR_Word) mdb__declarative_user__conv1_Arg_11);
        mdb__declarative_user__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Arg_11, (MR_Integer) 0)));
        mdb__declarative_user__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Arg_11, (MR_Integer) 1)));
        mdb__declarative_user__MaybeValue_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Arg_11, (MR_Integer) 2)));
      }
      if ((mdb__declarative_user__MaybeValue_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((mdb__declarative_user__Dirs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mdb__declarative_user__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Pos_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        else
        {
          {
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_user_scalar_common_1[15])));
            return;
          }
        }
      else
      {
        MR_Word mdb__declarative_user__TermRep_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeValue_14, (MR_Integer) 0)));
        MR_Word mdb__declarative_user__TermPath0_20;

        mdb__browser_info__convert_dirs_to_term_path_3_p_0(mdb__declarative_user__TermRep_19, mdb__declarative_user__Dirs_8, &mdb__declarative_user__TermPath0_20);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mdb__declarative_user__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Pos_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__TermPath0_20));
        }
      }
    }
  }
}

static void MR_CALL 
mdb__declarative_user__get_user_arg_values_2_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Word * mdb__declarative_user__HeadVar__2_2)
{
  if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word mdb__declarative_user__UserVisible_3;
    MR_Word mdb__declarative_user__MaybeValue_5;
    MR_Word mdb__declarative_user__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mdb__declarative_user__Values0_8;
    MR_Word mdb__declarative_user__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mdb__declarative_user__Var_4;

    mdb__declarative_user__UserVisible_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_11, (MR_Integer) 0)));
    mdb__declarative_user__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_11, (MR_Integer) 1)));
    mdb__declarative_user__MaybeValue_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_11, (MR_Integer) 2)));
    mdb__declarative_user__get_user_arg_values_2_p_0(mdb__declarative_user__Args_6, &mdb__declarative_user__Values0_8);
    switch (mdb__declarative_user__UserVisible_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mdb__declarative_user__HeadVar__2_2 = mdb__declarative_user__Values0_8;
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_user__Value_10;

          if ((mdb__declarative_user__MaybeValue_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
            mdb__declarative_user__Value_10 = mercury__univ__univ_1_f_1((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_unbound_0, ((MR_Box) ((MR_Integer) 0)));
          }
          else
          {
            MR_Word mdb__declarative_user__ValueRep_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeValue_5, (MR_Integer) 0)));

            mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ValueRep_9, &mdb__declarative_user__Value_10);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mdb__declarative_user__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Value_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__Values0_8));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__declarative_user__browse_xml_atom_argument_5_p_0(
  MR_Word mdb__declarative_user__Atom_6,
  MR_Integer mdb__declarative_user__ArgNum_7,
  MR_Word mdb__declarative_user__User_8)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Word mdb__declarative_user__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_6, (MR_Integer) 1)));
    MR_Word mdb__declarative_user__Args_12;
    MR_Word mdb__declarative_user__Var_21;
    MR_Box mdb__declarative_user__Var_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_6, (MR_Integer) 0)));
    MR_Word mdb__declarative_user__Arg_18;
    MR_Word mdb__declarative_user__ArgInfo_13;
    MR_Word mdb__declarative_user__MaybeArg_16;
    MR_Word mdb__declarative_user__ArgRep_17;
    MR_Box mdb__declarative_user__conv0_ArgInfo_13;
    MR_Word mdb__declarative_user__Var_14;
    MR_Integer mdb__declarative_user__Var_15;

    mdb__declarative_user__Var_21 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    mdb__declarative_execution__maybe_filter_headvars_3_p_0(mdb__declarative_user__Var_21, mdb__declarative_user__Args0_11, &mdb__declarative_user__Args_12);
    mdb__declarative_user__succeeded = mercury__list__index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_12, mdb__declarative_user__ArgNum_7, &mdb__declarative_user__conv0_ArgInfo_13);
    if (mdb__declarative_user__succeeded)
    {
      mdb__declarative_user__ArgInfo_13 = ((MR_Word) mdb__declarative_user__conv0_ArgInfo_13);
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    if (mdb__declarative_user__succeeded)
    {
      mdb__declarative_user__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_13, (MR_Integer) 0)));
      mdb__declarative_user__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_13, (MR_Integer) 1)));
      mdb__declarative_user__MaybeArg_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_13, (MR_Integer) 2)));
      mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__MaybeArg_16)) == (MR_mktag((MR_Integer) 1)));
      if (mdb__declarative_user__succeeded)
      {
        mdb__declarative_user__ArgRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArg_16, (MR_Integer) 0)));
        mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ArgRep_17, &mdb__declarative_user__Arg_18);
        mdb__declarative_user__succeeded = MR_TRUE;
      }
    }
    if (mdb__declarative_user__succeeded)
    {
      MR_Word mdb__declarative_user__Var_22;
      MR_Word mdb__declarative_user__Var_23;
      MR_Word mdb__declarative_user__Var_31;
      MR_Word mdb__declarative_user__Var_30;
      MR_Word mdb__declarative_user__Var_32;
      MR_Word mdb__declarative_user__Var_33;
      MR_Word mdb__declarative_user__Var_34;

      mdb__declarative_user__Var_22 = mdb__browser_term__univ_to_browser_term_1_f_0(mdb__declarative_user__Arg_18);
      mdb__declarative_user__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 0)));
      mdb__declarative_user__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 1)));
      mdb__declarative_user__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 2)));
      mdb__declarative_user__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 3)));
      mdb__declarative_user__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 4)));
      mdb__declarative_user__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 5)));
      mdb__browse__save_and_browse_browser_term_xml_6_p_0(mdb__declarative_user__Var_22, mdb__declarative_user__Var_23, mdb__declarative_user__Var_23, mdb__declarative_user__Var_31);
    }
    else
    {
      MR_Word mdb__declarative_user__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 2)));
      MR_Word mdb__declarative_user__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 3)));
      MR_Word mdb__declarative_user__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 4)));
      MR_Word mdb__declarative_user__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 5)));

      mercury__io__write_string_4_p_0(mdb__declarative_user__Var_27, (MR_String) "Invalid argument number\n");
    }
  }
}

static MR_Box MR_CALL 
mdb__declarative_user__browse_atom_argument_8_p_0_1(
  MR_Box mdb__declarative_user__closure_arg,
  MR_Box mdb__declarative_user__wrapper_arg_1)
{
  {
    MR_Box mdb__declarative_user__wrapper_arg_2;
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
    MR_Word mdb__declarative_user__conv1_Mode_10;

    mdb__declarative_user__conv1_Mode_10 = mdb__declarative_user__get_subterm_mode_from_atoms_for_arg_4_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 5))), ((MR_Word) mdb__declarative_user__wrapper_arg_1));
    mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv1_Mode_10));
    return mdb__declarative_user__wrapper_arg_2;
  }
}

static void MR_CALL 
mdb__declarative_user__browse_atom_argument_8_p_0(
  MR_Word mdb__declarative_user__InitAtom_9,
  MR_Word mdb__declarative_user__FinalAtom_10,
  MR_Integer mdb__declarative_user__ArgNum_11,
  MR_Word * mdb__declarative_user__MaybeTrack_12,
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_26,
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_27)
{
  {
    MR_bool mdb__declarative_user__succeeded;
    MR_Word mdb__declarative_user__Args0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_10, (MR_Integer) 1)));
    MR_Word mdb__declarative_user__Args_17;
    MR_Word mdb__declarative_user__Var_30;
    MR_Box mdb__declarative_user__Var_15 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_10, (MR_Integer) 0)));
    MR_Word mdb__declarative_user__ArgRep_22;
    MR_Word mdb__declarative_user__Arg_23;
    MR_Word mdb__declarative_user__ArgInfo_18;
    MR_Word mdb__declarative_user__MaybeArg_21;
    MR_Box mdb__declarative_user__conv0_ArgInfo_18;
    MR_Word mdb__declarative_user__Var_19;
    MR_Integer mdb__declarative_user__Var_20;

    mdb__declarative_user__Var_30 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    mdb__declarative_execution__maybe_filter_headvars_3_p_0(mdb__declarative_user__Var_30, mdb__declarative_user__Args0_16, &mdb__declarative_user__Args_17);
    mdb__declarative_user__succeeded = mercury__list__index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_17, mdb__declarative_user__ArgNum_11, &mdb__declarative_user__conv0_ArgInfo_18);
    if (mdb__declarative_user__succeeded)
    {
      mdb__declarative_user__ArgInfo_18 = ((MR_Word) mdb__declarative_user__conv0_ArgInfo_18);
      mdb__declarative_user__succeeded = MR_TRUE;
    }
    if (mdb__declarative_user__succeeded)
    {
      mdb__declarative_user__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_18, (MR_Integer) 0)));
      mdb__declarative_user__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_18, (MR_Integer) 1)));
      mdb__declarative_user__MaybeArg_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_18, (MR_Integer) 2)));
      mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__MaybeArg_21)) == (MR_mktag((MR_Integer) 1)));
      if (mdb__declarative_user__succeeded)
      {
        mdb__declarative_user__ArgRep_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArg_21, (MR_Integer) 0)));
        mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ArgRep_22, &mdb__declarative_user__Arg_23);
        mdb__declarative_user__succeeded = MR_TRUE;
      }
    }
    if (mdb__declarative_user__succeeded)
    {
      MR_Word mdb__declarative_user__MaybeTrackDirs_24;
      MR_Word mdb__declarative_user__Browser_25;
      MR_Word mdb__declarative_user__Var_31;
      MR_Word mdb__declarative_user__Var_32;
      MR_Word mdb__declarative_user__Var_34;
      MR_Word mdb__declarative_user__Var_37;
      MR_Word mdb__declarative_user__Var_42;
      MR_Word mdb__declarative_user__Var_43;
      MR_Word mdb__declarative_user__Var_44;
      MR_Word mdb__declarative_user__Var_45;
      MR_Word mdb__declarative_user__Var_46;
      MR_Word mdb__declarative_user__Var_57;
      MR_Word mdb__declarative_user__Var_58;
      MR_Word mdb__declarative_user__Var_60;
      MR_Word mdb__declarative_user__Var_61;
      MR_Word mdb__declarative_user__Var_62;
      MR_Word mdb__declarative_user__Var_59;

      mdb__declarative_user__Var_31 = mdb__browser_term__univ_to_browser_term_1_f_0(mdb__declarative_user__Arg_23);
      mdb__declarative_user__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 0)));
      mdb__declarative_user__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 1)));
      mdb__declarative_user__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 2)));
      mdb__declarative_user__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
      mdb__declarative_user__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 4)));
      mdb__declarative_user__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 5)));
      {
        mdb__declarative_user__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_37, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_37, 1) = ((MR_Box) (mdb__declarative_user__browse_atom_argument_8_p_0_1));
        MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_37, 3) = ((MR_Box) (mdb__declarative_user__ArgNum_11));
        MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_37, 4) = ((MR_Box) (mdb__declarative_user__InitAtom_9));
        MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_37, 5) = ((MR_Box) (mdb__declarative_user__FinalAtom_10));
      }
      {
        mdb__declarative_user__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mdb__declarative_user__Var_34, 0) = ((MR_Box) (mdb__declarative_user__Var_37));
      }
      mdb__browse__browse_browser_term_9_p_0(mdb__declarative_user__Var_31, mdb__declarative_user__Var_32, mdb__declarative_user__Var_42, mdb__declarative_user__Var_34, &mdb__declarative_user__MaybeTrackDirs_24, mdb__declarative_user__Var_43, &mdb__declarative_user__Browser_25);
      if ((mdb__declarative_user__MaybeTrackDirs_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mdb__declarative_user__MaybeTrack_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word mdb__declarative_user__HowTrack_75 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word mdb__declarative_user__ShouldAssertInvalid_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word mdb__declarative_user__Dirs_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 1)));
        MR_Word mdb__declarative_user__TermPath_78;

        mdb__browser_info__convert_dirs_to_term_path_3_p_0(mdb__declarative_user__ArgRep_22, mdb__declarative_user__Dirs_77, &mdb__declarative_user__TermPath_78);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mdb__declarative_user__MaybeTrack_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((mdb__declarative_user__HowTrack_75 | ((mdb__declarative_user__ShouldAssertInvalid_76 << (MR_Integer) 1)))));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__TermPath_78));
        }
      }
      mdb__declarative_user__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 0)));
      mdb__declarative_user__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 1)));
      mdb__declarative_user__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 2)));
      mdb__declarative_user__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
      mdb__declarative_user__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 4)));
      mdb__declarative_user__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 5)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        *mdb__declarative_user__STATE_VARIABLE_User_27 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__Var_57));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__Var_58));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Browser_25));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_user__Var_60));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__Var_61));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__Var_62));
      }
    }
    else
    {
      MR_Word mdb__declarative_user__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 2)));
      MR_Word mdb__declarative_user__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
      MR_Word mdb__declarative_user__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 4)));
      MR_Word mdb__declarative_user__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 5)));

      mercury__io__write_string_4_p_0(mdb__declarative_user__Var_39, (MR_String) "Invalid argument number\n");
      *mdb__declarative_user__MaybeTrack_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *mdb__declarative_user__STATE_VARIABLE_User_27 = mdb__declarative_user__STATE_VARIABLE_User_0_26;
    }
  }
}

static void MR_CALL 
mdb__declarative_user__print_chosen_io_actions_6_p_0(
  MR_Word mdb__declarative_user__MaybeIoActions_7,
  MR_Integer mdb__declarative_user__From_8,
  MR_Integer mdb__declarative_user__To_9,
  MR_Word mdb__declarative_user__User0_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mdb__declarative_user__succeeded;
      MR_Word mdb__declarative_user__OK_12;
      MR_Integer mdb__declarative_user__Var_16;
      MR_Integer mdb__declarative_user__Var_17;

      if ((mdb__declarative_user__MaybeIoActions_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__write_string_3_p_0((MR_String) "No such IO action.\n");
        mdb__declarative_user__OK_12 = (MR_Integer) 0;
      }
      else
      {
        MR_Word mdb__declarative_user__IoActions_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeIoActions_7, (MR_Integer) 0)));
        MR_Word mdb__declarative_user__MaybeIoAction_29;

        mdb__declarative_user__find_tabled_io_action_5_p_0(mdb__declarative_user__IoActions_28, mdb__declarative_user__From_8, &mdb__declarative_user__MaybeIoAction_29);
        if ((mdb__declarative_user__MaybeIoAction_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          mercury__io__write_string_3_p_0((MR_String) "No such IO action.\n");
          mdb__declarative_user__OK_12 = (MR_Integer) 0;
        }
        else
        {
          MR_Word mdb__declarative_user__IoAction_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeIoAction_29, (MR_Integer) 0)));
          MR_Word mdb__declarative_user__Term_45;
          MR_Word mdb__declarative_user__Var_48;
          MR_Word mdb__declarative_user__Var_53;
          MR_Word mdb__declarative_user__Var_52;
          MR_Word mdb__declarative_user__Var_54;
          MR_Word mdb__declarative_user__Var_55;
          MR_Word mdb__declarative_user__Var_56;

          mdb__declarative_user__Term_45 = mdb__io_action__io_action_to_browser_term_1_f_0(mdb__declarative_user__IoAction_43);
          mdb__declarative_user__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 0)));
          mdb__declarative_user__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 1)));
          mdb__declarative_user__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 2)));
          mdb__declarative_user__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 3)));
          mdb__declarative_user__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 4)));
          mdb__declarative_user__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 5)));
          mdb__browse__print_browser_term_6_p_0(mdb__declarative_user__Term_45, mdb__declarative_user__Var_48, (MR_Integer) 2, mdb__declarative_user__Var_53);
          mdb__declarative_user__OK_12 = (MR_Integer) 1;
        }
      }
      mdb__declarative_user__succeeded = (mdb__declarative_user__OK_12 == (MR_Integer) 1);
      if (mdb__declarative_user__succeeded)
      {
        mdb__declarative_user__Var_17 = (MR_Integer) 1;
        mdb__declarative_user__Var_16 = (mdb__declarative_user__From_8 + mdb__declarative_user__Var_17);
        mdb__declarative_user__succeeded = (mdb__declarative_user__Var_16 <= mdb__declarative_user__To_9);
      }
      if (mdb__declarative_user__succeeded)
      {
        MR_Integer mdb__declarative_user__Var_18 = (mdb__declarative_user__From_8 + (MR_Integer) 1);

        /* direct tailcall eliminated */
        {
          MR_Integer mdb__declarative_user__next_value_of_From_8 = mdb__declarative_user__Var_18;

          mdb__declarative_user__From_8 = mdb__declarative_user__next_value_of_From_8;
        }
        continue;
      }
      else
      {
      }
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_user__browse_chosen_io_action_7_p_0(
  MR_Word mdb__declarative_user__MaybeIoActions_8,
  MR_Integer mdb__declarative_user__ActionNum_9,
  MR_Word * mdb__declarative_user__MaybeTrack_10,
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_16,
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_17)
{
  if ((mdb__declarative_user__MaybeIoActions_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    mercury__io__write_string_3_p_0((MR_String) "No such IO action.\n");
    *mdb__declarative_user__MaybeTrack_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *mdb__declarative_user__STATE_VARIABLE_User_17 = mdb__declarative_user__STATE_VARIABLE_User_0_16;
  }
  else
  {
    MR_Word mdb__declarative_user__IoActions_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeIoActions_8, (MR_Integer) 0)));
    MR_Word mdb__declarative_user__MaybeIoAction_14;

    mdb__declarative_user__find_tabled_io_action_5_p_0(mdb__declarative_user__IoActions_13, mdb__declarative_user__ActionNum_9, &mdb__declarative_user__MaybeIoAction_14);
    if ((mdb__declarative_user__MaybeIoAction_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mdb__declarative_user__MaybeTrack_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *mdb__declarative_user__STATE_VARIABLE_User_17 = mdb__declarative_user__STATE_VARIABLE_User_0_16;
    }
    else
    {
      MR_Word mdb__declarative_user__IoAction_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeIoAction_14, (MR_Integer) 0)));

      mdb__declarative_user__browse_io_action_6_p_0(mdb__declarative_user__IoAction_15, mdb__declarative_user__MaybeTrack_10, mdb__declarative_user__STATE_VARIABLE_User_0_16, mdb__declarative_user__STATE_VARIABLE_User_17);
    }
  }
}

static void MR_CALL 
mdb__declarative_user__browse_io_action_6_p_0(
  MR_Word mdb__declarative_user__IoAction_7,
  MR_Word * mdb__declarative_user__HeadVar__2_2,
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_17,
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_18)
{
  {
    MR_Word mdb__declarative_user__Term_10;
    MR_Word mdb__declarative_user__MaybeTrackDirs_11;
    MR_Word mdb__declarative_user__Browser_12;
    MR_Word mdb__declarative_user__Var_21;
    MR_Word mdb__declarative_user__STATE_VARIABLE_User_29_29;
    MR_Word mdb__declarative_user__Var_32;
    MR_Word mdb__declarative_user__Var_33;
    MR_Word mdb__declarative_user__Var_34;
    MR_Word mdb__declarative_user__Var_35;
    MR_Word mdb__declarative_user__Var_36;
    MR_Word mdb__declarative_user__Var_52;
    MR_Word mdb__declarative_user__Var_53;
    MR_Word mdb__declarative_user__Var_55;
    MR_Word mdb__declarative_user__Var_56;
    MR_Word mdb__declarative_user__Var_57;
    MR_Word mdb__declarative_user__Var_54;

    *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mdb__declarative_user__Term_10 = mdb__io_action__io_action_to_browser_term_1_f_0(mdb__declarative_user__IoAction_7);
    mdb__declarative_user__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 0)));
    mdb__declarative_user__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 1)));
    mdb__declarative_user__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 2)));
    mdb__declarative_user__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 3)));
    mdb__declarative_user__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 4)));
    mdb__declarative_user__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 5)));
    mdb__browse__browse_browser_term_9_p_0(mdb__declarative_user__Term_10, mdb__declarative_user__Var_21, mdb__declarative_user__Var_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_user__MaybeTrackDirs_11, mdb__declarative_user__Var_33, &mdb__declarative_user__Browser_12);
    if ((mdb__declarative_user__MaybeTrackDirs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdb__declarative_user__STATE_VARIABLE_User_29_29 = mdb__declarative_user__STATE_VARIABLE_User_0_17;
    else
    {
      MR_Word mdb__declarative_user__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 1)));
      MR_Word mdb__declarative_user__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 0)));
      MR_Word mdb__declarative_user__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 2)));
      MR_Word mdb__declarative_user__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 3)));
      MR_Word mdb__declarative_user__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 4)));
      MR_Word mdb__declarative_user__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 5)));
      MR_Word mdb__declarative_user__Var_16;

      mercury__io__write_string_4_p_0(mdb__declarative_user__Var_26, (MR_String) "Sorry, tracking of I/O actions is not yet supported.\n");
      mdb__declarative_user__browse_io_action_6_p_0(mdb__declarative_user__IoAction_7, &mdb__declarative_user__Var_16, mdb__declarative_user__STATE_VARIABLE_User_0_17, &mdb__declarative_user__STATE_VARIABLE_User_29_29);
    }
    mdb__declarative_user__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 0)));
    mdb__declarative_user__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 1)));
    mdb__declarative_user__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 2)));
    mdb__declarative_user__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 3)));
    mdb__declarative_user__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 4)));
    mdb__declarative_user__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 5)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_user__STATE_VARIABLE_User_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__Var_52));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__Var_53));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Browser_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_user__Var_55));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__Var_56));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__Var_57));
    }
  }
}

static void MR_CALL 
mdb__declarative_user__find_tabled_io_action_5_p_0(
  MR_Word mdb__declarative_user__HeadVar__1_1,
  MR_Integer mdb__declarative_user__TabledActionNum_8,
  MR_Word * mdb__declarative_user__MaybeIoAction_9)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mdb__declarative_user__succeeded;
      MR_Integer mdb__declarative_user__Cur_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer mdb__declarative_user__End_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));

      mdb__declarative_user__succeeded = (mdb__declarative_user__Cur_6 == mdb__declarative_user__End_7);
      if (mdb__declarative_user__succeeded)
        *mdb__declarative_user__MaybeIoAction_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word mdb__declarative_user__MaybeTabledIoAction_11;

        mdb__io_action__get_maybe_io_action_4_p_0(mdb__declarative_user__Cur_6, &mdb__declarative_user__MaybeTabledIoAction_11);
        if ((mdb__declarative_user__MaybeTabledIoAction_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word mdb__declarative_user__Var_16;
          MR_Integer mdb__declarative_user__Var_18 = (mdb__declarative_user__Cur_6 + (MR_Integer) 1);

          {
            mdb__declarative_user__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_16, 0) = ((MR_Box) (mdb__declarative_user__Var_18));
            MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_16, 1) = ((MR_Box) (mdb__declarative_user__End_7));
          }
          /* direct tailcall eliminated */
          {
            MR_Word mdb__declarative_user__next_value_of_HeadVar__1_1 = mdb__declarative_user__Var_16;

            mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__next_value_of_HeadVar__1_1;
          }
          continue;
        }
        else
        {
          MR_Word mdb__declarative_user__IoAction_12 = (MR_Word) MR_body(((MR_Word) mdb__declarative_user__MaybeTabledIoAction_11), (MR_Integer) 1);

          mdb__declarative_user__succeeded = (mdb__declarative_user__TabledActionNum_8 == (MR_Integer) 1);
          if (mdb__declarative_user__succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mdb__declarative_user__MaybeIoAction_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__IoAction_12));
            }
          else
          {
            MR_Word mdb__declarative_user__Var_20;
            MR_Integer mdb__declarative_user__Var_21;
            MR_Integer mdb__declarative_user__Var_23 = (mdb__declarative_user__Cur_6 + (MR_Integer) 1);

            {
              mdb__declarative_user__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_20, 0) = ((MR_Box) (mdb__declarative_user__Var_23));
              MR_hl_field(MR_mktag(0), mdb__declarative_user__Var_20, 1) = ((MR_Box) (mdb__declarative_user__End_7));
            }
            mdb__declarative_user__Var_21 = (mdb__declarative_user__TabledActionNum_8 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word mdb__declarative_user__next_value_of_HeadVar__1_1 = mdb__declarative_user__Var_20;
              MR_Integer mdb__declarative_user__next_value_of_TabledActionNum_8 = mdb__declarative_user__Var_21;

              mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__next_value_of_HeadVar__1_1;
              mdb__declarative_user__TabledActionNum_8 = mdb__declarative_user__next_value_of_TabledActionNum_8;
            }
            continue;
          }
        }
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
mdb__declarative_user__arg_num_to_arg_pos_1_f_0(
  MR_Integer mdb__declarative_user__ArgNum_3)
{
  {
    MR_Word mdb__declarative_user__ArgPos_4;
    MR_Word mdb__declarative_user__Which_5;

    mdb__declarative_user__Which_5 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    switch (mdb__declarative_user__Which_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mdb__declarative_user__ArgPos_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgPos_4, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_3));
        }
        break;
      case (MR_Integer) 1:
        {
          mdb__declarative_user__ArgPos_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgPos_4, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_3));
        }
        break;
    }
    return mdb__declarative_user__ArgPos_4;
  }
}

void MR_CALL 
mdb__declarative_user__user_state_init_5_p_0(
  MR_Word mdb__declarative_user__InStr_6,
  MR_Word mdb__declarative_user__OutStr_7,
  MR_Word mdb__declarative_user__Browser_8,
  MR_Word mdb__declarative_user__HelpSystem_9,
  MR_Word * mdb__declarative_user__HeadVar__5_5)
{
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_user__HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__InStr_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__OutStr_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Browser_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__HelpSystem_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_command_0_0_10001(
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;

    mdb__declarative_user__succeeded = mdb__declarative_user____Unify____user_command_0_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), ((MR_Word) mdb__declarative_user__wrapper_arg_2));
    return mdb__declarative_user__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user____Compare____user_command_0_0_10001(
  MR_Box * mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2,
  MR_Box mdb__declarative_user__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_user__conv0_HeadVar__1_1;

    mdb__declarative_user____Compare____user_command_0_0(&mdb__declarative_user__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_user__wrapper_arg_2), ((MR_Word) mdb__declarative_user__wrapper_arg_3));
    *mdb__declarative_user__wrapper_arg_1 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_question_1_0_10001(
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2,
  MR_Box mdb__declarative_user__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_user__succeeded;

    mdb__declarative_user__succeeded = mdb__declarative_user____Unify____user_question_1_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), ((MR_Word) mdb__declarative_user__wrapper_arg_2), ((MR_Word) mdb__declarative_user__wrapper_arg_3));
    return mdb__declarative_user__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user____Compare____user_question_1_0_10001(
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2,
  MR_Box mdb__declarative_user__wrapper_arg_3,
  MR_Box mdb__declarative_user__wrapper_arg_4)
{
  {
    MR_Word mdb__declarative_user__conv0_HeadVar__1_1;

    mdb__declarative_user____Compare____user_question_1_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_user__wrapper_arg_3), ((MR_Word) mdb__declarative_user__wrapper_arg_4));
    *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_response_1_0_10001(
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2,
  MR_Box mdb__declarative_user__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_user__succeeded;

    mdb__declarative_user__succeeded = mdb__declarative_user____Unify____user_response_1_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), ((MR_Word) mdb__declarative_user__wrapper_arg_2), ((MR_Word) mdb__declarative_user__wrapper_arg_3));
    return mdb__declarative_user__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user____Compare____user_response_1_0_10001(
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box * mdb__declarative_user__wrapper_arg_2,
  MR_Box mdb__declarative_user__wrapper_arg_3,
  MR_Box mdb__declarative_user__wrapper_arg_4)
{
  {
    MR_Word mdb__declarative_user__conv0_HeadVar__1_1;

    mdb__declarative_user____Compare____user_response_1_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_user__wrapper_arg_3), ((MR_Word) mdb__declarative_user__wrapper_arg_4));
    *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_search_mode_0_0_10001(
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;

    mdb__declarative_user__succeeded = mdb__declarative_user____Unify____user_search_mode_0_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), ((MR_Word) mdb__declarative_user__wrapper_arg_2));
    return mdb__declarative_user__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user____Compare____user_search_mode_0_0_10001(
  MR_Box * mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2,
  MR_Box mdb__declarative_user__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_user__conv0_HeadVar__1_1;

    mdb__declarative_user____Compare____user_search_mode_0_0(&mdb__declarative_user__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_user__wrapper_arg_2), ((MR_Word) mdb__declarative_user__wrapper_arg_3));
    *mdb__declarative_user__wrapper_arg_1 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_state_0_0_10001(
  MR_Box mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_user__succeeded;

    mdb__declarative_user__succeeded = mdb__declarative_user____Unify____user_state_0_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), ((MR_Word) mdb__declarative_user__wrapper_arg_2));
    return mdb__declarative_user__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_user____Compare____user_state_0_0_10001(
  MR_Box * mdb__declarative_user__wrapper_arg_1,
  MR_Box mdb__declarative_user__wrapper_arg_2,
  MR_Box mdb__declarative_user__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_user__conv0_HeadVar__1_1;

    mdb__declarative_user____Compare____user_state_0_0(&mdb__declarative_user__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_user__wrapper_arg_2), ((MR_Word) mdb__declarative_user__wrapper_arg_3));
    *mdb__declarative_user__wrapper_arg_1 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__1_1));
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

/* :- end_module mdb.declarative_user. */
