/*
** Automatically generated from `declarative_oracle.m'
** by the Mercury compiler,
** version rotd-2026-06-21
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


// :- module mdb.declarative_oracle.
// :- implementation.

/*
INIT mercury__mdb__declarative_oracle__init
ENDINIT
*/

#include "mdb.declarative_oracle.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "library.mih"
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
#include "solutions.mih"
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
#include "mdb.declarative_analyser.mih"
#include "mdb.declarative_debugger.mih"
#include "mdb.declarative_edt.mih"
#include "mdb.declarative_execution.mih"
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



struct mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_env_0_s {
  MR_Word * mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_env_0__LambdaHeadVar__1_7;
  MR_Cont mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_env_0__cont;
  void * mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_env_0__cont_env_ptr;
  MR_String mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_env_0__ModuleNameStr_5;
};

struct mdb__declarative_oracle__remove_trusted_3_p_0_3_env_0_s {
  MR_Box * mdb__declarative_oracle__remove_trusted_3_p_0_3_env_0__wrapper_arg_1;
  MR_Cont mdb__declarative_oracle__remove_trusted_3_p_0_3_env_0__cont;
  void * mdb__declarative_oracle__remove_trusted_3_p_0_3_env_0__cont_env_ptr;
  MR_Word mdb__declarative_oracle__remove_trusted_3_p_0_3_env_0__conv6_LambdaHeadVar__1_7;
};

struct mdb__declarative_oracle__trust_standard_library_2_p_0_3_env_0_s {
  MR_Box * mdb__declarative_oracle__trust_standard_library_2_p_0_3_env_0__wrapper_arg_1;
  MR_Cont mdb__declarative_oracle__trust_standard_library_2_p_0_3_env_0__cont;
  void * mdb__declarative_oracle__trust_standard_library_2_p_0_3_env_0__cont_env_ptr;
  MR_Word mdb__declarative_oracle__trust_standard_library_2_p_0_3_env_0__conv1_LambdaHeadVar__1_7;
};


static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdb__declarative_oracle__type_ctor_info_module_trust_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_oracle__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_mdb__declarative_oracle__type_ctor_info_trusted_object_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

static const MR_EnumFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__enum_functor_desc_is_trusted_0_0;

static const MR_EnumFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__enum_functor_desc_is_trusted_0_1;

static const MR_EnumFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__enum_ordinal_ordered_is_trusted_0[2];

static const MR_EnumFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__enum_name_ordered_is_trusted_0[2];

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_is_trusted_0[2];

static const MR_FA_TypeInfo_Struct1 mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0;

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_known_exceptions_0_0[3];

static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_known_exceptions_0_0[3];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0;

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_known_exceptions_0_0[1];

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_known_exceptions_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_known_exceptions_0[1];

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_known_exceptions_0[1];

static const MR_FA_TypeInfo_Struct1 mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2builtin__type_ctor_info_string_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_module_trust_info_0_0[4];

static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_module_trust_info_0_0[4];

static const MR_DuArgLocn mdb__declarative_oracle__mdb__declarative_oracle__field_locns_module_trust_info_0_0[4];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_module_trust_info_0_0;

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_module_trust_info_0_0[1];

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_module_trust_info_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_module_trust_info_0[1];

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_module_trust_info_0[1];

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdb__declarative_oracle__type_ctor_info_module_trust_info_0;

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_final_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0;

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0;

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_oracle__type_ctor_info_known_exceptions_0;

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_kb_0_0[3];

static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_kb_0_0[3];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_kb_0_0;

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_kb_0_0[1];

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_kb_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_kb_0[1];

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_kb_0[1];

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1;

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_0[1];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_0;

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_1[1];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_1;

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_2[1];

static const MR_DuArgLocn mdb__declarative_oracle__mdb__declarative_oracle__field_locns_oracle_response_1_2[1];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_2;

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_3;

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_4[1];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_4;

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_5;

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_0[2];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_2[1];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_3[2];

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_response_1[4];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_response_1[6];

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_response_1[6];

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__bimap__ti_bimap_2mdb__declarative_oracle__type_ctor_info_trusted_object_0builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_state_0_0[6];

static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_state_0_0[6];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_state_0_0;

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_state_0_0[1];

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_state_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_state_0[1];

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_state_0[1];

static const MR_EnumFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__enum_functor_desc_trust_module_as_0_0;

static const MR_EnumFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__enum_functor_desc_trust_module_as_0_1;

static const MR_EnumFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__enum_ordinal_ordered_trust_module_as_0[2];

static const MR_EnumFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__enum_name_ordered_trust_module_as_0[2];

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_trust_module_as_0[2];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_0;

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_1[1];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_1;

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_2[3];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_2;

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_3[3];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_3;

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_2[1];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_3[1];

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_trusted_object_0[4];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_trusted_object_0[4];

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_trusted_object_0[4];

static void MR_CALL 
mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0(
  MR_Word * LambdaHeadVar__1_7,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mdb__declarative_oracle____Compare____trusted_object_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trusted_object_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____trust_module_as_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trust_module_as_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_kb_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_kb_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____module_trust_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____module_trust_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____module_trust_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____module_trust_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____known_exceptions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____known_exceptions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____is_trusted_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____is_trusted_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_oracle__remove_atom_from_ground_map_4_p_0(
  MR_Word FinalAtom_5,
  MR_Box ProcLayout_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10);

static void MR_CALL 
mdb__declarative_oracle__add_atom_to_ground_map_5_p_0(
  MR_Word Truth_6,
  MR_Word FinalAtom_7,
  MR_Box ProcLayout_8,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11);

static MR_String MR_CALL 
mdb__declarative_oracle__format_trust_display_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
mdb__declarative_oracle__format_trust_command_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
mdb__declarative_oracle__oracle_confirm_bug_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__declarative_oracle__query_oracle_user_6_p_0(
  MR_Word TypeInfo_for_T_83,
  MR_Word UserQuestion_7,
  MR_Word * OracleResponse_8,
  MR_Word STATE_VARIABLE_Oracle_0_29,
  MR_Word * STATE_VARIABLE_Oracle_30);

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(
  MR_Word Question_4,
  MR_Word STATE_VARIABLE_KB_0_28,
  MR_Word * STATE_VARIABLE_KB_29);

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(
  MR_Word Question_5,
  MR_Word Answer_6,
  MR_Word STATE_VARIABLE_KB_0_40,
  MR_Word * STATE_VARIABLE_KB_41);

static MR_Box MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__declarative_oracle__remove_trusted_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mdb__declarative_oracle__remove_trusted_3_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mdb__declarative_oracle__remove_trusted_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__declarative_oracle__remove_from_module_trust_map_4_p_0(
  MR_Word TrustModuleAs_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_ModuleTrustMap_0_14,
  MR_Word * STATE_VARIABLE_ModuleTrustMap_15);

static void MR_CALL 
mdb__declarative_oracle__add_trusted_arity_4_p_0(
  MR_String Name_5,
  MR_Integer Arity_6,
  MR_Word STATE_VARIABLE_TrustedArityMap_0_10,
  MR_Word * STATE_VARIABLE_TrustedArityMap_11);

static void MR_CALL 
mdb__declarative_oracle__add_to_module_trust_map_4_p_0(
  MR_Word TrustModuleAs_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_ModuleTrustMap_0_12,
  MR_Word * STATE_VARIABLE_ModuleTrustMap_13);

static void MR_CALL 
mdb__declarative_oracle__trust_standard_library_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mdb__declarative_oracle__trust_standard_library_2_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mdb__declarative_oracle__trust_standard_library_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____is_trusted_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____is_trusted_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____known_exceptions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____known_exceptions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____module_trust_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____module_trust_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____module_trust_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____module_trust_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_kb_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_kb_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trust_module_as_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____trust_module_as_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trusted_object_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____trusted_object_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_1[11][3];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_2[2][2];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_3[1][1];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_4[3][7];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_5[3][4];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_6[1][5];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_7[1][8];

static /* final */ const MR_Integer mdb__declarative_oracle_scalar_common_8[1][2];




static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_1[11][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_2[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_5[1])),
    ((MR_Box) (mdb__declarative_oracle__trust_standard_library_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_5[1])),
    ((MR_Box) (mdb__declarative_oracle__remove_trusted_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_oracle__get_trusted_list_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_oracle__get_trusted_list_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_2[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0))
  },
};

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_4[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trust_module_as_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdb__declarative_oracle__type_ctor_info_module_trust_info_0)),
    ((MR_Box) (&mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdb__declarative_oracle__type_ctor_info_module_trust_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)),
    ((MR_Box) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0)),
    ((MR_Box) (&mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0)),
    ((MR_Box) (&mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_question_1__pseudo_1)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0))
  },
};

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_5[3][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_4[0])),
    ((MR_Box) (mdb__declarative_oracle__trust_standard_library_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_4[0])),
    ((MR_Box) (mdb__declarative_oracle__remove_trusted_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__declarative_oracle__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_mdb__declarative_oracle__type_ctor_info_trusted_object_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_7[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)),
    ((MR_Box) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0)),
    ((MR_Box) (&mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0)),
    ((MR_Box) (&mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0))
  },
};

static /* final */ const MR_Integer mdb__declarative_oracle_scalar_common_8[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdb__declarative_oracle__type_ctor_info_module_trust_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_oracle__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_mdb__declarative_oracle__type_ctor_info_trusted_object_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0),
    (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_EnumFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__enum_functor_desc_is_trusted_0_0 = {
  (MR_String) "is_not_trusted",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__enum_functor_desc_is_trusted_0_1 = {
  (MR_String) "is_trusted",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__enum_ordinal_ordered_is_trusted_0[2] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__enum_functor_desc_is_trusted_0_0,
  &mdb__declarative_oracle__mdb__declarative_oracle__enum_functor_desc_is_trusted_0_1
};

static const MR_EnumFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__enum_name_ordered_is_trusted_0[2] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__enum_functor_desc_is_trusted_0_0,
  &mdb__declarative_oracle__mdb__declarative_oracle__enum_functor_desc_is_trusted_0_1
};

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_is_trusted_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_is_trusted_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_oracle____Unify____is_trusted_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____is_trusted_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "is_trusted",
  { mdb__declarative_oracle__mdb__declarative_oracle__enum_name_ordered_is_trusted_0 },
  { mdb__declarative_oracle__mdb__declarative_oracle__enum_ordinal_ordered_is_trusted_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_is_trusted_0,

};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0) }
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_known_exceptions_0_0[3] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0)
};

static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_known_exceptions_0_0[3] = {
  (MR_String) "possible",
  (MR_String) "impossible",
  (MR_String) "inadmissible"
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0 = {
  (MR_String) "known_excp",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_known_exceptions_0_0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_names_known_exceptions_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_known_exceptions_0_0[1] = { &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0 };

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_known_exceptions_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_known_exceptions_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_known_exceptions_0[1] = { &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0 };

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_known_exceptions_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____known_exceptions_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____known_exceptions_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "known_exceptions",
  { mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_known_exceptions_0 },
  { mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_known_exceptions_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_known_exceptions_0,

};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2builtin__type_ctor_info_string_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_module_trust_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_is_trusted_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_is_trusted_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__tree234__ti_tree234_2builtin__type_ctor_info_string_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__tree234__ti_tree234_2builtin__type_ctor_info_string_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
};

static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_module_trust_info_0_0[4] = {
  (MR_String) "is_trusted_stdlib",
  (MR_String) "is_trusted_module",
  (MR_String) "trusted_preds",
  (MR_String) "trusted_funcs"
};

static const MR_DuArgLocn mdb__declarative_oracle__mdb__declarative_oracle__field_locns_module_trust_info_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_module_trust_info_0_0 = {
  (MR_String) "module_trust_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_module_trust_info_0_0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_names_module_trust_info_0_0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_locns_module_trust_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_module_trust_info_0_0[1] = { &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_module_trust_info_0_0 };

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_module_trust_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_module_trust_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_module_trust_info_0[1] = { &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_module_trust_info_0_0 };

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_module_trust_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____module_trust_info_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____module_trust_info_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "module_trust_info",
  { mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_module_trust_info_0 },
  { mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_module_trust_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_module_trust_info_0,

};

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdb__declarative_oracle__type_ctor_info_module_trust_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0)
  }
};

const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_oracle____Unify____module_trust_map_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____module_trust_map_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "module_trust_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdb__declarative_oracle__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdb__declarative_oracle__type_ctor_info_module_trust_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_final_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0),
    (MR_TypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0)
  }
};

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0),
    (MR_TypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0)
  }
};

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_oracle__type_ctor_info_known_exceptions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0),
    (MR_TypeInfo) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_kb_0_0[3] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_final_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_oracle__type_ctor_info_known_exceptions_0)
};

