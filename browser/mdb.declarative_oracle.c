/*
** Automatically generated from `declarative_oracle.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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


/* :- module mdb.declarative_oracle. */
/* :- implementation. */

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
#include "integer.mih"
#include "io.mih"
#include "library.mih"
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
  MR_Word * mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
  MR_Word mdb__declarative_oracle__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trusted_object_0_0(
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_kb_0_0(
  MR_Word * mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
  MR_Word mdb__declarative_oracle__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_kb_0_0(
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____known_exceptions_0_0(
  MR_Word * mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
  MR_Word mdb__declarative_oracle__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____known_exceptions_0_0(
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2);

static void MR_CALL 
mdb__declarative_oracle__remove_atom_from_ground_map_4_p_0(
  MR_Word mdb__declarative_oracle__FinalAtom_5,
  MR_Box mdb__declarative_oracle__ProcLayout_6,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Map_0_9,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Map_10);

static MR_String MR_CALL 
mdb__declarative_oracle__format_trust_display_1_f_0(
  MR_Word mdb__declarative_oracle__HeadVar__1_1);

static MR_String MR_CALL 
mdb__declarative_oracle__format_trust_command_1_f_0(
  MR_Word mdb__declarative_oracle__TrustedObject_3);

static void MR_CALL 
mdb__declarative_oracle__oracle_confirm_bug_7_p_0_1(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box * mdb__declarative_oracle__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_oracle__query_oracle_user_6_p_0(
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_77,
  MR_Word mdb__declarative_oracle__UserQuestion_7,
  MR_Word * mdb__declarative_oracle__OracleResponse_8,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_30);

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0_1(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box * mdb__declarative_oracle__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(
  MR_Word mdb__declarative_oracle__Question_4,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_KB_0_28,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_KB_29);

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box * mdb__declarative_oracle__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(
  MR_Word mdb__declarative_oracle__Question_5,
  MR_Word mdb__declarative_oracle__Answer_6,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_KB_0_40,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_KB_41);

static void MR_CALL 
mdb__declarative_oracle__add_atom_to_ground_map_5_p_0(
  MR_Word mdb__declarative_oracle__Truth_6,
  MR_Word mdb__declarative_oracle__FinalAtom_7,
  MR_Box mdb__declarative_oracle__ProcLayout_8,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Map_0_10,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Map_11);

static void MR_CALL 
mdb__declarative_oracle__set_kb_exceptions_map_3_p_0(
  MR_Word mdb__declarative_oracle__M_4,
  MR_Word mdb__declarative_oracle__KB_5,
  MR_Word * mdb__declarative_oracle__HeadVar__3_3);

static void MR_CALL 
mdb__declarative_oracle__set_kb_ground_map_3_p_0(
  MR_Word mdb__declarative_oracle__M_4,
  MR_Word mdb__declarative_oracle__KB_5,
  MR_Word * mdb__declarative_oracle__HeadVar__3_3);

static void MR_CALL 
mdb__declarative_oracle__get_kb_exceptions_map_2_p_0(
  MR_Word mdb__declarative_oracle__KB_3,
  MR_Word * mdb__declarative_oracle__HeadVar__2_2);

static void MR_CALL 
mdb__declarative_oracle__get_kb_ground_map_2_p_0(
  MR_Word mdb__declarative_oracle__KB_3,
  MR_Word * mdb__declarative_oracle__HeadVar__2_2);

static MR_Box MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_2(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1);

static MR_Box MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_1(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____known_exceptions_0_0_10001(
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____known_exceptions_0_0_10001(
  MR_Box * mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box mdb__declarative_oracle__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_kb_0_0_10001(
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_kb_0_0_10001(
  MR_Box * mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box mdb__declarative_oracle__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_response_1_0_10001(
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box mdb__declarative_oracle__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_response_1_0_10001(
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box * mdb__declarative_oracle__wrapper_arg_2,
  MR_Box mdb__declarative_oracle__wrapper_arg_3,
  MR_Box mdb__declarative_oracle__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_state_0_0_10001(
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_state_0_0_10001(
  MR_Box * mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box mdb__declarative_oracle__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trusted_object_0_0_10001(
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_oracle____Compare____trusted_object_0_0_10001(
  MR_Box * mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box mdb__declarative_oracle__wrapper_arg_3);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_oracle__get_trusted_list_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__declarative_oracle__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_mdb__declarative_oracle__type_ctor_info_trusted_object_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)),
    ((MR_Box) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0)),
    ((MR_Box) (&mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0)),
    ((MR_Box) (&mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_oracle__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_mdb__declarative_oracle__type_ctor_info_trusted_object_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0,
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_known_exceptions_0_0[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0,
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0,
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0
};

static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_known_exceptions_0_0[3] = {
  (MR_String) "possible",
  (MR_String) "impossible",
  (MR_String) "inadmissible"
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0 = {
  (MR_String) "known_excp",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_known_exceptions_0_0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_names_known_exceptions_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_known_exceptions_0_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0
};

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_known_exceptions_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_known_exceptions_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____known_exceptions_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____known_exceptions_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "known_exceptions",
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_known_exceptions_0 },
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_known_exceptions_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_known_exceptions_0
};

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_final_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0,
    (MR_TypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0
  }
};

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
    (MR_TypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0
  }
};

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_oracle__type_ctor_info_known_exceptions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
    (MR_TypeInfo) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_kb_0_0[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_final_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0,
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0,
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_oracle__type_ctor_info_known_exceptions_0
};

static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_kb_0_0[3] = {
  (MR_String) "kb_ground_map",
  (MR_String) "kb_complete_map",
  (MR_String) "kb_exceptions_map"
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_kb_0_0 = {
  (MR_String) "oracle_kb",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_kb_0_0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_kb_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_kb_0_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_kb_0_0
};

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_kb_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_kb_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____oracle_kb_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____oracle_kb_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "oracle_kb",
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_kb_0 },
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_kb_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_kb_0
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_answer_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_0[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_0 = {
  (MR_String) "oracle_response_answer",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_output_stream_0
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_1 = {
  (MR_String) "oracle_response_show_info",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_2[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_2 = {
  (MR_String) "oracle_response_change_search",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_3 = {
  (MR_String) "oracle_response_undo",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_4 = {
  (MR_String) "oracle_response_exit_diagnosis",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_5 = {
  (MR_String) "oracle_response_abort_diagnosis",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_2
  },
  {
    (MR_Integer) 2,
    MR_SECTAG_REMOTE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____oracle_response_1_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____oracle_response_1_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "oracle_response",
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_response_1 },
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_response_1 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_response_1
};

static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__bimap__ti_bimap_2mdb__declarative_oracle__type_ctor_info_trusted_object_0builtin__type_ctor_info_int_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_state_0_0[5] = {
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_kb_0,
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_kb_0,
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_state_0,
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__bimap__ti_bimap_2mdb__declarative_oracle__type_ctor_info_trusted_object_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0
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
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_state_0_0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_state_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_state_0_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_state_0_0
};

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_state_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_state_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____oracle_state_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____oracle_state_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "oracle_state",
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_state_0 },
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_state_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_state_0
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_0 = {
  (MR_String) "trusted_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_1[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_1 = {
  (MR_String) "trusted_predicate",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_2[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_2 = {
  (MR_String) "trusted_function",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_3 = {
  (MR_String) "trusted_standard_library",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_2
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____trusted_object_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____trusted_object_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "trusted_object",
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_trusted_object_0 },
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_trusted_object_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_trusted_object_0
};

static void MR_CALL 
mdb__declarative_oracle____Compare____trusted_object_0_0(
  MR_Word * mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
  MR_Word mdb__declarative_oracle__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Integer mdb__declarative_oracle__CastX_64 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;
    MR_Integer mdb__declarative_oracle__CastY_65 = (MR_Integer) mdb__declarative_oracle__HeadVar__3_3;

    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_64 == mdb__declarative_oracle__CastY_65);
    if (mdb__declarative_oracle__succeeded)
      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_oracle__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__declarative_oracle__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mdbcomp__sym_name____Compare____sym_name_0_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__Var_76, mdb__declarative_oracle__ArgY1_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mdb__declarative_oracle__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
            MR_String mdb__declarative_oracle__Var_78 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdb__declarative_oracle__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mdb__declarative_oracle__ArgY1_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String mdb__declarative_oracle__ArgY2_22 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer mdb__declarative_oracle__ArgY3_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_oracle__Var_25;

                  {
                    mdbcomp__sym_name____Compare____sym_name_0_0(&mdb__declarative_oracle__Var_25, mdb__declarative_oracle__Var_79, mdb__declarative_oracle__ArgY1_20);
                  }
                  mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_25 == (MR_Integer) 0);
                  mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                  if (mdb__declarative_oracle__succeeded)
                    *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__Var_25;
                  else
                  {
                    MR_Word mdb__declarative_oracle__Var_26;

                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_oracle__Var_26, mdb__declarative_oracle__Var_78, mdb__declarative_oracle__ArgY2_22);
                    }
                    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_26 == (MR_Integer) 0);
                    mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                    if (mdb__declarative_oracle__succeeded)
                      *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__Var_26;
                    else
                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__Var_77, mdb__declarative_oracle__ArgY3_24);
                      }
                  }
                }
                break;
              case (MR_Integer) 3:
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer mdb__declarative_oracle__Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
            MR_String mdb__declarative_oracle__Var_74 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdb__declarative_oracle__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word mdb__declarative_oracle__ArgY1_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String mdb__declarative_oracle__ArgY2_49 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer mdb__declarative_oracle__ArgY3_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_oracle__Var_52;

                  {
                    mdbcomp__sym_name____Compare____sym_name_0_0(&mdb__declarative_oracle__Var_52, mdb__declarative_oracle__Var_75, mdb__declarative_oracle__ArgY1_47);
                  }
                  mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_52 == (MR_Integer) 0);
                  mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                  if (mdb__declarative_oracle__succeeded)
                    *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__Var_52;
                  else
                  {
                    MR_Word mdb__declarative_oracle__Var_53;

                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_oracle__Var_53, mdb__declarative_oracle__Var_74, mdb__declarative_oracle__ArgY2_49);
                    }
                    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_53 == (MR_Integer) 0);
                    mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                    if (mdb__declarative_oracle__succeeded)
                      *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__Var_53;
                    else
                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__Var_73, mdb__declarative_oracle__ArgY3_51);
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
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Integer mdb__declarative_oracle__CastX_19 = (MR_Integer) mdb__declarative_oracle__HeadVar__1_1;
    MR_Integer mdb__declarative_oracle__CastY_20 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;

    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_19 == mdb__declarative_oracle__CastY_20);
    if (mdb__declarative_oracle__succeeded)
      mdb__declarative_oracle__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mdb__declarative_oracle__CastX_17 = (MR_Integer) mdb__declarative_oracle__HeadVar__1_1;
            MR_Integer mdb__declarative_oracle__CastY_18 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;

            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastY_18 == mdb__declarative_oracle__CastX_17);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_oracle__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__ArgY1_4;

            mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
              {
                mdb__declarative_oracle__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdb__declarative_oracle__ArgX1_3, mdb__declarative_oracle__ArgY1_4);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_oracle__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__ArgY1_6;
            MR_String mdb__declarative_oracle__ArgX2_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
            MR_String mdb__declarative_oracle__ArgY2_8;
            MR_Integer mdb__declarative_oracle__ArgX3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer mdb__declarative_oracle__ArgY3_10;

            mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
              mdb__declarative_oracle__ArgY2_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
              mdb__declarative_oracle__ArgY3_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
              {
                mdb__declarative_oracle__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdb__declarative_oracle__ArgX1_5, mdb__declarative_oracle__ArgY1_6);
              }
              if (mdb__declarative_oracle__succeeded)
              {
                mdb__declarative_oracle__succeeded = (strcmp(mdb__declarative_oracle__ArgX2_7, mdb__declarative_oracle__ArgY2_8) == 0);
                if (mdb__declarative_oracle__succeeded)
                  mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__ArgX3_9 == mdb__declarative_oracle__ArgY3_10);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word mdb__declarative_oracle__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__ArgY1_12;
            MR_String mdb__declarative_oracle__ArgX2_13 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
            MR_String mdb__declarative_oracle__ArgY2_14;
            MR_Integer mdb__declarative_oracle__ArgX3_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer mdb__declarative_oracle__ArgY3_16;

            mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
              mdb__declarative_oracle__ArgY2_14 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
              mdb__declarative_oracle__ArgY3_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
              {
                mdb__declarative_oracle__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdb__declarative_oracle__ArgX1_11, mdb__declarative_oracle__ArgY1_12);
              }
              if (mdb__declarative_oracle__succeeded)
              {
                mdb__declarative_oracle__succeeded = (strcmp(mdb__declarative_oracle__ArgX2_13, mdb__declarative_oracle__ArgY2_14) == 0);
                if (mdb__declarative_oracle__succeeded)
                  mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__ArgX3_15 == mdb__declarative_oracle__ArgY3_16);
              }
            }
          }
          break;
      }
    return mdb__declarative_oracle__succeeded;
  }
}

