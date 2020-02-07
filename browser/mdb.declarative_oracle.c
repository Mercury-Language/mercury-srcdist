/*
** Automatically generated from `declarative_oracle.m'
** by the Mercury compiler,
** version rotd-2020-02-07
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


#include "mdb.mih"
#include "mdbcomp.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"




static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_oracle__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_mdb__declarative_oracle__type_ctor_info_trusted_object_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0;

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_known_exceptions_0_0[3];

static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_known_exceptions_0_0[3];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0;

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_known_exceptions_0_0[1];

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_known_exceptions_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_known_exceptions_0[1];

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_known_exceptions_0[1];

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

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_state_0_0[5];

static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_state_0_0[5];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_state_0_0;

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_state_0_0[1];

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_state_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_state_0[1];

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_state_0[1];

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_0[1];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_0;

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_1[3];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_1;

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_2[3];

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_2;

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_3;

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_2[1];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_3[1];

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_trusted_object_0[4];

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_trusted_object_0[4];

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_trusted_object_0[4];

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
mdb__declarative_oracle____Compare____oracle_kb_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_kb_0_0(
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
mdb__declarative_oracle__remove_atom_from_ground_map_4_p_0(
  MR_Word FinalAtom_5,
  MR_Box ProcLayout_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10);

static MR_String MR_CALL 
mdb__declarative_oracle__format_trust_display_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
mdb__declarative_oracle__format_trust_command_1_f_0(
  MR_Word TrustedObject_3);

static void MR_CALL 
mdb__declarative_oracle__oracle_confirm_bug_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__declarative_oracle__query_oracle_user_6_p_0(
  MR_Word TypeInfo_for_T_77,
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

static void MR_CALL 
mdb__declarative_oracle__add_atom_to_ground_map_5_p_0(
  MR_Word Truth_6,
  MR_Word FinalAtom_7,
  MR_Box ProcLayout_8,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11);

static void MR_CALL 
mdb__declarative_oracle__set_kb_exceptions_map_3_p_0(
  MR_Word M_4,
  MR_Word KB_5,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mdb__declarative_oracle__set_kb_ground_map_3_p_0(
  MR_Word M_4,
  MR_Word KB_5,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mdb__declarative_oracle__get_kb_exceptions_map_2_p_0(
  MR_Word KB_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mdb__declarative_oracle__get_kb_ground_map_2_p_0(
  MR_Word KB_3,
  MR_Word * HeadVar__2_2);

static MR_Box MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
mdb__declarative_oracle____Unify____trusted_object_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____trusted_object_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_1[7][3];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_2[1][2];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_3[2][5];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_4[1][8];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_5[2][7];

static /* final */ const MR_Integer mdb__declarative_oracle_scalar_common_6[1][2];




static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_1[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_3[0])),
    ((MR_Box) (mdb__declarative_oracle__get_trusted_list_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_oracle__get_trusted_list_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0))
  },
};

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__declarative_oracle__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_mdb__declarative_oracle__type_ctor_info_trusted_object_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_4[1][8] = {
  /* row 0 */
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

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)),
    ((MR_Box) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0)),
    ((MR_Box) (&mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0)),
    ((MR_Box) (&mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_question_1__pseudo_1)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0))
  },
};

static /* final */ const MR_Integer mdb__declarative_oracle_scalar_common_6[1][2] = {
  /* row 0 */
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
#include "mdbcomp.rtti_access.mh"



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
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0)
  }
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

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_known_exceptions_0_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0
};

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_known_exceptions_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_known_exceptions_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_known_exceptions_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0
};

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_known_exceptions_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____known_exceptions_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____known_exceptions_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "known_exceptions",
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_known_exceptions_0 },
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_known_exceptions_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_known_exceptions_0
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

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_kb_0_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_kb_0_0
};

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_kb_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_kb_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_kb_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_kb_0_0
};

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_kb_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_kb_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____oracle_kb_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____oracle_kb_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "oracle_kb",
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_kb_0 },
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_kb_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_kb_0
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_answer_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_0[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1)
};

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

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0)
};

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

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_2[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0)
};

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

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_4[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

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

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_1[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_0
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_2[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_1
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_3[2] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_2,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_4
};

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_response_1[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_2,
    INT8_C(-1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____oracle_response_1_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____oracle_response_1_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "oracle_response",
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_response_1 },
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_response_1 },
  (MR_Integer) 6,
  UINT16_C(4),
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_response_1
};

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__bimap__ti_bimap_2mdb__declarative_oracle__type_ctor_info_trusted_object_0builtin__type_ctor_info_int_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_state_0_0[5] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_kb_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_kb_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_state_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__bimap__ti_bimap_2mdb__declarative_oracle__type_ctor_info_trusted_object_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0)
};