static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_kb_0_0[3] = {
  (MR_String) "kb_ground_map",
  (MR_String) "kb_complete_map",
  (MR_String) "kb_exceptions_map"
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_kb_0_0 = {
  (MR_String) "oracle_kb",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_kb_0_0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_kb_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_kb_0_0[1] = { &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_kb_0_0 };

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_kb_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_kb_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_kb_0[1] = { &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_kb_0_0 };

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_kb_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_kb_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____oracle_kb_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____oracle_kb_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "oracle_kb",
  { mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_kb_0 },
  { mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_kb_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_kb_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_answer_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_0[1] = { (MR_PseudoTypeInfo) (&mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1) };

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_0 = {
  (MR_String) "oracle_response_answer",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_1[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0) };

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_1 = {
  (MR_String) "oracle_response_show_info",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_2[1] = { (MR_PseudoTypeInfo) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0) };

static const MR_DuArgLocn mdb__declarative_oracle__mdb__declarative_oracle__field_locns_oracle_response_1_2[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_2 = {
  (MR_String) "oracle_response_change_search",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_2,
  NULL,
  mdb__declarative_oracle__mdb__declarative_oracle__field_locns_oracle_response_1_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_3 = {
  (MR_String) "oracle_response_undo",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_4[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_4 = {
  (MR_String) "oracle_response_exit_diagnosis",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_5 = {
  (MR_String) "oracle_response_abort_diagnosis",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_0[2] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_3,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_5
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_1[1] = { &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_0 };

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_2[1] = { &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_1 };

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_3[2] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_2,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_4
};

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_response_1[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_response_1[6] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_5,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_0,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_2,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_4,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_1,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_3
};

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_response_1[6] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_response_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____oracle_response_1_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____oracle_response_1_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "oracle_response",
  { mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_response_1 },
  { mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_response_1 },
  (MR_Integer) 6,
  UINT16_C(12),
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_response_1,

};

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__bimap__ti_bimap_2mdb__declarative_oracle__type_ctor_info_trusted_object_0builtin__type_ctor_info_int_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_state_0_0[6] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_kb_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_kb_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_state_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__bimap__ti_bimap_2mdb__declarative_oracle__type_ctor_info_trusted_object_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdb__declarative_oracle__type_ctor_info_module_trust_info_0)
};

static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_state_0_0[6] = {
  (MR_String) "kb_current",
  (MR_String) "kb_revised",
  (MR_String) "user_state",
  (MR_String) "trusted_object_map",
  (MR_String) "trusted_id_counter",
  (MR_String) "module_trust_map"
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_state_0_0 = {
  (MR_String) "oracle",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_state_0_0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_state_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_state_0_0[1] = { &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_state_0_0 };

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_state_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_state_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_state_0[1] = { &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_state_0_0 };

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_state_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____oracle_state_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____oracle_state_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "oracle_state",
  { mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_state_0 },
  { mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_state_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_state_0,

};

static const MR_EnumFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__enum_functor_desc_trust_module_as_0_0 = {
  (MR_String) "trust_module_as_stdlib",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__enum_functor_desc_trust_module_as_0_1 = {
  (MR_String) "trust_module_on_its_own",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__enum_ordinal_ordered_trust_module_as_0[2] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__enum_functor_desc_trust_module_as_0_0,
  &mdb__declarative_oracle__mdb__declarative_oracle__enum_functor_desc_trust_module_as_0_1
};

static const MR_EnumFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__enum_name_ordered_trust_module_as_0[2] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__enum_functor_desc_trust_module_as_0_0,
  &mdb__declarative_oracle__mdb__declarative_oracle__enum_functor_desc_trust_module_as_0_1
};

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_trust_module_as_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trust_module_as_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_oracle____Unify____trust_module_as_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____trust_module_as_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "trust_module_as",
  { mdb__declarative_oracle__mdb__declarative_oracle__enum_name_ordered_trust_module_as_0 },
  { mdb__declarative_oracle__mdb__declarative_oracle__enum_ordinal_ordered_trust_module_as_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_trust_module_as_0,

};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_0 = {
  (MR_String) "trusted_standard_library",
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

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_1[1] = { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_1 = {
  (MR_String) "trusted_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_2[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_2 = {
  (MR_String) "trusted_predicate",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_3[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_3 = {
  (MR_String) "trusted_function",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_0[1] = { &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_0 };

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_1[1] = { &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_1 };

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_2[1] = { &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_2 };

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_3[1] = { &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_3 };

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_trusted_object_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_trusted_object_0[4] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_3,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_1,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_2,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_0
};

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_trusted_object_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____trusted_object_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____trusted_object_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "trusted_object",
  { mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_trusted_object_0 },
  { mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_trusted_object_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_trusted_object_0,

};

static void MR_CALL 
mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_1(
  void * env_ptr_arg)
{
  struct mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_env_0_s * env_ptr = (struct mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_env_0__LambdaHeadVar__1_7) = mdbcomp__sym_name__string_to_sym_name_1_f_0((env_ptr)->mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_env_0__ModuleNameStr_5);
  ((env_ptr)->mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_env_0__cont)((env_ptr)->mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0(
  MR_Word * LambdaHeadVar__1_7,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_env_0_s env;

  (env).mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_env_0__LambdaHeadVar__1_7 = LambdaHeadVar__1_7;
  (env).mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_env_0__cont = cont;
  (env).mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Word Var_6;

    mercury__library__stdlib_module_doc_undoc_2_p_1(&(env).mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_env_0__ModuleNameStr_5, &Var_6, mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0_1, &env);
  }
}

static void MR_CALL 
mdb__declarative_oracle____Compare____trusted_object_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
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
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_String ArgX2_9 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_String ArgY2_10 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Integer ArgX3_12 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 2))));
              MR_Integer ArgY3_13 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 2))));
              MR_Word SubResult1_8;

              mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_8, ArgX1_6, ArgY1_7);
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
              {
                MR_Word SubResult2_11;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_11, ArgX2_9, ArgY2_10);
                succeeded = (SubResult2_11 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_11;
                else
                {
                  succeeded = (ArgX3_12 < ArgY3_13);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX3_12 > ArgY3_13);
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
        break;
      case (MR_Integer) 3:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
              MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 0))));
              MR_String ArgX2_17 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
              MR_String ArgY2_18 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
              MR_Integer ArgX3_20 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
              MR_Integer ArgY3_21 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
              MR_Word SubResult1_16;

              mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_16, ArgX1_14, ArgY1_15);
              succeeded = (SubResult1_16 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_16;
              else
              {
                MR_Word SubResult2_19;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_19, ArgX2_17, ArgY2_18);
                succeeded = (SubResult2_19 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_19;
                else
                {
                  succeeded = (ArgX3_20 < ArgY3_21);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX3_20 > ArgY3_21);
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
        break;
    }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trusted_object_0_0(
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
        {
          MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_18 == CastX_17);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;
          MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_String ArgY2_8;
          MR_Integer ArgX3_9 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 2))));
          MR_Integer ArgY3_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_8 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 1))));
            ArgY3_10 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 2))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_5, ArgY1_6);
            if (succeeded)
            {
              succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
              if (succeeded)
                succeeded = (ArgX3_9 == ArgY3_10);
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 0))));
          MR_Word ArgY1_12;
          MR_String ArgX2_13 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
          MR_String ArgY2_14;
          MR_Integer ArgX3_15 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
          MR_Integer ArgY3_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
            ArgY2_14 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
            ArgY3_16 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_11, ArgY1_12);
            if (succeeded)
            {
              succeeded = (strcmp(ArgX2_13, ArgY2_14) == 0);
              if (succeeded)
                succeeded = (ArgX3_15 == ArgY3_16);
            }
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle____Compare____trust_module_as_0_0(
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

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trust_module_as_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdb__declarative_oracle____Compare____oracle_state_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;
    MR_Integer CastX_37 = (MR_Integer) (ArgX1_4);
    MR_Integer CastY_38 = (MR_Integer) (ArgY1_5);

    succeeded = (CastX_37 == CastY_38);
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
      MR_Word ArgX1_29 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, 0))));
      MR_Word ArgY1_30 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, 0))));
      MR_Word ArgX2_32 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, 1))));
      MR_Word ArgY2_33 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, 1))));
      MR_Word ArgX3_35 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, 2))));
      MR_Word ArgY3_36 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, 2))));
      MR_Word SubResult1_31;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[2]), &SubResult1_31, ((MR_Box) (ArgX1_29)), ((MR_Box) (ArgY1_30)));
      succeeded = (SubResult1_31 != (MR_Integer) 0);
      if (succeeded)
      {
        SubResult1_6 = SubResult1_31;
        succeeded = (SubResult1_6 != (MR_Integer) 0);
      }
      else
      {
        MR_Word SubResult2_34;

        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[4]), &SubResult2_34, ((MR_Box) (ArgX2_32)), ((MR_Box) (ArgY2_33)));
        succeeded = (SubResult2_34 != (MR_Integer) 0);
        if (succeeded)
        {
          SubResult1_6 = SubResult2_34;
          succeeded = (SubResult1_6 != (MR_Integer) 0);
        }
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[5]), &SubResult1_6, ((MR_Box) (ArgX3_35)), ((MR_Box) (ArgY3_36)));
          succeeded = (SubResult1_6 != (MR_Integer) 0);
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer CastX_50 = (MR_Integer) (ArgX2_7);
      MR_Integer CastY_51 = (MR_Integer) (ArgY2_8);

      succeeded = (CastX_50 == CastY_51);
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
        MR_Word ArgX1_42 = ((MR_Word) ((MR_hl_field(0, ArgX2_7, 0))));
        MR_Word ArgY1_43 = ((MR_Word) ((MR_hl_field(0, ArgY2_8, 0))));
        MR_Word ArgX2_45 = ((MR_Word) ((MR_hl_field(0, ArgX2_7, 1))));
        MR_Word ArgY2_46 = ((MR_Word) ((MR_hl_field(0, ArgY2_8, 1))));
        MR_Word ArgX3_48 = ((MR_Word) ((MR_hl_field(0, ArgX2_7, 2))));
        MR_Word ArgY3_49 = ((MR_Word) ((MR_hl_field(0, ArgY2_8, 2))));
        MR_Word SubResult1_44;

        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[2]), &SubResult1_44, ((MR_Box) (ArgX1_42)), ((MR_Box) (ArgY1_43)));
        succeeded = (SubResult1_44 != (MR_Integer) 0);
        if (succeeded)
        {
          SubResult2_9 = SubResult1_44;
          succeeded = (SubResult2_9 != (MR_Integer) 0);
        }
        else
        {
          MR_Word SubResult2_47;

          mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[4]), &SubResult2_47, ((MR_Box) (ArgX2_45)), ((MR_Box) (ArgY2_46)));
          succeeded = (SubResult2_47 != (MR_Integer) 0);
          if (succeeded)
          {
            SubResult2_9 = SubResult2_47;
            succeeded = (SubResult2_9 != (MR_Integer) 0);
          }
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX3_48)), ((MR_Box) (ArgY3_49)));
            succeeded = (SubResult2_9 != (MR_Integer) 0);
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mdb__declarative_user____Compare____user_state_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[6]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__counter____Compare____counter_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_state_0_0(
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
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_20_20;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer CastX_27 = (MR_Integer) (ArgX1_3);
    MR_Integer CastY_28 = (MR_Integer) (ArgY1_4);
    MR_Integer CastX_38;
    MR_Integer CastY_39;

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_12_30;
      MR_Word TypeInfo_13_31;
      MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, 0))));
      MR_Word ArgY1_22 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, 0))));
      MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, 1))));
      MR_Word ArgY2_24 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, 1))));
      MR_Word ArgX3_25 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, 2))));
      MR_Word ArgY3_26 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[2]), ((MR_Box) (ArgX1_21)), ((MR_Box) (ArgY1_22)));
      if (succeeded)
      {
        TypeInfo_12_30 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_30, ((MR_Box) (ArgX2_23)), ((MR_Box) (ArgY2_24)));
        if (succeeded)
        {
          TypeInfo_13_31 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_31, ((MR_Box) (ArgX3_25)), ((MR_Box) (ArgY3_26)));
        }
      }
    }
    if (succeeded)
    {
      CastX_38 = (MR_Integer) (ArgX2_5);
      CastY_39 = (MR_Integer) (ArgY2_6);
      succeeded = (CastX_38 == CastY_39);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word TypeInfo_12_41;
        MR_Word TypeInfo_13_42;
        MR_Word ArgX1_32 = ((MR_Word) ((MR_hl_field(0, ArgX2_5, 0))));
        MR_Word ArgY1_33 = ((MR_Word) ((MR_hl_field(0, ArgY2_6, 0))));
        MR_Word ArgX2_34 = ((MR_Word) ((MR_hl_field(0, ArgX2_5, 1))));
        MR_Word ArgY2_35 = ((MR_Word) ((MR_hl_field(0, ArgY2_6, 1))));
        MR_Word ArgX3_36 = ((MR_Word) ((MR_hl_field(0, ArgX2_5, 2))));
        MR_Word ArgY3_37 = ((MR_Word) ((MR_hl_field(0, ArgY2_6, 2))));

        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[2]), ((MR_Box) (ArgX1_32)), ((MR_Box) (ArgY1_33)));
        if (succeeded)
        {
          TypeInfo_12_41 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_41, ((MR_Box) (ArgX2_34)), ((MR_Box) (ArgY2_35)));
          if (succeeded)
          {
            TypeInfo_13_42 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_42, ((MR_Box) (ArgX3_36)), ((MR_Box) (ArgY3_37)));
          }
        }
      }
      if (succeeded)
      {
        succeeded = mdb__declarative_user____Unify____user_state_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = mercury__counter____Unify____counter_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              TypeInfo_20_20 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_oracle____Compare____oracle_response_1_0(
  MR_Word TypeInfo_for_T_14,
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
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
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
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mdb__declarative_debugger____Compare____decl_answer_1_0(TypeInfo_for_T_14, HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

              mercury__io____Compare____text_output_stream_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_8 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 3);
                      MR_Word ArgY1_9 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 3);
                      MR_Integer Var_19 = (MR_Integer) (ArgX1_8);
                      MR_Integer Var_20 = (MR_Integer) (ArgY1_9);

                      succeeded = (Var_19 < Var_20);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_19 > Var_20);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
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
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box ArgX1_10 = (MR_hl_field(3, HeadVar__2_2, 1));
                      MR_Box ArgY1_11 = (MR_hl_field(3, HeadVar__3_3, 1));

                      mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, HeadVar__1_1, ArgX1_10, ArgY1_11);
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_response_1_0(
  MR_Word TypeInfo_for_T_15,
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
          MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_12 == CastX_11);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = mdb__declarative_debugger____Unify____decl_answer_1_0(TypeInfo_for_T_15, ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = mercury__io____Unify____text_output_stream_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 3);
              MR_Word ArgY1_8;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_7 == ArgY1_8);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box ArgX1_9 = (MR_hl_field(3, HeadVar__1_1, 1));
              MR_Box ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_10 = (MR_hl_field(3, HeadVar__2_2, 1));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, ArgX1_9, ArgY1_10);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_kb_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_kb_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle____Compare____module_trust_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____module_trust_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle____Compare____module_trust_info_0_0(
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
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_21 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_22 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_21 < Var_22);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_21 > Var_22);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_23 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_24 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_23 < Var_24);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_23 > Var_24);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____module_trust_info_0_0(
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
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle____Compare____known_exceptions_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____known_exceptions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&mdb__declarative_oracle_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&mdb__declarative_oracle_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle____Compare____is_trusted_0_0(
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

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____is_trusted_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle__remove_atom_from_ground_map_4_p_0(
  MR_Word FinalAtom_5,
  MR_Box ProcLayout_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
{
  MR_Word FinalDeclAtom_8;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, FinalAtom_5, 0))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, FinalAtom_5, 1))));

  Var_12 = ((MR_Word) ((MR_hl_field(0, Var_13, 1))));
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (ProcLayout_6));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (Var_12));
  }
  {
    FinalDeclAtom_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FinalDeclAtom_8, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, FinalDeclAtom_8, 1) = ((MR_Box) (Var_15));
  }
  mercury__map__delete_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), ((MR_Box) (FinalDeclAtom_8)), STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10);
}