void MR_CALL 
mdb__declarative_oracle____Compare____oracle_state_0_0(
  MR_Word * mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
  MR_Word mdb__declarative_oracle__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Integer mdb__declarative_oracle__CastX_18 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;
    MR_Integer mdb__declarative_oracle__CastY_19 = (MR_Integer) mdb__declarative_oracle__HeadVar__3_3;

    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_18 == mdb__declarative_oracle__CastY_19);
    if (mdb__declarative_oracle__succeeded)
      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word mdb__declarative_oracle__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word mdb__declarative_oracle__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word mdb__declarative_oracle__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word mdb__declarative_oracle__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word mdb__declarative_oracle__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word mdb__declarative_oracle__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word mdb__declarative_oracle__Var_14;
      MR_Integer mdb__declarative_oracle__CastX_33 = (MR_Integer) mdb__declarative_oracle__ArgX1_4;
      MR_Integer mdb__declarative_oracle__CastY_34 = (MR_Integer) mdb__declarative_oracle__ArgY1_5;

      mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_33 == mdb__declarative_oracle__CastY_34);
      if (mdb__declarative_oracle__succeeded)
      {
        mdb__declarative_oracle__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
        mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
        if (mdb__declarative_oracle__succeeded)
        {
          mdb__declarative_oracle__Var_14 = (MR_Integer) 0;
          mdb__declarative_oracle__succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word mdb__declarative_oracle__ArgX1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgX1_4, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__ArgY1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgY1_5, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__ArgX2_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgX1_4, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__ArgY2_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgY1_5, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__ArgX3_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgX1_4, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__ArgY3_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgY1_5, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__Var_31;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[1], &mdb__declarative_oracle__Var_31, ((MR_Box) (mdb__declarative_oracle__ArgX1_25)), ((MR_Box) (mdb__declarative_oracle__ArgY1_26)));
        }
        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_31 == (MR_Integer) 0);
        mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
        if (mdb__declarative_oracle__succeeded)
        {
          mdb__declarative_oracle__Var_14 = mdb__declarative_oracle__Var_31;
          mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_14 == (MR_Integer) 0);
          mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
        }
        else
        {
          MR_Word mdb__declarative_oracle__Var_32;

          {
            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[2], &mdb__declarative_oracle__Var_32, ((MR_Box) (mdb__declarative_oracle__ArgX2_27)), ((MR_Box) (mdb__declarative_oracle__ArgY2_28)));
          }
          mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_32 == (MR_Integer) 0);
          mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
          if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__Var_14 = mdb__declarative_oracle__Var_32;
            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_14 == (MR_Integer) 0);
            mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
          }
          else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[3], &mdb__declarative_oracle__Var_14, ((MR_Box) (mdb__declarative_oracle__ArgX3_29)), ((MR_Box) (mdb__declarative_oracle__ArgY3_30)));
            }
            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_14 == (MR_Integer) 0);
            mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
          }
        }
      }
      if (mdb__declarative_oracle__succeeded)
        *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__Var_14;
      else
      {
        MR_Word mdb__declarative_oracle__Var_15;
        MR_Integer mdb__declarative_oracle__CastX_46 = (MR_Integer) mdb__declarative_oracle__ArgX2_6;
        MR_Integer mdb__declarative_oracle__CastY_47 = (MR_Integer) mdb__declarative_oracle__ArgY2_7;

        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_46 == mdb__declarative_oracle__CastY_47);
        if (mdb__declarative_oracle__succeeded)
        {
          mdb__declarative_oracle__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
          mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
          if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__Var_15 = (MR_Integer) 0;
            mdb__declarative_oracle__succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Word mdb__declarative_oracle__ArgX1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgX2_6, (MR_Integer) 0)));
          MR_Word mdb__declarative_oracle__ArgY1_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgY2_7, (MR_Integer) 0)));
          MR_Word mdb__declarative_oracle__ArgX2_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgX2_6, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__ArgY2_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgY2_7, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__ArgX3_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgX2_6, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__ArgY3_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgY2_7, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__Var_44;

          {
            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[1], &mdb__declarative_oracle__Var_44, ((MR_Box) (mdb__declarative_oracle__ArgX1_38)), ((MR_Box) (mdb__declarative_oracle__ArgY1_39)));
          }
          mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_44 == (MR_Integer) 0);
          mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
          if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__Var_15 = mdb__declarative_oracle__Var_44;
            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_15 == (MR_Integer) 0);
            mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
          }
          else
          {
            MR_Word mdb__declarative_oracle__Var_45;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[2], &mdb__declarative_oracle__Var_45, ((MR_Box) (mdb__declarative_oracle__ArgX2_40)), ((MR_Box) (mdb__declarative_oracle__ArgY2_41)));
            }
            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_45 == (MR_Integer) 0);
            mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__Var_15 = mdb__declarative_oracle__Var_45;
              mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_15 == (MR_Integer) 0);
              mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
            }
            else
            {
              {
                mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[3], &mdb__declarative_oracle__Var_15, ((MR_Box) (mdb__declarative_oracle__ArgX3_42)), ((MR_Box) (mdb__declarative_oracle__ArgY3_43)));
              }
              mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_15 == (MR_Integer) 0);
              mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
            }
          }
        }
        if (mdb__declarative_oracle__succeeded)
          *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__Var_15;
        else
        {
          MR_Word mdb__declarative_oracle__Var_16;

          {
            mdb__declarative_user____Compare____user_state_0_0(&mdb__declarative_oracle__Var_16, mdb__declarative_oracle__ArgX3_8, mdb__declarative_oracle__ArgY3_9);
          }
          mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_16 == (MR_Integer) 0);
          mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
          if (mdb__declarative_oracle__succeeded)
            *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__Var_16;
          else
          {
            MR_Word mdb__declarative_oracle__Var_17;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[4], &mdb__declarative_oracle__Var_17, ((MR_Box) (mdb__declarative_oracle__ArgX4_10)), ((MR_Box) (mdb__declarative_oracle__ArgY4_11)));
            }
            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_17 == (MR_Integer) 0);
            mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
            if (mdb__declarative_oracle__succeeded)
              *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__Var_17;
            else
              {
                mercury__counter____Compare____counter_0_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__ArgX5_12, mdb__declarative_oracle__ArgY5_13);
              }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_state_0_0(
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Integer mdb__declarative_oracle__CastX_13 = (MR_Integer) mdb__declarative_oracle__HeadVar__1_1;
    MR_Integer mdb__declarative_oracle__CastY_14 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;

    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_13 == mdb__declarative_oracle__CastY_14);
    if (mdb__declarative_oracle__succeeded)
      mdb__declarative_oracle__succeeded = MR_TRUE;
    else
    {
      MR_Word mdb__declarative_oracle__TypeInfo_16_16;
      MR_Word mdb__declarative_oracle__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word mdb__declarative_oracle__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word mdb__declarative_oracle__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word mdb__declarative_oracle__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word mdb__declarative_oracle__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word mdb__declarative_oracle__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer mdb__declarative_oracle__CastX_24 = (MR_Integer) mdb__declarative_oracle__ArgX1_3;
      MR_Integer mdb__declarative_oracle__CastY_25 = (MR_Integer) mdb__declarative_oracle__ArgY1_4;
      MR_Integer mdb__declarative_oracle__CastX_35;
      MR_Integer mdb__declarative_oracle__CastY_36;

      mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_24 == mdb__declarative_oracle__CastY_25);
      if (mdb__declarative_oracle__succeeded)
        mdb__declarative_oracle__succeeded = MR_TRUE;
      else
      {
        MR_Word mdb__declarative_oracle__TypeInfo_12_27;
        MR_Word mdb__declarative_oracle__TypeInfo_13_28;
        MR_Word mdb__declarative_oracle__ArgX1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgX1_3, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__ArgY1_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgY1_4, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__ArgX2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgX1_3, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__ArgY2_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgY1_4, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__ArgX3_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgX1_3, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__ArgY3_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgY1_4, (MR_Integer) 2)));

        {
          mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[1], ((MR_Box) (mdb__declarative_oracle__ArgX1_18)), ((MR_Box) (mdb__declarative_oracle__ArgY1_19)));
        }
        if (mdb__declarative_oracle__succeeded)
        {
          mdb__declarative_oracle__TypeInfo_12_27 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[2];
          {
            mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_12_27, ((MR_Box) (mdb__declarative_oracle__ArgX2_20)), ((MR_Box) (mdb__declarative_oracle__ArgY2_21)));
          }
          if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__TypeInfo_13_28 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[3];
            {
              mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_13_28, ((MR_Box) (mdb__declarative_oracle__ArgX3_22)), ((MR_Box) (mdb__declarative_oracle__ArgY3_23)));
            }
          }
        }
      }
      if (mdb__declarative_oracle__succeeded)
      {
        mdb__declarative_oracle__CastX_35 = (MR_Integer) mdb__declarative_oracle__ArgX2_5;
        mdb__declarative_oracle__CastY_36 = (MR_Integer) mdb__declarative_oracle__ArgY2_6;
        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_35 == mdb__declarative_oracle__CastY_36);
        if (mdb__declarative_oracle__succeeded)
          mdb__declarative_oracle__succeeded = MR_TRUE;
        else
        {
          MR_Word mdb__declarative_oracle__TypeInfo_12_38;
          MR_Word mdb__declarative_oracle__TypeInfo_13_39;
          MR_Word mdb__declarative_oracle__ArgX1_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgX2_5, (MR_Integer) 0)));
          MR_Word mdb__declarative_oracle__ArgY1_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgY2_6, (MR_Integer) 0)));
          MR_Word mdb__declarative_oracle__ArgX2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgX2_5, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__ArgY2_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgY2_6, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__ArgX3_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgX2_5, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__ArgY3_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ArgY2_6, (MR_Integer) 2)));

          {
            mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[1], ((MR_Box) (mdb__declarative_oracle__ArgX1_29)), ((MR_Box) (mdb__declarative_oracle__ArgY1_30)));
          }
          if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__TypeInfo_12_38 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[2];
            {
              mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_12_38, ((MR_Box) (mdb__declarative_oracle__ArgX2_31)), ((MR_Box) (mdb__declarative_oracle__ArgY2_32)));
            }
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__TypeInfo_13_39 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[3];
              {
                mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_13_39, ((MR_Box) (mdb__declarative_oracle__ArgX3_33)), ((MR_Box) (mdb__declarative_oracle__ArgY3_34)));
              }
            }
          }
        }
        if (mdb__declarative_oracle__succeeded)
        {
          {
            mdb__declarative_oracle__succeeded = mdb__declarative_user____Unify____user_state_0_0(mdb__declarative_oracle__ArgX3_7, mdb__declarative_oracle__ArgY3_8);
          }
          if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__TypeInfo_16_16 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[4];
            {
              mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_16_16, ((MR_Box) (mdb__declarative_oracle__ArgX4_9)), ((MR_Box) (mdb__declarative_oracle__ArgY4_10)));
            }
            if (mdb__declarative_oracle__succeeded)
              {
                mdb__declarative_oracle__succeeded = mercury__counter____Unify____counter_0_0(mdb__declarative_oracle__ArgX5_11, mdb__declarative_oracle__ArgY5_12);
              }
          }
        }
      }
    }
    return mdb__declarative_oracle__succeeded;
  }
}

void MR_CALL 
mdb__declarative_oracle____Compare____oracle_response_1_0(
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_54,
  MR_Word * mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
  MR_Word mdb__declarative_oracle__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Integer mdb__declarative_oracle__CastX_52 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;
    MR_Integer mdb__declarative_oracle__CastY_53 = (MR_Integer) mdb__declarative_oracle__HeadVar__3_3;

    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_52 == mdb__declarative_oracle__CastY_53);
    if (mdb__declarative_oracle__succeeded)
      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__declarative_oracle__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_oracle__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_oracle__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_oracle__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_oracle__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__declarative_oracle__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mdb__declarative_debugger____Compare____decl_answer_1_0(mdb__declarative_oracle__TypeInfo_for_T_54, mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__Var_59, mdb__declarative_oracle__ArgY1_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_oracle__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_oracle__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mdb__declarative_oracle__ArgY1_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__io____Compare____output_stream_0_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__Var_62, mdb__declarative_oracle__ArgY1_17);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdb__declarative_oracle__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdb__declarative_oracle__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word mdb__declarative_oracle__ArgY1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mdb__declarative_oracle__Var_63 = (MR_Integer) mdb__declarative_oracle__Var_60;
                          MR_Integer mdb__declarative_oracle__Var_64 = (MR_Integer) mdb__declarative_oracle__ArgY1_29;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__Var_63, mdb__declarative_oracle__Var_64);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mdb__declarative_oracle__Var_61 = (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdb__declarative_oracle__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box mdb__declarative_oracle__ArgY1_46 = (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1));

                          {
                            mercury__builtin__compare_3_p_0(mdb__declarative_oracle__TypeInfo_for_T_54, mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__Var_61, mdb__declarative_oracle__ArgY1_46);
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
mdb__declarative_oracle____Unify____oracle_response_1_0(
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_17,
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Integer mdb__declarative_oracle__CastX_15 = (MR_Integer) mdb__declarative_oracle__HeadVar__1_1;
    MR_Integer mdb__declarative_oracle__CastY_16 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;

    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_15 == mdb__declarative_oracle__CastY_16);
    if (mdb__declarative_oracle__succeeded)
      mdb__declarative_oracle__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__declarative_oracle__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__declarative_oracle__CastX_9 = (MR_Integer) mdb__declarative_oracle__HeadVar__1_1;
                MR_Integer mdb__declarative_oracle__CastY_10 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;

                mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastY_10 == mdb__declarative_oracle__CastX_9);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__declarative_oracle__CastX_13 = (MR_Integer) mdb__declarative_oracle__HeadVar__1_1;
                MR_Integer mdb__declarative_oracle__CastY_14 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;

                mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastY_14 == mdb__declarative_oracle__CastX_13);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_oracle__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__ArgY1_4;

            mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
              {
                mdb__declarative_oracle__succeeded = mdb__declarative_debugger____Unify____decl_answer_1_0(mdb__declarative_oracle__TypeInfo_for_T_17, mdb__declarative_oracle__ArgX1_3, mdb__declarative_oracle__ArgY1_4);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_oracle__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__ArgY1_6;

            mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
              {
                mdb__declarative_oracle__succeeded = mercury__io____Unify____output_stream_0_0(mdb__declarative_oracle__ArgX1_5, mdb__declarative_oracle__ArgY1_6);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdb__declarative_oracle__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__declarative_oracle__ArgY1_8;

                mdb__declarative_oracle__succeeded = ((((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mdb__declarative_oracle__succeeded)
                {
                  mdb__declarative_oracle__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
                  mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__ArgX1_7 == mdb__declarative_oracle__ArgY1_8);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mdb__declarative_oracle__ArgX1_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__declarative_oracle__ArgY1_12;

                mdb__declarative_oracle__succeeded = ((((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mdb__declarative_oracle__succeeded)
                {
                  mdb__declarative_oracle__ArgY1_12 = (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1));
                  {
                    mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_for_T_17, mdb__declarative_oracle__ArgX1_11, mdb__declarative_oracle__ArgY1_12);
                  }
                }
              }
              break;
          }
          break;
      }
    return mdb__declarative_oracle__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_kb_0_0(
  MR_Word * mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
  MR_Word mdb__declarative_oracle__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Integer mdb__declarative_oracle__CastX_12 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;
    MR_Integer mdb__declarative_oracle__CastY_13 = (MR_Integer) mdb__declarative_oracle__HeadVar__3_3;

    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_12 == mdb__declarative_oracle__CastY_13);
    if (mdb__declarative_oracle__succeeded)
      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word mdb__declarative_oracle__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word mdb__declarative_oracle__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word mdb__declarative_oracle__Var_10;

      {
        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[1], &mdb__declarative_oracle__Var_10, ((MR_Box) (mdb__declarative_oracle__ArgX1_4)), ((MR_Box) (mdb__declarative_oracle__ArgY1_5)));
      }
      mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_10 == (MR_Integer) 0);
      mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
      if (mdb__declarative_oracle__succeeded)
        *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__Var_10;
      else
      {
        MR_Word mdb__declarative_oracle__Var_11;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[2], &mdb__declarative_oracle__Var_11, ((MR_Box) (mdb__declarative_oracle__ArgX2_6)), ((MR_Box) (mdb__declarative_oracle__ArgY2_7)));
        }
        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_11 == (MR_Integer) 0);
        mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
        if (mdb__declarative_oracle__succeeded)
          *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__Var_11;
        else
        {
          {
            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[3], mdb__declarative_oracle__HeadVar__1_1, ((MR_Box) (mdb__declarative_oracle__ArgX3_8)), ((MR_Box) (mdb__declarative_oracle__ArgY3_9)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_kb_0_0(
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Integer mdb__declarative_oracle__CastX_9 = (MR_Integer) mdb__declarative_oracle__HeadVar__1_1;
    MR_Integer mdb__declarative_oracle__CastY_10 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;

    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_9 == mdb__declarative_oracle__CastY_10);
    if (mdb__declarative_oracle__succeeded)
      mdb__declarative_oracle__succeeded = MR_TRUE;
    else
    {
      MR_Word mdb__declarative_oracle__TypeInfo_12_12;
      MR_Word mdb__declarative_oracle__TypeInfo_13_13;
      MR_Word mdb__declarative_oracle__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word mdb__declarative_oracle__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));

      {
        mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[1], ((MR_Box) (mdb__declarative_oracle__ArgX1_3)), ((MR_Box) (mdb__declarative_oracle__ArgY1_4)));
      }
      if (mdb__declarative_oracle__succeeded)
      {
        mdb__declarative_oracle__TypeInfo_12_12 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[2];
        {
          mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_12_12, ((MR_Box) (mdb__declarative_oracle__ArgX2_5)), ((MR_Box) (mdb__declarative_oracle__ArgY2_6)));
        }
        if (mdb__declarative_oracle__succeeded)
        {
          mdb__declarative_oracle__TypeInfo_13_13 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[3];
          {
            mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_13_13, ((MR_Box) (mdb__declarative_oracle__ArgX3_7)), ((MR_Box) (mdb__declarative_oracle__ArgY3_8)));
          }
        }
      }
    }
    return mdb__declarative_oracle__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_oracle____Compare____known_exceptions_0_0(
  MR_Word * mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
  MR_Word mdb__declarative_oracle__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Integer mdb__declarative_oracle__CastX_12 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;
    MR_Integer mdb__declarative_oracle__CastY_13 = (MR_Integer) mdb__declarative_oracle__HeadVar__3_3;

    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_12 == mdb__declarative_oracle__CastY_13);
    if (mdb__declarative_oracle__succeeded)
      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word mdb__declarative_oracle__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word mdb__declarative_oracle__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word mdb__declarative_oracle__Var_10;

      {
        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_2[0], &mdb__declarative_oracle__Var_10, ((MR_Box) (mdb__declarative_oracle__ArgX1_4)), ((MR_Box) (mdb__declarative_oracle__ArgY1_5)));
      }
      mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_10 == (MR_Integer) 0);
      mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
      if (mdb__declarative_oracle__succeeded)
        *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__Var_10;
      else
      {
        MR_Word mdb__declarative_oracle__Var_11;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_2[0], &mdb__declarative_oracle__Var_11, ((MR_Box) (mdb__declarative_oracle__ArgX2_6)), ((MR_Box) (mdb__declarative_oracle__ArgY2_7)));
        }
        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__Var_11 == (MR_Integer) 0);
        mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
        if (mdb__declarative_oracle__succeeded)
          *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__Var_11;
        else
        {
          {
            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_2[0], mdb__declarative_oracle__HeadVar__1_1, ((MR_Box) (mdb__declarative_oracle__ArgX3_8)), ((MR_Box) (mdb__declarative_oracle__ArgY3_9)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____known_exceptions_0_0(
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Integer mdb__declarative_oracle__CastX_9 = (MR_Integer) mdb__declarative_oracle__HeadVar__1_1;
    MR_Integer mdb__declarative_oracle__CastY_10 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;

    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_9 == mdb__declarative_oracle__CastY_10);
    if (mdb__declarative_oracle__succeeded)
      mdb__declarative_oracle__succeeded = MR_TRUE;
    else
    {
      MR_Word mdb__declarative_oracle__TypeInfo_12_12;
      MR_Word mdb__declarative_oracle__TypeInfo_13_13;
      MR_Word mdb__declarative_oracle__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word mdb__declarative_oracle__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));

      {
        mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_2[0], ((MR_Box) (mdb__declarative_oracle__ArgX1_3)), ((MR_Box) (mdb__declarative_oracle__ArgY1_4)));
      }
      if (mdb__declarative_oracle__succeeded)
      {
        mdb__declarative_oracle__TypeInfo_12_12 = (MR_Word) &mdb__declarative_oracle_scalar_common_2[0];
        {
          mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_12_12, ((MR_Box) (mdb__declarative_oracle__ArgX2_5)), ((MR_Box) (mdb__declarative_oracle__ArgY2_6)));
        }
        if (mdb__declarative_oracle__succeeded)
        {
          mdb__declarative_oracle__TypeInfo_13_13 = (MR_Word) &mdb__declarative_oracle_scalar_common_2[0];
          {
            mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_13_13, ((MR_Box) (mdb__declarative_oracle__ArgX3_7)), ((MR_Box) (mdb__declarative_oracle__ArgY3_8)));
          }
        }
      }
    }
    return mdb__declarative_oracle__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_oracle__remove_atom_from_ground_map_4_p_0(
  MR_Word mdb__declarative_oracle__FinalAtom_5,
  MR_Box mdb__declarative_oracle__ProcLayout_6,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Map_0_9,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Map_10)
{
  {
    MR_Word mdb__declarative_oracle__FinalDeclAtom_8;
    MR_Word mdb__declarative_oracle__Var_11;
    MR_Word mdb__declarative_oracle__Var_12;
    MR_Word mdb__declarative_oracle__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__FinalAtom_5, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__FinalAtom_5, (MR_Integer) 1)));
    MR_Box mdb__declarative_oracle__Var_17 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_13, (MR_Integer) 0)));

    mdb__declarative_oracle__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_13, (MR_Integer) 1)));
    {
      mdb__declarative_oracle__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_11, 0) = ((MR_Box) (mdb__declarative_oracle__ProcLayout_6));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_11, 1) = ((MR_Box) (mdb__declarative_oracle__Var_12));
    }
    {
      mdb__declarative_oracle__FinalDeclAtom_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__FinalDeclAtom_8, 0) = ((MR_Box) (mdb__declarative_oracle__Var_11));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__FinalDeclAtom_8, 1) = ((MR_Box) (mdb__declarative_oracle__Var_16));
    }
    {
      mercury__map__delete_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, ((MR_Box) (mdb__declarative_oracle__FinalDeclAtom_8)), mdb__declarative_oracle__STATE_VARIABLE_Map_0_9, mdb__declarative_oracle__STATE_VARIABLE_Map_10);
    }
  }
}