static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_state_0_0[5] = {
  (MR_String) "kb_current",
  (MR_String) "kb_revised",
  (MR_String) "user_state",
  (MR_String) "trusted",
  (MR_String) "trusted_id_counter"
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_state_0_0 = {
  (MR_String) "oracle",
  INT16_C(5),
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

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_state_0_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_state_0_0
};

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_state_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_state_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_state_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_state_0_0
};

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_state_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____oracle_state_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____oracle_state_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "oracle_state",
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_state_0 },
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_state_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_state_0
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_0[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_0 = {
  (MR_String) "trusted_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_1[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_1 = {
  (MR_String) "trusted_predicate",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
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
  (MR_String) "trusted_function",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_3 = {
  (MR_String) "trusted_standard_library",
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

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_3
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_1[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_0
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_2[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_1
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_3[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_2
};

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_trusted_object_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_trusted_object_0[4] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_2,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_0,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_1,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_3
};

static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_trusted_object_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____trusted_object_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____trusted_object_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "trusted_object",
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_trusted_object_0 },
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_trusted_object_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_trusted_object_0
};

static void MR_CALL 
mdb__declarative_oracle____Compare____trusted_object_0_0(
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
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Var_76, ArgY1_5);
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
            MR_Integer Var_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_String Var_78 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_String ArgY2_23 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Integer ArgY3_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_21;

                  mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_21, Var_79, ArgY1_20);
                  succeeded = (SubResult1_21 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_21;
                  else
                  {
                    MR_Word SubResult2_24;

                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_24, Var_78, ArgY2_23);
                    succeeded = (SubResult2_24 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_24;
                    else
                    {
                      succeeded = (Var_77 < ArgY3_26);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_77 > ArgY3_26);
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
            MR_Integer Var_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
            MR_String Var_74 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgY1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                  MR_String ArgY2_50 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Integer ArgY3_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_48;

                  mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_48, Var_75, ArgY1_47);
                  succeeded = (SubResult1_48 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_48;
                  else
                  {
                    MR_Word SubResult2_51;

                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_51, Var_74, ArgY2_50);
                    succeeded = (SubResult2_51 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_51;
                    else
                    {
                      succeeded = (Var_73 < ArgY3_53);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_73 > ArgY3_53);
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

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trusted_object_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;
            MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_String ArgY2_8;
            MR_Integer ArgX3_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer ArgY3_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
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
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;
            MR_String ArgX2_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_String ArgY2_14;
            MR_Integer ArgX3_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer ArgY3_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
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
}

void MR_CALL 
mdb__declarative_oracle____Compare____oracle_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
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
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;
      MR_Integer CastX_33 = (MR_Integer) (ArgX1_4);
      MR_Integer CastY_34 = (MR_Integer) (ArgY1_5);

      succeeded = (CastX_33 == CastY_34);
      if (succeeded)
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 0))));
        MR_Word ArgY1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 0))));
        MR_Word ArgX2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 1))));
        MR_Word ArgY2_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 1))));
        MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 2))));
        MR_Word ArgY3_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 2))));
        MR_Word SubResult1_27;

        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[1]), &SubResult1_27, ((MR_Box) (ArgX1_25)), ((MR_Box) (ArgY1_26)));
        succeeded = (SubResult1_27 != (MR_Integer) 0);
        if (succeeded)
        {
          SubResult1_6 = SubResult1_27;
          succeeded = (SubResult1_6 != (MR_Integer) 0);
        }
        else
        {
          MR_Word SubResult2_30;

          mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[2]), &SubResult2_30, ((MR_Box) (ArgX2_28)), ((MR_Box) (ArgY2_29)));
          succeeded = (SubResult2_30 != (MR_Integer) 0);
          if (succeeded)
          {
            SubResult1_6 = SubResult2_30;
            succeeded = (SubResult1_6 != (MR_Integer) 0);
          }
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX3_31)), ((MR_Box) (ArgY3_32)));
            succeeded = (SubResult1_6 != (MR_Integer) 0);
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer CastX_46 = (MR_Integer) (ArgX2_7);
        MR_Integer CastY_47 = (MR_Integer) (ArgY2_8);

        succeeded = (CastX_46 == CastY_47);
        if (succeeded)
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Word ArgX1_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX2_7, (MR_Integer) 0))));
          MR_Word ArgY1_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY2_8, (MR_Integer) 0))));
          MR_Word ArgX2_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX2_7, (MR_Integer) 1))));
          MR_Word ArgY2_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY2_8, (MR_Integer) 1))));
          MR_Word ArgX3_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX2_7, (MR_Integer) 2))));
          MR_Word ArgY3_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY2_8, (MR_Integer) 2))));
          MR_Word SubResult1_40;

          mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[1]), &SubResult1_40, ((MR_Box) (ArgX1_38)), ((MR_Box) (ArgY1_39)));
          succeeded = (SubResult1_40 != (MR_Integer) 0);
          if (succeeded)
          {
            SubResult2_9 = SubResult1_40;
            succeeded = (SubResult2_9 != (MR_Integer) 0);
          }
          else
          {
            MR_Word SubResult2_43;

            mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[2]), &SubResult2_43, ((MR_Box) (ArgX2_41)), ((MR_Box) (ArgY2_42)));
            succeeded = (SubResult2_43 != (MR_Integer) 0);
            if (succeeded)
            {
              SubResult2_9 = SubResult2_43;
              succeeded = (SubResult2_9 != (MR_Integer) 0);
            }
            else
            {
              mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX3_44)), ((MR_Box) (ArgY3_45)));
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

            mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
              mercury__counter____Compare____counter_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
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
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer CastX_24 = (MR_Integer) (ArgX1_3);
      MR_Integer CastY_25 = (MR_Integer) (ArgY1_4);
      MR_Integer CastX_35;
      MR_Integer CastY_36;

      succeeded = (CastX_24 == CastY_25);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word TypeInfo_12_27;
        MR_Word TypeInfo_13_28;
        MR_Word ArgX1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 0))));
        MR_Word ArgY1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 0))));
        MR_Word ArgX2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 1))));
        MR_Word ArgY2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 1))));
        MR_Word ArgX3_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 2))));
        MR_Word ArgY3_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 2))));

        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[1]), ((MR_Box) (ArgX1_18)), ((MR_Box) (ArgY1_19)));
        if (succeeded)
        {
          TypeInfo_12_27 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_27, ((MR_Box) (ArgX2_20)), ((MR_Box) (ArgY2_21)));
          if (succeeded)
          {
            TypeInfo_13_28 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_28, ((MR_Box) (ArgX3_22)), ((MR_Box) (ArgY3_23)));
          }
        }
      }
      if (succeeded)
      {
        CastX_35 = (MR_Integer) (ArgX2_5);
        CastY_36 = (MR_Integer) (ArgY2_6);
        succeeded = (CastX_35 == CastY_36);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Word TypeInfo_12_38;
          MR_Word TypeInfo_13_39;
          MR_Word ArgX1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX2_5, (MR_Integer) 0))));
          MR_Word ArgY1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY2_6, (MR_Integer) 0))));
          MR_Word ArgX2_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX2_5, (MR_Integer) 1))));
          MR_Word ArgY2_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY2_6, (MR_Integer) 1))));
          MR_Word ArgX3_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX2_5, (MR_Integer) 2))));
          MR_Word ArgY3_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY2_6, (MR_Integer) 2))));

          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[1]), ((MR_Box) (ArgX1_29)), ((MR_Box) (ArgY1_30)));
          if (succeeded)
          {
            TypeInfo_12_38 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_38, ((MR_Box) (ArgX2_31)), ((MR_Box) (ArgY2_32)));
            if (succeeded)
            {
              TypeInfo_13_39 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_39, ((MR_Box) (ArgX3_33)), ((MR_Box) (ArgY3_34)));
            }
          }
        }
        if (succeeded)
        {
          succeeded = mdb__declarative_user____Unify____user_state_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
              succeeded = mercury__counter____Unify____counter_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_oracle____Compare____oracle_response_1_0(
  MR_Word TypeInfo_for_T_54,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_52 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_53 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_52 == CastY_53);
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
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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

                  mdb__declarative_debugger____Compare____decl_answer_1_0(TypeInfo_for_T_54, HeadVar__1_1, Var_59, ArgY1_5);
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
            MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__io____Compare____output_stream_0_0(HeadVar__1_1, Var_62, ArgY1_17);
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
                MR_Word Var_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);

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
                          MR_Word ArgY1_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                          MR_Integer Var_63 = (MR_Integer) (Var_60);
                          MR_Integer Var_64 = (MR_Integer) (ArgY1_29);

                          succeeded = (Var_63 < Var_64);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_63 > Var_64);
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
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box Var_61 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

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
                        {
                          MR_Box ArgY1_46 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));

                          mercury__builtin__compare_3_p_0(TypeInfo_for_T_54, HeadVar__1_1, Var_61, ArgY1_46);
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
mdb__declarative_oracle____Unify____oracle_response_1_0(
  MR_Word TypeInfo_for_T_17,
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
                MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_14 == CastX_13);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mdb__declarative_debugger____Unify____decl_answer_1_0(TypeInfo_for_T_17, ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mercury__io____Unify____output_stream_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_Word ArgY1_8;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  succeeded = (ArgX1_7 == ArgY1_8);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box ArgX1_11 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_12 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_17, ArgX1_11, ArgY1_12);
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
mdb__declarative_oracle____Compare____oracle_kb_0_0(
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
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_kb_0_0(
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
    {
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&mdb__declarative_oracle_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_oracle____Compare____known_exceptions_0_0(
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
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____known_exceptions_0_0(
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
    {
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&mdb__declarative_oracle_scalar_common_2[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_oracle__remove_atom_from_ground_map_4_p_0(
  MR_Word FinalAtom_5,
  MR_Box ProcLayout_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
{
  {
    MR_Word FinalDeclAtom_8;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinalAtom_5, (MR_Integer) 0))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinalAtom_5, (MR_Integer) 1))));

    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (ProcLayout_6));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      FinalDeclAtom_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FinalDeclAtom_8, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), FinalDeclAtom_8, 1) = ((MR_Box) (Var_16));
    }
    mercury__map__delete_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), ((MR_Box) (FinalDeclAtom_8)), STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10);
  }
}