static void MR_CALL 
mdb__declarative_oracle__add_atom_to_ground_map_5_p_0(
  MR_Word Truth_6,
  MR_Word FinalAtom_7,
  MR_Box ProcLayout_8,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11)
{
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, FinalAtom_7, 0))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, FinalAtom_7, 1))));

  Var_15 = ((MR_Word) ((MR_hl_field(0, Var_16, 1))));
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (ProcLayout_8));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (Var_15));
  }
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_14));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_18));
  }
  mercury__map__set_4_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), ((MR_Box) (Var_12)), ((MR_Box) (Truth_6)), STATE_VARIABLE_Map_0_10, STATE_VARIABLE_Map_11);
}

static MR_String MR_CALL 
mdb__declarative_oracle__format_trust_display_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String Display_5;
  MR_Integer Id_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word TrustedObject_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_String CmdDisplay_6;
  MR_String Var_43;
  MR_String Var_45;
  MR_String Var_46;

  switch (MR_tag((MR_Word) TrustedObject_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      CmdDisplay_6 = (MR_String) "the Mercury standard library";
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(1, TrustedObject_4, 0))));
        MR_String ModuleNameStr_8;

        ModuleNameStr_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_7);
        CmdDisplay_6 = mercury__string__f_43_43_2_f_0((MR_String) "module ", ModuleNameStr_8);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Name_9 = ((MR_String) ((MR_hl_field(2, TrustedObject_4, 1))));
        MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(2, TrustedObject_4, 2))));
        MR_String Var_13;
        MR_String Var_14;
        MR_String Var_16;
        MR_String Var_17;
        MR_String Var_19;
        MR_Word ModuleName_36 = ((MR_Word) ((MR_hl_field(2, TrustedObject_4, 0))));
        MR_String ModuleNameStr_37;

        ModuleNameStr_37 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_36);
        Var_19 = mercury__string__int_to_string_1_f_0(Arity_10);
        Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_19);
        Var_16 = mercury__string__f_43_43_2_f_0(Name_9, Var_17);
        Var_14 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_16);
        Var_13 = mercury__string__f_43_43_2_f_0(ModuleNameStr_37, Var_14);
        CmdDisplay_6 = mercury__string__f_43_43_2_f_0((MR_String) "predicate ", Var_13);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String Var_21;
        MR_String Var_22;
        MR_String Var_24;
        MR_String Var_25;
        MR_String Var_27;
        MR_Integer Var_28;
        MR_Word ModuleName_38 = ((MR_Word) ((MR_hl_field(3, TrustedObject_4, 0))));
        MR_String ModuleNameStr_39;
        MR_String Name_40 = ((MR_String) ((MR_hl_field(3, TrustedObject_4, 1))));
        MR_Integer Arity_41 = ((MR_Integer) ((MR_hl_field(3, TrustedObject_4, 2))));

        ModuleNameStr_39 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_38);
        Var_28 = (MR_Integer) ((MR_Unsigned) Arity_41 - (MR_Unsigned) 1);
        Var_27 = mercury__string__int_to_string_1_f_0(Var_28);
        Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_27);
        Var_24 = mercury__string__f_43_43_2_f_0(Name_40, Var_25);
        Var_22 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_24);
        Var_21 = mercury__string__f_43_43_2_f_0(ModuleNameStr_39, Var_22);
        CmdDisplay_6 = mercury__string__f_43_43_2_f_0((MR_String) "function ", Var_21);
      }
      break;
  }
  Var_43 = mercury__string__f_43_43_2_f_0(CmdDisplay_6, (MR_String) "\n");
  Var_45 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_43);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_3[0]), Id_3, &Var_46);
  Display_5 = mercury__string__f_43_43_2_f_0(Var_46, Var_45);
  return Display_5;
}

static MR_String MR_CALL 
mdb__declarative_oracle__format_trust_command_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String CmdStr_5;
  MR_Word TrustedObject_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));

  switch (MR_tag((MR_Word) TrustedObject_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      CmdStr_5 = (MR_String) "trust std lib\n";
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(1, TrustedObject_4, 0))));
        MR_String ModuleNameStr_7;
        MR_String Var_55;

        ModuleNameStr_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_6);
        Var_55 = mercury__string__f_43_43_2_f_0(ModuleNameStr_7, (MR_String) "\n");
        CmdStr_5 = mercury__string__f_43_43_2_f_0((MR_String) "trust ", Var_55);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Name_8 = ((MR_String) ((MR_hl_field(2, TrustedObject_4, 1))));
        MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(2, TrustedObject_4, 2))));
        MR_Word ModuleName_32 = ((MR_Word) ((MR_hl_field(2, TrustedObject_4, 0))));
        MR_String ModuleNameStr_33;
        MR_String Var_39;
        MR_String Var_46;
        MR_String Var_48;
        MR_String Var_49;
        MR_String Var_51;
        MR_String Var_52;

        ModuleNameStr_33 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_32);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_3[0]), Arity_9, &Var_39);
        Var_46 = mercury__string__f_43_43_2_f_0(Var_39, (MR_String) "\n");
        Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_46);
        Var_49 = mercury__string__f_43_43_2_f_0(Name_8, Var_48);
        Var_51 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_49);
        Var_52 = mercury__string__f_43_43_2_f_0(ModuleNameStr_33, Var_51);
        CmdStr_5 = mercury__string__f_43_43_2_f_0((MR_String) "trust pred*", Var_52);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Integer Var_29;
        MR_Word ModuleName_34 = ((MR_Word) ((MR_hl_field(3, TrustedObject_4, 0))));
        MR_String ModuleNameStr_35;
        MR_String Name_36 = ((MR_String) ((MR_hl_field(3, TrustedObject_4, 1))));
        MR_Integer Arity_37 = ((MR_Integer) ((MR_hl_field(3, TrustedObject_4, 2))));
        MR_String Var_58;
        MR_String Var_65;
        MR_String Var_67;
        MR_String Var_68;
        MR_String Var_70;
        MR_String Var_71;

        ModuleNameStr_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_34);
        Var_29 = (MR_Integer) ((MR_Unsigned) Arity_37 - (MR_Unsigned) 1);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_3[0]), Var_29, &Var_58);
        Var_65 = mercury__string__f_43_43_2_f_0(Var_58, (MR_String) "\n");
        Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_65);
        Var_68 = mercury__string__f_43_43_2_f_0(Name_36, Var_67);
        Var_70 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_68);
        Var_71 = mercury__string__f_43_43_2_f_0(ModuleNameStr_35, Var_70);
        CmdStr_5 = mercury__string__f_43_43_2_f_0((MR_String) "trust func*", Var_71);
      }
      break;
  }
  return CmdStr_5;
}

void MR_CALL 
mdb__declarative_oracle__reset_oracle_knowledge_base_2_p_0(
  MR_Word STATE_VARIABLE_Oracle_0_5,
  MR_Word * STATE_VARIABLE_Oracle_6)
{
  MR_Word EmptyKB_4;
  MR_Word Var_8;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word G_26;
  MR_Word C_27;
  MR_Word X_28;

  mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), &G_26);
  mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), &C_27);
  mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), &X_28);
  {
    EmptyKB_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, EmptyKB_4, 0) = ((MR_Box) (G_26));
    MR_hl_field(0, EmptyKB_4, 1) = ((MR_Box) (C_27));
    MR_hl_field(0, EmptyKB_4, 2) = ((MR_Box) (X_28));
  }
  Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_5, 0))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_5, 2))));
  Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_5, 3))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_5, 4))));
  Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_5, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Oracle_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (EmptyKB_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
  }
}

void MR_CALL 
mdb__declarative_oracle__set_oracle_testing_flag_3_p_0(
  MR_Word Testing_4,
  MR_Word STATE_VARIABLE_Oracle_0_8,
  MR_Word * STATE_VARIABLE_Oracle_9)
{
  MR_Word User0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_8, 2))));
  MR_Word User_7;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;

  mdb__declarative_user__set_user_testing_flag_3_p_0(Testing_4, User0_6, &User_7);
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_8, 0))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_8, 1))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_8, 3))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_8, 4))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_8, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Oracle_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (User_7));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_20));
  }
}

void MR_CALL 
mdb__declarative_oracle__set_oracle_browser_state_3_p_0(
  MR_Word Browser_4,
  MR_Word STATE_VARIABLE_Oracle_0_8,
  MR_Word * STATE_VARIABLE_Oracle_9)
{
  MR_Word User0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_8, 2))));
  MR_Word User_7;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;

  mdb__declarative_user__set_user_browser_state_3_p_0(Browser_4, User0_6, &User_7);
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_8, 0))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_8, 1))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_8, 3))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_8, 4))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_8, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Oracle_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (User_7));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_20));
  }
}

MR_Word MR_CALL 
mdb__declarative_oracle__get_oracle_user_output_stream_1_f_0(
  MR_Word Oracle_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4 = ((MR_Word) ((MR_hl_field(0, Oracle_3, 2))));

  HeadVar__2_2 = mdb__declarative_user__get_user_output_stream_1_f_0(Var_4);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mdb__declarative_oracle__get_oracle_user_input_stream_1_f_0(
  MR_Word Oracle_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4 = ((MR_Word) ((MR_hl_field(0, Oracle_3, 2))));

  HeadVar__2_2 = mdb__declarative_user__get_user_input_stream_1_f_0(Var_4);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mdb__declarative_oracle__get_oracle_browser_state_1_f_0(
  MR_Word Oracle_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4 = ((MR_Word) ((MR_hl_field(0, Oracle_3, 2))));

  HeadVar__2_2 = mdb__declarative_user__get_user_browser_state_1_f_0(Var_4);
  return HeadVar__2_2;
}

void MR_CALL 
mdb__declarative_oracle__update_revised_knowledge_base_3_p_0(
  MR_Word Oracle1_4,
  MR_Word Oracle2_5,
  MR_Word * Oracle3_6)
{
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, Oracle2_5, 0))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, Oracle1_4, 0))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, Oracle1_4, 2))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, Oracle1_4, 3))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, Oracle1_4, 4))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Oracle1_4, 5))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Oracle3_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_7));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_18));
  }
}

void MR_CALL 
mdb__declarative_oracle__revise_oracle_3_p_0(
  MR_Word TypeInfo_for_T_36,
  MR_Word Question_4,
  MR_Word STATE_VARIABLE_Oracle_0_11,
  MR_Word * STATE_VARIABLE_Oracle_12)
{
  MR_bool succeeded;
  MR_Word Current0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_11, 0))));
  MR_Word Answer_7;

  switch (MR_tag((MR_Word) Question_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box Node_37 = (MR_hl_field(0, Question_4, 0));
        MR_Word Atom_39 = ((MR_Word) ((MR_hl_field(0, Question_4, 2))));
        MR_Word Map_40 = ((MR_Word) ((MR_hl_field(0, Current0_6, 0))));
        MR_Word Truth_41;
        MR_Box conv2_Truth_41;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), Map_40, ((MR_Box) (Atom_39)), &conv2_Truth_41);
        if (succeeded)
        {
          Truth_41 = ((MR_Word) (conv2_Truth_41));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          {
            Answer_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Answer_7, 0) = Node_37;
            MR_hl_field(0, Answer_7, 1) = (MR_Box) ((MR_Unsigned) (Truth_41));
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Call_42 = ((MR_Word) ((MR_hl_field(1, Question_4, 1))));
        MR_Word CMap_44 = ((MR_Word) ((MR_hl_field(0, Current0_6, 1))));
        MR_Box Node_54 = (MR_hl_field(1, Question_4, 0));
        MR_Word Truth_55;
        MR_Box conv0_Truth_55;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), CMap_44, ((MR_Box) (Call_42)), &conv0_Truth_55);
        if (succeeded)
        {
          Truth_55 = ((MR_Word) (conv0_Truth_55));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          {
            Answer_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Answer_7, 0) = Node_54;
            MR_hl_field(0, Answer_7, 1) = (MR_Box) ((MR_Unsigned) (Truth_55));
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Exception_45 = ((MR_Word) ((MR_hl_field(2, Question_4, 2))));
        MR_Word XMap_46 = ((MR_Word) ((MR_hl_field(0, Current0_6, 2))));
        MR_Word X_47;
        MR_Word Possible_48;
        MR_Word Impossible_49;
        MR_Word Inadmissible_50;
        MR_Box Node_56 = (MR_hl_field(2, Question_4, 0));
        MR_Word Call_57 = ((MR_Word) ((MR_hl_field(2, Question_4, 1))));
        MR_Box conv1_X_47;
        MR_Word TypeCtorInfo_35_64;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), XMap_46, ((MR_Box) (Call_57)), &conv1_X_47);
        if (succeeded)
        {
          X_47 = ((MR_Word) (conv1_X_47));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Possible_48 = ((MR_Word) ((MR_hl_field(0, X_47, 0))));
          Impossible_49 = ((MR_Word) ((MR_hl_field(0, X_47, 1))));
          Inadmissible_50 = ((MR_Word) ((MR_hl_field(0, X_47, 2))));
          TypeCtorInfo_35_64 = (MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0);
          succeeded = mercury__set__member_2_p_0(TypeCtorInfo_35_64, ((MR_Box) (Exception_45)), Possible_48);
          if (succeeded)
          {
            {
              Answer_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Answer_7, 0) = Node_56;
              MR_hl_field(0, Answer_7, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = mercury__set__member_2_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_45)), Impossible_49);
            if (succeeded)
            {
              {
                Answer_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Answer_7, 0) = Node_56;
                MR_hl_field(0, Answer_7, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              }
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Var_53;

              succeeded = mercury__set__member_2_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_45)), Inadmissible_50);
              if (succeeded)
              {
                Var_53 = (MR_Integer) 2;
                {
                  Answer_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Answer_7, 0) = Node_56;
                  MR_hl_field(0, Answer_7, 1) = (MR_Box) ((MR_Unsigned) (Var_53));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      break;
  }
  if (succeeded)
  {
    MR_Word Current_8;
    MR_Word Revised0_9;
    MR_Word Revised_10;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(Question_4, Current0_6, &Current_8);
    Revised0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_11, 1))));
    mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(Question_4, Answer_7, Revised0_9, &Revised_10);
    Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_11, 2))));
    Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_11, 3))));
    Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_11, 4))));
    Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_11, 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Oracle_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Current_8));
      MR_hl_field(0, base, 1) = ((MR_Box) (Revised_10));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_27));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_29));
    }
  }
  else
    *STATE_VARIABLE_Oracle_12 = STATE_VARIABLE_Oracle_0_11;
}