static MR_String MR_CALL 
mdb__declarative_oracle__format_trust_display_1_f_0(
  MR_Word mdb__declarative_oracle__HeadVar__1_1)
{
  {
    MR_String mdb__declarative_oracle__Display_5;
    MR_Integer mdb__declarative_oracle__Id_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__TrustedObject_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
    MR_String mdb__declarative_oracle__CmdDisplay_8;
    MR_String mdb__declarative_oracle__Var_30;
    MR_String mdb__declarative_oracle__Var_31;
    MR_String mdb__declarative_oracle__Var_33;

    switch (MR_tag((MR_Word) mdb__declarative_oracle__TrustedObject_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mdb__declarative_oracle__CmdDisplay_8 = (MR_String) "the Mercury standard library";
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_oracle__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__TrustedObject_4, (MR_Integer) 0)));
          MR_String mdb__declarative_oracle__ModuleNameStr_7;

          {
            mdb__declarative_oracle__ModuleNameStr_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_6);
          }
          {
            mdb__declarative_oracle__CmdDisplay_8 = mercury__string__f_43_43_2_f_0((MR_String) "module ", mdb__declarative_oracle__ModuleNameStr_7);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String mdb__declarative_oracle__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__TrustedObject_4, (MR_Integer) 1)));
          MR_Integer mdb__declarative_oracle__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__TrustedObject_4, (MR_Integer) 2)));
          MR_String mdb__declarative_oracle__Var_22;
          MR_String mdb__declarative_oracle__Var_23;
          MR_String mdb__declarative_oracle__Var_25;
          MR_String mdb__declarative_oracle__Var_26;
          MR_String mdb__declarative_oracle__Var_28;
          MR_Word mdb__declarative_oracle__ModuleName_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__TrustedObject_4, (MR_Integer) 0)));
          MR_String mdb__declarative_oracle__ModuleNameStr_36;

          {
            mdb__declarative_oracle__ModuleNameStr_36 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_35);
          }
          {
            mdb__declarative_oracle__Var_28 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Arity_10);
          }
          {
            mdb__declarative_oracle__Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__declarative_oracle__Var_28);
          }
          {
            mdb__declarative_oracle__Var_25 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__Name_9, mdb__declarative_oracle__Var_26);
          }
          {
            mdb__declarative_oracle__Var_23 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_oracle__Var_25);
          }
          {
            mdb__declarative_oracle__Var_22 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_36, mdb__declarative_oracle__Var_23);
          }
          {
            mdb__declarative_oracle__CmdDisplay_8 = mercury__string__f_43_43_2_f_0((MR_String) "predicate ", mdb__declarative_oracle__Var_22);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String mdb__declarative_oracle__Var_12;
          MR_String mdb__declarative_oracle__Var_13;
          MR_String mdb__declarative_oracle__Var_15;
          MR_String mdb__declarative_oracle__Var_16;
          MR_String mdb__declarative_oracle__Var_18;
          MR_Integer mdb__declarative_oracle__Var_19;
          MR_Word mdb__declarative_oracle__ModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__TrustedObject_4, (MR_Integer) 0)));
          MR_String mdb__declarative_oracle__ModuleNameStr_38;
          MR_String mdb__declarative_oracle__Name_39 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__TrustedObject_4, (MR_Integer) 1)));
          MR_Integer mdb__declarative_oracle__Arity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__TrustedObject_4, (MR_Integer) 2)));

          {
            mdb__declarative_oracle__ModuleNameStr_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_37);
          }
          mdb__declarative_oracle__Var_19 = (mdb__declarative_oracle__Arity_40 - (MR_Integer) 1);
          {
            mdb__declarative_oracle__Var_18 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Var_19);
          }
          {
            mdb__declarative_oracle__Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__declarative_oracle__Var_18);
          }
          {
            mdb__declarative_oracle__Var_15 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__Name_39, mdb__declarative_oracle__Var_16);
          }
          {
            mdb__declarative_oracle__Var_13 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_oracle__Var_15);
          }
          {
            mdb__declarative_oracle__Var_12 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_38, mdb__declarative_oracle__Var_13);
          }
          {
            mdb__declarative_oracle__CmdDisplay_8 = mercury__string__f_43_43_2_f_0((MR_String) "function ", mdb__declarative_oracle__Var_12);
          }
        }
        break;
    }
    {
      mdb__declarative_oracle__Var_30 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Id_3);
    }
    {
      mdb__declarative_oracle__Var_33 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__CmdDisplay_8, (MR_String) "\n");
    }
    {
      mdb__declarative_oracle__Var_31 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdb__declarative_oracle__Var_33);
    }
    {
      mdb__declarative_oracle__Display_5 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__Var_30, mdb__declarative_oracle__Var_31);
    }
    return mdb__declarative_oracle__Display_5;
  }
}

static MR_String MR_CALL 
mdb__declarative_oracle__format_trust_command_1_f_0(
  MR_Word mdb__declarative_oracle__TrustedObject_3)
{
  {
    MR_String mdb__declarative_oracle__CmdStr_4;

    switch (MR_tag((MR_Word) mdb__declarative_oracle__TrustedObject_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mdb__declarative_oracle__CmdStr_4 = (MR_String) "trust std lib\n";
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_oracle__ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__TrustedObject_3, (MR_Integer) 0)));
          MR_String mdb__declarative_oracle__ModuleNameStr_6;
          MR_String mdb__declarative_oracle__Var_32;

          {
            mdb__declarative_oracle__ModuleNameStr_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_5);
          }
          {
            mdb__declarative_oracle__Var_32 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_6, (MR_String) "\n");
          }
          {
            mdb__declarative_oracle__CmdStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "trust ", mdb__declarative_oracle__Var_32);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String mdb__declarative_oracle__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__TrustedObject_3, (MR_Integer) 1)));
          MR_Integer mdb__declarative_oracle__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__TrustedObject_3, (MR_Integer) 2)));
          MR_String mdb__declarative_oracle__Var_22;
          MR_String mdb__declarative_oracle__Var_23;
          MR_String mdb__declarative_oracle__Var_25;
          MR_String mdb__declarative_oracle__Var_26;
          MR_String mdb__declarative_oracle__Var_28;
          MR_String mdb__declarative_oracle__Var_29;
          MR_Word mdb__declarative_oracle__ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__TrustedObject_3, (MR_Integer) 0)));
          MR_String mdb__declarative_oracle__ModuleNameStr_35;

          {
            mdb__declarative_oracle__ModuleNameStr_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_34);
          }
          {
            mdb__declarative_oracle__Var_29 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Arity_8);
          }
          {
            mdb__declarative_oracle__Var_28 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__Var_29, (MR_String) "\n");
          }
          {
            mdb__declarative_oracle__Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__declarative_oracle__Var_28);
          }
          {
            mdb__declarative_oracle__Var_25 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__Name_7, mdb__declarative_oracle__Var_26);
          }
          {
            mdb__declarative_oracle__Var_23 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_oracle__Var_25);
          }
          {
            mdb__declarative_oracle__Var_22 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_35, mdb__declarative_oracle__Var_23);
          }
          {
            mdb__declarative_oracle__CmdStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "trust pred*", mdb__declarative_oracle__Var_22);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String mdb__declarative_oracle__Var_10;
          MR_String mdb__declarative_oracle__Var_11;
          MR_String mdb__declarative_oracle__Var_13;
          MR_String mdb__declarative_oracle__Var_14;
          MR_String mdb__declarative_oracle__Var_16;
          MR_String mdb__declarative_oracle__Var_17;
          MR_Integer mdb__declarative_oracle__Var_18;
          MR_Word mdb__declarative_oracle__ModuleName_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__TrustedObject_3, (MR_Integer) 0)));
          MR_String mdb__declarative_oracle__ModuleNameStr_37;
          MR_String mdb__declarative_oracle__Name_38 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__TrustedObject_3, (MR_Integer) 1)));
          MR_Integer mdb__declarative_oracle__Arity_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__TrustedObject_3, (MR_Integer) 2)));

          {
            mdb__declarative_oracle__ModuleNameStr_37 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_36);
          }
          mdb__declarative_oracle__Var_18 = (mdb__declarative_oracle__Arity_39 - (MR_Integer) 1);
          {
            mdb__declarative_oracle__Var_17 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Var_18);
          }
          {
            mdb__declarative_oracle__Var_16 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__Var_17, (MR_String) "\n");
          }
          {
            mdb__declarative_oracle__Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__declarative_oracle__Var_16);
          }
          {
            mdb__declarative_oracle__Var_13 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__Name_38, mdb__declarative_oracle__Var_14);
          }
          {
            mdb__declarative_oracle__Var_11 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_oracle__Var_13);
          }
          {
            mdb__declarative_oracle__Var_10 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_37, mdb__declarative_oracle__Var_11);
          }
          {
            mdb__declarative_oracle__CmdStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "trust func*", mdb__declarative_oracle__Var_10);
          }
        }
        break;
    }
    return mdb__declarative_oracle__CmdStr_4;
  }
}

void MR_CALL 
mdb__declarative_oracle__reset_oracle_knowledge_base_2_p_0(
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_6)
{
  {
    MR_Word mdb__declarative_oracle__TypeCtorInfo_6_28 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0;
    MR_Word mdb__declarative_oracle__TypeCtorInfo_7_29;
    MR_Word mdb__declarative_oracle__EmptyKB_4;
    MR_Word mdb__declarative_oracle__Var_8;
    MR_Word mdb__declarative_oracle__Var_11;
    MR_Word mdb__declarative_oracle__Var_12;
    MR_Word mdb__declarative_oracle__Var_13;
    MR_Word mdb__declarative_oracle__Var_16;
    MR_Word mdb__declarative_oracle__Var_17;
    MR_Word mdb__declarative_oracle__Var_18;
    MR_Word mdb__declarative_oracle__G_24;
    MR_Word mdb__declarative_oracle__C_25;
    MR_Word mdb__declarative_oracle__X_26;
    MR_Word mdb__declarative_oracle__Var_10;

    {
      mercury__map__init_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, mdb__declarative_oracle__TypeCtorInfo_6_28, &mdb__declarative_oracle__G_24);
    }
    mdb__declarative_oracle__TypeCtorInfo_7_29 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0;
    {
      mercury__map__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_7_29, mdb__declarative_oracle__TypeCtorInfo_6_28, &mdb__declarative_oracle__C_25);
    }
    {
      mercury__map__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_7_29, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, &mdb__declarative_oracle__X_26);
    }
    {
      mdb__declarative_oracle__EmptyKB_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__EmptyKB_4, 0) = ((MR_Box) (mdb__declarative_oracle__G_24));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__EmptyKB_4, 1) = ((MR_Box) (mdb__declarative_oracle__C_25));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__EmptyKB_4, 2) = ((MR_Box) (mdb__declarative_oracle__X_26));
    }
    mdb__declarative_oracle__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5, (MR_Integer) 0)));
    mdb__declarative_oracle__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5, (MR_Integer) 1)));
    mdb__declarative_oracle__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5, (MR_Integer) 2)));
    mdb__declarative_oracle__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5, (MR_Integer) 3)));
    mdb__declarative_oracle__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5, (MR_Integer) 4)));
    mdb__declarative_oracle__Var_16 = mdb__declarative_oracle__Var_11;
    mdb__declarative_oracle__Var_17 = mdb__declarative_oracle__Var_12;
    mdb__declarative_oracle__Var_18 = mdb__declarative_oracle__Var_13;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__EmptyKB_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Var_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__Var_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__Var_18));
    }
  }
}

void MR_CALL 
mdb__declarative_oracle__set_oracle_testing_flag_3_p_0(
  MR_Word mdb__declarative_oracle__Testing_4,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_9)
{
  {
    MR_Word mdb__declarative_oracle__User0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__User_7;
    MR_Word mdb__declarative_oracle__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__Var_15;
    MR_Word mdb__declarative_oracle__Var_16;
    MR_Word mdb__declarative_oracle__Var_18;
    MR_Word mdb__declarative_oracle__Var_19;
    MR_Word mdb__declarative_oracle__Var_17;

    {
      mdb__declarative_user__set_user_testing_flag_3_p_0(mdb__declarative_oracle__Testing_4, mdb__declarative_oracle__User0_6, &mdb__declarative_oracle__User_7);
    }
    mdb__declarative_oracle__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 0)));
    mdb__declarative_oracle__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 1)));
    mdb__declarative_oracle__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 2)));
    mdb__declarative_oracle__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 3)));
    mdb__declarative_oracle__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Var_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Var_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__User_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Var_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__Var_19));
    }
  }
}

MR_Word MR_CALL 
mdb__declarative_oracle__get_user_input_stream_1_f_0(
  MR_Word mdb__declarative_oracle__Oracle_3)
{
  {
    MR_Word mdb__declarative_oracle__HeadVar__2_2;
    MR_Word mdb__declarative_oracle__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 4)));

    {
      mdb__declarative_oracle__HeadVar__2_2 = mdb__declarative_user__get_user_input_stream_1_f_0(mdb__declarative_oracle__Var_4);
    }
    return mdb__declarative_oracle__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mdb__declarative_oracle__get_user_output_stream_1_f_0(
  MR_Word mdb__declarative_oracle__Oracle_3)
{
  {
    MR_Word mdb__declarative_oracle__HeadVar__2_2;
    MR_Word mdb__declarative_oracle__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 4)));

    {
      mdb__declarative_oracle__HeadVar__2_2 = mdb__declarative_user__get_user_output_stream_1_f_0(mdb__declarative_oracle__Var_4);
    }
    return mdb__declarative_oracle__HeadVar__2_2;
  }
}

void MR_CALL 
mdb__declarative_oracle__set_browser_state_3_p_0(
  MR_Word mdb__declarative_oracle__Browser_4,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_8)
{
  {
    MR_Word mdb__declarative_oracle__User_6;
    MR_Word mdb__declarative_oracle__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__Var_15;
    MR_Word mdb__declarative_oracle__Var_16;
    MR_Word mdb__declarative_oracle__Var_18;
    MR_Word mdb__declarative_oracle__Var_19;
    MR_Word mdb__declarative_oracle__Var_17;

    {
      mdb__declarative_user__set_browser_state_3_p_0(mdb__declarative_oracle__Browser_4, mdb__declarative_oracle__Var_9, &mdb__declarative_oracle__User_6);
    }
    mdb__declarative_oracle__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 0)));
    mdb__declarative_oracle__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 1)));
    mdb__declarative_oracle__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 2)));
    mdb__declarative_oracle__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 3)));
    mdb__declarative_oracle__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Var_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Var_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__User_6));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Var_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__Var_19));
    }
  }
}

MR_Word MR_CALL 
mdb__declarative_oracle__get_browser_state_1_f_0(
  MR_Word mdb__declarative_oracle__Oracle_3)
{
  {
    MR_Word mdb__declarative_oracle__HeadVar__2_2;
    MR_Word mdb__declarative_oracle__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 4)));

    {
      mdb__declarative_oracle__HeadVar__2_2 = mdb__declarative_user__get_browser_state_1_f_0(mdb__declarative_oracle__Var_4);
    }
    return mdb__declarative_oracle__HeadVar__2_2;
  }
}

void MR_CALL 
mdb__declarative_oracle__update_revised_knowledge_base_3_p_0(
  MR_Word mdb__declarative_oracle__Oracle1_4,
  MR_Word mdb__declarative_oracle__Oracle2_5,
  MR_Word * mdb__declarative_oracle__Oracle3_6)
{
  {
    MR_Word mdb__declarative_oracle__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle2_5, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle2_5, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle2_5, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle2_5, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle2_5, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_4, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_4, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_4, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_4, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_4, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_oracle__Oracle3_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Var_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Var_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__Var_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Var_15));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__Var_16));
    }
  }
}