static MR_String MR_CALL 
mdb__declarative_oracle__format_trust_display_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String Display_5;
    MR_Integer Id_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TrustedObject_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String CmdDisplay_8;
    MR_String Var_30;
    MR_String Var_31;
    MR_String Var_33;

    switch (MR_tag((MR_Word) TrustedObject_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CmdDisplay_8 = (MR_String) "the Mercury standard library";
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrustedObject_4, (MR_Integer) 0))));
          MR_String ModuleNameStr_7;

          ModuleNameStr_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_6);
          CmdDisplay_8 = mercury__string__f_43_43_2_f_0((MR_String) "module ", ModuleNameStr_7);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Name_9 = ((MR_String) ((MR_hl_field(MR_mktag(2), TrustedObject_4, (MR_Integer) 1))));
          MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), TrustedObject_4, (MR_Integer) 2))));
          MR_String Var_22;
          MR_String Var_23;
          MR_String Var_25;
          MR_String Var_26;
          MR_String Var_28;
          MR_Word ModuleName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TrustedObject_4, (MR_Integer) 0))));
          MR_String ModuleNameStr_36;

          ModuleNameStr_36 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_35);
          Var_28 = mercury__string__int_to_string_1_f_0(Arity_10);
          Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_28);
          Var_25 = mercury__string__f_43_43_2_f_0(Name_9, Var_26);
          Var_23 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_25);
          Var_22 = mercury__string__f_43_43_2_f_0(ModuleNameStr_36, Var_23);
          CmdDisplay_8 = mercury__string__f_43_43_2_f_0((MR_String) "predicate ", Var_22);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String Var_12;
          MR_String Var_13;
          MR_String Var_15;
          MR_String Var_16;
          MR_String Var_18;
          MR_Integer Var_19;
          MR_Word ModuleName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TrustedObject_4, (MR_Integer) 0))));
          MR_String ModuleNameStr_38;
          MR_String Name_39 = ((MR_String) ((MR_hl_field(MR_mktag(3), TrustedObject_4, (MR_Integer) 1))));
          MR_Integer Arity_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), TrustedObject_4, (MR_Integer) 2))));

          ModuleNameStr_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_37);
          Var_19 = (MR_Integer) ((MR_Unsigned) Arity_40 - (MR_Unsigned) 1);
          Var_18 = mercury__string__int_to_string_1_f_0(Var_19);
          Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_18);
          Var_15 = mercury__string__f_43_43_2_f_0(Name_39, Var_16);
          Var_13 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_15);
          Var_12 = mercury__string__f_43_43_2_f_0(ModuleNameStr_38, Var_13);
          CmdDisplay_8 = mercury__string__f_43_43_2_f_0((MR_String) "function ", Var_12);
        }
        break;
    }
    Var_30 = mercury__string__int_to_string_1_f_0(Id_3);
    Var_33 = mercury__string__f_43_43_2_f_0(CmdDisplay_8, (MR_String) "\n");
    Var_31 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_33);
    Display_5 = mercury__string__f_43_43_2_f_0(Var_30, Var_31);
    return Display_5;
  }
}

static MR_String MR_CALL 
mdb__declarative_oracle__format_trust_command_1_f_0(
  MR_Word TrustedObject_3)
{
  {
    MR_String CmdStr_4;

    switch (MR_tag((MR_Word) TrustedObject_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CmdStr_4 = (MR_String) "trust std lib\n";
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrustedObject_3, (MR_Integer) 0))));
          MR_String ModuleNameStr_6;
          MR_String Var_32;

          ModuleNameStr_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_5);
          Var_32 = mercury__string__f_43_43_2_f_0(ModuleNameStr_6, (MR_String) "\n");
          CmdStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "trust ", Var_32);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Name_7 = ((MR_String) ((MR_hl_field(MR_mktag(2), TrustedObject_3, (MR_Integer) 1))));
          MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), TrustedObject_3, (MR_Integer) 2))));
          MR_String Var_22;
          MR_String Var_23;
          MR_String Var_25;
          MR_String Var_26;
          MR_String Var_28;
          MR_String Var_29;
          MR_Word ModuleName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TrustedObject_3, (MR_Integer) 0))));
          MR_String ModuleNameStr_35;

          ModuleNameStr_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_34);
          Var_29 = mercury__string__int_to_string_1_f_0(Arity_8);
          Var_28 = mercury__string__f_43_43_2_f_0(Var_29, (MR_String) "\n");
          Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_28);
          Var_25 = mercury__string__f_43_43_2_f_0(Name_7, Var_26);
          Var_23 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_25);
          Var_22 = mercury__string__f_43_43_2_f_0(ModuleNameStr_35, Var_23);
          CmdStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "trust pred*", Var_22);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String Var_10;
          MR_String Var_11;
          MR_String Var_13;
          MR_String Var_14;
          MR_String Var_16;
          MR_String Var_17;
          MR_Integer Var_18;
          MR_Word ModuleName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TrustedObject_3, (MR_Integer) 0))));
          MR_String ModuleNameStr_37;
          MR_String Name_38 = ((MR_String) ((MR_hl_field(MR_mktag(3), TrustedObject_3, (MR_Integer) 1))));
          MR_Integer Arity_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), TrustedObject_3, (MR_Integer) 2))));

          ModuleNameStr_37 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_36);
          Var_18 = (MR_Integer) ((MR_Unsigned) Arity_39 - (MR_Unsigned) 1);
          Var_17 = mercury__string__int_to_string_1_f_0(Var_18);
          Var_16 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) "\n");
          Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_16);
          Var_13 = mercury__string__f_43_43_2_f_0(Name_38, Var_14);
          Var_11 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_13);
          Var_10 = mercury__string__f_43_43_2_f_0(ModuleNameStr_37, Var_11);
          CmdStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "trust func*", Var_10);
        }
        break;
    }
    return CmdStr_4;
  }
}

void MR_CALL 
mdb__declarative_oracle__reset_oracle_knowledge_base_2_p_0(
  MR_Word STATE_VARIABLE_Oracle_0_5,
  MR_Word * STATE_VARIABLE_Oracle_6)
{
  {
    MR_Word EmptyKB_4;
    MR_Word Var_8;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word G_24;
    MR_Word C_25;
    MR_Word X_26;

    mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), &G_24);
    mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), &C_25);
    mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), &X_26);
    {
      EmptyKB_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), EmptyKB_4, 0) = ((MR_Box) (G_24));
      MR_hl_field(MR_mktag(0), EmptyKB_4, 1) = ((MR_Box) (C_25));
      MR_hl_field(MR_mktag(0), EmptyKB_4, 2) = ((MR_Box) (X_26));
    }
    Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_5, (MR_Integer) 0))));
    Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_5, (MR_Integer) 2))));
    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_5, (MR_Integer) 3))));
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_5, (MR_Integer) 4))));
    Var_16 = Var_11;
    Var_17 = Var_12;
    Var_18 = Var_13;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Oracle_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (EmptyKB_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_18));
    }
  }
}

void MR_CALL 
mdb__declarative_oracle__set_oracle_testing_flag_3_p_0(
  MR_Word Testing_4,
  MR_Word STATE_VARIABLE_Oracle_0_8,
  MR_Word * STATE_VARIABLE_Oracle_9)
{
  {
    MR_Word User0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_8, (MR_Integer) 2))));
    MR_Word User_7;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_19;

    mdb__declarative_user__set_user_testing_flag_3_p_0(Testing_4, User0_6, &User_7);
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_8, (MR_Integer) 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_8, (MR_Integer) 1))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_8, (MR_Integer) 3))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_8, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Oracle_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (User_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_19));
    }
  }
}

MR_Word MR_CALL 
mdb__declarative_oracle__get_user_input_stream_1_f_0(
  MR_Word Oracle_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Oracle_3, (MR_Integer) 2))));

    HeadVar__2_2 = mdb__declarative_user__get_user_input_stream_1_f_0(Var_4);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mdb__declarative_oracle__get_user_output_stream_1_f_0(
  MR_Word Oracle_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Oracle_3, (MR_Integer) 2))));

    HeadVar__2_2 = mdb__declarative_user__get_user_output_stream_1_f_0(Var_4);
    return HeadVar__2_2;
  }
}

void MR_CALL 
mdb__declarative_oracle__set_browser_state_3_p_0(
  MR_Word Browser_4,
  MR_Word STATE_VARIABLE_Oracle_0_7,
  MR_Word * STATE_VARIABLE_Oracle_8)
{
  {
    MR_Word User_6;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_7, (MR_Integer) 2))));
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_19;

    mdb__declarative_user__set_browser_state_3_p_0(Browser_4, Var_9, &User_6);
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_7, (MR_Integer) 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_7, (MR_Integer) 1))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_7, (MR_Integer) 3))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_7, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Oracle_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (User_6));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_19));
    }
  }
}

MR_Word MR_CALL 
mdb__declarative_oracle__get_browser_state_1_f_0(
  MR_Word Oracle_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Oracle_3, (MR_Integer) 2))));

    HeadVar__2_2 = mdb__declarative_user__get_browser_state_1_f_0(Var_4);
    return HeadVar__2_2;
  }
}

void MR_CALL 
mdb__declarative_oracle__update_revised_knowledge_base_3_p_0(
  MR_Word Oracle1_4,
  MR_Word Oracle2_5,
  MR_Word * Oracle3_6)
{
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Oracle2_5, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Oracle1_4, (MR_Integer) 0))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Oracle1_4, (MR_Integer) 2))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Oracle1_4, (MR_Integer) 3))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Oracle1_4, (MR_Integer) 4))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *Oracle3_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_16));
    }
  }
}