static void MR_CALL 
mdb__declarative_oracle__oracle_confirm_bug_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Oracle_12;

  mdb__declarative_oracle__revise_oracle_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Oracle_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Oracle_12));
}

void MR_CALL 
mdb__declarative_oracle__oracle_confirm_bug_7_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word Bug_8,
  MR_Word Evidence_9,
  MR_Word * Confirmation_10,
  MR_Word Oracle0_11,
  MR_Word * Oracle_12)
{
  MR_Word User0_14 = ((MR_Word) ((MR_hl_field(0, Oracle0_11, 2))));
  MR_Word User_15;
  MR_Word Oracle1_16;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;

  mdb__declarative_user__user_confirm_bug_6_p_0(Bug_8, Confirmation_10, User0_14, &User_15);
  Var_26 = ((MR_Word) ((MR_hl_field(0, Oracle0_11, 0))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, Oracle0_11, 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, Oracle0_11, 3))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, Oracle0_11, 4))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, Oracle0_11, 5))));
  {
    Oracle1_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Oracle1_16, 0) = ((MR_Box) (Var_26));
    MR_hl_field(0, Oracle1_16, 1) = ((MR_Box) (Var_27));
    MR_hl_field(0, Oracle1_16, 2) = ((MR_Box) (User_15));
    MR_hl_field(0, Oracle1_16, 3) = ((MR_Box) (Var_29));
    MR_hl_field(0, Oracle1_16, 4) = ((MR_Box) (Var_30));
    MR_hl_field(0, Oracle1_16, 5) = ((MR_Box) (Var_31));
  }
  switch (*Confirmation_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 0:
      *Oracle_12 = Oracle1_16;
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfo_37_37;
        MR_Word Var_20;
        MR_Box conv1_Oracle_12;

        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) (&mdb__declarative_oracle_scalar_common_4[2]));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) (mdb__declarative_oracle__oracle_confirm_bug_7_p_0_1));
          MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_20, 3) = ((MR_Box) (TypeInfo_for_T_32));
        }
        {
          TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_37_37, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
          MR_hl_field(0, TypeInfo_37_37, 1) = ((MR_Box) (TypeInfo_for_T_32));
        }
        mercury__list__foldl_4_p_0(TypeInfo_37_37, (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0), (MR_Word) (Var_20), (MR_Word) (Evidence_9), ((MR_Box) (Oracle1_16)), &conv1_Oracle_12);
        *Oracle_12 = ((MR_Word) (conv1_Oracle_12));
      }
      break;
  }
}

void MR_CALL 
mdb__declarative_oracle__query_oracle_7_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word Question_8,
  MR_Word * Response_9,
  MR_Word * FromUser_10,
  MR_Word STATE_VARIABLE_Oracle_0_15,
  MR_Word * STATE_VARIABLE_Oracle_16)
{
  MR_bool succeeded;
  MR_Word Answer_13;

  succeeded = mdb__declarative_oracle__answer_known_3_p_0(TypeInfo_for_T_25, STATE_VARIABLE_Oracle_0_15, Question_8, &Answer_13);
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Response_9 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Answer_13));
    }
    *FromUser_10 = (MR_Integer) 0;
    *STATE_VARIABLE_Oracle_16 = STATE_VARIABLE_Oracle_0_15;
  }
  else
  {
    MR_Word UserQuestion_14;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_15, 1))));
    MR_Word DeclTruth_28;
    MR_Word Answer_26;

    switch (MR_tag((MR_Word) Question_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Node_29 = (MR_hl_field(0, Question_8, 0));
          MR_Word Atom_31 = ((MR_Word) ((MR_hl_field(0, Question_8, 2))));
          MR_Word Map_32 = ((MR_Word) ((MR_hl_field(0, Var_19, 0))));
          MR_Word Truth_33;
          MR_Box conv2_Truth_33;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), Map_32, ((MR_Box) (Atom_31)), &conv2_Truth_33);
          if (succeeded)
          {
            Truth_33 = ((MR_Word) (conv2_Truth_33));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            {
              Answer_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Answer_26, 0) = Node_29;
              MR_hl_field(0, Answer_26, 1) = (MR_Box) ((MR_Unsigned) (Truth_33));
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Call_34 = ((MR_Word) ((MR_hl_field(1, Question_8, 1))));
          MR_Word CMap_36 = ((MR_Word) ((MR_hl_field(0, Var_19, 1))));
          MR_Box Node_46 = (MR_hl_field(1, Question_8, 0));
          MR_Word Truth_47;
          MR_Box conv0_Truth_47;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), CMap_36, ((MR_Box) (Call_34)), &conv0_Truth_47);
          if (succeeded)
          {
            Truth_47 = ((MR_Word) (conv0_Truth_47));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            {
              Answer_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Answer_26, 0) = Node_46;
              MR_hl_field(0, Answer_26, 1) = (MR_Box) ((MR_Unsigned) (Truth_47));
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Exception_37 = ((MR_Word) ((MR_hl_field(2, Question_8, 2))));
          MR_Word XMap_38 = ((MR_Word) ((MR_hl_field(0, Var_19, 2))));
          MR_Word X_39;
          MR_Word Possible_40;
          MR_Word Impossible_41;
          MR_Word Inadmissible_42;
          MR_Box Node_48 = (MR_hl_field(2, Question_8, 0));
          MR_Word Call_49 = ((MR_Word) ((MR_hl_field(2, Question_8, 1))));
          MR_Box conv1_X_39;
          MR_Word TypeCtorInfo_35_56;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), XMap_38, ((MR_Box) (Call_49)), &conv1_X_39);
          if (succeeded)
          {
            X_39 = ((MR_Word) (conv1_X_39));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            Possible_40 = ((MR_Word) ((MR_hl_field(0, X_39, 0))));
            Impossible_41 = ((MR_Word) ((MR_hl_field(0, X_39, 1))));
            Inadmissible_42 = ((MR_Word) ((MR_hl_field(0, X_39, 2))));
            TypeCtorInfo_35_56 = (MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0);
            succeeded = mercury__set__member_2_p_0(TypeCtorInfo_35_56, ((MR_Box) (Exception_37)), Possible_40);
            if (succeeded)
            {
              {
                Answer_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Answer_26, 0) = Node_48;
                MR_hl_field(0, Answer_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = mercury__set__member_2_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_37)), Impossible_41);
              if (succeeded)
              {
                {
                  Answer_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Answer_26, 0) = Node_48;
                  MR_hl_field(0, Answer_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                }
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word Var_45;

                succeeded = mercury__set__member_2_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_37)), Inadmissible_42);
                if (succeeded)
                {
                  Var_45 = (MR_Integer) 2;
                  {
                    Answer_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Answer_26, 0) = Node_48;
                    MR_hl_field(0, Answer_26, 1) = (MR_Box) ((MR_Unsigned) (Var_45));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        break;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Answer_26)) == (MR_Integer) 0);
      if (succeeded)
        DeclTruth_28 = ((MR_Unsigned) ((MR_hl_field(0, Answer_26, 1))) & (MR_Integer) 3);
    }
    if (succeeded)
      {
        UserQuestion_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, UserQuestion_14, 0) = ((MR_Box) (Question_8));
        MR_hl_field(1, UserQuestion_14, 1) = (MR_Box) ((MR_Unsigned) (DeclTruth_28));
      }
    else
      {
        UserQuestion_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UserQuestion_14, 0) = ((MR_Box) (Question_8));
      }
    mdb__declarative_oracle__query_oracle_user_6_p_0(TypeInfo_for_T_25, UserQuestion_14, Response_9, STATE_VARIABLE_Oracle_0_15, STATE_VARIABLE_Oracle_16);
    *FromUser_10 = (MR_Integer) 1;
  }
}