void MR_CALL 
mdb__declarative_oracle__revise_oracle_3_p_0(
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_33,
  MR_Word mdb__declarative_oracle__Question_4,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_12)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__Current0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__Answer_7;

    switch (MR_tag((MR_Word) mdb__declarative_oracle__Question_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mdb__declarative_oracle__Node_37 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_4, (MR_Integer) 0));
          MR_Word mdb__declarative_oracle__Atom_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_4, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__Map_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 0)));
          MR_Word mdb__declarative_oracle__Truth_41;
          MR_Word mdb__declarative_oracle__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_4, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 2)));
          MR_Box mdb__declarative_oracle__conv2_Truth_41;

          {
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, mdb__declarative_oracle__Map_40, ((MR_Box) (mdb__declarative_oracle__Atom_39)), &mdb__declarative_oracle__conv2_Truth_41);
          }
          if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__Truth_41 = ((MR_Word) mdb__declarative_oracle__conv2_Truth_41);
            mdb__declarative_oracle__succeeded = MR_TRUE;
          }
          if (mdb__declarative_oracle__succeeded)
          {
            {
              mdb__declarative_oracle__Answer_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 0) = mdb__declarative_oracle__Node_37;
              MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 1) = ((MR_Box) (mdb__declarative_oracle__Truth_41));
            }
            mdb__declarative_oracle__succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_oracle__Call_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_4, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__CMap_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 1)));
          MR_Box mdb__declarative_oracle__Node_54 = (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_4, (MR_Integer) 0));
          MR_Word mdb__declarative_oracle__Truth_55;
          MR_Word mdb__declarative_oracle___Solns_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_4, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 0)));
          MR_Word mdb__declarative_oracle__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 2)));
          MR_Box mdb__declarative_oracle__conv0_Truth_55;

          {
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, mdb__declarative_oracle__CMap_44, ((MR_Box) (mdb__declarative_oracle__Call_42)), &mdb__declarative_oracle__conv0_Truth_55);
          }
          if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__Truth_55 = ((MR_Word) mdb__declarative_oracle__conv0_Truth_55);
            mdb__declarative_oracle__succeeded = MR_TRUE;
          }
          if (mdb__declarative_oracle__succeeded)
          {
            {
              mdb__declarative_oracle__Answer_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 0) = mdb__declarative_oracle__Node_54;
              MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 1) = ((MR_Box) (mdb__declarative_oracle__Truth_55));
            }
            mdb__declarative_oracle__succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_oracle__Exception_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_4, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__XMap_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__X_47;
          MR_Word mdb__declarative_oracle__Possible_48;
          MR_Word mdb__declarative_oracle__Impossible_49;
          MR_Word mdb__declarative_oracle__Inadmissible_50;
          MR_Box mdb__declarative_oracle__Node_56 = (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_4, (MR_Integer) 0));
          MR_Word mdb__declarative_oracle__Call_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_4, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 0)));
          MR_Word mdb__declarative_oracle__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 1)));
          MR_Box mdb__declarative_oracle__conv1_X_47;
          MR_Word mdb__declarative_oracle__TypeCtorInfo_35_64;

          {
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, mdb__declarative_oracle__XMap_46, ((MR_Box) (mdb__declarative_oracle__Call_57)), &mdb__declarative_oracle__conv1_X_47);
          }
          if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__X_47 = ((MR_Word) mdb__declarative_oracle__conv1_X_47);
            mdb__declarative_oracle__succeeded = MR_TRUE;
          }
          if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__Possible_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_47, (MR_Integer) 0)));
            mdb__declarative_oracle__Impossible_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_47, (MR_Integer) 1)));
            mdb__declarative_oracle__Inadmissible_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_47, (MR_Integer) 2)));
            mdb__declarative_oracle__TypeCtorInfo_35_64 = (MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0;
            {
              mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0(mdb__declarative_oracle__TypeCtorInfo_35_64, ((MR_Box) (mdb__declarative_oracle__Exception_45)), mdb__declarative_oracle__Possible_48);
            }
            if (mdb__declarative_oracle__succeeded)
            {
              {
                mdb__declarative_oracle__Answer_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 0) = mdb__declarative_oracle__Node_56;
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 1) = ((MR_Box) ((MR_Integer) 0));
              }
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
            else
            {
              {
                mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_45)), mdb__declarative_oracle__Impossible_49);
              }
              if (mdb__declarative_oracle__succeeded)
              {
                {
                  mdb__declarative_oracle__Answer_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 0) = mdb__declarative_oracle__Node_56;
                  MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 1) = ((MR_Box) ((MR_Integer) 1));
                }
                mdb__declarative_oracle__succeeded = MR_TRUE;
              }
              else
              {
                MR_Word mdb__declarative_oracle__Var_53;

                {
                  mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_45)), mdb__declarative_oracle__Inadmissible_50);
                }
                if (mdb__declarative_oracle__succeeded)
                {
                  mdb__declarative_oracle__Var_53 = (MR_Integer) 2;
                  {
                    mdb__declarative_oracle__Answer_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 0) = mdb__declarative_oracle__Node_56;
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 1) = ((MR_Box) (mdb__declarative_oracle__Var_53));
                  }
                  mdb__declarative_oracle__succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        break;
    }
    if (mdb__declarative_oracle__succeeded)
    {
      MR_Word mdb__declarative_oracle__Current_8;
      MR_Word mdb__declarative_oracle__Revised0_9;
      MR_Word mdb__declarative_oracle__Revised_10;
      MR_Word mdb__declarative_oracle__Var_25;
      MR_Word mdb__declarative_oracle__Var_26;
      MR_Word mdb__declarative_oracle__Var_27;
      MR_Word mdb__declarative_oracle__Var_19;
      MR_Word mdb__declarative_oracle__Var_20;
      MR_Word mdb__declarative_oracle__Var_21;
      MR_Word mdb__declarative_oracle__Var_22;
      MR_Word mdb__declarative_oracle__Var_23;
      MR_Word mdb__declarative_oracle__Var_24;

      {
        mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(mdb__declarative_oracle__Question_4, mdb__declarative_oracle__Current0_6, &mdb__declarative_oracle__Current_8);
      }
      mdb__declarative_oracle__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 0)));
      mdb__declarative_oracle__Revised0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1)));
      mdb__declarative_oracle__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2)));
      mdb__declarative_oracle__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3)));
      mdb__declarative_oracle__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 4)));
      {
        mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(mdb__declarative_oracle__Question_4, mdb__declarative_oracle__Answer_7, mdb__declarative_oracle__Revised0_9, &mdb__declarative_oracle__Revised_10);
      }
      mdb__declarative_oracle__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 0)));
      mdb__declarative_oracle__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1)));
      mdb__declarative_oracle__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2)));
      mdb__declarative_oracle__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3)));
      mdb__declarative_oracle__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 4)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        *mdb__declarative_oracle__STATE_VARIABLE_Oracle_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Current_8));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Revised_10));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__Var_25));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Var_26));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__Var_27));
      }
    }
    else
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_12 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11;
  }
}

static void MR_CALL 
mdb__declarative_oracle__oracle_confirm_bug_7_p_0_1(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box * mdb__declarative_oracle__wrapper_arg_3)
{
  {
    MR_Box mdb__declarative_oracle__closure = mdb__declarative_oracle__closure_arg;
    MR_Word mdb__declarative_oracle__conv0_STATE_VARIABLE_Oracle_12;

    {
      mdb__declarative_oracle__revise_oracle_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), &mdb__declarative_oracle__conv0_STATE_VARIABLE_Oracle_12);
    }
    *mdb__declarative_oracle__wrapper_arg_3 = ((MR_Box) (mdb__declarative_oracle__conv0_STATE_VARIABLE_Oracle_12));
  }
}

void MR_CALL 
mdb__declarative_oracle__oracle_confirm_bug_7_p_0(
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_30,
  MR_Word mdb__declarative_oracle__Bug_8,
  MR_Word mdb__declarative_oracle__Evidence_9,
  MR_Word * mdb__declarative_oracle__Confirmation_10,
  MR_Word mdb__declarative_oracle__Oracle0_11,
  MR_Word * mdb__declarative_oracle__Oracle_12)
{
  {
    MR_Word mdb__declarative_oracle__User0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__User_15;
    MR_Word mdb__declarative_oracle__Oracle1_16;
    MR_Word mdb__declarative_oracle__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__Var_25;
    MR_Word mdb__declarative_oracle__Var_26;
    MR_Word mdb__declarative_oracle__Var_28;
    MR_Word mdb__declarative_oracle__Var_29;
    MR_Word mdb__declarative_oracle__Var_27;

    {
      mdb__declarative_user__user_confirm_bug_6_p_0(mdb__declarative_oracle__Bug_8, mdb__declarative_oracle__Confirmation_10, mdb__declarative_oracle__User0_14, &mdb__declarative_oracle__User_15);
    }
    mdb__declarative_oracle__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 0)));
    mdb__declarative_oracle__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 1)));
    mdb__declarative_oracle__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 2)));
    mdb__declarative_oracle__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 3)));
    mdb__declarative_oracle__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 4)));
    {
      mdb__declarative_oracle__Oracle1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_16, 0) = ((MR_Box) (mdb__declarative_oracle__Var_25));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_16, 1) = ((MR_Box) (mdb__declarative_oracle__Var_26));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_16, 2) = ((MR_Box) (mdb__declarative_oracle__User_15));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_16, 3) = ((MR_Box) (mdb__declarative_oracle__Var_28));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_16, 4) = ((MR_Box) (mdb__declarative_oracle__Var_29));
    }
    switch (*mdb__declarative_oracle__Confirmation_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 0:
        *mdb__declarative_oracle__Oracle_12 = mdb__declarative_oracle__Oracle1_16;
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_oracle__TypeInfo_35_35;
          MR_Word mdb__declarative_oracle__Var_20;
          MR_Box mdb__declarative_oracle__conv1_Oracle_12;

          {
            mdb__declarative_oracle__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_20, 0) = ((MR_Box) (&mdb__declarative_oracle_scalar_common_5[1]));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_20, 1) = ((MR_Box) (mdb__declarative_oracle__oracle_confirm_bug_7_p_0_1));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_20, 3) = ((MR_Box) (mdb__declarative_oracle__TypeInfo_for_T_30));
          }
          {
            mdb__declarative_oracle__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__TypeInfo_35_35, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__TypeInfo_35_35, 1) = ((MR_Box) (mdb__declarative_oracle__TypeInfo_for_T_30));
          }
          {
            mercury__list__foldl_4_p_0(mdb__declarative_oracle__TypeInfo_35_35, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0, (MR_Word) mdb__declarative_oracle__Var_20, (MR_Word) mdb__declarative_oracle__Evidence_9, ((MR_Box) (mdb__declarative_oracle__Oracle1_16)), &mdb__declarative_oracle__conv1_Oracle_12);
          }
          *mdb__declarative_oracle__Oracle_12 = ((MR_Word) mdb__declarative_oracle__conv1_Oracle_12);
        }
        break;
    }
  }
}

void MR_CALL 
mdb__declarative_oracle__query_oracle_7_p_0(
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_26,
  MR_Word mdb__declarative_oracle__Question_8,
  MR_Word * mdb__declarative_oracle__Response_9,
  MR_Word * mdb__declarative_oracle__FromUser_10,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_16)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__Answer_13;

    {
      mdb__declarative_oracle__succeeded = mdb__declarative_oracle__answer_known_3_p_0(mdb__declarative_oracle__TypeInfo_for_T_26, mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, mdb__declarative_oracle__Question_8, &mdb__declarative_oracle__Answer_13);
    }
    if (mdb__declarative_oracle__succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mdb__declarative_oracle__Response_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_oracle__Answer_13));
      }
      *mdb__declarative_oracle__FromUser_10 = (MR_Integer) 0;
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_16 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15;
    }
    else
    {
      MR_Word mdb__declarative_oracle__UserQuestion_14;
      MR_Word mdb__declarative_oracle__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, (MR_Integer) 2)));
      MR_Word mdb__declarative_oracle__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, (MR_Integer) 3)));
      MR_Word mdb__declarative_oracle__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, (MR_Integer) 4)));
      MR_Word mdb__declarative_oracle__DeclTruth_32;
      MR_Word mdb__declarative_oracle__Answer_30;
      MR_Box mdb__declarative_oracle__Var_31;

      switch (MR_tag((MR_Word) mdb__declarative_oracle__Question_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box mdb__declarative_oracle__Node_36 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_8, (MR_Integer) 0));
            MR_Word mdb__declarative_oracle__Atom_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_8, (MR_Integer) 2)));
            MR_Word mdb__declarative_oracle__Map_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_19, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__Truth_40;
            MR_Word mdb__declarative_oracle__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_8, (MR_Integer) 1)));
            MR_Word mdb__declarative_oracle__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_19, (MR_Integer) 1)));
            MR_Word mdb__declarative_oracle__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_19, (MR_Integer) 2)));
            MR_Box mdb__declarative_oracle__conv2_Truth_40;

            {
              mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, mdb__declarative_oracle__Map_39, ((MR_Box) (mdb__declarative_oracle__Atom_38)), &mdb__declarative_oracle__conv2_Truth_40);
            }
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__Truth_40 = ((MR_Word) mdb__declarative_oracle__conv2_Truth_40);
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
            if (mdb__declarative_oracle__succeeded)
            {
              {
                mdb__declarative_oracle__Answer_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 0) = mdb__declarative_oracle__Node_36;
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 1) = ((MR_Box) (mdb__declarative_oracle__Truth_40));
              }
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_oracle__Call_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_8, (MR_Integer) 1)));
            MR_Word mdb__declarative_oracle__CMap_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_19, (MR_Integer) 1)));
            MR_Box mdb__declarative_oracle__Node_53 = (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_8, (MR_Integer) 0));
            MR_Word mdb__declarative_oracle__Truth_54;
            MR_Word mdb__declarative_oracle___Solns_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_8, (MR_Integer) 2)));
            MR_Word mdb__declarative_oracle__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_19, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_19, (MR_Integer) 2)));
            MR_Box mdb__declarative_oracle__conv0_Truth_54;

            {
              mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, mdb__declarative_oracle__CMap_43, ((MR_Box) (mdb__declarative_oracle__Call_41)), &mdb__declarative_oracle__conv0_Truth_54);
            }
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__Truth_54 = ((MR_Word) mdb__declarative_oracle__conv0_Truth_54);
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
            if (mdb__declarative_oracle__succeeded)
            {
              {
                mdb__declarative_oracle__Answer_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 0) = mdb__declarative_oracle__Node_53;
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 1) = ((MR_Box) (mdb__declarative_oracle__Truth_54));
              }
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_oracle__Exception_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_8, (MR_Integer) 2)));
            MR_Word mdb__declarative_oracle__XMap_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_19, (MR_Integer) 2)));
            MR_Word mdb__declarative_oracle__X_46;
            MR_Word mdb__declarative_oracle__Possible_47;
            MR_Word mdb__declarative_oracle__Impossible_48;
            MR_Word mdb__declarative_oracle__Inadmissible_49;
            MR_Box mdb__declarative_oracle__Node_55 = (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_8, (MR_Integer) 0));
            MR_Word mdb__declarative_oracle__Call_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_8, (MR_Integer) 1)));
            MR_Word mdb__declarative_oracle__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_19, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_19, (MR_Integer) 1)));
            MR_Box mdb__declarative_oracle__conv1_X_46;
            MR_Word mdb__declarative_oracle__TypeCtorInfo_35_63;

            {
              mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, mdb__declarative_oracle__XMap_45, ((MR_Box) (mdb__declarative_oracle__Call_56)), &mdb__declarative_oracle__conv1_X_46);
            }
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__X_46 = ((MR_Word) mdb__declarative_oracle__conv1_X_46);
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__Possible_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_46, (MR_Integer) 0)));
              mdb__declarative_oracle__Impossible_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_46, (MR_Integer) 1)));
              mdb__declarative_oracle__Inadmissible_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_46, (MR_Integer) 2)));
              mdb__declarative_oracle__TypeCtorInfo_35_63 = (MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0;
              {
                mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0(mdb__declarative_oracle__TypeCtorInfo_35_63, ((MR_Box) (mdb__declarative_oracle__Exception_44)), mdb__declarative_oracle__Possible_47);
              }
              if (mdb__declarative_oracle__succeeded)
              {
                {
                  mdb__declarative_oracle__Answer_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 0) = mdb__declarative_oracle__Node_55;
                  MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 1) = ((MR_Box) ((MR_Integer) 0));
                }
                mdb__declarative_oracle__succeeded = MR_TRUE;
              }
              else
              {
                {
                  mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_44)), mdb__declarative_oracle__Impossible_48);
                }
                if (mdb__declarative_oracle__succeeded)
                {
                  {
                    mdb__declarative_oracle__Answer_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 0) = mdb__declarative_oracle__Node_55;
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 1) = ((MR_Box) ((MR_Integer) 1));
                  }
                  mdb__declarative_oracle__succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word mdb__declarative_oracle__Var_52;

                  {
                    mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_44)), mdb__declarative_oracle__Inadmissible_49);
                  }
                  if (mdb__declarative_oracle__succeeded)
                  {
                    mdb__declarative_oracle__Var_52 = (MR_Integer) 2;
                    {
                      mdb__declarative_oracle__Answer_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 0) = mdb__declarative_oracle__Node_55;
                      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 1) = ((MR_Box) (mdb__declarative_oracle__Var_52));
                    }
                    mdb__declarative_oracle__succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
      }
      if (mdb__declarative_oracle__succeeded)
      {
        mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__Answer_30)) == (MR_mktag((MR_Integer) 0)));
        if (mdb__declarative_oracle__succeeded)
        {
          mdb__declarative_oracle__Var_31 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, (MR_Integer) 0));
          mdb__declarative_oracle__DeclTruth_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, (MR_Integer) 1)));
        }
      }
      if (mdb__declarative_oracle__succeeded)
        {
          mdb__declarative_oracle__UserQuestion_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__declarative_oracle__UserQuestion_14, 0) = ((MR_Box) (mdb__declarative_oracle__Question_8));
          MR_hl_field(MR_mktag(1), mdb__declarative_oracle__UserQuestion_14, 1) = ((MR_Box) (mdb__declarative_oracle__DeclTruth_32));
        }
      else
        {
          mdb__declarative_oracle__UserQuestion_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_oracle__UserQuestion_14, 0) = ((MR_Box) (mdb__declarative_oracle__Question_8));
        }
      {
        mdb__declarative_oracle__query_oracle_user_6_p_0(mdb__declarative_oracle__TypeInfo_for_T_26, mdb__declarative_oracle__UserQuestion_14, mdb__declarative_oracle__Response_9, mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, mdb__declarative_oracle__STATE_VARIABLE_Oracle_16);
      }
      *mdb__declarative_oracle__FromUser_10 = (MR_Integer) 1;
    }
  }
}