void MR_CALL 
mdb__declarative_oracle__revise_oracle_3_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word Question_4,
  MR_Word STATE_VARIABLE_Oracle_0_11,
  MR_Word * STATE_VARIABLE_Oracle_12)
{
  {
    MR_bool succeeded;
    MR_Word Current0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_11, (MR_Integer) 0))));
    MR_Word Answer_7;

    switch (MR_tag((MR_Word) Question_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Node_37 = (MR_hl_field(MR_mktag(0), Question_4, (MR_Integer) 0));
          MR_Word Atom_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Question_4, (MR_Integer) 2))));
          MR_Word Map_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Current0_6, (MR_Integer) 0))));
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
              MR_hl_field(MR_mktag(0), Answer_7, 0) = Node_37;
              MR_hl_field(MR_mktag(0), Answer_7, 1) = (MR_Box) ((MR_Unsigned) (Truth_41));
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Call_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Question_4, (MR_Integer) 1))));
          MR_Word CMap_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Current0_6, (MR_Integer) 1))));
          MR_Box Node_54 = (MR_hl_field(MR_mktag(1), Question_4, (MR_Integer) 0));
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
              MR_hl_field(MR_mktag(0), Answer_7, 0) = Node_54;
              MR_hl_field(MR_mktag(0), Answer_7, 1) = (MR_Box) ((MR_Unsigned) (Truth_55));
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Exception_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Question_4, (MR_Integer) 2))));
          MR_Word XMap_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Current0_6, (MR_Integer) 2))));
          MR_Word X_47;
          MR_Word Possible_48;
          MR_Word Impossible_49;
          MR_Word Inadmissible_50;
          MR_Box Node_56 = (MR_hl_field(MR_mktag(2), Question_4, (MR_Integer) 0));
          MR_Word Call_57 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Question_4, (MR_Integer) 1))));
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
            Possible_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_47, (MR_Integer) 0))));
            Impossible_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_47, (MR_Integer) 1))));
            Inadmissible_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_47, (MR_Integer) 2))));
            TypeCtorInfo_35_64 = (MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0);
            succeeded = mercury__set__member_2_p_0(TypeCtorInfo_35_64, ((MR_Box) (Exception_45)), Possible_48);
            if (succeeded)
            {
              {
                Answer_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Answer_7, 0) = Node_56;
                MR_hl_field(MR_mktag(0), Answer_7, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
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
                  MR_hl_field(MR_mktag(0), Answer_7, 0) = Node_56;
                  MR_hl_field(MR_mktag(0), Answer_7, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
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
                    MR_hl_field(MR_mktag(0), Answer_7, 0) = Node_56;
                    MR_hl_field(MR_mktag(0), Answer_7, 1) = (MR_Box) ((MR_Unsigned) (Var_53));
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
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;

      mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(Question_4, Current0_6, &Current_8);
      Revised0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1))));
      mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(Question_4, Answer_7, Revised0_9, &Revised_10);
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2))));
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_11, (MR_Integer) 4))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Oracle_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Current_8));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Revised_10));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_27));
      }
    }
    else
      *STATE_VARIABLE_Oracle_12 = STATE_VARIABLE_Oracle_0_11;
  }
}

static void MR_CALL 
mdb__declarative_oracle__oracle_confirm_bug_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Oracle_12;

    mdb__declarative_oracle__revise_oracle_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Oracle_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Oracle_12));
  }
}

void MR_CALL 
mdb__declarative_oracle__oracle_confirm_bug_7_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word Bug_8,
  MR_Word Evidence_9,
  MR_Word * Confirmation_10,
  MR_Word Oracle0_11,
  MR_Word * Oracle_12)
{
  {
    MR_Word User0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Oracle0_11, (MR_Integer) 2))));
    MR_Word User_15;
    MR_Word Oracle1_16;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;

    mdb__declarative_user__user_confirm_bug_6_p_0(Bug_8, Confirmation_10, User0_14, &User_15);
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Oracle0_11, (MR_Integer) 0))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Oracle0_11, (MR_Integer) 1))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Oracle0_11, (MR_Integer) 3))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Oracle0_11, (MR_Integer) 4))));
    {
      Oracle1_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Oracle1_16, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Oracle1_16, 1) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Oracle1_16, 2) = ((MR_Box) (User_15));
      MR_hl_field(MR_mktag(0), Oracle1_16, 3) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Oracle1_16, 4) = ((MR_Box) (Var_29));
    }
    switch (*Confirmation_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 0:
        *Oracle_12 = Oracle1_16;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_35_35;
          MR_Word Var_20;
          MR_Box conv1_Oracle_12;

          {
            Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&mdb__declarative_oracle_scalar_common_5[1]));
            MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (mdb__declarative_oracle__oracle_confirm_bug_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (TypeInfo_for_T_30));
          }
          {
            TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_35_35, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
            MR_hl_field(MR_mktag(0), TypeInfo_35_35, 1) = ((MR_Box) (TypeInfo_for_T_30));
          }
          mercury__list__foldl_4_p_0(TypeInfo_35_35, (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0), (MR_Word) (Var_20), (MR_Word) (Evidence_9), ((MR_Box) (Oracle1_16)), &conv1_Oracle_12);
          *Oracle_12 = ((MR_Word) (conv1_Oracle_12));
        }
        break;
    }
  }
}

void MR_CALL 
mdb__declarative_oracle__query_oracle_7_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word Question_8,
  MR_Word * Response_9,
  MR_Word * FromUser_10,
  MR_Word STATE_VARIABLE_Oracle_0_15,
  MR_Word * STATE_VARIABLE_Oracle_16)
{
  {
    MR_bool succeeded;
    MR_Word Answer_13;

    succeeded = mdb__declarative_oracle__answer_known_3_p_0(TypeInfo_for_T_26, STATE_VARIABLE_Oracle_0_15, Question_8, &Answer_13);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Response_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Answer_13));
      }
      *FromUser_10 = (MR_Integer) 0;
      *STATE_VARIABLE_Oracle_16 = STATE_VARIABLE_Oracle_0_15;
    }
    else
    {
      MR_Word UserQuestion_14;
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_15, (MR_Integer) 1))));
      MR_Word DeclTruth_32;
      MR_Word Answer_30;

      switch (MR_tag((MR_Word) Question_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box Node_36 = (MR_hl_field(MR_mktag(0), Question_8, (MR_Integer) 0));
            MR_Word Atom_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Question_8, (MR_Integer) 2))));
            MR_Word Map_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
            MR_Word Truth_40;
            MR_Box conv2_Truth_40;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), Map_39, ((MR_Box) (Atom_38)), &conv2_Truth_40);
            if (succeeded)
            {
              Truth_40 = ((MR_Word) (conv2_Truth_40));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              {
                Answer_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Answer_30, 0) = Node_36;
                MR_hl_field(MR_mktag(0), Answer_30, 1) = (MR_Box) ((MR_Unsigned) (Truth_40));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Call_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Question_8, (MR_Integer) 1))));
            MR_Word CMap_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1))));
            MR_Box Node_53 = (MR_hl_field(MR_mktag(1), Question_8, (MR_Integer) 0));
            MR_Word Truth_54;
            MR_Box conv0_Truth_54;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), CMap_43, ((MR_Box) (Call_41)), &conv0_Truth_54);
            if (succeeded)
            {
              Truth_54 = ((MR_Word) (conv0_Truth_54));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              {
                Answer_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Answer_30, 0) = Node_53;
                MR_hl_field(MR_mktag(0), Answer_30, 1) = (MR_Box) ((MR_Unsigned) (Truth_54));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Exception_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Question_8, (MR_Integer) 2))));
            MR_Word XMap_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 2))));
            MR_Word X_46;
            MR_Word Possible_47;
            MR_Word Impossible_48;
            MR_Word Inadmissible_49;
            MR_Box Node_55 = (MR_hl_field(MR_mktag(2), Question_8, (MR_Integer) 0));
            MR_Word Call_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Question_8, (MR_Integer) 1))));
            MR_Box conv1_X_46;
            MR_Word TypeCtorInfo_35_63;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), XMap_45, ((MR_Box) (Call_56)), &conv1_X_46);
            if (succeeded)
            {
              X_46 = ((MR_Word) (conv1_X_46));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              Possible_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_46, (MR_Integer) 0))));
              Impossible_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_46, (MR_Integer) 1))));
              Inadmissible_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_46, (MR_Integer) 2))));
              TypeCtorInfo_35_63 = (MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0);
              succeeded = mercury__set__member_2_p_0(TypeCtorInfo_35_63, ((MR_Box) (Exception_44)), Possible_47);
              if (succeeded)
              {
                {
                  Answer_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Answer_30, 0) = Node_55;
                  MR_hl_field(MR_mktag(0), Answer_30, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = mercury__set__member_2_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_44)), Impossible_48);
                if (succeeded)
                {
                  {
                    Answer_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Answer_30, 0) = Node_55;
                    MR_hl_field(MR_mktag(0), Answer_30, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  }
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word Var_52;

                  succeeded = mercury__set__member_2_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_44)), Inadmissible_49);
                  if (succeeded)
                  {
                    Var_52 = (MR_Integer) 2;
                    {
                      Answer_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Answer_30, 0) = Node_55;
                      MR_hl_field(MR_mktag(0), Answer_30, 1) = (MR_Box) ((MR_Unsigned) (Var_52));
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
        succeeded = ((MR_tag((MR_Word) Answer_30)) == (MR_Integer) 0);
        if (succeeded)
          DeclTruth_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Answer_30, (MR_Integer) 1))) & (MR_Integer) 3);
      }
      if (succeeded)
        {
          UserQuestion_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), UserQuestion_14, 0) = ((MR_Box) (Question_8));
          MR_hl_field(MR_mktag(1), UserQuestion_14, 1) = (MR_Box) ((MR_Unsigned) (DeclTruth_32));
        }
      else
        {
          UserQuestion_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), UserQuestion_14, 0) = ((MR_Box) (Question_8));
        }
      mdb__declarative_oracle__query_oracle_user_6_p_0(TypeInfo_for_T_26, UserQuestion_14, Response_9, STATE_VARIABLE_Oracle_0_15, STATE_VARIABLE_Oracle_16);
      *FromUser_10 = (MR_Integer) 1;
    }
  }
}