static void MR_CALL 
mdb__declarative_oracle__query_oracle_user_6_p_0(
  MR_Word TypeInfo_for_T_83,
  MR_Word UserQuestion_7,
  MR_Word * OracleResponse_8,
  MR_Word STATE_VARIABLE_Oracle_0_29,
  MR_Word * STATE_VARIABLE_Oracle_30)
{
  MR_Word User0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_29, 2))));
  MR_Word UserResponse_12;
  MR_Word User_13;
  MR_Word STATE_VARIABLE_Oracle_2_35;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;

  mdb__declarative_user__query_user_6_p_0(TypeInfo_for_T_83, UserQuestion_7, &UserResponse_12, User0_11, &User_13);
  switch (MR_tag((MR_Word) UserResponse_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(UserResponse_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *OracleResponse_8 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_Oracle_2_35 = STATE_VARIABLE_Oracle_0_29;
          }
          break;
        case (MR_Integer) 1:
          {
            *OracleResponse_8 = (MR_Word) ((MR_Unsigned) 4U);
            STATE_VARIABLE_Oracle_2_35 = STATE_VARIABLE_Oracle_0_29;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Question_14 = ((MR_Word) ((MR_hl_field(1, UserResponse_12, 0))));
        MR_Word Answer_15 = ((MR_Word) ((MR_hl_field(1, UserResponse_12, 1))));
        MR_Word Current0_16;
        MR_Word Revised0_17;
        MR_Word Revised_18;
        MR_Word Current_19;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *OracleResponse_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Answer_15));
        }
        Current0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_29, 0))));
        Revised0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_29, 1))));
        mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(Question_14, Revised0_17, &Revised_18);
        mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(Question_14, Answer_15, Current0_16, &Current_19);
        Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_29, 2))));
        Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_29, 3))));
        Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_29, 4))));
        Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_29, 5))));
        {
          STATE_VARIABLE_Oracle_2_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Oracle_2_35, 0) = ((MR_Box) (Current_19));
          MR_hl_field(0, STATE_VARIABLE_Oracle_2_35, 1) = ((MR_Box) (Revised_18));
          MR_hl_field(0, STATE_VARIABLE_Oracle_2_35, 2) = ((MR_Box) (Var_65));
          MR_hl_field(0, STATE_VARIABLE_Oracle_2_35, 3) = ((MR_Box) (Var_66));
          MR_hl_field(0, STATE_VARIABLE_Oracle_2_35, 4) = ((MR_Box) (Var_67));
          MR_hl_field(0, STATE_VARIABLE_Oracle_2_35, 5) = ((MR_Box) (Var_68));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Atom_20;
        MR_Box Var_36;
        MR_Word Var_38;
        MR_Box Var_39;
        MR_Word Question_45 = ((MR_Word) ((MR_hl_field(2, UserResponse_12, 0))));

        Atom_20 = mdb__declarative_debugger__get_decl_question_atom_1_f_0(TypeInfo_for_T_83, Question_45);
        Var_36 = ((MR_Box) ((MR_hl_field(0, Atom_20, 0))));
        mdb__declarative_oracle__add_trusted_pred_or_func_3_p_0(Var_36, STATE_VARIABLE_Oracle_0_29, &STATE_VARIABLE_Oracle_2_35);
        Var_39 = mdb__declarative_debugger__get_decl_question_node_1_f_0(TypeInfo_for_T_83, Question_45);
        {
          Var_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_38, 0) = Var_39;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *OracleResponse_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_38));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, UserResponse_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ProcLabel_21;
            MR_Word Module_22;
            MR_Box Var_40;
            MR_Word Var_42;
            MR_Box Var_43;
            MR_Word Question_46 = ((MR_Word) ((MR_hl_field(3, UserResponse_12, 1))));
            MR_Word Atom_47;
            MR_String Var_23;
            MR_Integer Var_24;
            MR_Word Var_25;

            Atom_47 = mdb__declarative_debugger__get_decl_question_atom_1_f_0(TypeInfo_for_T_83, Question_46);
            Var_40 = ((MR_Box) ((MR_hl_field(0, Atom_47, 0))));
            ProcLabel_21 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(Var_40);
            mdb__declarative_execution__get_pred_attributes_5_p_0(ProcLabel_21, &Module_22, &Var_23, &Var_24, &Var_25);
            mdb__declarative_oracle__add_trusted_module_3_p_0(Module_22, STATE_VARIABLE_Oracle_0_29, &STATE_VARIABLE_Oracle_2_35);
            Var_43 = mdb__declarative_debugger__get_decl_question_node_1_f_0(TypeInfo_for_T_83, Question_46);
            {
              Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_42, 0) = Var_43;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *OracleResponse_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_42));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OutStream_26 = ((MR_Word) ((MR_hl_field(3, UserResponse_12, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *OracleResponse_8 = base;
              MR_hl_field(2, base, 0) = ((MR_Box) (OutStream_26));
            }
            STATE_VARIABLE_Oracle_2_35 = STATE_VARIABLE_Oracle_0_29;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Mode_27 = ((MR_Unsigned) ((MR_hl_field(3, UserResponse_12, 1))) & (MR_Integer) 3);

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *OracleResponse_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Mode_27));
            }
            STATE_VARIABLE_Oracle_2_35 = STATE_VARIABLE_Oracle_0_29;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Box Node_28 = (MR_hl_field(3, UserResponse_12, 1));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *OracleResponse_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = Node_28;
            }
            STATE_VARIABLE_Oracle_2_35 = STATE_VARIABLE_Oracle_0_29;
          }
          break;
      }
      break;
  }
  Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_35, 0))));
  Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_35, 1))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_35, 3))));
  Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_35, 4))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_35, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Oracle_30 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_77));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_78));
    MR_hl_field(0, base, 2) = ((MR_Box) (User_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_80));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_81));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_82));
  }
}

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Map_10;

  mdb__declarative_oracle__remove_atom_from_ground_map_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Box) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Map_10);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Map_10));
}

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(
  MR_Word Question_4,
  MR_Word STATE_VARIABLE_KB_0_28,
  MR_Word * STATE_VARIABLE_KB_29)
{
  MR_bool succeeded;
  MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_28, 2))));
  MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_28, 1))));
  MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_28, 0))));

  switch (MR_tag((MR_Word) Question_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Atom_8 = ((MR_Word) ((MR_hl_field(0, Question_4, 2))));
        MR_Word GroundMap_10;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Box Var_32;
        MR_Word Var_33;
        MR_Box conv2_GroundMap_10;
        MR_Word Var_43;
        MR_Word Var_44;

        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_30, 0) = ((MR_Box) (&mdb__declarative_oracle_scalar_common_4[1]));
          MR_hl_field(0, Var_30, 1) = ((MR_Box) (mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0_1));
          MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_30, 3) = ((MR_Box) (Atom_8));
        }
        Var_33 = ((MR_Word) ((MR_hl_field(0, Atom_8, 0))));
        Var_32 = ((MR_Box) ((MR_hl_field(0, Var_33, 0))));
        Var_31 = mdbcomp__rtti_access__get_all_modes_for_layout_1_f_0(Var_32);
        mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_1[2]), Var_30, Var_31, ((MR_Box) (Var_70)), &conv2_GroundMap_10);
        GroundMap_10 = ((MR_Word) (conv2_GroundMap_10));
        Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_28, 1))));
        Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_28, 2))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_KB_29 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GroundMap_10));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_43));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_44));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InitAtom_12 = ((MR_Word) ((MR_hl_field(1, Question_4, 1))));
        MR_Word CompleteMap_15;
        MR_Word Var_47;
        MR_Word Var_49;

        mercury__map__delete_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), ((MR_Box) (InitAtom_12)), Var_69, &CompleteMap_15);
        Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_28, 0))));
        Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_28, 2))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_KB_29 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
          MR_hl_field(0, base, 1) = ((MR_Box) (CompleteMap_15));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_49));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Exception_17 = ((MR_Word) ((MR_hl_field(2, Question_4, 2))));
        MR_Word ExceptionsMap_27;
        MR_Word InitAtom_37 = ((MR_Word) ((MR_hl_field(2, Question_4, 1))));
        MR_Word Possible0_20;
        MR_Word Impossible0_21;
        MR_Word Inadmissible0_22;
        MR_Word KnownExceptions0_19;
        MR_Box conv0_KnownExceptions0_19;
        MR_Word Var_52;
        MR_Word Var_53;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), Var_68, ((MR_Box) (InitAtom_37)), &conv0_KnownExceptions0_19);
        if (succeeded)
        {
          KnownExceptions0_19 = ((MR_Word) (conv0_KnownExceptions0_19));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Possible0_20 = ((MR_Word) ((MR_hl_field(0, KnownExceptions0_19, 0))));
          Impossible0_21 = ((MR_Word) ((MR_hl_field(0, KnownExceptions0_19, 1))));
          Inadmissible0_22 = ((MR_Word) ((MR_hl_field(0, KnownExceptions0_19, 2))));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Possible_23;
          MR_Word Impossible_24;
          MR_Word Inadmissible_25;
          MR_Word KnownExceptions_26;

          mercury__set__delete_3_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_17)), Possible0_20, &Possible_23);
          mercury__set__delete_3_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_17)), Impossible0_21, &Impossible_24);
          mercury__set__delete_3_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_17)), Inadmissible0_22, &Inadmissible_25);
          {
            KnownExceptions_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, KnownExceptions_26, 0) = ((MR_Box) (Possible_23));
            MR_hl_field(0, KnownExceptions_26, 1) = ((MR_Box) (Impossible_24));
            MR_hl_field(0, KnownExceptions_26, 2) = ((MR_Box) (Inadmissible_25));
          }
          mercury__map__set_4_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), ((MR_Box) (InitAtom_37)), ((MR_Box) (KnownExceptions_26)), Var_68, &ExceptionsMap_27);
        }
        else
          ExceptionsMap_27 = Var_68;
        Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_28, 0))));
        Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_28, 1))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_KB_29 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_53));
          MR_hl_field(0, base, 2) = ((MR_Box) (ExceptionsMap_27));
        }
      }
      break;
  }
}

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Map_11;

  mdb__declarative_oracle__add_atom_to_ground_map_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Box) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Map_11);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Map_11));
}

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(
  MR_Word Question_5,
  MR_Word Answer_6,
  MR_Word STATE_VARIABLE_KB_0_40,
  MR_Word * STATE_VARIABLE_KB_41)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Answer_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Truth_16 = ((MR_Unsigned) ((MR_hl_field(0, Answer_6, 1))) & (MR_Integer) 3);

        switch (MR_tag((MR_Word) Question_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Atom_19 = ((MR_Word) ((MR_hl_field(0, Question_5, 2))));
              MR_Word Map0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_40, 0))));
              MR_Box ProcLayout_21;
              MR_Word Map_22;
              MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Atom_19, 0))));
              MR_Word Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_40, 1))));
              MR_Word Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_40, 2))));

              ProcLayout_21 = ((MR_Box) ((MR_hl_field(0, Var_42, 0))));
              switch (Truth_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_43;
                    MR_Word Var_44;
                    MR_Box conv2_Map_22;

                    {
                      Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_43, 0) = ((MR_Box) (&mdb__declarative_oracle_scalar_common_7[0]));
                      MR_hl_field(0, Var_43, 1) = ((MR_Box) (mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0_1));
                      MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_43, 3) = ((MR_Box) (Truth_16));
                      MR_hl_field(0, Var_43, 4) = ((MR_Box) (Atom_19));
                    }
                    Var_44 = mdbcomp__rtti_access__get_all_modes_for_layout_1_f_0(ProcLayout_21);
                    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_1[2]), Var_43, Var_44, ((MR_Box) (Map0_20)), &conv2_Map_22);
                    Map_22 = ((MR_Word) (conv2_Map_22));
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  mercury__map__set_4_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), ((MR_Box) (Atom_19)), ((MR_Box) (Truth_16)), Map0_20, &Map_22);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_KB_41 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Map_22));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_99));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_100));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Call_24 = ((MR_Word) ((MR_hl_field(1, Question_5, 1))));
              MR_Word Map0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_40, 1))));
              MR_Word Map_49;
              MR_Word Var_91;
              MR_Word Var_93;

              mercury__map__set_4_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), ((MR_Box) (Call_24)), ((MR_Box) (Truth_16)), Map0_48, &Map_49);
              Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_40, 0))));
              Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_40, 2))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_KB_41 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_91));
                MR_hl_field(0, base, 1) = ((MR_Box) (Map_49));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_93));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Exception_27 = ((MR_Word) ((MR_hl_field(2, Question_5, 2))));
              MR_Word KnownExceptions0_29;
              MR_Word KnownExceptions_35;
              MR_Word Map0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_40, 2))));
              MR_Word Map_51;
              MR_Word Call_52 = ((MR_Word) ((MR_hl_field(2, Question_5, 1))));
              MR_Word Var_86;
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word OldKnownExceptions_28;
              MR_Box conv0_OldKnownExceptions_28;
              MR_Word Var_96;
              MR_Word Var_97;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), Map0_50, ((MR_Box) (Call_52)), &conv0_OldKnownExceptions_28);
              if (succeeded)
              {
                OldKnownExceptions_28 = ((MR_Word) (conv0_OldKnownExceptions_28));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                KnownExceptions0_29 = OldKnownExceptions_28;
              else
              {
                MR_Word EmptyPossible0_30;
                MR_Word EmptyImpossible0_31;
                MR_Word EmptyInadmissible0_32;

                mercury__set__init_1_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), &EmptyPossible0_30);
                mercury__set__init_1_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), &EmptyImpossible0_31);
                mercury__set__init_1_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), &EmptyInadmissible0_32);
                {
                  KnownExceptions0_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, KnownExceptions0_29, 0) = ((MR_Box) (EmptyPossible0_30));
                  MR_hl_field(0, KnownExceptions0_29, 1) = ((MR_Box) (EmptyImpossible0_31));
                  MR_hl_field(0, KnownExceptions0_29, 2) = ((MR_Box) (EmptyInadmissible0_32));
                }
              }
              Var_88 = ((MR_Word) ((MR_hl_field(0, KnownExceptions0_29, 0))));
              Var_87 = ((MR_Word) ((MR_hl_field(0, KnownExceptions0_29, 1))));
              Var_86 = ((MR_Word) ((MR_hl_field(0, KnownExceptions0_29, 2))));
              switch (Truth_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Possible_34;
                    MR_Word Var_58;
                    MR_Word Var_59;

                    mercury__set__insert_3_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_27)), Var_88, &Possible_34);
                    Var_58 = ((MR_Word) ((MR_hl_field(0, KnownExceptions0_29, 1))));
                    Var_59 = ((MR_Word) ((MR_hl_field(0, KnownExceptions0_29, 2))));
                    {
                      KnownExceptions_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, KnownExceptions_35, 0) = ((MR_Box) (Possible_34));
                      MR_hl_field(0, KnownExceptions_35, 1) = ((MR_Box) (Var_58));
                      MR_hl_field(0, KnownExceptions_35, 2) = ((MR_Box) (Var_59));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Impossible_37;
                    MR_Word Var_62;
                    MR_Word Var_64;

                    mercury__set__insert_3_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_27)), Var_87, &Impossible_37);
                    Var_62 = ((MR_Word) ((MR_hl_field(0, KnownExceptions0_29, 0))));
                    Var_64 = ((MR_Word) ((MR_hl_field(0, KnownExceptions0_29, 2))));
                    {
                      KnownExceptions_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, KnownExceptions_35, 0) = ((MR_Box) (Var_62));
                      MR_hl_field(0, KnownExceptions_35, 1) = ((MR_Box) (Impossible_37));
                      MR_hl_field(0, KnownExceptions_35, 2) = ((MR_Box) (Var_64));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Inadmissible_39;
                    MR_Word Var_67;
                    MR_Word Var_68;

                    mercury__set__insert_3_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_27)), Var_86, &Inadmissible_39);
                    Var_67 = ((MR_Word) ((MR_hl_field(0, KnownExceptions0_29, 0))));
                    Var_68 = ((MR_Word) ((MR_hl_field(0, KnownExceptions0_29, 1))));
                    {
                      KnownExceptions_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, KnownExceptions_35, 0) = ((MR_Box) (Var_67));
                      MR_hl_field(0, KnownExceptions_35, 1) = ((MR_Box) (Var_68));
                      MR_hl_field(0, KnownExceptions_35, 2) = ((MR_Box) (Inadmissible_39));
                    }
                  }
                  break;
              }
              mercury__map__set_4_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), ((MR_Box) (Call_52)), ((MR_Box) (KnownExceptions_35)), Map0_50, &Map_51);
              Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_40, 0))));
              Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_KB_0_40, 1))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_KB_41 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_96));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_97));
                MR_hl_field(0, base, 2) = ((MR_Box) (Map_51));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_KB_41 = STATE_VARIABLE_KB_0_40;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_KB_41 = STATE_VARIABLE_KB_0_40;
      break;
    case (MR_Integer) 3:
      *STATE_VARIABLE_KB_41 = STATE_VARIABLE_KB_0_40;
      break;
  }
}