static void MR_CALL 
mdb__declarative_oracle__query_oracle_user_6_p_0(
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_77,
  MR_Word mdb__declarative_oracle__UserQuestion_7,
  MR_Word * mdb__declarative_oracle__OracleResponse_8,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_30)
{
  {
    MR_Word mdb__declarative_oracle__User0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__UserResponse_12;
    MR_Word mdb__declarative_oracle__User_13;
    MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43;
    MR_Word mdb__declarative_oracle__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__Var_72;
    MR_Word mdb__declarative_oracle__Var_73;
    MR_Word mdb__declarative_oracle__Var_75;
    MR_Word mdb__declarative_oracle__Var_76;
    MR_Word mdb__declarative_oracle__Var_74;

    {
      mdb__declarative_user__query_user_6_p_0(mdb__declarative_oracle__TypeInfo_for_T_77, mdb__declarative_oracle__UserQuestion_7, &mdb__declarative_oracle__UserResponse_12, mdb__declarative_oracle__User0_11, &mdb__declarative_oracle__User_13);
    }
    switch (MR_tag((MR_Word) mdb__declarative_oracle__UserResponse_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__declarative_oracle__UserResponse_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mdb__declarative_oracle__OracleResponse_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29;
            }
            break;
          case (MR_Integer) 1:
            {
              *mdb__declarative_oracle__OracleResponse_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_oracle__Question_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 0)));
          MR_Word mdb__declarative_oracle__Answer_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__Current0_16;
          MR_Word mdb__declarative_oracle__Revised0_17;
          MR_Word mdb__declarative_oracle__Revised_18;
          MR_Word mdb__declarative_oracle__Current_19;
          MR_Word mdb__declarative_oracle__Var_62;
          MR_Word mdb__declarative_oracle__Var_63;
          MR_Word mdb__declarative_oracle__Var_64;
          MR_Word mdb__declarative_oracle__Var_53;
          MR_Word mdb__declarative_oracle__Var_54;
          MR_Word mdb__declarative_oracle__Var_55;
          MR_Word mdb__declarative_oracle__Var_60;
          MR_Word mdb__declarative_oracle__Var_61;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdb__declarative_oracle__OracleResponse_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_oracle__Answer_15));
          }
          mdb__declarative_oracle__Current0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 0)));
          mdb__declarative_oracle__Revised0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 1)));
          mdb__declarative_oracle__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 2)));
          mdb__declarative_oracle__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 3)));
          mdb__declarative_oracle__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 4)));
          {
            mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(mdb__declarative_oracle__Question_14, mdb__declarative_oracle__Revised0_17, &mdb__declarative_oracle__Revised_18);
          }
          {
            mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(mdb__declarative_oracle__Question_14, mdb__declarative_oracle__Answer_15, mdb__declarative_oracle__Current0_16, &mdb__declarative_oracle__Current_19);
          }
          mdb__declarative_oracle__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 0)));
          mdb__declarative_oracle__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 1)));
          mdb__declarative_oracle__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 2)));
          mdb__declarative_oracle__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 3)));
          mdb__declarative_oracle__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 4)));
          {
            mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, 0) = ((MR_Box) (mdb__declarative_oracle__Current_19));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, 1) = ((MR_Box) (mdb__declarative_oracle__Revised_18));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, 2) = ((MR_Box) (mdb__declarative_oracle__Var_62));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, 3) = ((MR_Box) (mdb__declarative_oracle__Var_63));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, 4) = ((MR_Box) (mdb__declarative_oracle__Var_64));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_oracle__Atom_20;
          MR_Box mdb__declarative_oracle__Var_38;
          MR_Word mdb__declarative_oracle__Var_40;
          MR_Box mdb__declarative_oracle__Var_41;
          MR_Word mdb__declarative_oracle__Question_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 0)));
          MR_Word mdb__declarative_oracle__Var_70;

          {
            mdb__declarative_oracle__Atom_20 = mdb__declarative_debugger__get_decl_question_atom_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_77, mdb__declarative_oracle__Question_45);
          }
          mdb__declarative_oracle__Var_38 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_20, (MR_Integer) 0)));
          mdb__declarative_oracle__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_20, (MR_Integer) 1)));
          {
            mdb__declarative_oracle__add_trusted_pred_or_func_3_p_0(mdb__declarative_oracle__Var_38, mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, &mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43);
          }
          {
            mdb__declarative_oracle__Var_41 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_77, mdb__declarative_oracle__Question_45);
          }
          {
            mdb__declarative_oracle__Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Var_40, 0) = mdb__declarative_oracle__Var_41;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdb__declarative_oracle__OracleResponse_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_oracle__Var_40));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mdb__declarative_oracle__ProcLabel_21;
              MR_Word mdb__declarative_oracle__Module_22;
              MR_Box mdb__declarative_oracle__Var_34;
              MR_Word mdb__declarative_oracle__Var_36;
              MR_Box mdb__declarative_oracle__Var_37;
              MR_Word mdb__declarative_oracle__Question_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 1)));
              MR_Word mdb__declarative_oracle__Atom_47;
              MR_Word mdb__declarative_oracle__Var_71;
              MR_String mdb__declarative_oracle__Var_23;
              MR_Integer mdb__declarative_oracle__Var_24;
              MR_Word mdb__declarative_oracle__Var_25;

              {
                mdb__declarative_oracle__Atom_47 = mdb__declarative_debugger__get_decl_question_atom_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_77, mdb__declarative_oracle__Question_46);
              }
              mdb__declarative_oracle__Var_34 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_47, (MR_Integer) 0)));
              mdb__declarative_oracle__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_47, (MR_Integer) 1)));
              {
                mdb__declarative_oracle__ProcLabel_21 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_oracle__Var_34);
              }
              {
                mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_oracle__ProcLabel_21, &mdb__declarative_oracle__Module_22, &mdb__declarative_oracle__Var_23, &mdb__declarative_oracle__Var_24, &mdb__declarative_oracle__Var_25);
              }
              {
                mdb__declarative_oracle__add_trusted_module_3_p_0(mdb__declarative_oracle__Module_22, mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, &mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43);
              }
              {
                mdb__declarative_oracle__Var_37 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_77, mdb__declarative_oracle__Question_46);
              }
              {
                mdb__declarative_oracle__Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Var_36, 0) = mdb__declarative_oracle__Var_37;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_oracle__OracleResponse_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_oracle__Var_36));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdb__declarative_oracle__OutStream_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_oracle__OracleResponse_8 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_oracle__OutStream_26));
              }
              mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdb__declarative_oracle__Mode_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_oracle__OracleResponse_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_oracle__Mode_27));
              }
              mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box mdb__declarative_oracle__Node_28 = (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 1));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_oracle__OracleResponse_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = mdb__declarative_oracle__Node_28;
              }
              mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29;
            }
            break;
        }
        break;
    }
    mdb__declarative_oracle__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, (MR_Integer) 0)));
    mdb__declarative_oracle__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, (MR_Integer) 1)));
    mdb__declarative_oracle__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, (MR_Integer) 2)));
    mdb__declarative_oracle__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, (MR_Integer) 3)));
    mdb__declarative_oracle__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_30 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Var_72));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Var_73));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__User_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Var_75));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__Var_76));
    }
  }
}

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0_1(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box * mdb__declarative_oracle__wrapper_arg_3)
{
  {
    MR_Box mdb__declarative_oracle__closure = mdb__declarative_oracle__closure_arg;
    MR_Word mdb__declarative_oracle__conv1_STATE_VARIABLE_Map_10;

    {
      mdb__declarative_oracle__remove_atom_from_ground_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__closure, (MR_Integer) 3))), ((MR_Box) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), &mdb__declarative_oracle__conv1_STATE_VARIABLE_Map_10);
    }
    *mdb__declarative_oracle__wrapper_arg_3 = ((MR_Box) (mdb__declarative_oracle__conv1_STATE_VARIABLE_Map_10));
  }
}

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(
  MR_Word mdb__declarative_oracle__Question_4,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_KB_0_28,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_KB_29)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_28, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_28, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_28, (MR_Integer) 0)));

    switch (MR_tag((MR_Word) mdb__declarative_oracle__Question_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdb__declarative_oracle__Atom_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_4, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__GroundMap_10;
          MR_Word mdb__declarative_oracle__Var_32;
          MR_Word mdb__declarative_oracle__Var_33;
          MR_Box mdb__declarative_oracle__Var_34;
          MR_Word mdb__declarative_oracle__Var_35;
          MR_Box mdb__declarative_oracle__Var_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_4, (MR_Integer) 0));
          MR_Word mdb__declarative_oracle__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_4, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__Var_40;
          MR_Word mdb__declarative_oracle__Var_41;
          MR_Box mdb__declarative_oracle__conv2_GroundMap_10;
          MR_Word mdb__declarative_oracle__Var_43;
          MR_Word mdb__declarative_oracle__Var_44;
          MR_Word mdb__declarative_oracle__Var_42;

          {
            mdb__declarative_oracle__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_32, 0) = ((MR_Box) (&mdb__declarative_oracle_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_32, 1) = ((MR_Box) (mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0_1));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_32, 3) = ((MR_Box) (mdb__declarative_oracle__Atom_8));
          }
          mdb__declarative_oracle__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_8, (MR_Integer) 0)));
          mdb__declarative_oracle__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_8, (MR_Integer) 1)));
          mdb__declarative_oracle__Var_34 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_35, (MR_Integer) 0)));
          mdb__declarative_oracle__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_35, (MR_Integer) 1)));
          {
            mdb__declarative_oracle__Var_33 = mdbcomp__rtti_access__get_all_modes_for_layout_1_f_0(mdb__declarative_oracle__Var_34);
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0, (MR_Word) &mdb__declarative_oracle_scalar_common_1[1], mdb__declarative_oracle__Var_32, mdb__declarative_oracle__Var_33, ((MR_Box) (mdb__declarative_oracle__Var_70)), &mdb__declarative_oracle__conv2_GroundMap_10);
          }
          mdb__declarative_oracle__GroundMap_10 = ((MR_Word) mdb__declarative_oracle__conv2_GroundMap_10);
          mdb__declarative_oracle__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_28, (MR_Integer) 0)));
          mdb__declarative_oracle__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_28, (MR_Integer) 1)));
          mdb__declarative_oracle__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_28, (MR_Integer) 2)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *mdb__declarative_oracle__STATE_VARIABLE_KB_29 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__GroundMap_10));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Var_43));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__Var_44));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_oracle__InitAtom_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_4, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__CompleteMap_15;
          MR_Box mdb__declarative_oracle__Var_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_4, (MR_Integer) 0));
          MR_Word mdb__declarative_oracle__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_4, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__Var_47;
          MR_Word mdb__declarative_oracle__Var_49;
          MR_Word mdb__declarative_oracle__Var_48;

          {
            mercury__map__delete_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, ((MR_Box) (mdb__declarative_oracle__InitAtom_12)), mdb__declarative_oracle__Var_69, &mdb__declarative_oracle__CompleteMap_15);
          }
          mdb__declarative_oracle__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_28, (MR_Integer) 0)));
          mdb__declarative_oracle__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_28, (MR_Integer) 1)));
          mdb__declarative_oracle__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_28, (MR_Integer) 2)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *mdb__declarative_oracle__STATE_VARIABLE_KB_29 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Var_47));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__CompleteMap_15));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__Var_49));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_oracle__Exception_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_4, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__ExceptionsMap_27;
          MR_Word mdb__declarative_oracle__InitAtom_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_4, (MR_Integer) 1)));
          MR_Box mdb__declarative_oracle__Var_16 = (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_4, (MR_Integer) 0));
          MR_Word mdb__declarative_oracle__Possible0_20;
          MR_Word mdb__declarative_oracle__Impossible0_21;
          MR_Word mdb__declarative_oracle__Inadmissible0_22;
          MR_Word mdb__declarative_oracle__KnownExceptions0_19;
          MR_Box mdb__declarative_oracle__conv0_KnownExceptions0_19;
          MR_Word mdb__declarative_oracle__Var_52;
          MR_Word mdb__declarative_oracle__Var_53;
          MR_Word mdb__declarative_oracle__Var_54;

          {
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, mdb__declarative_oracle__Var_68, ((MR_Box) (mdb__declarative_oracle__InitAtom_37)), &mdb__declarative_oracle__conv0_KnownExceptions0_19);
          }
          if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__KnownExceptions0_19 = ((MR_Word) mdb__declarative_oracle__conv0_KnownExceptions0_19);
            mdb__declarative_oracle__succeeded = MR_TRUE;
          }
          if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__Possible0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_19, (MR_Integer) 0)));
            mdb__declarative_oracle__Impossible0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_19, (MR_Integer) 1)));
            mdb__declarative_oracle__Inadmissible0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_19, (MR_Integer) 2)));
            mdb__declarative_oracle__succeeded = MR_TRUE;
          }
          if (mdb__declarative_oracle__succeeded)
          {
            MR_Word mdb__declarative_oracle__TypeCtorInfo_65_65 = (MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0;
            MR_Word mdb__declarative_oracle__Possible_23;
            MR_Word mdb__declarative_oracle__Impossible_24;
            MR_Word mdb__declarative_oracle__Inadmissible_25;
            MR_Word mdb__declarative_oracle__KnownExceptions_26;

            {
              mercury__set__delete_3_p_0(mdb__declarative_oracle__TypeCtorInfo_65_65, ((MR_Box) (mdb__declarative_oracle__Exception_17)), mdb__declarative_oracle__Possible0_20, &mdb__declarative_oracle__Possible_23);
            }
            {
              mercury__set__delete_3_p_0(mdb__declarative_oracle__TypeCtorInfo_65_65, ((MR_Box) (mdb__declarative_oracle__Exception_17)), mdb__declarative_oracle__Impossible0_21, &mdb__declarative_oracle__Impossible_24);
            }
            {
              mercury__set__delete_3_p_0(mdb__declarative_oracle__TypeCtorInfo_65_65, ((MR_Box) (mdb__declarative_oracle__Exception_17)), mdb__declarative_oracle__Inadmissible0_22, &mdb__declarative_oracle__Inadmissible_25);
            }
            {
              mdb__declarative_oracle__KnownExceptions_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_26, 0) = ((MR_Box) (mdb__declarative_oracle__Possible_23));
              MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_26, 1) = ((MR_Box) (mdb__declarative_oracle__Impossible_24));
              MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_26, 2) = ((MR_Box) (mdb__declarative_oracle__Inadmissible_25));
            }
            {
              mercury__map__set_4_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, ((MR_Box) (mdb__declarative_oracle__InitAtom_37)), ((MR_Box) (mdb__declarative_oracle__KnownExceptions_26)), mdb__declarative_oracle__Var_68, &mdb__declarative_oracle__ExceptionsMap_27);
            }
          }
          else
            mdb__declarative_oracle__ExceptionsMap_27 = mdb__declarative_oracle__Var_68;
          mdb__declarative_oracle__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_28, (MR_Integer) 0)));
          mdb__declarative_oracle__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_28, (MR_Integer) 1)));
          mdb__declarative_oracle__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_28, (MR_Integer) 2)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *mdb__declarative_oracle__STATE_VARIABLE_KB_29 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Var_52));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Var_53));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__ExceptionsMap_27));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box * mdb__declarative_oracle__wrapper_arg_3)
{
  {
    MR_Box mdb__declarative_oracle__closure = mdb__declarative_oracle__closure_arg;
    MR_Word mdb__declarative_oracle__conv1_STATE_VARIABLE_Map_11;

    {
      mdb__declarative_oracle__add_atom_to_ground_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__closure, (MR_Integer) 4))), ((MR_Box) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), &mdb__declarative_oracle__conv1_STATE_VARIABLE_Map_11);
    }
    *mdb__declarative_oracle__wrapper_arg_3 = ((MR_Box) (mdb__declarative_oracle__conv1_STATE_VARIABLE_Map_11));
  }
}

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(
  MR_Word mdb__declarative_oracle__Question_5,
  MR_Word mdb__declarative_oracle__Answer_6,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_KB_0_40,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_KB_41)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;

    switch (MR_tag((MR_Word) mdb__declarative_oracle__Answer_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdb__declarative_oracle__Truth_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_6, (MR_Integer) 1)));
          MR_Box mdb__declarative_oracle__Var_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_6, (MR_Integer) 0));

          switch (MR_tag((MR_Word) mdb__declarative_oracle__Question_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdb__declarative_oracle__Atom_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_5, (MR_Integer) 2)));
                MR_Word mdb__declarative_oracle__Map0_20;
                MR_Box mdb__declarative_oracle__ProcLayout_21;
                MR_Word mdb__declarative_oracle__Map_22;
                MR_Word mdb__declarative_oracle__Var_44;
                MR_Box mdb__declarative_oracle__Var_17 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_5, (MR_Integer) 0));
                MR_Word mdb__declarative_oracle__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_5, (MR_Integer) 1)));
                MR_Word mdb__declarative_oracle__Var_53;
                MR_Word mdb__declarative_oracle__Var_54;

                {
                  mdb__declarative_oracle__get_kb_ground_map_2_p_0(mdb__declarative_oracle__STATE_VARIABLE_KB_0_40, &mdb__declarative_oracle__Map0_20);
                }
                mdb__declarative_oracle__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_19, (MR_Integer) 0)));
                mdb__declarative_oracle__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_19, (MR_Integer) 1)));
                mdb__declarative_oracle__ProcLayout_21 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_44, (MR_Integer) 0)));
                mdb__declarative_oracle__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_44, (MR_Integer) 1)));
                switch (mdb__declarative_oracle__Truth_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word mdb__declarative_oracle__Var_45;
                      MR_Word mdb__declarative_oracle__Var_46;
                      MR_Box mdb__declarative_oracle__conv2_Map_22;

                      {
                        mdb__declarative_oracle__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_45, 0) = ((MR_Box) (&mdb__declarative_oracle_scalar_common_4[0]));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_45, 1) = ((MR_Box) (mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0_1));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_45, 3) = ((MR_Box) (mdb__declarative_oracle__Truth_16));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_45, 4) = ((MR_Box) (mdb__declarative_oracle__Atom_19));
                      }
                      {
                        mdb__declarative_oracle__Var_46 = mdbcomp__rtti_access__get_all_modes_for_layout_1_f_0(mdb__declarative_oracle__ProcLayout_21);
                      }
                      {
                        mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0, (MR_Word) &mdb__declarative_oracle_scalar_common_1[1], mdb__declarative_oracle__Var_45, mdb__declarative_oracle__Var_46, ((MR_Box) (mdb__declarative_oracle__Map0_20)), &mdb__declarative_oracle__conv2_Map_22);
                      }
                      mdb__declarative_oracle__Map_22 = ((MR_Word) mdb__declarative_oracle__conv2_Map_22);
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      mdb__declarative_oracle__add_atom_to_ground_map_5_p_0(mdb__declarative_oracle__Truth_16, mdb__declarative_oracle__Atom_19, mdb__declarative_oracle__ProcLayout_21, mdb__declarative_oracle__Map0_20, &mdb__declarative_oracle__Map_22);
                    }
                    break;
                }
                {
                  mdb__declarative_oracle__set_kb_ground_map_3_p_0(mdb__declarative_oracle__Map_22, mdb__declarative_oracle__STATE_VARIABLE_KB_0_40, mdb__declarative_oracle__STATE_VARIABLE_KB_41);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mdb__declarative_oracle__Call_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_5, (MR_Integer) 1)));
                MR_Word mdb__declarative_oracle__Map0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_40, (MR_Integer) 1)));
                MR_Word mdb__declarative_oracle__Map_49;
                MR_Box mdb__declarative_oracle__Var_23 = (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_5, (MR_Integer) 0));
                MR_Word mdb__declarative_oracle__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_5, (MR_Integer) 2)));
                MR_Word mdb__declarative_oracle__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_40, (MR_Integer) 0)));
                MR_Word mdb__declarative_oracle__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_40, (MR_Integer) 2)));
                MR_Word mdb__declarative_oracle__Var_94;
                MR_Word mdb__declarative_oracle__Var_96;
                MR_Word mdb__declarative_oracle__Var_95;

                {
                  mercury__map__set_4_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, ((MR_Box) (mdb__declarative_oracle__Call_24)), ((MR_Box) (mdb__declarative_oracle__Truth_16)), mdb__declarative_oracle__Map0_48, &mdb__declarative_oracle__Map_49);
                }
                mdb__declarative_oracle__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_40, (MR_Integer) 0)));
                mdb__declarative_oracle__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_40, (MR_Integer) 1)));
                mdb__declarative_oracle__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_40, (MR_Integer) 2)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  *mdb__declarative_oracle__STATE_VARIABLE_KB_41 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Var_94));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Map_49));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__Var_96));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mdb__declarative_oracle__Exception_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_5, (MR_Integer) 2)));
                MR_Word mdb__declarative_oracle__KnownExceptions0_29;
                MR_Word mdb__declarative_oracle__KnownExceptions_35;
                MR_Word mdb__declarative_oracle__Map0_50;
                MR_Word mdb__declarative_oracle__Map_51;
                MR_Word mdb__declarative_oracle__Call_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_5, (MR_Integer) 1)));
                MR_Word mdb__declarative_oracle__Var_86;
                MR_Word mdb__declarative_oracle__Var_87;
                MR_Word mdb__declarative_oracle__Var_88;
                MR_Box mdb__declarative_oracle__Var_26 = (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_5, (MR_Integer) 0));
                MR_Word mdb__declarative_oracle__OldKnownExceptions_28;
                MR_Box mdb__declarative_oracle__conv0_OldKnownExceptions_28;

                {
                  mdb__declarative_oracle__get_kb_exceptions_map_2_p_0(mdb__declarative_oracle__STATE_VARIABLE_KB_0_40, &mdb__declarative_oracle__Map0_50);
                }
                {
                  mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, mdb__declarative_oracle__Map0_50, ((MR_Box) (mdb__declarative_oracle__Call_52)), &mdb__declarative_oracle__conv0_OldKnownExceptions_28);
                }
                if (mdb__declarative_oracle__succeeded)
                {
                  mdb__declarative_oracle__OldKnownExceptions_28 = ((MR_Word) mdb__declarative_oracle__conv0_OldKnownExceptions_28);
                  mdb__declarative_oracle__succeeded = MR_TRUE;
                }
                if (mdb__declarative_oracle__succeeded)
                  mdb__declarative_oracle__KnownExceptions0_29 = mdb__declarative_oracle__OldKnownExceptions_28;
                else
                {
                  MR_Word mdb__declarative_oracle__TypeCtorInfo_80_80 = (MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0;
                  MR_Word mdb__declarative_oracle__EmptyPossible0_30;
                  MR_Word mdb__declarative_oracle__EmptyImpossible0_31;
                  MR_Word mdb__declarative_oracle__EmptyInadmissible0_32;

                  {
                    mercury__set__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_80_80, &mdb__declarative_oracle__EmptyPossible0_30);
                  }
                  {
                    mercury__set__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_80_80, &mdb__declarative_oracle__EmptyImpossible0_31);
                  }
                  {
                    mercury__set__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_80_80, &mdb__declarative_oracle__EmptyInadmissible0_32);
                  }
                  {
                    mdb__declarative_oracle__KnownExceptions0_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_29, 0) = ((MR_Box) (mdb__declarative_oracle__EmptyPossible0_30));
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_29, 1) = ((MR_Box) (mdb__declarative_oracle__EmptyImpossible0_31));
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_29, 2) = ((MR_Box) (mdb__declarative_oracle__EmptyInadmissible0_32));
                  }
                }
                mdb__declarative_oracle__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_29, (MR_Integer) 0)));
                mdb__declarative_oracle__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_29, (MR_Integer) 1)));
                mdb__declarative_oracle__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_29, (MR_Integer) 2)));
                switch (mdb__declarative_oracle__Truth_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word mdb__declarative_oracle__Possible_34;
                      MR_Word mdb__declarative_oracle__Var_58;
                      MR_Word mdb__declarative_oracle__Var_59;
                      MR_Word mdb__declarative_oracle__Var_57;

                      {
                        mercury__set__insert_3_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_27)), mdb__declarative_oracle__Var_88, &mdb__declarative_oracle__Possible_34);
                      }
                      mdb__declarative_oracle__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_29, (MR_Integer) 0)));
                      mdb__declarative_oracle__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_29, (MR_Integer) 1)));
                      mdb__declarative_oracle__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_29, (MR_Integer) 2)));
                      {
                        mdb__declarative_oracle__KnownExceptions_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_35, 0) = ((MR_Box) (mdb__declarative_oracle__Possible_34));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_35, 1) = ((MR_Box) (mdb__declarative_oracle__Var_58));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_35, 2) = ((MR_Box) (mdb__declarative_oracle__Var_59));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word mdb__declarative_oracle__Impossible_37;
                      MR_Word mdb__declarative_oracle__Var_62;
                      MR_Word mdb__declarative_oracle__Var_64;
                      MR_Word mdb__declarative_oracle__Var_63;

                      {
                        mercury__set__insert_3_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_27)), mdb__declarative_oracle__Var_87, &mdb__declarative_oracle__Impossible_37);
                      }
                      mdb__declarative_oracle__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_29, (MR_Integer) 0)));
                      mdb__declarative_oracle__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_29, (MR_Integer) 1)));
                      mdb__declarative_oracle__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_29, (MR_Integer) 2)));
                      {
                        mdb__declarative_oracle__KnownExceptions_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_35, 0) = ((MR_Box) (mdb__declarative_oracle__Var_62));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_35, 1) = ((MR_Box) (mdb__declarative_oracle__Impossible_37));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_35, 2) = ((MR_Box) (mdb__declarative_oracle__Var_64));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word mdb__declarative_oracle__Inadmissible_39;
                      MR_Word mdb__declarative_oracle__Var_67;
                      MR_Word mdb__declarative_oracle__Var_68;
                      MR_Word mdb__declarative_oracle__Var_69;

                      {
                        mercury__set__insert_3_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_27)), mdb__declarative_oracle__Var_86, &mdb__declarative_oracle__Inadmissible_39);
                      }
                      mdb__declarative_oracle__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_29, (MR_Integer) 0)));
                      mdb__declarative_oracle__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_29, (MR_Integer) 1)));
                      mdb__declarative_oracle__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_29, (MR_Integer) 2)));
                      {
                        mdb__declarative_oracle__KnownExceptions_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_35, 0) = ((MR_Box) (mdb__declarative_oracle__Var_67));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_35, 1) = ((MR_Box) (mdb__declarative_oracle__Var_68));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_35, 2) = ((MR_Box) (mdb__declarative_oracle__Inadmissible_39));
                      }
                    }
                    break;
                }
                {
                  mercury__map__set_4_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, ((MR_Box) (mdb__declarative_oracle__Call_52)), ((MR_Box) (mdb__declarative_oracle__KnownExceptions_35)), mdb__declarative_oracle__Map0_50, &mdb__declarative_oracle__Map_51);
                }
                {
                  mdb__declarative_oracle__set_kb_exceptions_map_3_p_0(mdb__declarative_oracle__Map_51, mdb__declarative_oracle__STATE_VARIABLE_KB_0_40, mdb__declarative_oracle__STATE_VARIABLE_KB_41);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        *mdb__declarative_oracle__STATE_VARIABLE_KB_41 = mdb__declarative_oracle__STATE_VARIABLE_KB_0_40;
        break;
      case (MR_Integer) 2:
        *mdb__declarative_oracle__STATE_VARIABLE_KB_41 = mdb__declarative_oracle__STATE_VARIABLE_KB_0_40;
        break;
      case (MR_Integer) 3:
        *mdb__declarative_oracle__STATE_VARIABLE_KB_41 = mdb__declarative_oracle__STATE_VARIABLE_KB_0_40;
        break;
    }
  }
}