static void MR_CALL 
mdb__declarative_oracle__query_oracle_user_6_p_0(
  MR_Word TypeInfo_for_T_77,
  MR_Word UserQuestion_7,
  MR_Word * OracleResponse_8,
  MR_Word STATE_VARIABLE_Oracle_0_29,
  MR_Word * STATE_VARIABLE_Oracle_30)
{
  {
    MR_Word User0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_29, (MR_Integer) 2))));
    MR_Word UserResponse_12;
    MR_Word User_13;
    MR_Word STATE_VARIABLE_Oracle_43_43;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_75;
    MR_Word Var_76;

    mdb__declarative_user__query_user_6_p_0(TypeInfo_for_T_77, UserQuestion_7, &UserResponse_12, User0_11, &User_13);
    switch (MR_tag((MR_Word) UserResponse_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(UserResponse_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *OracleResponse_8 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Oracle_43_43 = STATE_VARIABLE_Oracle_0_29;
            }
            break;
          case (MR_Integer) 1:
            {
              *OracleResponse_8 = (MR_Word) ((MR_Unsigned) 4U);
              STATE_VARIABLE_Oracle_43_43 = STATE_VARIABLE_Oracle_0_29;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Question_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserResponse_12, (MR_Integer) 0))));
          MR_Word Answer_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserResponse_12, (MR_Integer) 1))));
          MR_Word Current0_16;
          MR_Word Revised0_17;
          MR_Word Revised_18;
          MR_Word Current_19;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *OracleResponse_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Answer_15));
          }
          Current0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_29, (MR_Integer) 0))));
          Revised0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_29, (MR_Integer) 1))));
          mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(Question_14, Revised0_17, &Revised_18);
          mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(Question_14, Answer_15, Current0_16, &Current_19);
          Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_29, (MR_Integer) 2))));
          Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_29, (MR_Integer) 3))));
          Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_29, (MR_Integer) 4))));
          {
            STATE_VARIABLE_Oracle_43_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_43_43, 0) = ((MR_Box) (Current_19));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_43_43, 1) = ((MR_Box) (Revised_18));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_43_43, 2) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_43_43, 3) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_43_43, 4) = ((MR_Box) (Var_64));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Atom_20;
          MR_Box Var_38;
          MR_Word Var_40;
          MR_Box Var_41;
          MR_Word Question_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), UserResponse_12, (MR_Integer) 0))));

          Atom_20 = mdb__declarative_debugger__get_decl_question_atom_1_f_0(TypeInfo_for_T_77, Question_45);
          Var_38 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Atom_20, (MR_Integer) 0))));
          mdb__declarative_oracle__add_trusted_pred_or_func_3_p_0(Var_38, STATE_VARIABLE_Oracle_0_29, &STATE_VARIABLE_Oracle_43_43);
          Var_41 = mdb__declarative_debugger__get_decl_question_node_1_f_0(TypeInfo_for_T_77, Question_45);
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_40, 0) = Var_41;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *OracleResponse_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_40));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), UserResponse_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ProcLabel_21;
              MR_Word Module_22;
              MR_Box Var_34;
              MR_Word Var_36;
              MR_Box Var_37;
              MR_Word Question_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UserResponse_12, (MR_Integer) 1))));
              MR_Word Atom_47;
              MR_String Var_23;
              MR_Integer Var_24;
              MR_Word Var_25;

              Atom_47 = mdb__declarative_debugger__get_decl_question_atom_1_f_0(TypeInfo_for_T_77, Question_46);
              Var_34 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Atom_47, (MR_Integer) 0))));
              ProcLabel_21 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(Var_34);
              mdb__declarative_execution__get_pred_attributes_5_p_0(ProcLabel_21, &Module_22, &Var_23, &Var_24, &Var_25);
              mdb__declarative_oracle__add_trusted_module_3_p_0(Module_22, STATE_VARIABLE_Oracle_0_29, &STATE_VARIABLE_Oracle_43_43);
              Var_37 = mdb__declarative_debugger__get_decl_question_node_1_f_0(TypeInfo_for_T_77, Question_46);
              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_36, 0) = Var_37;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *OracleResponse_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_36));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word OutStream_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UserResponse_12, (MR_Integer) 1))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *OracleResponse_8 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (OutStream_26));
              }
              STATE_VARIABLE_Oracle_43_43 = STATE_VARIABLE_Oracle_0_29;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Mode_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), UserResponse_12, (MR_Integer) 1))) & (MR_Integer) 3);

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *OracleResponse_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Mode_27));
              }
              STATE_VARIABLE_Oracle_43_43 = STATE_VARIABLE_Oracle_0_29;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box Node_28 = (MR_hl_field(MR_mktag(3), UserResponse_12, (MR_Integer) 1));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *OracleResponse_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = Node_28;
              }
              STATE_VARIABLE_Oracle_43_43 = STATE_VARIABLE_Oracle_0_29;
            }
            break;
        }
        break;
    }
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_43_43, (MR_Integer) 0))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_43_43, (MR_Integer) 1))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_43_43, (MR_Integer) 3))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_43_43, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Oracle_30 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (User_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_76));
    }
  }
}

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Map_10;

    mdb__declarative_oracle__remove_atom_from_ground_map_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Box) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Map_10);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Map_10));
  }
}

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(
  MR_Word Question_4,
  MR_Word STATE_VARIABLE_KB_0_28,
  MR_Word * STATE_VARIABLE_KB_29)
{
  {
    MR_bool succeeded;
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_KB_0_28, (MR_Integer) 2))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_KB_0_28, (MR_Integer) 1))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_KB_0_28, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) Question_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Atom_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Question_4, (MR_Integer) 2))));
          MR_Word GroundMap_10;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Box Var_34;
          MR_Word Var_35;
          MR_Box conv2_GroundMap_10;
          MR_Word Var_43;
          MR_Word Var_44;

          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&mdb__declarative_oracle_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0_1));
            MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Atom_8));
          }
          Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Atom_8, (MR_Integer) 0))));
          Var_34 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
          Var_33 = mdbcomp__rtti_access__get_all_modes_for_layout_1_f_0(Var_34);
          mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_1[1]), Var_32, Var_33, ((MR_Box) (Var_70)), &conv2_GroundMap_10);
          GroundMap_10 = ((MR_Word) (conv2_GroundMap_10));
          Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_KB_0_28, (MR_Integer) 1))));
          Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_KB_0_28, (MR_Integer) 2))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_KB_29 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GroundMap_10));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_44));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InitAtom_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Question_4, (MR_Integer) 1))));
          MR_Word CompleteMap_15;
          MR_Word Var_47;
          MR_Word Var_49;

          mercury__map__delete_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), ((MR_Box) (InitAtom_12)), Var_69, &CompleteMap_15);
          Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_KB_0_28, (MR_Integer) 0))));
          Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_KB_0_28, (MR_Integer) 2))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_KB_29 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CompleteMap_15));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_49));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Exception_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Question_4, (MR_Integer) 2))));
          MR_Word ExceptionsMap_27;
          MR_Word InitAtom_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Question_4, (MR_Integer) 1))));
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
            Possible0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KnownExceptions0_19, (MR_Integer) 0))));
            Impossible0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KnownExceptions0_19, (MR_Integer) 1))));
            Inadmissible0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KnownExceptions0_19, (MR_Integer) 2))));
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
              MR_hl_field(MR_mktag(0), KnownExceptions_26, 0) = ((MR_Box) (Possible_23));
              MR_hl_field(MR_mktag(0), KnownExceptions_26, 1) = ((MR_Box) (Impossible_24));
              MR_hl_field(MR_mktag(0), KnownExceptions_26, 2) = ((MR_Box) (Inadmissible_25));
            }
            mercury__map__set_4_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), ((MR_Box) (InitAtom_37)), ((MR_Box) (KnownExceptions_26)), Var_68, &ExceptionsMap_27);
          }
          else
            ExceptionsMap_27 = Var_68;
          Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_KB_0_28, (MR_Integer) 0))));
          Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_KB_0_28, (MR_Integer) 1))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_KB_29 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ExceptionsMap_27));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Map_11;

    mdb__declarative_oracle__add_atom_to_ground_map_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Box) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Map_11);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Map_11));
  }
}

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(
  MR_Word Question_5,
  MR_Word Answer_6,
  MR_Word STATE_VARIABLE_KB_0_40,
  MR_Word * STATE_VARIABLE_KB_41)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Answer_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Truth_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Answer_6, (MR_Integer) 1))) & (MR_Integer) 3);

          switch (MR_tag((MR_Word) Question_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Atom_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Question_5, (MR_Integer) 2))));
                MR_Word Map0_20;
                MR_Box ProcLayout_21;
                MR_Word Map_22;
                MR_Word Var_44;

                mdb__declarative_oracle__get_kb_ground_map_2_p_0(STATE_VARIABLE_KB_0_40, &Map0_20);
                Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Atom_19, (MR_Integer) 0))));
                ProcLayout_21 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0))));
                switch (Truth_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_45;
                      MR_Word Var_46;
                      MR_Box conv2_Map_22;

                      {
                        Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&mdb__declarative_oracle_scalar_common_4[0]));
                        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0_1));
                        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Truth_16));
                        MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (Atom_19));
                      }
                      Var_46 = mdbcomp__rtti_access__get_all_modes_for_layout_1_f_0(ProcLayout_21);
                      mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_1[1]), Var_45, Var_46, ((MR_Box) (Map0_20)), &conv2_Map_22);
                      Map_22 = ((MR_Word) (conv2_Map_22));
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    mdb__declarative_oracle__add_atom_to_ground_map_5_p_0(Truth_16, Atom_19, ProcLayout_21, Map0_20, &Map_22);
                    break;
                }
                mdb__declarative_oracle__set_kb_ground_map_3_p_0(Map_22, STATE_VARIABLE_KB_0_40, STATE_VARIABLE_KB_41);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Call_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Question_5, (MR_Integer) 1))));
                MR_Word Map0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_KB_0_40, (MR_Integer) 1))));
                MR_Word Map_49;
                MR_Word Var_94;
                MR_Word Var_96;

                mercury__map__set_4_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), ((MR_Box) (Call_24)), ((MR_Box) (Truth_16)), Map0_48, &Map_49);
                Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_KB_0_40, (MR_Integer) 0))));
                Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_KB_0_40, (MR_Integer) 2))));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_KB_41 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_94));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Map_49));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_96));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Exception_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Question_5, (MR_Integer) 2))));
                MR_Word KnownExceptions0_29;
                MR_Word KnownExceptions_35;
                MR_Word Map0_50;
                MR_Word Map_51;
                MR_Word Call_52 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Question_5, (MR_Integer) 1))));
                MR_Word Var_86;
                MR_Word Var_87;
                MR_Word Var_88;
                MR_Word OldKnownExceptions_28;
                MR_Box conv0_OldKnownExceptions_28;

                mdb__declarative_oracle__get_kb_exceptions_map_2_p_0(STATE_VARIABLE_KB_0_40, &Map0_50);
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
                    MR_hl_field(MR_mktag(0), KnownExceptions0_29, 0) = ((MR_Box) (EmptyPossible0_30));
                    MR_hl_field(MR_mktag(0), KnownExceptions0_29, 1) = ((MR_Box) (EmptyImpossible0_31));
                    MR_hl_field(MR_mktag(0), KnownExceptions0_29, 2) = ((MR_Box) (EmptyInadmissible0_32));
                  }
                }
                Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KnownExceptions0_29, (MR_Integer) 0))));
                Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KnownExceptions0_29, (MR_Integer) 1))));
                Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KnownExceptions0_29, (MR_Integer) 2))));
                switch (Truth_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Possible_34;
                      MR_Word Var_58;
                      MR_Word Var_59;

                      mercury__set__insert_3_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_27)), Var_88, &Possible_34);
                      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KnownExceptions0_29, (MR_Integer) 1))));
                      Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KnownExceptions0_29, (MR_Integer) 2))));
                      {
                        KnownExceptions_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), KnownExceptions_35, 0) = ((MR_Box) (Possible_34));
                        MR_hl_field(MR_mktag(0), KnownExceptions_35, 1) = ((MR_Box) (Var_58));
                        MR_hl_field(MR_mktag(0), KnownExceptions_35, 2) = ((MR_Box) (Var_59));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Impossible_37;
                      MR_Word Var_62;
                      MR_Word Var_64;

                      mercury__set__insert_3_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_27)), Var_87, &Impossible_37);
                      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KnownExceptions0_29, (MR_Integer) 0))));
                      Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KnownExceptions0_29, (MR_Integer) 2))));
                      {
                        KnownExceptions_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), KnownExceptions_35, 0) = ((MR_Box) (Var_62));
                        MR_hl_field(MR_mktag(0), KnownExceptions_35, 1) = ((MR_Box) (Impossible_37));
                        MR_hl_field(MR_mktag(0), KnownExceptions_35, 2) = ((MR_Box) (Var_64));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Inadmissible_39;
                      MR_Word Var_67;
                      MR_Word Var_68;

                      mercury__set__insert_3_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_27)), Var_86, &Inadmissible_39);
                      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KnownExceptions0_29, (MR_Integer) 0))));
                      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KnownExceptions0_29, (MR_Integer) 1))));
                      {
                        KnownExceptions_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), KnownExceptions_35, 0) = ((MR_Box) (Var_67));
                        MR_hl_field(MR_mktag(0), KnownExceptions_35, 1) = ((MR_Box) (Var_68));
                        MR_hl_field(MR_mktag(0), KnownExceptions_35, 2) = ((MR_Box) (Inadmissible_39));
                      }
                    }
                    break;
                }
                mercury__map__set_4_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), ((MR_Box) (Call_52)), ((MR_Box) (KnownExceptions_35)), Map0_50, &Map_51);
                mdb__declarative_oracle__set_kb_exceptions_map_3_p_0(Map_51, STATE_VARIABLE_KB_0_40, STATE_VARIABLE_KB_41);
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
}