MR_bool MR_CALL 
mdb__declarative_oracle__answer_known_3_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word Oracle_4,
  MR_Word Question_5,
  MR_Word * Answer_6)
{
  MR_bool succeeded;
  MR_Word Atom_7;
  MR_Box Var_8;
  MR_Word ModuleTrustMap_18;
  MR_Word ProcLabel_19;

  Atom_7 = mdb__declarative_debugger__get_decl_question_atom_1_f_0(TypeInfo_for_T_17, Question_5);
  Var_8 = ((MR_Box) ((MR_hl_field(0, Atom_7, 0))));
  ModuleTrustMap_18 = ((MR_Word) ((MR_hl_field(0, Oracle_4, 5))));
  ProcLabel_19 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(Var_8);
  if (((MR_tag((MR_Word) ProcLabel_19)) == (MR_Integer) 0))
  {
    MR_Word Module_20 = ((MR_Word) ((MR_hl_field(0, ProcLabel_19, 0))));
    MR_Word PredOrFunc_21 = ((MR_Unsigned) ((MR_hl_field(0, ProcLabel_19, 1))) & (MR_Integer) 1);
    MR_String Name_23 = ((MR_String) ((MR_hl_field(0, ProcLabel_19, 3))));
    MR_Integer Arity_24 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_19, 4))));
    MR_Word ModuleTrustInfo_26;
    MR_Word TrustedAsStdLib_27;
    MR_Word TrustedAsModule_28;
    MR_Word PredMap_29;
    MR_Word FuncMap_30;
    MR_Box conv0_ModuleTrustInfo_26;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0), ModuleTrustMap_18, ((MR_Box) (Module_20)), &conv0_ModuleTrustInfo_26);
    if (succeeded)
    {
      ModuleTrustInfo_26 = ((MR_Word) (conv0_ModuleTrustInfo_26));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TrustedAsStdLib_27 = ((((MR_Unsigned) ((MR_hl_field(0, ModuleTrustInfo_26, 0))) >> 1)) & (MR_Integer) 1);
      TrustedAsModule_28 = ((MR_Unsigned) ((MR_hl_field(0, ModuleTrustInfo_26, 0))) & (MR_Integer) 1);
      PredMap_29 = ((MR_Word) ((MR_hl_field(0, ModuleTrustInfo_26, 1))));
      FuncMap_30 = ((MR_Word) ((MR_hl_field(0, ModuleTrustInfo_26, 2))));
      succeeded = (TrustedAsStdLib_27 == (MR_Integer) 1);
      if (!(succeeded))
      {
        succeeded = (TrustedAsModule_28 == (MR_Integer) 1);
        if (!(succeeded))
        {
          MR_Word TypeCtorInfo_36_49;
          MR_Word TrustedArities_31;

          switch (PredOrFunc_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Box conv1_TrustedArities_31;

                succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]), FuncMap_30, ((MR_Box) (Name_23)), &conv1_TrustedArities_31);
                if (succeeded)
                {
                  TrustedArities_31 = ((MR_Word) (conv1_TrustedArities_31));
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box conv2_TrustedArities_31;

                succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]), PredMap_29, ((MR_Box) (Name_23)), &conv2_TrustedArities_31);
                if (succeeded)
                {
                  TrustedArities_31 = ((MR_Word) (conv2_TrustedArities_31));
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          if (succeeded)
          {
            TypeCtorInfo_36_49 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
            succeeded = mercury__set__contains_2_p_0(TypeCtorInfo_36_49, TrustedArities_31, ((MR_Box) (Arity_24)));
          }
        }
      }
    }
  }
  else
    succeeded = MR_TRUE;
  if (succeeded)
  {
    MR_Box Var_9;

    Var_9 = mdb__declarative_debugger__get_decl_question_node_1_f_0(TypeInfo_for_T_17, Question_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Answer_6 = base;
      MR_hl_field(2, base, 0) = Var_9;
    }
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, Oracle_4, 0))));

    switch (MR_tag((MR_Word) Question_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Node_50 = (MR_hl_field(0, Question_5, 0));
          MR_Word Atom_52 = ((MR_Word) ((MR_hl_field(0, Question_5, 2))));
          MR_Word Map_53 = ((MR_Word) ((MR_hl_field(0, Var_10, 0))));
          MR_Word Truth_54;
          MR_Box conv5_Truth_54;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), Map_53, ((MR_Box) (Atom_52)), &conv5_Truth_54);
          if (succeeded)
          {
            Truth_54 = ((MR_Word) (conv5_Truth_54));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Answer_6 = base;
              MR_hl_field(0, base, 0) = Node_50;
              MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Truth_54));
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Call_55 = ((MR_Word) ((MR_hl_field(1, Question_5, 1))));
          MR_Word CMap_57 = ((MR_Word) ((MR_hl_field(0, Var_10, 1))));
          MR_Box Node_67 = (MR_hl_field(1, Question_5, 0));
          MR_Word Truth_68;
          MR_Box conv3_Truth_68;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), CMap_57, ((MR_Box) (Call_55)), &conv3_Truth_68);
          if (succeeded)
          {
            Truth_68 = ((MR_Word) (conv3_Truth_68));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Answer_6 = base;
              MR_hl_field(0, base, 0) = Node_67;
              MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Truth_68));
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Exception_58 = ((MR_Word) ((MR_hl_field(2, Question_5, 2))));
          MR_Word XMap_59 = ((MR_Word) ((MR_hl_field(0, Var_10, 2))));
          MR_Word X_60;
          MR_Word Possible_61;
          MR_Word Impossible_62;
          MR_Word Inadmissible_63;
          MR_Box Node_69 = (MR_hl_field(2, Question_5, 0));
          MR_Word Call_70 = ((MR_Word) ((MR_hl_field(2, Question_5, 1))));
          MR_Box conv4_X_60;
          MR_Word TypeCtorInfo_35_77;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), XMap_59, ((MR_Box) (Call_70)), &conv4_X_60);
          if (succeeded)
          {
            X_60 = ((MR_Word) (conv4_X_60));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            Possible_61 = ((MR_Word) ((MR_hl_field(0, X_60, 0))));
            Impossible_62 = ((MR_Word) ((MR_hl_field(0, X_60, 1))));
            Inadmissible_63 = ((MR_Word) ((MR_hl_field(0, X_60, 2))));
            TypeCtorInfo_35_77 = (MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0);
            succeeded = mercury__set__member_2_p_0(TypeCtorInfo_35_77, ((MR_Box) (Exception_58)), Possible_61);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Answer_6 = base;
                MR_hl_field(0, base, 0) = Node_69;
                MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = mercury__set__member_2_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_58)), Impossible_62);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Answer_6 = base;
                  MR_hl_field(0, base, 0) = Node_69;
                  MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                }
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word Var_66;

                succeeded = mercury__set__member_2_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_58)), Inadmissible_63);
                if (succeeded)
                {
                  Var_66 = (MR_Integer) 2;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Answer_6 = base;
                    MR_hl_field(0, base, 0) = Node_69;
                    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_66));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        break;
    }
  }
  return succeeded;
}

static MR_Box MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_CmdStr_5;

  conv1_CmdStr_5 = mdb__declarative_oracle__format_trust_command_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_CmdStr_5));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Display_5;

  conv0_Display_5 = mdb__declarative_oracle__format_trust_display_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Display_5));
  return wrapper_arg_2;
}

void MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0(
  MR_Word Oracle_4,
  MR_Word MDBCommandFormat_5,
  MR_String * Str_6)
{
  MR_Word IdToObjectMap_7;
  MR_Word IdObjectPairs_8;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, Oracle_4, 3))));

  IdToObjectMap_7 = mercury__bimap__reverse_map_1_f_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_13);
  IdObjectPairs_8 = mercury__map__to_assoc_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), IdToObjectMap_7);
  switch (MDBCommandFormat_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DisplayStrs_10;

        DisplayStrs_10 = mercury__list__map_2_f_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_1[9]), IdObjectPairs_8);
        if ((DisplayStrs_10 == (MR_Word) ((MR_Unsigned) 0U)))
          *Str_6 = (MR_String) "There are no trusted modules, predicates or functions.\n";
        else
        {
          MR_Word Var_16;

          {
            Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_16, 0) = ((MR_Box) ((MR_String) "Trusted objects:\n"));
            MR_hl_field(1, Var_16, 1) = ((MR_Box) (DisplayStrs_10));
          }
          *Str_6 = mercury__string__append_list_1_f_0(Var_16);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TrustCmdStrs_9;

        TrustCmdStrs_9 = mercury__list__map_2_f_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_1[10]), IdObjectPairs_8);
        *Str_6 = mercury__string__append_list_1_f_0(TrustCmdStrs_9);
      }
      break;
  }
}

static void MR_CALL 
mdb__declarative_oracle__remove_trusted_3_p_0_2(
  void * env_ptr_arg)
{
  struct mdb__declarative_oracle__remove_trusted_3_p_0_3_env_0_s * env_ptr = (struct mdb__declarative_oracle__remove_trusted_3_p_0_3_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__declarative_oracle__remove_trusted_3_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__declarative_oracle__remove_trusted_3_p_0_3_env_0__conv6_LambdaHeadVar__1_7));
  ((env_ptr)->mdb__declarative_oracle__remove_trusted_3_p_0_3_env_0__cont)((env_ptr)->mdb__declarative_oracle__remove_trusted_3_p_0_3_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__declarative_oracle__remove_trusted_3_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__declarative_oracle__remove_trusted_3_p_0_3_env_0_s env;

  (env).mdb__declarative_oracle__remove_trusted_3_p_0_3_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdb__declarative_oracle__remove_trusted_3_p_0_3_env_0__cont = cont;
  (env).mdb__declarative_oracle__remove_trusted_3_p_0_3_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0(&(env).mdb__declarative_oracle__remove_trusted_3_p_0_3_env_0__conv6_LambdaHeadVar__1_7, mdb__declarative_oracle__remove_trusted_3_p_0_2, &env);
  }
}

static void MR_CALL 
mdb__declarative_oracle__remove_trusted_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_ModuleTrustMap_15;

  mdb__declarative_oracle__remove_from_module_trust_map_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_ModuleTrustMap_15);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_ModuleTrustMap_15));
}