static void MR_CALL 
mdb__declarative_oracle__add_atom_to_ground_map_5_p_0(
  MR_Word mdb__declarative_oracle__Truth_6,
  MR_Word mdb__declarative_oracle__FinalAtom_7,
  MR_Box mdb__declarative_oracle__ProcLayout_8,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Map_0_10,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Map_11)
{
  {
    MR_Word mdb__declarative_oracle__Var_12;
    MR_Word mdb__declarative_oracle__Var_14;
    MR_Word mdb__declarative_oracle__Var_15;
    MR_Word mdb__declarative_oracle__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__FinalAtom_7, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__FinalAtom_7, (MR_Integer) 1)));
    MR_Box mdb__declarative_oracle__Var_19 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_16, (MR_Integer) 0)));

    mdb__declarative_oracle__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_16, (MR_Integer) 1)));
    {
      mdb__declarative_oracle__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_14, 0) = ((MR_Box) (mdb__declarative_oracle__ProcLayout_8));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_14, 1) = ((MR_Box) (mdb__declarative_oracle__Var_15));
    }
    {
      mdb__declarative_oracle__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_12, 0) = ((MR_Box) (mdb__declarative_oracle__Var_14));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_12, 1) = ((MR_Box) (mdb__declarative_oracle__Var_18));
    }
    {
      mercury__map__set_4_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, ((MR_Box) (mdb__declarative_oracle__Var_12)), ((MR_Box) (mdb__declarative_oracle__Truth_6)), mdb__declarative_oracle__STATE_VARIABLE_Map_0_10, mdb__declarative_oracle__STATE_VARIABLE_Map_11);
    }
  }
}

static void MR_CALL 
mdb__declarative_oracle__set_kb_exceptions_map_3_p_0(
  MR_Word mdb__declarative_oracle__M_4,
  MR_Word mdb__declarative_oracle__KB_5,
  MR_Word * mdb__declarative_oracle__HeadVar__3_3)
{
  {
    MR_Word mdb__declarative_oracle__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_oracle__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Var_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Var_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__M_4));
    }
  }
}

static void MR_CALL 
mdb__declarative_oracle__set_kb_ground_map_3_p_0(
  MR_Word mdb__declarative_oracle__M_4,
  MR_Word mdb__declarative_oracle__KB_5,
  MR_Word * mdb__declarative_oracle__HeadVar__3_3)
{
  {
    MR_Word mdb__declarative_oracle__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_oracle__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__M_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Var_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__Var_8));
    }
  }
}

static void MR_CALL 
mdb__declarative_oracle__get_kb_exceptions_map_2_p_0(
  MR_Word mdb__declarative_oracle__KB_3,
  MR_Word * mdb__declarative_oracle__HeadVar__2_2)
{
  {
    MR_Word mdb__declarative_oracle__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 1)));

    *mdb__declarative_oracle__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 2)));
  }
}

static void MR_CALL 
mdb__declarative_oracle__get_kb_ground_map_2_p_0(
  MR_Word mdb__declarative_oracle__KB_3,
  MR_Word * mdb__declarative_oracle__HeadVar__2_2)
{
  {
    MR_Word mdb__declarative_oracle__Var_4;
    MR_Word mdb__declarative_oracle__Var_5;

    *mdb__declarative_oracle__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 0)));
    mdb__declarative_oracle__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 1)));
    mdb__declarative_oracle__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 2)));
  }
}