static void MR_CALL 
mdb__declarative_oracle__add_atom_to_ground_map_5_p_0(
  MR_Word Truth_6,
  MR_Word FinalAtom_7,
  MR_Box ProcLayout_8,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11)
{
  {
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinalAtom_7, (MR_Integer) 0))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinalAtom_7, (MR_Integer) 1))));

    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (ProcLayout_8));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_18));
    }
    mercury__map__set_4_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), ((MR_Box) (Var_12)), ((MR_Box) (Truth_6)), STATE_VARIABLE_Map_0_10, STATE_VARIABLE_Map_11);
  }
}

static void MR_CALL 
mdb__declarative_oracle__set_kb_exceptions_map_3_p_0(
  MR_Word M_4,
  MR_Word KB_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KB_5, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KB_5, (MR_Integer) 1))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (M_4));
    }
  }
}

static void MR_CALL 
mdb__declarative_oracle__set_kb_ground_map_3_p_0(
  MR_Word M_4,
  MR_Word KB_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KB_5, (MR_Integer) 1))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KB_5, (MR_Integer) 2))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (M_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_8));
    }
  }
}

static void MR_CALL 
mdb__declarative_oracle__get_kb_exceptions_map_2_p_0(
  MR_Word KB_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KB_3, (MR_Integer) 2))));
}