MR_bool MR_CALL 
mdb__declarative_oracle__remove_trusted_3_p_0(
  MR_Integer Id_4,
  MR_Word STATE_VARIABLE_Oracle_0_28,
  MR_Word * STATE_VARIABLE_Oracle_29)
{
  MR_bool succeeded;
  MR_Word Trusted0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_28, 3))));
  MR_Word OldTrustedObject_7;
  MR_Word Trusted_8;
  MR_Word ModuleTrustMap0_9;
  MR_Word ModuleTrustMap_10;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_Box conv0_OldTrustedObject_7;

  succeeded = mercury__bimap__search_3_p_1((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Trusted0_6, &conv0_OldTrustedObject_7, ((MR_Box) (Id_4)));
  if (succeeded)
  {
    OldTrustedObject_7 = ((MR_Word) (conv0_OldTrustedObject_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    mercury__bimap__delete_value_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), ((MR_Box) (Id_4)), Trusted0_6, &Trusted_8);
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_28, 0))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_28, 1))));
    Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_28, 2))));
    Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_28, 4))));
    ModuleTrustMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_28, 5))));
    switch (MR_tag((MR_Word) OldTrustedObject_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_32;
          MR_Box conv7_ModuleTrustMap_10;

          mercury__solutions__solutions_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_1[8]), &Var_32);
          mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_1[0]), (MR_Word) (&mdb__declarative_oracle_scalar_common_5[2]), Var_32, ((MR_Box) (ModuleTrustMap0_9)), &conv7_ModuleTrustMap_10);
          ModuleTrustMap_10 = ((MR_Word) (conv7_ModuleTrustMap_10));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(1, OldTrustedObject_7, 0))));

          mdb__declarative_oracle__remove_from_module_trust_map_4_p_0((MR_Integer) 1, ModuleName_11, ModuleTrustMap0_9, &ModuleTrustMap_10);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Name_74 = ((MR_String) ((MR_hl_field(2, OldTrustedObject_7, 1))));
          MR_Integer Arity_75 = ((MR_Integer) ((MR_hl_field(2, OldTrustedObject_7, 2))));
          MR_Word ModuleTrustInfo0_76;
          MR_Word TrustedStdLib0_77;
          MR_Word TrustedOnItsOwn0_78;
          MR_Word PredMap0_79;
          MR_Word PredMap_81;
          MR_Word FuncMap_82;
          MR_Word ModuleTrustInfo_83;
          MR_Word ModuleName_84 = ((MR_Word) ((MR_hl_field(2, OldTrustedObject_7, 0))));
          MR_Word TrustedArities0_92;
          MR_Word TrustedArities_93;
          MR_Box conv3_ModuleTrustInfo0_76;
          MR_Unsigned packed_word_1;
          MR_Box conv4_TrustedArities0_92;
          MR_Word TypeCtorInfo_68_70;
          MR_Word TypeInfo_69_71;

          mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0), ModuleTrustMap0_9, ((MR_Box) (ModuleName_84)), &conv3_ModuleTrustInfo0_76);
          ModuleTrustInfo0_76 = ((MR_Word) (conv3_ModuleTrustInfo0_76));
          packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, ModuleTrustInfo0_76, 0)));
          TrustedStdLib0_77 = ((((MR_Unsigned) ((MR_hl_field(0, ModuleTrustInfo0_76, 0))) >> 1)) & (MR_Integer) 1);
          TrustedOnItsOwn0_78 = ((MR_Unsigned) ((MR_hl_field(0, ModuleTrustInfo0_76, 0))) & (MR_Integer) 1);
          PredMap0_79 = ((MR_Word) ((MR_hl_field(0, ModuleTrustInfo0_76, 1))));
          FuncMap_82 = ((MR_Word) ((MR_hl_field(0, ModuleTrustInfo0_76, 2))));
          mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]), PredMap0_79, ((MR_Box) (Name_74)), &conv4_TrustedArities0_92);
          TrustedArities0_92 = ((MR_Word) (conv4_TrustedArities0_92));
          mercury__set__det_remove_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Arity_75)), TrustedArities0_92, &TrustedArities_93);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TrustedArities_93);
          if (succeeded)
            mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]), ((MR_Box) (Name_74)), PredMap0_79, &PredMap_81);
          else
            mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]), ((MR_Box) (Name_74)), ((MR_Box) (TrustedArities_93)), PredMap0_79, &PredMap_81);
          {
            ModuleTrustInfo_83 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ModuleTrustInfo_83, 0) = (MR_Box) (packed_word_1);
            MR_hl_field(0, ModuleTrustInfo_83, 1) = ((MR_Box) (PredMap_81));
            MR_hl_field(0, ModuleTrustInfo_83, 2) = ((MR_Box) (FuncMap_82));
          }
          succeeded = (TrustedStdLib0_77 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (TrustedOnItsOwn0_78 == (MR_Integer) 0);
            if (succeeded)
            {
              TypeCtorInfo_68_70 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
              TypeInfo_69_71 = (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]);
              succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_68_70, TypeInfo_69_71, PredMap_81);
              if (succeeded)
                succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_68_70, TypeInfo_69_71, FuncMap_82);
            }
          }
          if (succeeded)
            mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0), ((MR_Box) (ModuleName_84)), ModuleTrustMap0_9, &ModuleTrustMap_10);
          else
            mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0), ((MR_Box) (ModuleName_84)), ((MR_Box) (ModuleTrustInfo_83)), ModuleTrustMap0_9, &ModuleTrustMap_10);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String Name_12 = ((MR_String) ((MR_hl_field(3, OldTrustedObject_7, 1))));
          MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(3, OldTrustedObject_7, 2))));
          MR_Word ModuleTrustInfo0_14;
          MR_Word TrustedStdLib0_15;
          MR_Word TrustedOnItsOwn0_16;
          MR_Word FuncMap0_18;
          MR_Word PredMap_22;
          MR_Word FuncMap_23;
          MR_Word ModuleTrustInfo_27;
          MR_Word ModuleName_36 = ((MR_Word) ((MR_hl_field(3, OldTrustedObject_7, 0))));
          MR_Word TrustedArities0_87;
          MR_Word TrustedArities_88;
          MR_Box conv1_ModuleTrustInfo0_14;
          MR_Unsigned packed_word_0;
          MR_Box conv2_TrustedArities0_87;
          MR_Word TypeCtorInfo_68_68;
          MR_Word TypeInfo_69_69;

          mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0), ModuleTrustMap0_9, ((MR_Box) (ModuleName_36)), &conv1_ModuleTrustInfo0_14);
          ModuleTrustInfo0_14 = ((MR_Word) (conv1_ModuleTrustInfo0_14));
          packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, ModuleTrustInfo0_14, 0)));
          TrustedStdLib0_15 = ((((MR_Unsigned) ((MR_hl_field(0, ModuleTrustInfo0_14, 0))) >> 1)) & (MR_Integer) 1);
          TrustedOnItsOwn0_16 = ((MR_Unsigned) ((MR_hl_field(0, ModuleTrustInfo0_14, 0))) & (MR_Integer) 1);
          PredMap_22 = ((MR_Word) ((MR_hl_field(0, ModuleTrustInfo0_14, 1))));
          FuncMap0_18 = ((MR_Word) ((MR_hl_field(0, ModuleTrustInfo0_14, 2))));
          mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]), FuncMap0_18, ((MR_Box) (Name_12)), &conv2_TrustedArities0_87);
          TrustedArities0_87 = ((MR_Word) (conv2_TrustedArities0_87));
          mercury__set__det_remove_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Arity_13)), TrustedArities0_87, &TrustedArities_88);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TrustedArities_88);
          if (succeeded)
            mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]), ((MR_Box) (Name_12)), FuncMap0_18, &FuncMap_23);
          else
            mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]), ((MR_Box) (Name_12)), ((MR_Box) (TrustedArities_88)), FuncMap0_18, &FuncMap_23);
          {
            ModuleTrustInfo_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ModuleTrustInfo_27, 0) = (MR_Box) (packed_word_0);
            MR_hl_field(0, ModuleTrustInfo_27, 1) = ((MR_Box) (PredMap_22));
            MR_hl_field(0, ModuleTrustInfo_27, 2) = ((MR_Box) (FuncMap_23));
          }
          succeeded = (TrustedStdLib0_15 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (TrustedOnItsOwn0_16 == (MR_Integer) 0);
            if (succeeded)
            {
              TypeCtorInfo_68_68 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
              TypeInfo_69_69 = (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]);
              succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_68_68, TypeInfo_69_69, PredMap_22);
              if (succeeded)
                succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_68_68, TypeInfo_69_69, FuncMap_23);
            }
          }
          if (succeeded)
            mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0), ((MR_Box) (ModuleName_36)), ModuleTrustMap0_9, &ModuleTrustMap_10);
          else
            mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0), ((MR_Box) (ModuleName_36)), ((MR_Box) (ModuleTrustInfo_27)), ModuleTrustMap0_9, &ModuleTrustMap_10);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Oracle_29 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_42));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_44));
      MR_hl_field(0, base, 3) = ((MR_Box) (Trusted_8));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_46));
      MR_hl_field(0, base, 5) = ((MR_Box) (ModuleTrustMap_10));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle__remove_from_module_trust_map_4_p_0(
  MR_Word TrustModuleAs_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_ModuleTrustMap_0_14,
  MR_Word * STATE_VARIABLE_ModuleTrustMap_15)
{
  MR_bool succeeded;
  MR_Word ModuleTrustInfo0_8;
  MR_Word ModuleTrustInfo_9;
  MR_Word TrustedStdLib_10;
  MR_Word TrustedOnItsOwn_11;
  MR_Word PredMap_12;
  MR_Word FuncMap_13;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Box conv0_ModuleTrustInfo0_8;
  MR_Word TypeCtorInfo_28_28;
  MR_Word TypeInfo_29_29;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0), STATE_VARIABLE_ModuleTrustMap_0_14, ((MR_Box) (ModuleName_6)), &conv0_ModuleTrustInfo0_8);
  ModuleTrustInfo0_8 = ((MR_Word) (conv0_ModuleTrustInfo0_8));
  Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, ModuleTrustInfo0_8, 0))) >> 1)) & (MR_Integer) 1);
  Var_32 = ((MR_Unsigned) ((MR_hl_field(0, ModuleTrustInfo0_8, 0))) & (MR_Integer) 1);
  Var_31 = ((MR_Word) ((MR_hl_field(0, ModuleTrustInfo0_8, 1))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, ModuleTrustInfo0_8, 2))));
  switch (TrustModuleAs_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        ModuleTrustInfo_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ModuleTrustInfo_9, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (Var_32)));
        MR_hl_field(0, ModuleTrustInfo_9, 1) = ((MR_Box) (Var_31));
        MR_hl_field(0, ModuleTrustInfo_9, 2) = ((MR_Box) (Var_30));
      }
      break;
    case (MR_Integer) 1:
      {
        ModuleTrustInfo_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ModuleTrustInfo_9, 0) = (MR_Box) (((((MR_Unsigned) (Var_33) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
        MR_hl_field(0, ModuleTrustInfo_9, 1) = ((MR_Box) (Var_31));
        MR_hl_field(0, ModuleTrustInfo_9, 2) = ((MR_Box) (Var_30));
      }
      break;
  }
  TrustedStdLib_10 = ((((MR_Unsigned) ((MR_hl_field(0, ModuleTrustInfo_9, 0))) >> 1)) & (MR_Integer) 1);
  TrustedOnItsOwn_11 = ((MR_Unsigned) ((MR_hl_field(0, ModuleTrustInfo_9, 0))) & (MR_Integer) 1);
  PredMap_12 = ((MR_Word) ((MR_hl_field(0, ModuleTrustInfo_9, 1))));
  FuncMap_13 = ((MR_Word) ((MR_hl_field(0, ModuleTrustInfo_9, 2))));
  succeeded = (TrustedStdLib_10 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (TrustedOnItsOwn_11 == (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_28_28 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
      TypeInfo_29_29 = (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]);
      succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_28_28, TypeInfo_29_29, PredMap_12);
      if (succeeded)
        succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_28_28, TypeInfo_29_29, FuncMap_13);
    }
  }
  if (succeeded)
    mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0), ((MR_Box) (ModuleName_6)), STATE_VARIABLE_ModuleTrustMap_0_14, STATE_VARIABLE_ModuleTrustMap_15);
  else
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0), ((MR_Box) (ModuleName_6)), ((MR_Box) (ModuleTrustInfo_9)), STATE_VARIABLE_ModuleTrustMap_0_14, STATE_VARIABLE_ModuleTrustMap_15);
}

void MR_CALL 
mdb__declarative_oracle__add_trusted_pred_or_func_3_p_0(
  MR_Box ProcLayout_4,
  MR_Word STATE_VARIABLE_Oracle_0_31,
  MR_Word * STATE_VARIABLE_Oracle_32)
{
  MR_bool succeeded;
  MR_Word Counter0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_31, 4))));
  MR_Integer Id_7;
  MR_Word Counter_8;
  MR_Word ProcLabel_9;
  MR_Word ModuleName_10;
  MR_Word PredOrFunc_11;
  MR_String Name_13;
  MR_Integer Arity_14;
  MR_Word Trusted0_19;
  MR_Word Trusted_21;
  MR_Word TrustedObject_20;

  mercury__counter__allocate_3_p_0(&Id_7, Counter0_6, &Counter_8);
  ProcLabel_9 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(ProcLayout_4);
  if (((MR_tag((MR_Word) ProcLabel_9)) == (MR_Integer) 0))
  {
    ModuleName_10 = ((MR_Word) ((MR_hl_field(0, ProcLabel_9, 0))));
    PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(0, ProcLabel_9, 1))) & (MR_Integer) 1);
    Name_13 = ((MR_String) ((MR_hl_field(0, ProcLabel_9, 3))));
    Arity_14 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_9, 4))));
  }
  else
  {
    ModuleName_10 = ((MR_Word) ((MR_hl_field(1, ProcLabel_9, 0))));
    Name_13 = ((MR_String) ((MR_hl_field(1, ProcLabel_9, 3))));
    Arity_14 = ((MR_Integer) ((MR_hl_field(1, ProcLabel_9, 4))));
    PredOrFunc_11 = (MR_Integer) 0;
  }
  Trusted0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_31, 3))));
  switch (PredOrFunc_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        TrustedObject_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, TrustedObject_20, 0) = ((MR_Box) (ModuleName_10));
        MR_hl_field(3, TrustedObject_20, 1) = ((MR_Box) (Name_13));
        MR_hl_field(3, TrustedObject_20, 2) = ((MR_Box) (Arity_14));
      }
      break;
    case (MR_Integer) 0:
      {
        TrustedObject_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, TrustedObject_20, 0) = ((MR_Box) (ModuleName_10));
        MR_hl_field(2, TrustedObject_20, 1) = ((MR_Box) (Name_13));
        MR_hl_field(2, TrustedObject_20, 2) = ((MR_Box) (Arity_14));
      }
      break;
  }
  succeeded = mercury__bimap__insert_4_p_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (TrustedObject_20)), ((MR_Box) (Id_7)), Trusted0_19, &Trusted_21);
  if (succeeded)
  {
    MR_Word ModuleTrustMap0_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_31, 5))));
    MR_Word ModuleTrustInfo1_24;
    MR_Word ModuleTrustInfo_27;
    MR_Word ModuleTrustMap_30;
    MR_Word STATE_VARIABLE_Oracle_2_34;
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_31, 0))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_31, 1))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_31, 2))));
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word ModuleTrustInfo0_23;
    MR_Box conv0_ModuleTrustInfo0_23;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;

    {
      STATE_VARIABLE_Oracle_2_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_34, 0) = ((MR_Box) (Var_49));
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_34, 1) = ((MR_Box) (Var_50));
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_34, 2) = ((MR_Box) (Var_51));
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_34, 3) = ((MR_Box) (Trusted_21));
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_34, 4) = ((MR_Box) (Counter_8));
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_34, 5) = ((MR_Box) (ModuleTrustMap0_22));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0), ModuleTrustMap0_22, ((MR_Box) (ModuleName_10)), &conv0_ModuleTrustInfo0_23);
    if (succeeded)
    {
      ModuleTrustInfo0_23 = ((MR_Word) (conv0_ModuleTrustInfo0_23));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ModuleTrustInfo1_24 = ModuleTrustInfo0_23;
    else
    {
      MR_Word Var_37;
      MR_Word Var_38;

      Var_37 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]));
      Var_38 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]));
      {
        ModuleTrustInfo1_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ModuleTrustInfo1_24, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
        MR_hl_field(0, ModuleTrustInfo1_24, 1) = ((MR_Box) (Var_37));
        MR_hl_field(0, ModuleTrustInfo1_24, 2) = ((MR_Box) (Var_38));
      }
    }
    Var_95 = ((MR_Word) ((MR_hl_field(0, ModuleTrustInfo1_24, 1))));
    Var_94 = ((MR_Word) ((MR_hl_field(0, ModuleTrustInfo1_24, 2))));
    switch (PredOrFunc_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncMap_29;
          MR_Word Var_78;
          MR_Unsigned packed_word_1;

          mdb__declarative_oracle__add_trusted_arity_4_p_0(Name_13, Arity_14, Var_94, &FuncMap_29);
          packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, ModuleTrustInfo1_24, 0)));
          Var_78 = ((MR_Word) ((MR_hl_field(0, ModuleTrustInfo1_24, 1))));
          {
            ModuleTrustInfo_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ModuleTrustInfo_27, 0) = (MR_Box) (packed_word_1);
            MR_hl_field(0, ModuleTrustInfo_27, 1) = ((MR_Box) (Var_78));
            MR_hl_field(0, ModuleTrustInfo_27, 2) = ((MR_Box) (FuncMap_29));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word PredMap_26;
          MR_Word Var_72;
          MR_Unsigned packed_word_2;

          mdb__declarative_oracle__add_trusted_arity_4_p_0(Name_13, Arity_14, Var_95, &PredMap_26);
          packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, ModuleTrustInfo1_24, 0)));
          Var_72 = ((MR_Word) ((MR_hl_field(0, ModuleTrustInfo1_24, 2))));
          {
            ModuleTrustInfo_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ModuleTrustInfo_27, 0) = (MR_Box) (packed_word_2);
            MR_hl_field(0, ModuleTrustInfo_27, 1) = ((MR_Box) (PredMap_26));
            MR_hl_field(0, ModuleTrustInfo_27, 2) = ((MR_Box) (Var_72));
          }
        }
        break;
    }
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0), ((MR_Box) (ModuleName_10)), ((MR_Box) (ModuleTrustInfo_27)), ModuleTrustMap0_22, &ModuleTrustMap_30);
    Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_34, 0))));
    Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_34, 1))));
    Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_34, 2))));
    Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_34, 3))));
    Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_34, 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Oracle_32 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_80));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_81));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_82));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_83));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_84));
      MR_hl_field(0, base, 5) = ((MR_Box) (ModuleTrustMap_30));
    }
  }
  else
    *STATE_VARIABLE_Oracle_32 = STATE_VARIABLE_Oracle_0_31;
}