MR_bool MR_CALL 
mdb__declarative_oracle__answer_known_3_p_0(
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_16,
  MR_Word mdb__declarative_oracle__Oracle_4,
  MR_Word mdb__declarative_oracle__Question_5,
  MR_Word * mdb__declarative_oracle__Answer_6)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__Atom_7;
    MR_Box mdb__declarative_oracle__Var_8;
    MR_Word mdb__declarative_oracle__Trusted_19;
    MR_Word mdb__declarative_oracle__ProcLabel_20;
    MR_Word mdb__declarative_oracle__Var_11;
    MR_Word mdb__declarative_oracle__Var_43;
    MR_Word mdb__declarative_oracle__Var_44;
    MR_Word mdb__declarative_oracle__Var_45;
    MR_Word mdb__declarative_oracle__Var_46;

    {
      mdb__declarative_oracle__Atom_7 = mdb__declarative_debugger__get_decl_question_atom_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_16, mdb__declarative_oracle__Question_5);
    }
    mdb__declarative_oracle__Var_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_7, (MR_Integer) 0)));
    mdb__declarative_oracle__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_7, (MR_Integer) 1)));
    mdb__declarative_oracle__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 0)));
    mdb__declarative_oracle__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 1)));
    mdb__declarative_oracle__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 2)));
    mdb__declarative_oracle__Trusted_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 3)));
    mdb__declarative_oracle__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 4)));
    {
      mdb__declarative_oracle__ProcLabel_20 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_oracle__Var_8);
    }
    if (((MR_tag((MR_Word) mdb__declarative_oracle__ProcLabel_20)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word mdb__declarative_oracle__Module_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__PredOrFunc_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 1)));
      MR_String mdb__declarative_oracle__Name_24 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 3)));
      MR_Integer mdb__declarative_oracle__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 4)));
      MR_Word mdb__declarative_oracle__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 2)));
      MR_Integer mdb__declarative_oracle__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 5)));

      switch (mdb__declarative_oracle__PredOrFunc_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_oracle__Var_39;
            MR_Integer mdb__declarative_oracle__Var_32;
            MR_Box mdb__declarative_oracle__conv0_Var_32;

            {
              mdb__declarative_oracle__Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), mdb__declarative_oracle__Var_39, 0) = ((MR_Box) (mdb__declarative_oracle__Module_21));
              MR_hl_field(MR_mktag(3), mdb__declarative_oracle__Var_39, 1) = ((MR_Box) (mdb__declarative_oracle__Name_24));
              MR_hl_field(MR_mktag(3), mdb__declarative_oracle__Var_39, 2) = ((MR_Box) (mdb__declarative_oracle__Arity_25));
            }
            {
              mdb__declarative_oracle__succeeded = mercury__bimap__search_3_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_oracle__Trusted_19, ((MR_Box) (mdb__declarative_oracle__Var_39)), &mdb__declarative_oracle__conv0_Var_32);
            }
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__Var_32 = ((MR_Integer) mdb__declarative_oracle__conv0_Var_32);
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word mdb__declarative_oracle__Var_40;
            MR_Integer mdb__declarative_oracle__Var_31;
            MR_Box mdb__declarative_oracle__conv1_Var_31;

            {
              mdb__declarative_oracle__Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Var_40, 0) = ((MR_Box) (mdb__declarative_oracle__Module_21));
              MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Var_40, 1) = ((MR_Box) (mdb__declarative_oracle__Name_24));
              MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Var_40, 2) = ((MR_Box) (mdb__declarative_oracle__Arity_25));
            }
            {
              mdb__declarative_oracle__succeeded = mercury__bimap__search_3_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_oracle__Trusted_19, ((MR_Box) (mdb__declarative_oracle__Var_40)), &mdb__declarative_oracle__conv1_Var_31);
            }
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__Var_31 = ((MR_Integer) mdb__declarative_oracle__conv1_Var_31);
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
          }
          break;
      }
      if (!(mdb__declarative_oracle__succeeded))
      {
        {
          MR_Word mdb__declarative_oracle__Var_41;
          MR_Integer mdb__declarative_oracle__Var_30;
          MR_Box mdb__declarative_oracle__conv2_Var_30;

          {
            mdb__declarative_oracle__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Var_41, 0) = ((MR_Box) (mdb__declarative_oracle__Module_21));
          }
          {
            mdb__declarative_oracle__succeeded = mercury__bimap__search_3_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_oracle__Trusted_19, ((MR_Box) (mdb__declarative_oracle__Var_41)), &mdb__declarative_oracle__conv2_Var_30);
          }
          if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__Var_30 = ((MR_Integer) mdb__declarative_oracle__conv2_Var_30);
            mdb__declarative_oracle__succeeded = MR_TRUE;
          }
        }
        if (!(mdb__declarative_oracle__succeeded))
        {
          MR_String mdb__declarative_oracle__ModuleNameStr_29;
          MR_Integer mdb__declarative_oracle__Var_27;
          MR_Box mdb__declarative_oracle__conv3_Var_27;

          {
            mdb__declarative_oracle__succeeded = mercury__bimap__search_3_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_oracle__Trusted_19, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mdb__declarative_oracle__conv3_Var_27);
          }
          if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__Var_27 = ((MR_Integer) mdb__declarative_oracle__conv3_Var_27);
            mdb__declarative_oracle__succeeded = MR_TRUE;
          }
          if (mdb__declarative_oracle__succeeded)
          {
            if (((MR_tag((MR_Word) mdb__declarative_oracle__Module_21)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word mdb__declarative_oracle__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Module_21, (MR_Integer) 0)));

              mdb__declarative_oracle__ModuleNameStr_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Module_21, (MR_Integer) 1)));
            }
            else
              mdb__declarative_oracle__ModuleNameStr_29 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Module_21, (MR_Integer) 0)));
            {
              mdb__declarative_oracle__succeeded = mercury__library__mercury_std_library_module_1_p_0(mdb__declarative_oracle__ModuleNameStr_29);
            }
          }
        }
      }
    }
    else
      mdb__declarative_oracle__succeeded = MR_TRUE;
    if (mdb__declarative_oracle__succeeded)
    {
      MR_Box mdb__declarative_oracle__Var_9;

      {
        mdb__declarative_oracle__Var_9 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_16, mdb__declarative_oracle__Question_5);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mdb__declarative_oracle__Answer_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = mdb__declarative_oracle__Var_9;
      }
      mdb__declarative_oracle__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word mdb__declarative_oracle__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 2)));
      MR_Word mdb__declarative_oracle__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 3)));
      MR_Word mdb__declarative_oracle__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 4)));

      switch (MR_tag((MR_Word) mdb__declarative_oracle__Question_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box mdb__declarative_oracle__Node_58 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_5, (MR_Integer) 0));
            MR_Word mdb__declarative_oracle__Atom_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_5, (MR_Integer) 2)));
            MR_Word mdb__declarative_oracle__Map_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_10, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__Truth_62;
            MR_Word mdb__declarative_oracle__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_5, (MR_Integer) 1)));
            MR_Word mdb__declarative_oracle__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_10, (MR_Integer) 1)));
            MR_Word mdb__declarative_oracle__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_10, (MR_Integer) 2)));
            MR_Box mdb__declarative_oracle__conv6_Truth_62;

            {
              mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, mdb__declarative_oracle__Map_61, ((MR_Box) (mdb__declarative_oracle__Atom_60)), &mdb__declarative_oracle__conv6_Truth_62);
            }
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__Truth_62 = ((MR_Word) mdb__declarative_oracle__conv6_Truth_62);
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
            if (mdb__declarative_oracle__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *mdb__declarative_oracle__Answer_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = mdb__declarative_oracle__Node_58;
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Truth_62));
              }
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_oracle__Call_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_5, (MR_Integer) 1)));
            MR_Word mdb__declarative_oracle__CMap_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_10, (MR_Integer) 1)));
            MR_Box mdb__declarative_oracle__Node_75 = (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_5, (MR_Integer) 0));
            MR_Word mdb__declarative_oracle__Truth_76;
            MR_Word mdb__declarative_oracle___Solns_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_5, (MR_Integer) 2)));
            MR_Word mdb__declarative_oracle__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_10, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_10, (MR_Integer) 2)));
            MR_Box mdb__declarative_oracle__conv4_Truth_76;

            {
              mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, mdb__declarative_oracle__CMap_65, ((MR_Box) (mdb__declarative_oracle__Call_63)), &mdb__declarative_oracle__conv4_Truth_76);
            }
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__Truth_76 = ((MR_Word) mdb__declarative_oracle__conv4_Truth_76);
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
            if (mdb__declarative_oracle__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *mdb__declarative_oracle__Answer_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = mdb__declarative_oracle__Node_75;
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Truth_76));
              }
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_oracle__Exception_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_5, (MR_Integer) 2)));
            MR_Word mdb__declarative_oracle__XMap_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_10, (MR_Integer) 2)));
            MR_Word mdb__declarative_oracle__X_68;
            MR_Word mdb__declarative_oracle__Possible_69;
            MR_Word mdb__declarative_oracle__Impossible_70;
            MR_Word mdb__declarative_oracle__Inadmissible_71;
            MR_Box mdb__declarative_oracle__Node_77 = (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_5, (MR_Integer) 0));
            MR_Word mdb__declarative_oracle__Call_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_5, (MR_Integer) 1)));
            MR_Word mdb__declarative_oracle__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_10, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Var_10, (MR_Integer) 1)));
            MR_Box mdb__declarative_oracle__conv5_X_68;
            MR_Word mdb__declarative_oracle__TypeCtorInfo_35_85;

            {
              mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, mdb__declarative_oracle__XMap_67, ((MR_Box) (mdb__declarative_oracle__Call_78)), &mdb__declarative_oracle__conv5_X_68);
            }
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__X_68 = ((MR_Word) mdb__declarative_oracle__conv5_X_68);
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
            if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__Possible_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_68, (MR_Integer) 0)));
              mdb__declarative_oracle__Impossible_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_68, (MR_Integer) 1)));
              mdb__declarative_oracle__Inadmissible_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_68, (MR_Integer) 2)));
              mdb__declarative_oracle__TypeCtorInfo_35_85 = (MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0;
              {
                mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0(mdb__declarative_oracle__TypeCtorInfo_35_85, ((MR_Box) (mdb__declarative_oracle__Exception_66)), mdb__declarative_oracle__Possible_69);
              }
              if (mdb__declarative_oracle__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *mdb__declarative_oracle__Answer_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = mdb__declarative_oracle__Node_77;
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
                }
                mdb__declarative_oracle__succeeded = MR_TRUE;
              }
              else
              {
                {
                  mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_66)), mdb__declarative_oracle__Impossible_70);
                }
                if (mdb__declarative_oracle__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *mdb__declarative_oracle__Answer_6 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = mdb__declarative_oracle__Node_77;
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
                  }
                  mdb__declarative_oracle__succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word mdb__declarative_oracle__Var_74;

                  {
                    mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_66)), mdb__declarative_oracle__Inadmissible_71);
                  }
                  if (mdb__declarative_oracle__succeeded)
                  {
                    mdb__declarative_oracle__Var_74 = (MR_Integer) 2;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *mdb__declarative_oracle__Answer_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = mdb__declarative_oracle__Node_77;
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Var_74));
                    }
                    mdb__declarative_oracle__succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
      }
    }
    return mdb__declarative_oracle__succeeded;
  }
}

static MR_Box MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_2(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1)
{
  {
    MR_Box mdb__declarative_oracle__wrapper_arg_2;
    MR_Box mdb__declarative_oracle__closure = mdb__declarative_oracle__closure_arg;
    MR_String mdb__declarative_oracle__conv1_CmdStr_4;

    {
      mdb__declarative_oracle__conv1_CmdStr_4 = mdb__declarative_oracle__format_trust_command_1_f_0(((MR_Word) mdb__declarative_oracle__wrapper_arg_1));
    }
    mdb__declarative_oracle__wrapper_arg_2 = ((MR_Box) (mdb__declarative_oracle__conv1_CmdStr_4));
    return mdb__declarative_oracle__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_1(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1)
{
  {
    MR_Box mdb__declarative_oracle__wrapper_arg_2;
    MR_Box mdb__declarative_oracle__closure = mdb__declarative_oracle__closure_arg;
    MR_String mdb__declarative_oracle__conv0_Display_5;

    {
      mdb__declarative_oracle__conv0_Display_5 = mdb__declarative_oracle__format_trust_display_1_f_0(((MR_Word) mdb__declarative_oracle__wrapper_arg_1));
    }
    mdb__declarative_oracle__wrapper_arg_2 = ((MR_Box) (mdb__declarative_oracle__conv0_Display_5));
    return mdb__declarative_oracle__wrapper_arg_2;
  }
}

void MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0(
  MR_Word mdb__declarative_oracle__Oracle_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
  MR_String * mdb__declarative_oracle__HeadVar__3_3)
{
  {
    MR_Word mdb__declarative_oracle__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_1, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_1, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_1, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_1, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_1, (MR_Integer) 0)));

    switch (mdb__declarative_oracle__HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdb__declarative_oracle__TypeCtorInfo_34_34 = (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0;
          MR_Word mdb__declarative_oracle__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          MR_Word mdb__declarative_oracle__IdToObjectMap_12;
          MR_Word mdb__declarative_oracle__DisplayStrs_13;
          MR_Word mdb__declarative_oracle__Var_18;

          {
            mdb__declarative_oracle__IdToObjectMap_12 = mercury__bimap__reverse_map_1_f_0(mdb__declarative_oracle__TypeCtorInfo_34_34, mdb__declarative_oracle__TypeCtorInfo_35_35, mdb__declarative_oracle__Var_41);
          }
          {
            mdb__declarative_oracle__Var_18 = mercury__map__to_assoc_list_1_f_0(mdb__declarative_oracle__TypeCtorInfo_35_35, mdb__declarative_oracle__TypeCtorInfo_34_34, mdb__declarative_oracle__IdToObjectMap_12);
          }
          {
            mdb__declarative_oracle__DisplayStrs_13 = mercury__list__map_2_f_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdb__declarative_oracle_scalar_common_1[5], mdb__declarative_oracle__Var_18);
          }
          if ((mdb__declarative_oracle__DisplayStrs_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mdb__declarative_oracle__HeadVar__3_3 = (MR_String) "There are no trusted modules, predicates or functions.\n";
          else
          {
            MR_Word mdb__declarative_oracle__Var_19;

            {
              mdb__declarative_oracle__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Var_19, 0) = ((MR_Box) ((MR_String) "Trusted Objects:\n"));
              MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Var_19, 1) = ((MR_Box) (mdb__declarative_oracle__DisplayStrs_13));
            }
            {
              *mdb__declarative_oracle__HeadVar__3_3 = mercury__string__append_list_1_f_0(mdb__declarative_oracle__Var_19);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_oracle__TypeCtorInfo_29_29 = (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0;
          MR_Word mdb__declarative_oracle__TrustedObjects_6;
          MR_Word mdb__declarative_oracle__TrustedCmdStrs_7;

          {
            mdb__declarative_oracle__TrustedObjects_6 = mercury__bimap__ordinates_1_f_0(mdb__declarative_oracle__TypeCtorInfo_29_29, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_oracle__Var_41);
          }
          {
            mdb__declarative_oracle__TrustedCmdStrs_7 = mercury__list__map_2_f_0(mdb__declarative_oracle__TypeCtorInfo_29_29, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdb__declarative_oracle_scalar_common_1[6], mdb__declarative_oracle__TrustedObjects_6);
          }
          {
            *mdb__declarative_oracle__HeadVar__3_3 = mercury__string__append_list_1_f_0(mdb__declarative_oracle__TrustedCmdStrs_7);
          }
        }
        break;
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_oracle__remove_trusted_3_p_0(
  MR_Integer mdb__declarative_oracle__Id_4,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_10)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__TypeCtorInfo_26_26 = (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0;
    MR_Word mdb__declarative_oracle__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mdb__declarative_oracle__Trusted0_7;
    MR_Word mdb__declarative_oracle__Trusted_8;
    MR_Word mdb__declarative_oracle__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__Var_6;
    MR_Box mdb__declarative_oracle__conv0_Var_6;
    MR_Word mdb__declarative_oracle__Var_17;
    MR_Word mdb__declarative_oracle__Var_18;
    MR_Word mdb__declarative_oracle__Var_19;
    MR_Word mdb__declarative_oracle__Var_20;
    MR_Word mdb__declarative_oracle__Var_21;
    MR_Word mdb__declarative_oracle__Var_22;
    MR_Word mdb__declarative_oracle__Var_23;
    MR_Word mdb__declarative_oracle__Var_25;
    MR_Word mdb__declarative_oracle__Var_24;

    {
      mdb__declarative_oracle__succeeded = mercury__bimap__search_3_p_1(mdb__declarative_oracle__TypeCtorInfo_26_26, mdb__declarative_oracle__TypeCtorInfo_27_27, mdb__declarative_oracle__Var_11, &mdb__declarative_oracle__conv0_Var_6, ((MR_Box) (mdb__declarative_oracle__Id_4)));
    }
    if (mdb__declarative_oracle__succeeded)
    {
      mdb__declarative_oracle__Var_6 = ((MR_Word) mdb__declarative_oracle__conv0_Var_6);
      mdb__declarative_oracle__succeeded = MR_TRUE;
    }
    if (mdb__declarative_oracle__succeeded)
    {
      mdb__declarative_oracle__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0)));
      mdb__declarative_oracle__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1)));
      mdb__declarative_oracle__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2)));
      mdb__declarative_oracle__Trusted0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3)));
      mdb__declarative_oracle__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 4)));
      {
        mercury__bimap__delete_value_3_p_0(mdb__declarative_oracle__TypeCtorInfo_27_27, mdb__declarative_oracle__TypeCtorInfo_26_26, ((MR_Box) (mdb__declarative_oracle__Id_4)), mdb__declarative_oracle__Trusted0_7, &mdb__declarative_oracle__Trusted_8);
      }
      mdb__declarative_oracle__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0)));
      mdb__declarative_oracle__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1)));
      mdb__declarative_oracle__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2)));
      mdb__declarative_oracle__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3)));
      mdb__declarative_oracle__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 4)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        *mdb__declarative_oracle__STATE_VARIABLE_Oracle_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Var_21));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Var_22));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__Var_23));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Trusted_8));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__Var_25));
      }
      mdb__declarative_oracle__succeeded = MR_TRUE;
    }
    return mdb__declarative_oracle__succeeded;
  }
}