static void MR_CALL 
mdb__declarative_oracle__get_kb_ground_map_2_p_0(
  MR_Word KB_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KB_3, (MR_Integer) 0))));
}

MR_bool MR_CALL 
mdb__declarative_oracle__answer_known_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word Oracle_4,
  MR_Word Question_5,
  MR_Word * Answer_6)
{
  {
    MR_bool succeeded;
    MR_Word Atom_7;
    MR_Box Var_8;
    MR_Word Trusted_19;
    MR_Word ProcLabel_20;

    Atom_7 = mdb__declarative_debugger__get_decl_question_atom_1_f_0(TypeInfo_for_T_16, Question_5);
    Var_8 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Atom_7, (MR_Integer) 0))));
    Trusted_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Oracle_4, (MR_Integer) 3))));
    ProcLabel_20 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(Var_8);
    if (((MR_tag((MR_Word) ProcLabel_20)) == (MR_Integer) 0))
    {
      MR_Word Module_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_20, (MR_Integer) 0))));
      MR_Word PredOrFunc_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcLabel_20, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_String Name_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcLabel_20, (MR_Integer) 3))));
      MR_Integer Arity_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_20, (MR_Integer) 4))));

      switch (PredOrFunc_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Var_39;
            MR_Box conv0_Var_32;

            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) (Module_21));
              MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Name_24));
              MR_hl_field(MR_mktag(3), Var_39, 2) = ((MR_Box) (Arity_25));
            }
            succeeded = mercury__bimap__search_3_p_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Trusted_19, ((MR_Box) (Var_39)), &conv0_Var_32);
            if (succeeded)
              succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_40;
            MR_Box conv1_Var_31;

            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (Module_21));
              MR_hl_field(MR_mktag(2), Var_40, 1) = ((MR_Box) (Name_24));
              MR_hl_field(MR_mktag(2), Var_40, 2) = ((MR_Box) (Arity_25));
            }
            succeeded = mercury__bimap__search_3_p_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Trusted_19, ((MR_Box) (Var_40)), &conv1_Var_31);
            if (succeeded)
              succeeded = MR_TRUE;
          }
          break;
      }
      if (!(succeeded))
      {
        {
          MR_Word Var_41;
          MR_Box conv2_Var_30;

          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Module_21));
          }
          succeeded = mercury__bimap__search_3_p_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Trusted_19, ((MR_Box) (Var_41)), &conv2_Var_30);
          if (succeeded)
            succeeded = MR_TRUE;
        }
        if (!(succeeded))
        {
          MR_String ModuleNameStr_29;
          MR_Box conv3_Var_27;

          succeeded = mercury__bimap__search_3_p_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Trusted_19, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Var_27);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
          {
            if (((MR_tag((MR_Word) Module_21)) == (MR_Integer) 1))
              ModuleNameStr_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), Module_21, (MR_Integer) 1))));
            else
              ModuleNameStr_29 = ((MR_String) ((MR_hl_field(MR_mktag(0), Module_21, (MR_Integer) 0))));
            succeeded = mercury__library__mercury_std_library_module_1_p_0(ModuleNameStr_29);
          }
        }
      }
    }
    else
      succeeded = MR_TRUE;
    if (succeeded)
    {
      MR_Box Var_9;

      Var_9 = mdb__declarative_debugger__get_decl_question_node_1_f_0(TypeInfo_for_T_16, Question_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Answer_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = Var_9;
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Oracle_4, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) Question_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box Node_58 = (MR_hl_field(MR_mktag(0), Question_5, (MR_Integer) 0));
            MR_Word Atom_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Question_5, (MR_Integer) 2))));
            MR_Word Map_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
            MR_Word Truth_62;
            MR_Box conv6_Truth_62;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), Map_61, ((MR_Box) (Atom_60)), &conv6_Truth_62);
            if (succeeded)
            {
              Truth_62 = ((MR_Word) (conv6_Truth_62));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Answer_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = Node_58;
                MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Truth_62));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Call_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Question_5, (MR_Integer) 1))));
            MR_Word CMap_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
            MR_Box Node_75 = (MR_hl_field(MR_mktag(1), Question_5, (MR_Integer) 0));
            MR_Word Truth_76;
            MR_Box conv4_Truth_76;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), CMap_65, ((MR_Box) (Call_63)), &conv4_Truth_76);
            if (succeeded)
            {
              Truth_76 = ((MR_Word) (conv4_Truth_76));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Answer_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = Node_75;
                MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Truth_76));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Exception_66 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Question_5, (MR_Integer) 2))));
            MR_Word XMap_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2))));
            MR_Word X_68;
            MR_Word Possible_69;
            MR_Word Impossible_70;
            MR_Word Inadmissible_71;
            MR_Box Node_77 = (MR_hl_field(MR_mktag(2), Question_5, (MR_Integer) 0));
            MR_Word Call_78 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Question_5, (MR_Integer) 1))));
            MR_Box conv5_X_68;
            MR_Word TypeCtorInfo_35_85;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), XMap_67, ((MR_Box) (Call_78)), &conv5_X_68);
            if (succeeded)
            {
              X_68 = ((MR_Word) (conv5_X_68));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              Possible_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_68, (MR_Integer) 0))));
              Impossible_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_68, (MR_Integer) 1))));
              Inadmissible_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_68, (MR_Integer) 2))));
              TypeCtorInfo_35_85 = (MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0);
              succeeded = mercury__set__member_2_p_0(TypeCtorInfo_35_85, ((MR_Box) (Exception_66)), Possible_69);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Answer_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = Node_77;
                  MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = mercury__set__member_2_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_66)), Impossible_70);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Answer_6 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = Node_77;
                    MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  }
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word Var_74;

                  succeeded = mercury__set__member_2_p_0((MR_Word) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0), ((MR_Box) (Exception_66)), Inadmissible_71);
                  if (succeeded)
                  {
                    Var_74 = (MR_Integer) 2;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Answer_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = Node_77;
                      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Var_74));
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
}

static MR_Box MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_CmdStr_4;

    conv1_CmdStr_4 = mdb__declarative_oracle__format_trust_command_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_CmdStr_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_Display_5;

    conv0_Display_5 = mdb__declarative_oracle__format_trust_display_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Display_5));
    return wrapper_arg_2;
  }
}

void MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0(
  MR_Word Oracle_1,
  MR_Word HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  {
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Oracle_1, (MR_Integer) 3))));

    switch (HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word IdToObjectMap_12;
          MR_Word DisplayStrs_13;
          MR_Word Var_18;

          IdToObjectMap_12 = mercury__bimap__reverse_map_1_f_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_41);
          Var_18 = mercury__map__to_assoc_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), IdToObjectMap_12);
          DisplayStrs_13 = mercury__list__map_2_f_0((MR_Word) (&mdb__declarative_oracle_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_1[5]), Var_18);
          if ((DisplayStrs_13 == (MR_Word) ((MR_Unsigned) 0U)))
            *HeadVar__3_3 = (MR_String) "There are no trusted modules, predicates or functions.\n";
          else
          {
            MR_Word Var_19;

            {
              Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) ((MR_String) "Trusted Objects:\n"));
              MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (DisplayStrs_13));
            }
            *HeadVar__3_3 = mercury__string__append_list_1_f_0(Var_19);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TrustedObjects_6;
          MR_Word TrustedCmdStrs_7;

          TrustedObjects_6 = mercury__bimap__ordinates_1_f_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_41);
          TrustedCmdStrs_7 = mercury__list__map_2_f_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_oracle_scalar_common_1[6]), TrustedObjects_6);
          *HeadVar__3_3 = mercury__string__append_list_1_f_0(TrustedCmdStrs_7);
        }
        break;
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_oracle__remove_trusted_3_p_0(
  MR_Integer Id_4,
  MR_Word STATE_VARIABLE_Oracle_0_9,
  MR_Word * STATE_VARIABLE_Oracle_10)
{
  {
    MR_bool succeeded;
    MR_Word Trusted0_7;
    MR_Word Trusted_8;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3))));
    MR_Box conv0_Var_6;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_25;

    succeeded = mercury__bimap__search_3_p_1((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_11, &conv0_Var_6, ((MR_Box) (Id_4)));
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      Trusted0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3))));
      mercury__bimap__delete_value_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), ((MR_Box) (Id_4)), Trusted0_7, &Trusted_8);
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2))));
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_9, (MR_Integer) 4))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Oracle_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Trusted_8));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_oracle__trust_standard_library_2_p_0(
  MR_Word STATE_VARIABLE_Oracle_0_9,
  MR_Word * STATE_VARIABLE_Oracle_10)
{
  {
    MR_bool succeeded;
    MR_Word Counter0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_9, (MR_Integer) 4))));
    MR_Integer Id_5;
    MR_Word Counter_6;
    MR_Word Trusted0_7;
    MR_Word Trusted_8;

    mercury__counter__allocate_3_p_0(&Id_5, Counter0_4, &Counter_6);
    Trusted0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3))));
    succeeded = mercury__bimap__insert_4_p_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Id_5)), Trusted0_7, &Trusted_8);
    if (succeeded)
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0))));
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Oracle_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Trusted_8));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Counter_6));
      }
    }
    else
      *STATE_VARIABLE_Oracle_10 = STATE_VARIABLE_Oracle_0_9;
  }
}

void MR_CALL 
mdb__declarative_oracle__add_trusted_pred_or_func_3_p_0(
  MR_Box ProcLayout_4,
  MR_Word STATE_VARIABLE_Oracle_0_21,
  MR_Word * STATE_VARIABLE_Oracle_22)
{
  {
    MR_bool succeeded;
    MR_Word Counter0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_21, (MR_Integer) 4))));
    MR_Integer Id_7;
    MR_Word Counter_8;
    MR_Word ProcLabel_9;
    MR_Word ModuleName_10;
    MR_Word PredOrFunc_11;
    MR_String Name_13;
    MR_Integer Arity_14;
    MR_Word Trusted0_19;
    MR_Word Trusted_20;

    mercury__counter__allocate_3_p_0(&Id_7, Counter0_6, &Counter_8);
    ProcLabel_9 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(ProcLayout_4);
    if (((MR_tag((MR_Word) ProcLabel_9)) == (MR_Integer) 0))
    {
      ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_9, (MR_Integer) 0))));
      PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcLabel_9, (MR_Integer) 1))) & (MR_Integer) 1);
      Name_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcLabel_9, (MR_Integer) 3))));
      Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_9, (MR_Integer) 4))));
    }
    else
    {
      ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcLabel_9, (MR_Integer) 0))));
      Name_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), ProcLabel_9, (MR_Integer) 3))));
      Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcLabel_9, (MR_Integer) 4))));
      PredOrFunc_11 = (MR_Integer) 0;
    }
    Trusted0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_21, (MR_Integer) 3))));
    switch (PredOrFunc_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_23;

          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) (ModuleName_10));
            MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (Name_13));
            MR_hl_field(MR_mktag(3), Var_23, 2) = ((MR_Box) (Arity_14));
          }
          succeeded = mercury__bimap__insert_4_p_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_23)), ((MR_Box) (Id_7)), Trusted0_19, &Trusted_20);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_24;

          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_24, 0) = ((MR_Box) (ModuleName_10));
            MR_hl_field(MR_mktag(2), Var_24, 1) = ((MR_Box) (Name_13));
            MR_hl_field(MR_mktag(2), Var_24, 2) = ((MR_Box) (Arity_14));
          }
          succeeded = mercury__bimap__insert_4_p_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_24)), ((MR_Box) (Id_7)), Trusted0_19, &Trusted_20);
        }
        break;
    }
    if (succeeded)
    {
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_21, (MR_Integer) 0))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_21, (MR_Integer) 1))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_21, (MR_Integer) 2))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Oracle_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Trusted_20));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Counter_8));
      }
    }
    else
      *STATE_VARIABLE_Oracle_22 = STATE_VARIABLE_Oracle_0_21;
  }
}

void MR_CALL 
mdb__declarative_oracle__add_trusted_module_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_Oracle_0_11,
  MR_Word * STATE_VARIABLE_Oracle_12)
{
  {
    MR_bool succeeded;
    MR_Word Counter0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_11, (MR_Integer) 4))));
    MR_Integer Id_7;
    MR_Word Counter_8;
    MR_Word Trusted0_9;
    MR_Word Trusted_10;
    MR_Word Var_13;

    mercury__counter__allocate_3_p_0(&Id_7, Counter0_6, &Counter_8);
    Trusted0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3))));
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (ModuleName_4));
    }
    succeeded = mercury__bimap__insert_4_p_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_13)), ((MR_Box) (Id_7)), Trusted0_9, &Trusted_10);
    if (succeeded)
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_11, (MR_Integer) 0))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1))));
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Oracle_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Trusted_10));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Counter_8));
      }
    }
    else
      *STATE_VARIABLE_Oracle_12 = STATE_VARIABLE_Oracle_0_11;
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
  {
    MR_Word Current_11;
    MR_Word Old_12;
    MR_Word User_13;
    MR_Word Trusted_14;
    MR_Word Counter_15;
    MR_Word Var_18;
    MR_Word G_22;
    MR_Word C_23;
    MR_Word X_24;
    MR_Word G_29;
    MR_Word C_30;
    MR_Word X_31;

    mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), &G_22);
    mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), &C_23);
    mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), &X_24);
    {
      Current_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Current_11, 0) = ((MR_Box) (G_22));
      MR_hl_field(MR_mktag(0), Current_11, 1) = ((MR_Box) (C_23));
      MR_hl_field(MR_mktag(0), Current_11, 2) = ((MR_Box) (X_24));
    }
    mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), &G_29);
    mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0), &C_30);
    mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0), (MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0), &X_31);
    {
      Old_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Old_12, 0) = ((MR_Box) (G_29));
      MR_hl_field(MR_mktag(0), Old_12, 1) = ((MR_Box) (C_30));
      MR_hl_field(MR_mktag(0), Old_12, 2) = ((MR_Box) (X_31));
    }
    mdb__declarative_user__user_state_init_5_p_0(InStr_6, OutStr_7, Browser_8, HelpSystem_9, &User_13);
    Var_18 = mercury__bimap__init_0_f_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    mercury__bimap__set_4_p_0((MR_Word) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) ((MR_Integer) 0)), Var_18, &Trusted_14);
    mercury__counter__init_2_p_0((MR_Integer) 1, &Counter_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *Oracle_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Current_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Old_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (User_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Trusted_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Counter_15));
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_oracle__oracle_response_undoable_1_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
      succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____known_exceptions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_oracle____Unify____known_exceptions_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_oracle____Compare____known_exceptions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_oracle____Compare____known_exceptions_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_kb_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_oracle____Unify____oracle_kb_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_kb_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_oracle____Compare____oracle_kb_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_oracle____Unify____oracle_response_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_oracle____Compare____oracle_response_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_oracle____Unify____oracle_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_oracle____Compare____oracle_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trusted_object_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_oracle____Unify____trusted_object_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_oracle____Compare____trusted_object_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_oracle____Compare____trusted_object_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__mdb__declarative_oracle__init(void)
{
}

void mercury__mdb__declarative_oracle__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0);
	MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_kb_0);
	MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_response_1);
	MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0);
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