static void MR_CALL 
mdb__declarative_oracle__add_trusted_arity_4_p_0(
  MR_String Name_5,
  MR_Integer Arity_6,
  MR_Word STATE_VARIABLE_TrustedArityMap_0_10,
  MR_Word * STATE_VARIABLE_TrustedArityMap_11)
{
  MR_bool succeeded;
  MR_Word TrustedArities0_8;
  MR_Box conv0_TrustedArities0_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]), STATE_VARIABLE_TrustedArityMap_0_10, ((MR_Box) (Name_5)), &conv0_TrustedArities0_8);
  if (succeeded)
  {
    TrustedArities0_8 = ((MR_Word) (conv0_TrustedArities0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TrustedArities_9;

    mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Arity_6)), TrustedArities0_8, &TrustedArities_9);
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]), ((MR_Box) (Name_5)), ((MR_Box) (TrustedArities_9)), STATE_VARIABLE_TrustedArityMap_0_10, STATE_VARIABLE_TrustedArityMap_11);
  }
  else
  {
    MR_Word TrustedArities_14;

    mercury__set__singleton_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Arity_6)), &TrustedArities_14);
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]), ((MR_Box) (Name_5)), ((MR_Box) (TrustedArities_14)), STATE_VARIABLE_TrustedArityMap_0_10, STATE_VARIABLE_TrustedArityMap_11);
  }
}

void MR_CALL 
mdb__declarative_oracle__add_trusted_module_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_Oracle_0_13,
  MR_Word * STATE_VARIABLE_Oracle_14)
{
  MR_bool succeeded;
  MR_Word Counter0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_13, 4))));
  MR_Integer Id_7;
  MR_Word Counter_8;
  MR_Word Trusted0_9;
  MR_Word Trusted_10;
  MR_Word Var_15;

  mercury__counter__allocate_3_p_0(&Id_7, Counter0_6, &Counter_8);
  Trusted0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_13, 3))));
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (ModuleName_4));
  }
  succeeded = mercury__bimap__insert_4_p_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_15)), ((MR_Box) (Id_7)), Trusted0_9, &Trusted_10);
  if (succeeded)
  {
    MR_Word ModuleTrustMap0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_13, 5))));
    MR_Word ModuleTrustMap_12;
    MR_Word STATE_VARIABLE_Oracle_2_17;
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_13, 0))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_13, 1))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_13, 2))));
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;

    {
      STATE_VARIABLE_Oracle_2_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_17, 0) = ((MR_Box) (Var_29));
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_17, 1) = ((MR_Box) (Var_30));
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_17, 2) = ((MR_Box) (Var_31));
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_17, 3) = ((MR_Box) (Trusted_10));
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_17, 4) = ((MR_Box) (Counter_8));
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_17, 5) = ((MR_Box) (ModuleTrustMap0_11));
    }
    mdb__declarative_oracle__add_to_module_trust_map_4_p_0((MR_Integer) 1, ModuleName_4, ModuleTrustMap0_11, &ModuleTrustMap_12);
    Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_17, 0))));
    Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_17, 1))));
    Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_17, 2))));
    Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_17, 3))));
    Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_17, 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Oracle_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_48));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_49));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_50));
      MR_hl_field(0, base, 5) = ((MR_Box) (ModuleTrustMap_12));
    }
  }
  else
    *STATE_VARIABLE_Oracle_14 = STATE_VARIABLE_Oracle_0_13;
}

static void MR_CALL 
mdb__declarative_oracle__add_to_module_trust_map_4_p_0(
  MR_Word TrustModuleAs_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_ModuleTrustMap_0_12,
  MR_Word * STATE_VARIABLE_ModuleTrustMap_13)
{
  MR_bool succeeded;
  MR_Word ModuleTrustInfo0_8;
  MR_Box conv0_ModuleTrustInfo0_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0), STATE_VARIABLE_ModuleTrustMap_0_12, ((MR_Box) (ModuleName_6)), &conv0_ModuleTrustInfo0_8);
  if (succeeded)
  {
    ModuleTrustInfo0_8 = ((MR_Word) (conv0_ModuleTrustInfo0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ModuleTrustInfo_9;
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, ModuleTrustInfo0_8, 2))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, ModuleTrustInfo0_8, 1))));
    MR_Word Var_39 = ((MR_Unsigned) ((MR_hl_field(0, ModuleTrustInfo0_8, 0))) & (MR_Integer) 1);
    MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(0, ModuleTrustInfo0_8, 0))) >> 1)) & (MR_Integer) 1);

    switch (TrustModuleAs_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ModuleTrustInfo_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ModuleTrustInfo_9, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Var_39)));
          MR_hl_field(0, ModuleTrustInfo_9, 1) = ((MR_Box) (Var_38));
          MR_hl_field(0, ModuleTrustInfo_9, 2) = ((MR_Box) (Var_37));
        }
        break;
      case (MR_Integer) 1:
        {
          ModuleTrustInfo_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ModuleTrustInfo_9, 0) = (MR_Box) (((((MR_Unsigned) (Var_40) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(0, ModuleTrustInfo_9, 1) = ((MR_Box) (Var_38));
          MR_hl_field(0, ModuleTrustInfo_9, 2) = ((MR_Box) (Var_37));
        }
        break;
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0), ((MR_Box) (ModuleName_6)), ((MR_Box) (ModuleTrustInfo_9)), STATE_VARIABLE_ModuleTrustMap_0_12, STATE_VARIABLE_ModuleTrustMap_13);
  }
  else
  {
    MR_Word TrustStdLib_10;
    MR_Word TrustOnItsOwn_11;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word ModuleTrustInfo_20;

    switch (TrustModuleAs_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          TrustStdLib_10 = (MR_Integer) 1;
          TrustOnItsOwn_11 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          TrustStdLib_10 = (MR_Integer) 0;
          TrustOnItsOwn_11 = (MR_Integer) 1;
        }
        break;
    }
    Var_17 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]));
    Var_18 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]));
    {
      ModuleTrustInfo_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModuleTrustInfo_20, 0) = (MR_Box) (((((MR_Unsigned) (TrustStdLib_10) << 1)) | (MR_Unsigned) (TrustOnItsOwn_11)));
      MR_hl_field(0, ModuleTrustInfo_20, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, ModuleTrustInfo_20, 2) = ((MR_Box) (Var_18));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0), ((MR_Box) (ModuleName_6)), ((MR_Box) (ModuleTrustInfo_20)), STATE_VARIABLE_ModuleTrustMap_0_12, STATE_VARIABLE_ModuleTrustMap_13);
  }
}

void MR_CALL 
mdb__declarative_oracle__oracle_state_init_5_p_0(
  MR_Word InStr_6,
  MR_Word OutStr_7,
  MR_Word Browser_8,
  MR_Word HelpSystem_9,
  MR_Word * Oracle_10)
{
  MR_Word Current_11;
  MR_Word Old_12;
  MR_Word User_13;
  MR_Word Counter0_14;
  MR_Word Oracle0_15;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word G_23;
  MR_Word C_24;
  MR_Word X_25;
  MR_Word G_30;
  MR_Word C_31;
  MR_Word X_32;

  mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), &G_23);
  mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), &C_24);
  mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), &X_25);
  {
    Current_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Current_11, 0) = ((MR_Box) (G_23));
    MR_hl_field(0, Current_11, 1) = ((MR_Box) (C_24));
    MR_hl_field(0, Current_11, 2) = ((MR_Box) (X_25));
  }
  mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), &G_30);
  mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), &C_31);
  mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), &X_32);
  {
    Old_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Old_12, 0) = ((MR_Box) (G_30));
    MR_hl_field(0, Old_12, 1) = ((MR_Box) (C_31));
    MR_hl_field(0, Old_12, 2) = ((MR_Box) (X_32));
  }
  mdb__declarative_user__user_state_init_5_p_0(InStr_6, OutStr_7, Browser_8, HelpSystem_9, &User_13);
  mercury__counter__init_2_p_0((MR_Integer) 0, &Counter0_14);
  Var_17 = mercury__bimap__init_0_f_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  Var_18 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0));
  {
    Oracle0_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Oracle0_15, 0) = ((MR_Box) (Current_11));
    MR_hl_field(0, Oracle0_15, 1) = ((MR_Box) (Old_12));
    MR_hl_field(0, Oracle0_15, 2) = ((MR_Box) (User_13));
    MR_hl_field(0, Oracle0_15, 3) = ((MR_Box) (Var_17));
    MR_hl_field(0, Oracle0_15, 4) = ((MR_Box) (Counter0_14));
    MR_hl_field(0, Oracle0_15, 5) = ((MR_Box) (Var_18));
  }
  mdb__declarative_oracle__trust_standard_library_2_p_0(Oracle0_15, Oracle_10);
}

static void MR_CALL 
mdb__declarative_oracle__trust_standard_library_2_p_0_2(
  void * env_ptr_arg)
{
  struct mdb__declarative_oracle__trust_standard_library_2_p_0_3_env_0_s * env_ptr = (struct mdb__declarative_oracle__trust_standard_library_2_p_0_3_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__declarative_oracle__trust_standard_library_2_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__declarative_oracle__trust_standard_library_2_p_0_3_env_0__conv1_LambdaHeadVar__1_7));
  ((env_ptr)->mdb__declarative_oracle__trust_standard_library_2_p_0_3_env_0__cont)((env_ptr)->mdb__declarative_oracle__trust_standard_library_2_p_0_3_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__declarative_oracle__trust_standard_library_2_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__declarative_oracle__trust_standard_library_2_p_0_3_env_0_s env;

  (env).mdb__declarative_oracle__trust_standard_library_2_p_0_3_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdb__declarative_oracle__trust_standard_library_2_p_0_3_env_0__cont = cont;
  (env).mdb__declarative_oracle__trust_standard_library_2_p_0_3_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdb__declarative_oracle__IntroducedFrom__pred__stdlib_modules__512__1_1_p_0(&(env).mdb__declarative_oracle__trust_standard_library_2_p_0_3_env_0__conv1_LambdaHeadVar__1_7, mdb__declarative_oracle__trust_standard_library_2_p_0_2, &env);
  }
}

static void MR_CALL 
mdb__declarative_oracle__trust_standard_library_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleTrustMap_13;

  mdb__declarative_oracle__add_to_module_trust_map_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleTrustMap_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleTrustMap_13));
}

void MR_CALL 
mdb__declarative_oracle__trust_standard_library_2_p_0(
  MR_Word STATE_VARIABLE_Oracle_0_11,
  MR_Word * STATE_VARIABLE_Oracle_12)
{
  MR_bool succeeded;
  MR_Word Counter0_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_11, 4))));
  MR_Integer Id_5;
  MR_Word Counter_6;
  MR_Word Trusted0_7;
  MR_Word Trusted_8;

  mercury__counter__allocate_3_p_0(&Id_5, Counter0_4, &Counter_6);
  Trusted0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_11, 3))));
  succeeded = mercury__bimap__insert_4_p_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Id_5)), Trusted0_7, &Trusted_8);
  if (succeeded)
  {
    MR_Word ModuleTrustMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_11, 5))));
    MR_Word ModuleTrustMap_10;
    MR_Word STATE_VARIABLE_Oracle_2_15;
    MR_Word Var_17;
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_11, 0))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_11, 1))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_0_11, 2))));
    MR_Box conv2_ModuleTrustMap_10;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;

    {
      STATE_VARIABLE_Oracle_2_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_15, 0) = ((MR_Box) (Var_29));
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_15, 1) = ((MR_Box) (Var_30));
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_15, 2) = ((MR_Box) (Var_31));
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_15, 3) = ((MR_Box) (Trusted_8));
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_15, 4) = ((MR_Box) (Counter_6));
      MR_hl_field(0, STATE_VARIABLE_Oracle_2_15, 5) = ((MR_Box) (ModuleTrustMap0_9));
    }
    mercury__solutions__solutions_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_1[7]), &Var_17);
    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_1[0]), (MR_Word) (&mdb__declarative_oracle_scalar_common_5[0]), Var_17, ((MR_Box) (ModuleTrustMap0_9)), &conv2_ModuleTrustMap_10);
    ModuleTrustMap_10 = ((MR_Word) (conv2_ModuleTrustMap_10));
    Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_15, 0))));
    Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_15, 1))));
    Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_15, 2))));
    Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_15, 3))));
    Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Oracle_2_15, 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Oracle_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_48));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_49));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_50));
      MR_hl_field(0, base, 5) = ((MR_Box) (ModuleTrustMap_10));
    }
  }
  else
    *STATE_VARIABLE_Oracle_12 = STATE_VARIABLE_Oracle_0_11;
}

MR_bool MR_CALL 
mdb__declarative_oracle__oracle_response_undoable_1_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    succeeded = MR_TRUE;
  else
  if (((((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0)))) == (MR_Integer) 0))))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____is_trusted_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_oracle____Unify____is_trusted_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle____Compare____is_trusted_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_oracle____Compare____is_trusted_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____known_exceptions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_oracle____Unify____known_exceptions_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle____Compare____known_exceptions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_oracle____Compare____known_exceptions_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____module_trust_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_oracle____Unify____module_trust_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle____Compare____module_trust_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_oracle____Compare____module_trust_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____module_trust_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_oracle____Unify____module_trust_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle____Compare____module_trust_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_oracle____Compare____module_trust_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_kb_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_oracle____Unify____oracle_kb_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_kb_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_oracle____Compare____oracle_kb_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_oracle____Unify____oracle_response_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_oracle____Compare____oracle_response_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_oracle____Unify____oracle_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_oracle____Compare____oracle_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trust_module_as_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_oracle____Unify____trust_module_as_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle____Compare____trust_module_as_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_oracle____Compare____trust_module_as_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trusted_object_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_oracle____Unify____trusted_object_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_oracle____Compare____trusted_object_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_oracle____Compare____trusted_object_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdb__declarative_oracle__init(void)
{
}

void mercury__mdb__declarative_oracle__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_is_trusted_0);
  MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0);
  MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_info_0);
  MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_module_trust_map_0);
  MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_kb_0);
  MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_response_1);
  MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0);
  MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trust_module_as_0);
  MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0);
}

void mercury__mdb__declarative_oracle__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__declarative_oracle__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module mdb.declarative_oracle.