void MR_CALL 
mdb__declarative_oracle__trust_standard_library_2_p_0(
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_10)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__Counter0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 4)));
    MR_Integer mdb__declarative_oracle__Id_5;
    MR_Word mdb__declarative_oracle__Counter_6;
    MR_Word mdb__declarative_oracle__Trusted0_7;
    MR_Word mdb__declarative_oracle__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__Var_18;
    MR_Word mdb__declarative_oracle__Var_19;
    MR_Word mdb__declarative_oracle__Var_20;
    MR_Word mdb__declarative_oracle__Var_21;
    MR_Word mdb__declarative_oracle__Trusted_8;

    {
      mercury__counter__allocate_3_p_0(&mdb__declarative_oracle__Id_5, mdb__declarative_oracle__Counter0_4, &mdb__declarative_oracle__Counter_6);
    }
    mdb__declarative_oracle__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0)));
    mdb__declarative_oracle__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1)));
    mdb__declarative_oracle__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2)));
    mdb__declarative_oracle__Trusted0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3)));
    mdb__declarative_oracle__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 4)));
    {
      mdb__declarative_oracle__succeeded = mercury__bimap__insert_4_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (mdb__declarative_oracle__Id_5)), mdb__declarative_oracle__Trusted0_7, &mdb__declarative_oracle__Trusted_8);
    }
    if (mdb__declarative_oracle__succeeded)
    {
      MR_Word mdb__declarative_oracle__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2)));
      MR_Word mdb__declarative_oracle__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3)));
      MR_Word mdb__declarative_oracle__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 4)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        *mdb__declarative_oracle__STATE_VARIABLE_Oracle_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Var_22));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Var_23));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__Var_24));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Trusted_8));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__Counter_6));
      }
    }
    else
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_10 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9;
  }
}

void MR_CALL 
mdb__declarative_oracle__add_trusted_pred_or_func_3_p_0(
  MR_Box mdb__declarative_oracle__ProcLayout_4,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_22)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__Counter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 4)));
    MR_Integer mdb__declarative_oracle__Id_7;
    MR_Word mdb__declarative_oracle__Counter_8;
    MR_Word mdb__declarative_oracle__ProcLabel_9;
    MR_Word mdb__declarative_oracle__ModuleName_10;
    MR_Word mdb__declarative_oracle__PredOrFunc_11;
    MR_String mdb__declarative_oracle__Name_13;
    MR_Integer mdb__declarative_oracle__Arity_14;
    MR_Word mdb__declarative_oracle__Trusted0_19;
    MR_Word mdb__declarative_oracle__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__Var_31;
    MR_Word mdb__declarative_oracle__Var_32;
    MR_Word mdb__declarative_oracle__Var_33;
    MR_Word mdb__declarative_oracle__Var_34;
    MR_Word mdb__declarative_oracle__Trusted_20;

    {
      mercury__counter__allocate_3_p_0(&mdb__declarative_oracle__Id_7, mdb__declarative_oracle__Counter0_6, &mdb__declarative_oracle__Counter_8);
    }
    {
      mdb__declarative_oracle__ProcLabel_9 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_oracle__ProcLayout_4);
    }
    if (((MR_tag((MR_Word) mdb__declarative_oracle__ProcLabel_9)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word mdb__declarative_oracle__Var_12;
      MR_Integer mdb__declarative_oracle__Var_15;

      mdb__declarative_oracle__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 0)));
      mdb__declarative_oracle__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 1)));
      mdb__declarative_oracle__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 2)));
      mdb__declarative_oracle__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 3)));
      mdb__declarative_oracle__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 4)));
      mdb__declarative_oracle__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 5)));
    }
    else
    {
      MR_Word mdb__declarative_oracle__Var_16;
      MR_Word mdb__declarative_oracle__Var_17;
      MR_Integer mdb__declarative_oracle__Var_18;

      mdb__declarative_oracle__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 0)));
      mdb__declarative_oracle__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 1)));
      mdb__declarative_oracle__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 2)));
      mdb__declarative_oracle__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 3)));
      mdb__declarative_oracle__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 4)));
      mdb__declarative_oracle__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 5)));
      mdb__declarative_oracle__PredOrFunc_11 = (MR_Integer) 0;
    }
    mdb__declarative_oracle__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 0)));
    mdb__declarative_oracle__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 1)));
    mdb__declarative_oracle__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 2)));
    mdb__declarative_oracle__Trusted0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 3)));
    mdb__declarative_oracle__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 4)));
    switch (mdb__declarative_oracle__PredOrFunc_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_oracle__Var_23;

          {
            mdb__declarative_oracle__Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), mdb__declarative_oracle__Var_23, 0) = ((MR_Box) (mdb__declarative_oracle__ModuleName_10));
            MR_hl_field(MR_mktag(3), mdb__declarative_oracle__Var_23, 1) = ((MR_Box) (mdb__declarative_oracle__Name_13));
            MR_hl_field(MR_mktag(3), mdb__declarative_oracle__Var_23, 2) = ((MR_Box) (mdb__declarative_oracle__Arity_14));
          }
          {
            mdb__declarative_oracle__succeeded = mercury__bimap__insert_4_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_oracle__Var_23)), ((MR_Box) (mdb__declarative_oracle__Id_7)), mdb__declarative_oracle__Trusted0_19, &mdb__declarative_oracle__Trusted_20);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word mdb__declarative_oracle__Var_24;

          {
            mdb__declarative_oracle__Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Var_24, 0) = ((MR_Box) (mdb__declarative_oracle__ModuleName_10));
            MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Var_24, 1) = ((MR_Box) (mdb__declarative_oracle__Name_13));
            MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Var_24, 2) = ((MR_Box) (mdb__declarative_oracle__Arity_14));
          }
          {
            mdb__declarative_oracle__succeeded = mercury__bimap__insert_4_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_oracle__Var_24)), ((MR_Box) (mdb__declarative_oracle__Id_7)), mdb__declarative_oracle__Trusted0_19, &mdb__declarative_oracle__Trusted_20);
          }
        }
        break;
    }
    if (mdb__declarative_oracle__succeeded)
    {
      MR_Word mdb__declarative_oracle__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 2)));
      MR_Word mdb__declarative_oracle__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 3)));
      MR_Word mdb__declarative_oracle__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 4)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        *mdb__declarative_oracle__STATE_VARIABLE_Oracle_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Var_35));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Var_36));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__Var_37));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Trusted_20));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__Counter_8));
      }
    }
    else
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_22 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21;
  }
}

void MR_CALL 
mdb__declarative_oracle__add_trusted_module_3_p_0(
  MR_Word mdb__declarative_oracle__ModuleName_4,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_12)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__Counter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 4)));
    MR_Integer mdb__declarative_oracle__Id_7;
    MR_Word mdb__declarative_oracle__Counter_8;
    MR_Word mdb__declarative_oracle__Trusted0_9;
    MR_Word mdb__declarative_oracle__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__Var_20;
    MR_Word mdb__declarative_oracle__Var_21;
    MR_Word mdb__declarative_oracle__Var_22;
    MR_Word mdb__declarative_oracle__Var_23;
    MR_Word mdb__declarative_oracle__Trusted_10;
    MR_Word mdb__declarative_oracle__Var_13;

    {
      mercury__counter__allocate_3_p_0(&mdb__declarative_oracle__Id_7, mdb__declarative_oracle__Counter0_6, &mdb__declarative_oracle__Counter_8);
    }
    mdb__declarative_oracle__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 0)));
    mdb__declarative_oracle__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1)));
    mdb__declarative_oracle__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2)));
    mdb__declarative_oracle__Trusted0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3)));
    mdb__declarative_oracle__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 4)));
    {
      mdb__declarative_oracle__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Var_13, 0) = ((MR_Box) (mdb__declarative_oracle__ModuleName_4));
    }
    {
      mdb__declarative_oracle__succeeded = mercury__bimap__insert_4_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_oracle__Var_13)), ((MR_Box) (mdb__declarative_oracle__Id_7)), mdb__declarative_oracle__Trusted0_9, &mdb__declarative_oracle__Trusted_10);
    }
    if (mdb__declarative_oracle__succeeded)
    {
      MR_Word mdb__declarative_oracle__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 0)));
      MR_Word mdb__declarative_oracle__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1)));
      MR_Word mdb__declarative_oracle__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2)));
      MR_Word mdb__declarative_oracle__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3)));
      MR_Word mdb__declarative_oracle__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 4)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        *mdb__declarative_oracle__STATE_VARIABLE_Oracle_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Var_24));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Var_25));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__Var_26));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Trusted_10));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__Counter_8));
      }
    }
    else
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_12 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11;
  }
}

void MR_CALL 
mdb__declarative_oracle__oracle_state_init_5_p_0(
  MR_Word mdb__declarative_oracle__InStr_6,
  MR_Word mdb__declarative_oracle__OutStr_7,
  MR_Word mdb__declarative_oracle__Browser_8,
  MR_Word mdb__declarative_oracle__HelpSystem_9,
  MR_Word * mdb__declarative_oracle__Oracle_10)
{
  {
    MR_Word mdb__declarative_oracle__TypeCtorInfo_20_20;
    MR_Word mdb__declarative_oracle__TypeCtorInfo_21_21;
    MR_Word mdb__declarative_oracle__TypeCtorInfo_6_26 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0;
    MR_Word mdb__declarative_oracle__TypeCtorInfo_7_27;
    MR_Word mdb__declarative_oracle__TypeCtorInfo_6_33;
    MR_Word mdb__declarative_oracle__TypeCtorInfo_7_34;
    MR_Word mdb__declarative_oracle__Current_11;
    MR_Word mdb__declarative_oracle__Old_12;
    MR_Word mdb__declarative_oracle__User_13;
    MR_Word mdb__declarative_oracle__Trusted_14;
    MR_Word mdb__declarative_oracle__Counter_15;
    MR_Word mdb__declarative_oracle__Var_18;
    MR_Word mdb__declarative_oracle__G_22;
    MR_Word mdb__declarative_oracle__C_23;
    MR_Word mdb__declarative_oracle__X_24;
    MR_Word mdb__declarative_oracle__G_29;
    MR_Word mdb__declarative_oracle__C_30;
    MR_Word mdb__declarative_oracle__X_31;

    {
      mercury__map__init_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, mdb__declarative_oracle__TypeCtorInfo_6_26, &mdb__declarative_oracle__G_22);
    }
    mdb__declarative_oracle__TypeCtorInfo_7_27 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0;
    {
      mercury__map__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_7_27, mdb__declarative_oracle__TypeCtorInfo_6_26, &mdb__declarative_oracle__C_23);
    }
    {
      mercury__map__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_7_27, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, &mdb__declarative_oracle__X_24);
    }
    {
      mdb__declarative_oracle__Current_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current_11, 0) = ((MR_Box) (mdb__declarative_oracle__G_22));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current_11, 1) = ((MR_Box) (mdb__declarative_oracle__C_23));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current_11, 2) = ((MR_Box) (mdb__declarative_oracle__X_24));
    }
    mdb__declarative_oracle__TypeCtorInfo_6_33 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0;
    {
      mercury__map__init_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, mdb__declarative_oracle__TypeCtorInfo_6_33, &mdb__declarative_oracle__G_29);
    }
    mdb__declarative_oracle__TypeCtorInfo_7_34 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0;
    {
      mercury__map__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_7_34, mdb__declarative_oracle__TypeCtorInfo_6_33, &mdb__declarative_oracle__C_30);
    }
    {
      mercury__map__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_7_34, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, &mdb__declarative_oracle__X_31);
    }
    {
      mdb__declarative_oracle__Old_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Old_12, 0) = ((MR_Box) (mdb__declarative_oracle__G_29));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Old_12, 1) = ((MR_Box) (mdb__declarative_oracle__C_30));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Old_12, 2) = ((MR_Box) (mdb__declarative_oracle__X_31));
    }
    {
      mdb__declarative_user__user_state_init_5_p_0(mdb__declarative_oracle__InStr_6, mdb__declarative_oracle__OutStr_7, mdb__declarative_oracle__Browser_8, mdb__declarative_oracle__HelpSystem_9, &mdb__declarative_oracle__User_13);
    }
    mdb__declarative_oracle__TypeCtorInfo_20_20 = (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0;
    mdb__declarative_oracle__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mdb__declarative_oracle__Var_18 = mercury__bimap__init_0_f_0(mdb__declarative_oracle__TypeCtorInfo_20_20, mdb__declarative_oracle__TypeCtorInfo_21_21);
    }
    {
      mercury__bimap__set_4_p_0(mdb__declarative_oracle__TypeCtorInfo_20_20, mdb__declarative_oracle__TypeCtorInfo_21_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) ((MR_Integer) 0)), mdb__declarative_oracle__Var_18, &mdb__declarative_oracle__Trusted_14);
    }
    {
      mercury__counter__init_2_p_0((MR_Integer) 1, &mdb__declarative_oracle__Counter_15);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_oracle__Oracle_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Current_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Old_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__User_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Trusted_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__Counter_15));
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_oracle__oracle_response_undoable_1_p_0(
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_4,
  MR_Word mdb__declarative_oracle__HeadVar__1_1)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;

    if (((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      mdb__declarative_oracle__succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
      mdb__declarative_oracle__succeeded = MR_TRUE;
    else
      mdb__declarative_oracle__succeeded = MR_FALSE;
    return mdb__declarative_oracle__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____known_exceptions_0_0_10001(
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;

    {
      mdb__declarative_oracle__succeeded = mdb__declarative_oracle____Unify____known_exceptions_0_0(((MR_Word) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2));
    }
    return mdb__declarative_oracle__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_oracle____Compare____known_exceptions_0_0_10001(
  MR_Box * mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box mdb__declarative_oracle__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_oracle__conv0_HeadVar__1_1;

    {
      mdb__declarative_oracle____Compare____known_exceptions_0_0(&mdb__declarative_oracle__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), ((MR_Word) mdb__declarative_oracle__wrapper_arg_3));
    }
    *mdb__declarative_oracle__wrapper_arg_1 = ((MR_Box) (mdb__declarative_oracle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_kb_0_0_10001(
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;

    {
      mdb__declarative_oracle__succeeded = mdb__declarative_oracle____Unify____oracle_kb_0_0(((MR_Word) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2));
    }
    return mdb__declarative_oracle__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_kb_0_0_10001(
  MR_Box * mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box mdb__declarative_oracle__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_oracle__conv0_HeadVar__1_1;

    {
      mdb__declarative_oracle____Compare____oracle_kb_0_0(&mdb__declarative_oracle__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), ((MR_Word) mdb__declarative_oracle__wrapper_arg_3));
    }
    *mdb__declarative_oracle__wrapper_arg_1 = ((MR_Box) (mdb__declarative_oracle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_response_1_0_10001(
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box mdb__declarative_oracle__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;

    {
      mdb__declarative_oracle__succeeded = mdb__declarative_oracle____Unify____oracle_response_1_0(((MR_Word) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), ((MR_Word) mdb__declarative_oracle__wrapper_arg_3));
    }
    return mdb__declarative_oracle__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_response_1_0_10001(
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box * mdb__declarative_oracle__wrapper_arg_2,
  MR_Box mdb__declarative_oracle__wrapper_arg_3,
  MR_Box mdb__declarative_oracle__wrapper_arg_4)
{
  {
    MR_Word mdb__declarative_oracle__conv0_HeadVar__1_1;

    {
      mdb__declarative_oracle____Compare____oracle_response_1_0(((MR_Word) mdb__declarative_oracle__wrapper_arg_1), &mdb__declarative_oracle__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_oracle__wrapper_arg_3), ((MR_Word) mdb__declarative_oracle__wrapper_arg_4));
    }
    *mdb__declarative_oracle__wrapper_arg_2 = ((MR_Box) (mdb__declarative_oracle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_state_0_0_10001(
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;

    {
      mdb__declarative_oracle__succeeded = mdb__declarative_oracle____Unify____oracle_state_0_0(((MR_Word) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2));
    }
    return mdb__declarative_oracle__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_state_0_0_10001(
  MR_Box * mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box mdb__declarative_oracle__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_oracle__conv0_HeadVar__1_1;

    {
      mdb__declarative_oracle____Compare____oracle_state_0_0(&mdb__declarative_oracle__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), ((MR_Word) mdb__declarative_oracle__wrapper_arg_3));
    }
    *mdb__declarative_oracle__wrapper_arg_1 = ((MR_Box) (mdb__declarative_oracle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trusted_object_0_0_10001(
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;

    {
      mdb__declarative_oracle__succeeded = mdb__declarative_oracle____Unify____trusted_object_0_0(((MR_Word) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2));
    }
    return mdb__declarative_oracle__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_oracle____Compare____trusted_object_0_0_10001(
  MR_Box * mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box mdb__declarative_oracle__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_oracle__conv0_HeadVar__1_1;

    {
      mdb__declarative_oracle____Compare____trusted_object_0_0(&mdb__declarative_oracle__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), ((MR_Word) mdb__declarative_oracle__wrapper_arg_3));
    }
    *mdb__declarative_oracle__wrapper_arg_1 = ((MR_Box) (mdb__declarative_oracle__conv0_HeadVar__1_1));
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

/* :- end_module mdb.declarative_oracle. */
