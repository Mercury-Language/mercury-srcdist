/*
** Automatically generated from `declarative_oracle.m'
** by the Mercury compiler,
** version rotd-2016-06-09
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




static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0;

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

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0_1(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box * mdb__declarative_oracle__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_KB_0_2,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_KB_3);

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box * mdb__declarative_oracle__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_KB_0_3,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_KB_4);

static MR_bool MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(
  MR_Word mdb__declarative_oracle__KB_1,
  MR_Word mdb__declarative_oracle__Question_2,
  MR_Word * mdb__declarative_oracle__Answer_3);

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
mdb__declarative_oracle__set_kb_complete_map_3_p_0(
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
mdb__declarative_oracle__get_kb_complete_map_2_p_0(
  MR_Word mdb__declarative_oracle__KB_3,
  MR_Word * mdb__declarative_oracle__HeadVar__2_2);

static void MR_CALL 
mdb__declarative_oracle__get_kb_ground_map_2_p_0(
  MR_Word mdb__declarative_oracle__KB_3,
  MR_Word * mdb__declarative_oracle__HeadVar__2_2);

static void MR_CALL 
mdb__declarative_oracle__format_trust_display_4_p_0(
  MR_Integer mdb__declarative_oracle__Id_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
  MR_String mdb__declarative_oracle__S_3,
  MR_String * mdb__declarative_oracle__HeadVar__4_4);

static void MR_CALL 
mdb__declarative_oracle__format_trust_command_3_p_0(
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
  MR_String mdb__declarative_oracle__S_2,
  MR_String * mdb__declarative_oracle__HeadVar__3_3);

static void MR_CALL 
mdb__declarative_oracle__query_oracle_user_6_p_0(
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_77,
  MR_Word mdb__declarative_oracle__UserQuestion_7,
  MR_Word * mdb__declarative_oracle__OracleResponse_8,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_30);

static void MR_CALL 
mdb__declarative_oracle__oracle_confirm_bug_7_p_0_1(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box * mdb__declarative_oracle__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_2(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box * mdb__declarative_oracle__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_1(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box mdb__declarative_oracle__wrapper_arg_3,
  MR_Box * mdb__declarative_oracle__wrapper_arg_4);


static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_1[6][3];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_2[1][2];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_3[3][7];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_4[1][6];

static /* final */ const MR_Integer mdb__declarative_oracle_scalar_common_5[1][2];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_6[1][8];




static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_1[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_3[0])),
    ((MR_Box) (mdb__declarative_oracle__get_trusted_list_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_4[0])),
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

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_3[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_question_1__pseudo_1)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)),
    ((MR_Box) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0)),
    ((MR_Box) (&mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0)),
    ((MR_Box) (&mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0))
  },
};

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Integer mdb__declarative_oracle_scalar_common_5[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_6[1][8] = {
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



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0,
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_known_exceptions_0_0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_names_known_exceptions_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_known_exceptions_0_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0
};

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_known_exceptions_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_kb_0_0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_kb_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_kb_0_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_kb_0_0
};

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_kb_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_output_stream_0
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_1 = {
  (MR_String) "oracle_response_show_info",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_2[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_2 = {
  (MR_String) "oracle_response_change_search",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_3 = {
  (MR_String) "oracle_response_undo",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_4 = {
  (MR_String) "oracle_response_exit_diagnosis",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_5 = {
  (MR_String) "oracle_response_abort_diagnosis",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
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
  (MR_Integer) 16,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_state_0_0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_state_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_state_0_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_state_0_0
};

static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_state_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_3 = {
  (MR_String) "trusted_standard_library",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_KB_0_2,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_KB_3)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 0)));

    switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdb__declarative_oracle__Atom_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__Map_9;
          MR_Word mdb__declarative_oracle__V_12_12;
          MR_Word mdb__declarative_oracle__V_13_13;
          MR_Box mdb__declarative_oracle__V_14_14;
          MR_Word mdb__declarative_oracle__V_15_15;
          MR_Box mdb__declarative_oracle__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__V_45_45;
          MR_Word mdb__declarative_oracle__V_46_46;
          MR_Box mdb__declarative_oracle__conv2_Map_9;
          MR_Word mdb__declarative_oracle__V_48_48;
          MR_Word mdb__declarative_oracle__V_49_49;
          MR_Word mdb__declarative_oracle__V_47_47;

          {
            mdb__declarative_oracle__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_12_12, 0) = ((MR_Box) (&mdb__declarative_oracle_scalar_common_3[2]));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_12_12, 1) = ((MR_Box) (mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0_1));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_12_12, 3) = ((MR_Box) (mdb__declarative_oracle__Atom_6));
          }
          mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_6, (MR_Integer) 0)));
          mdb__declarative_oracle__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_6, (MR_Integer) 1)));
          mdb__declarative_oracle__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_15_15, (MR_Integer) 0)));
          mdb__declarative_oracle__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_15_15, (MR_Integer) 1)));
          {
            mdb__declarative_oracle__V_13_13 = mdbcomp__rtti_access__get_all_modes_for_layout_1_f_0(mdb__declarative_oracle__V_14_14);
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0, (MR_Word) &mdb__declarative_oracle_scalar_common_1[0], mdb__declarative_oracle__V_12_12, mdb__declarative_oracle__V_13_13, ((MR_Box) (mdb__declarative_oracle__V_75_75)), &mdb__declarative_oracle__conv2_Map_9);
          }
          mdb__declarative_oracle__Map_9 = ((MR_Word) mdb__declarative_oracle__conv2_Map_9);
          mdb__declarative_oracle__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 0)));
          mdb__declarative_oracle__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 1)));
          mdb__declarative_oracle__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 2)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *mdb__declarative_oracle__STATE_VARIABLE_KB_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Map_9));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_48_48));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_49_49));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_oracle__InitAtom_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__CompleteMap_22;
          MR_Box mdb__declarative_oracle__V_17_17 = (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__V_52_52;
          MR_Word mdb__declarative_oracle__V_54_54;
          MR_Word mdb__declarative_oracle__V_53_53;

          {
            mercury__map__delete_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, ((MR_Box) (mdb__declarative_oracle__InitAtom_18)), mdb__declarative_oracle__V_74_74, &mdb__declarative_oracle__CompleteMap_22);
          }
          mdb__declarative_oracle__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 0)));
          mdb__declarative_oracle__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 1)));
          mdb__declarative_oracle__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 2)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *mdb__declarative_oracle__STATE_VARIABLE_KB_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_52_52));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__CompleteMap_22));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_54_54));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_oracle__InitAtom_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__Exception_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__ExceptionsMap_39;
          MR_Box mdb__declarative_oracle__V_26_26 = (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mdb__declarative_oracle__Possible0_32;
          MR_Word mdb__declarative_oracle__Impossible0_33;
          MR_Word mdb__declarative_oracle__Inadmissible0_34;
          MR_Word mdb__declarative_oracle__KnownExceptions0_31;
          MR_Box mdb__declarative_oracle__conv0_KnownExceptions0_31;
          MR_Word mdb__declarative_oracle__V_57_57;
          MR_Word mdb__declarative_oracle__V_58_58;
          MR_Word mdb__declarative_oracle__V_59_59;

          {
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, mdb__declarative_oracle__V_73_73, ((MR_Box) (mdb__declarative_oracle__InitAtom_27)), &mdb__declarative_oracle__conv0_KnownExceptions0_31);
          }
          if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__KnownExceptions0_31 = ((MR_Word) mdb__declarative_oracle__conv0_KnownExceptions0_31);
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
          if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__Possible0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_31, (MR_Integer) 0)));
              mdb__declarative_oracle__Impossible0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_31, (MR_Integer) 1)));
              mdb__declarative_oracle__Inadmissible0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_31, (MR_Integer) 2)));
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
          if (mdb__declarative_oracle__succeeded)
            {
              MR_Word mdb__declarative_oracle__TypeCtorInfo_70_70 = (MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0;
              MR_Word mdb__declarative_oracle__Possible_35;
              MR_Word mdb__declarative_oracle__Impossible_36;
              MR_Word mdb__declarative_oracle__Inadmissible_37;
              MR_Word mdb__declarative_oracle__KnownExceptions_38;

              {
                mercury__set__delete_3_p_0(mdb__declarative_oracle__TypeCtorInfo_70_70, ((MR_Box) (mdb__declarative_oracle__Exception_28)), mdb__declarative_oracle__Possible0_32, &mdb__declarative_oracle__Possible_35);
              }
              {
                mercury__set__delete_3_p_0(mdb__declarative_oracle__TypeCtorInfo_70_70, ((MR_Box) (mdb__declarative_oracle__Exception_28)), mdb__declarative_oracle__Impossible0_33, &mdb__declarative_oracle__Impossible_36);
              }
              {
                mercury__set__delete_3_p_0(mdb__declarative_oracle__TypeCtorInfo_70_70, ((MR_Box) (mdb__declarative_oracle__Exception_28)), mdb__declarative_oracle__Inadmissible0_34, &mdb__declarative_oracle__Inadmissible_37);
              }
              {
                mdb__declarative_oracle__KnownExceptions_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_38, 0) = ((MR_Box) (mdb__declarative_oracle__Possible_35));
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_38, 1) = ((MR_Box) (mdb__declarative_oracle__Impossible_36));
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_38, 2) = ((MR_Box) (mdb__declarative_oracle__Inadmissible_37));
              }
              {
                mercury__map__set_4_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, ((MR_Box) (mdb__declarative_oracle__InitAtom_27)), ((MR_Box) (mdb__declarative_oracle__KnownExceptions_38)), mdb__declarative_oracle__V_73_73, &mdb__declarative_oracle__ExceptionsMap_39);
              }
            }
          else
            mdb__declarative_oracle__ExceptionsMap_39 = mdb__declarative_oracle__V_73_73;
          mdb__declarative_oracle__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 0)));
          mdb__declarative_oracle__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 1)));
          mdb__declarative_oracle__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 2)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *mdb__declarative_oracle__STATE_VARIABLE_KB_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_57_57));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_58_58));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__ExceptionsMap_39));
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
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_KB_0_3,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_KB_4)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;

    switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdb__declarative_oracle__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mdb__declarative_oracle__V_107_107 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdb__declarative_oracle__Atom_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word mdb__declarative_oracle__Map0_30;
                MR_Box mdb__declarative_oracle__ProcLayout_31;
                MR_Word mdb__declarative_oracle__Map_32;
                MR_Word mdb__declarative_oracle__V_35_35;
                MR_Box mdb__declarative_oracle__V_24_24 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0));
                MR_Word mdb__declarative_oracle__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__declarative_oracle__V_73_73;
                MR_Word mdb__declarative_oracle__V_74_74;

                {
                  mdb__declarative_oracle__get_kb_ground_map_2_p_0(mdb__declarative_oracle__STATE_VARIABLE_KB_0_3, &mdb__declarative_oracle__Map0_30);
                }
                mdb__declarative_oracle__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_26, (MR_Integer) 0)));
                mdb__declarative_oracle__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_26, (MR_Integer) 1)));
                mdb__declarative_oracle__ProcLayout_31 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_35_35, (MR_Integer) 0)));
                mdb__declarative_oracle__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_35_35, (MR_Integer) 1)));
                switch (mdb__declarative_oracle__V_106_106) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word mdb__declarative_oracle__V_36_36;
                      MR_Word mdb__declarative_oracle__V_37_37;
                      MR_Box mdb__declarative_oracle__conv2_Map_32;

                      {
                        mdb__declarative_oracle__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_36_36, 0) = ((MR_Box) (&mdb__declarative_oracle_scalar_common_6[0]));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_36_36, 1) = ((MR_Box) (mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0_1));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_36_36, 3) = ((MR_Box) (mdb__declarative_oracle__V_106_106));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_36_36, 4) = ((MR_Box) (mdb__declarative_oracle__Atom_26));
                      }
                      {
                        mdb__declarative_oracle__V_37_37 = mdbcomp__rtti_access__get_all_modes_for_layout_1_f_0(mdb__declarative_oracle__ProcLayout_31);
                      }
                      {
                        mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0, (MR_Word) &mdb__declarative_oracle_scalar_common_1[0], mdb__declarative_oracle__V_36_36, mdb__declarative_oracle__V_37_37, ((MR_Box) (mdb__declarative_oracle__Map0_30)), &mdb__declarative_oracle__conv2_Map_32);
                      }
                      mdb__declarative_oracle__Map_32 = ((MR_Word) mdb__declarative_oracle__conv2_Map_32);
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      mdb__declarative_oracle__add_atom_to_ground_map_5_p_0(mdb__declarative_oracle__V_106_106, mdb__declarative_oracle__Atom_26, mdb__declarative_oracle__ProcLayout_31, mdb__declarative_oracle__Map0_30, &mdb__declarative_oracle__Map_32);
                    }
                    break;
                }
                {
                  mdb__declarative_oracle__set_kb_ground_map_3_p_0(mdb__declarative_oracle__Map_32, mdb__declarative_oracle__STATE_VARIABLE_KB_0_3, mdb__declarative_oracle__STATE_VARIABLE_KB_4);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mdb__declarative_oracle__Call_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__declarative_oracle__Map0_45;
                MR_Word mdb__declarative_oracle__Map_46;
                MR_Box mdb__declarative_oracle__V_39_39 = (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0));
                MR_Word mdb__declarative_oracle__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));

                {
                  mdb__declarative_oracle__get_kb_complete_map_2_p_0(mdb__declarative_oracle__STATE_VARIABLE_KB_0_3, &mdb__declarative_oracle__Map0_45);
                }
                {
                  mercury__map__set_4_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, ((MR_Box) (mdb__declarative_oracle__Call_40)), ((MR_Box) (mdb__declarative_oracle__V_106_106)), mdb__declarative_oracle__Map0_45, &mdb__declarative_oracle__Map_46);
                }
                {
                  mdb__declarative_oracle__set_kb_complete_map_3_p_0(mdb__declarative_oracle__Map_46, mdb__declarative_oracle__STATE_VARIABLE_KB_0_3, mdb__declarative_oracle__STATE_VARIABLE_KB_4);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mdb__declarative_oracle__Call_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__declarative_oracle__Exception_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word mdb__declarative_oracle__Map0_56;
                MR_Word mdb__declarative_oracle__KnownExceptions0_58;
                MR_Word mdb__declarative_oracle__KnownExceptions_63;
                MR_Word mdb__declarative_oracle__Map_66;
                MR_Word mdb__declarative_oracle__V_108_108;
                MR_Word mdb__declarative_oracle__V_109_109;
                MR_Word mdb__declarative_oracle__V_110_110;
                MR_Box mdb__declarative_oracle__V_50_50 = (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0));
                MR_Word mdb__declarative_oracle__Found_57;
                MR_Box mdb__declarative_oracle__conv0_Found_57;

                {
                  mdb__declarative_oracle__get_kb_exceptions_map_2_p_0(mdb__declarative_oracle__STATE_VARIABLE_KB_0_3, &mdb__declarative_oracle__Map0_56);
                }
                {
                  mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, mdb__declarative_oracle__Map0_56, ((MR_Box) (mdb__declarative_oracle__Call_51)), &mdb__declarative_oracle__conv0_Found_57);
                }
                if (mdb__declarative_oracle__succeeded)
                  {
                    mdb__declarative_oracle__Found_57 = ((MR_Word) mdb__declarative_oracle__conv0_Found_57);
                    mdb__declarative_oracle__succeeded = MR_TRUE;
                  }
                if (mdb__declarative_oracle__succeeded)
                  mdb__declarative_oracle__KnownExceptions0_58 = mdb__declarative_oracle__Found_57;
                else
                  {
                    MR_Word mdb__declarative_oracle__TypeCtorInfo_100_100 = (MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0;
                    MR_Word mdb__declarative_oracle__Possible0_59;
                    MR_Word mdb__declarative_oracle__Impossible0_60;
                    MR_Word mdb__declarative_oracle__Inadmissible0_61;

                    {
                      mercury__set__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_100_100, &mdb__declarative_oracle__Possible0_59);
                    }
                    {
                      mercury__set__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_100_100, &mdb__declarative_oracle__Impossible0_60);
                    }
                    {
                      mercury__set__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_100_100, &mdb__declarative_oracle__Inadmissible0_61);
                    }
                    {
                      mdb__declarative_oracle__KnownExceptions0_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, 0) = ((MR_Box) (mdb__declarative_oracle__Possible0_59));
                      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, 1) = ((MR_Box) (mdb__declarative_oracle__Impossible0_60));
                      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, 2) = ((MR_Box) (mdb__declarative_oracle__Inadmissible0_61));
                    }
                  }
                mdb__declarative_oracle__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 0)));
                mdb__declarative_oracle__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 1)));
                mdb__declarative_oracle__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 2)));
                switch (mdb__declarative_oracle__V_106_106) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word mdb__declarative_oracle__Possible_62;
                      MR_Word mdb__declarative_oracle__V_78_78;
                      MR_Word mdb__declarative_oracle__V_79_79;
                      MR_Word mdb__declarative_oracle__V_77_77;

                      {
                        mercury__set__insert_3_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_52)), mdb__declarative_oracle__V_110_110, &mdb__declarative_oracle__Possible_62);
                      }
                      mdb__declarative_oracle__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 0)));
                      mdb__declarative_oracle__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 1)));
                      mdb__declarative_oracle__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 2)));
                      {
                        mdb__declarative_oracle__KnownExceptions_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 0) = ((MR_Box) (mdb__declarative_oracle__Possible_62));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 1) = ((MR_Box) (mdb__declarative_oracle__V_78_78));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 2) = ((MR_Box) (mdb__declarative_oracle__V_79_79));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word mdb__declarative_oracle__Impossible_64;
                      MR_Word mdb__declarative_oracle__V_82_82;
                      MR_Word mdb__declarative_oracle__V_84_84;
                      MR_Word mdb__declarative_oracle__V_83_83;

                      {
                        mercury__set__insert_3_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_52)), mdb__declarative_oracle__V_109_109, &mdb__declarative_oracle__Impossible_64);
                      }
                      mdb__declarative_oracle__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 0)));
                      mdb__declarative_oracle__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 1)));
                      mdb__declarative_oracle__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 2)));
                      {
                        mdb__declarative_oracle__KnownExceptions_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 0) = ((MR_Box) (mdb__declarative_oracle__V_82_82));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 1) = ((MR_Box) (mdb__declarative_oracle__Impossible_64));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 2) = ((MR_Box) (mdb__declarative_oracle__V_84_84));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word mdb__declarative_oracle__Inadmissible_65;
                      MR_Word mdb__declarative_oracle__V_87_87;
                      MR_Word mdb__declarative_oracle__V_88_88;
                      MR_Word mdb__declarative_oracle__V_89_89;

                      {
                        mercury__set__insert_3_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_52)), mdb__declarative_oracle__V_108_108, &mdb__declarative_oracle__Inadmissible_65);
                      }
                      mdb__declarative_oracle__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 0)));
                      mdb__declarative_oracle__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 1)));
                      mdb__declarative_oracle__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 2)));
                      {
                        mdb__declarative_oracle__KnownExceptions_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 0) = ((MR_Box) (mdb__declarative_oracle__V_87_87));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 1) = ((MR_Box) (mdb__declarative_oracle__V_88_88));
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 2) = ((MR_Box) (mdb__declarative_oracle__Inadmissible_65));
                      }
                    }
                    break;
                }
                {
                  mercury__map__set_4_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, ((MR_Box) (mdb__declarative_oracle__Call_51)), ((MR_Box) (mdb__declarative_oracle__KnownExceptions_63)), mdb__declarative_oracle__Map0_56, &mdb__declarative_oracle__Map_66);
                }
                {
                  mdb__declarative_oracle__set_kb_exceptions_map_3_p_0(mdb__declarative_oracle__Map_66, mdb__declarative_oracle__STATE_VARIABLE_KB_0_3, mdb__declarative_oracle__STATE_VARIABLE_KB_4);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        *mdb__declarative_oracle__STATE_VARIABLE_KB_4 = mdb__declarative_oracle__STATE_VARIABLE_KB_0_3;
        break;
      case (MR_Integer) 2:
        *mdb__declarative_oracle__STATE_VARIABLE_KB_4 = mdb__declarative_oracle__STATE_VARIABLE_KB_0_3;
        break;
      case (MR_Integer) 3:
        *mdb__declarative_oracle__STATE_VARIABLE_KB_4 = mdb__declarative_oracle__STATE_VARIABLE_KB_0_3;
        break;
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(
  MR_Word mdb__declarative_oracle__KB_1,
  MR_Word mdb__declarative_oracle__Question_2,
  MR_Word * mdb__declarative_oracle__Answer_3)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;

    switch (MR_tag((MR_Word) mdb__declarative_oracle__Question_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mdb__declarative_oracle__Node_7 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_2, (MR_Integer) 0));
          MR_Word mdb__declarative_oracle__Atom_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_2, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__Map_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 0)));
          MR_Word mdb__declarative_oracle__Truth_11;
          MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_2, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 2)));
          MR_Box mdb__declarative_oracle__conv2_Truth_11;

          {
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, mdb__declarative_oracle__Map_10, ((MR_Box) (mdb__declarative_oracle__Atom_9)), &mdb__declarative_oracle__conv2_Truth_11);
          }
          if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__Truth_11 = ((MR_Word) mdb__declarative_oracle__conv2_Truth_11);
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
          if (mdb__declarative_oracle__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *mdb__declarative_oracle__Answer_3 = base;
                MR_hl_field(MR_mktag(0), base, 0) = mdb__declarative_oracle__Node_7;
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Truth_11));
              }
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mdb__declarative_oracle__Node_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_2, (MR_Integer) 0));
          MR_Word mdb__declarative_oracle__Call_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_2, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__CMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__Truth_19;
          MR_Word mdb__declarative_oracle___Solns_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_2, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 0)));
          MR_Word mdb__declarative_oracle__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 2)));
          MR_Box mdb__declarative_oracle__conv0_Truth_19;

          {
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, mdb__declarative_oracle__CMap_18, ((MR_Box) (mdb__declarative_oracle__Call_16)), &mdb__declarative_oracle__conv0_Truth_19);
          }
          if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__Truth_19 = ((MR_Word) mdb__declarative_oracle__conv0_Truth_19);
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
          if (mdb__declarative_oracle__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *mdb__declarative_oracle__Answer_3 = base;
                MR_hl_field(MR_mktag(0), base, 0) = mdb__declarative_oracle__Node_15;
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Truth_19));
              }
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mdb__declarative_oracle__Node_23 = (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_2, (MR_Integer) 0));
          MR_Word mdb__declarative_oracle__Call_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_2, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__Exception_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_2, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__XMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__X_27;
          MR_Word mdb__declarative_oracle__Possible_28;
          MR_Word mdb__declarative_oracle__Impossible_29;
          MR_Word mdb__declarative_oracle__Inadmissible_30;
          MR_Word mdb__declarative_oracle__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 0)));
          MR_Word mdb__declarative_oracle__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 1)));
          MR_Box mdb__declarative_oracle__conv1_X_27;
          MR_Word mdb__declarative_oracle__TypeCtorInfo_41_41;

          {
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, mdb__declarative_oracle__XMap_26, ((MR_Box) (mdb__declarative_oracle__Call_24)), &mdb__declarative_oracle__conv1_X_27);
          }
          if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__X_27 = ((MR_Word) mdb__declarative_oracle__conv1_X_27);
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
          if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__Possible_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_27, (MR_Integer) 0)));
              mdb__declarative_oracle__Impossible_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_27, (MR_Integer) 1)));
              mdb__declarative_oracle__Inadmissible_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_27, (MR_Integer) 2)));
              mdb__declarative_oracle__TypeCtorInfo_41_41 = (MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0;
              {
                mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0(mdb__declarative_oracle__TypeCtorInfo_41_41, ((MR_Box) (mdb__declarative_oracle__Exception_25)), mdb__declarative_oracle__Possible_28);
              }
              if (mdb__declarative_oracle__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *mdb__declarative_oracle__Answer_3 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = mdb__declarative_oracle__Node_23;
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
                  }
                  mdb__declarative_oracle__succeeded = MR_TRUE;
                }
              else
                {
                  {
                    mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_25)), mdb__declarative_oracle__Impossible_29);
                  }
                  if (mdb__declarative_oracle__succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *mdb__declarative_oracle__Answer_3 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = mdb__declarative_oracle__Node_23;
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
                      }
                      mdb__declarative_oracle__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word mdb__declarative_oracle__V_33_33;

                      {
                        mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_25)), mdb__declarative_oracle__Inadmissible_30);
                      }
                      if (mdb__declarative_oracle__succeeded)
                        {
                          mdb__declarative_oracle__V_33_33 = (MR_Integer) 2;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            *mdb__declarative_oracle__Answer_3 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = mdb__declarative_oracle__Node_23;
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_33_33));
                          }
                          mdb__declarative_oracle__succeeded = MR_TRUE;
                        }
                    }
                }
            }
        }
        break;
    }
    return mdb__declarative_oracle__succeeded;
  }
}

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
            MR_Word mdb__declarative_oracle__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mdbcomp__sym_name____Compare____sym_name_0_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__V_76_76, mdb__declarative_oracle__V_5_5);
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
            MR_Integer mdb__declarative_oracle__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
            MR_String mdb__declarative_oracle__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdb__declarative_oracle__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word mdb__declarative_oracle__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String mdb__declarative_oracle__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer mdb__declarative_oracle__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_oracle__V_25_25;

                  {
                    mdbcomp__sym_name____Compare____sym_name_0_0(&mdb__declarative_oracle__V_25_25, mdb__declarative_oracle__V_79_79, mdb__declarative_oracle__V_22_22);
                  }
                  mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_25_25 == (MR_Integer) 0);
                  mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                  if (mdb__declarative_oracle__succeeded)
                    *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_25_25;
                  else
                    {
                      MR_Word mdb__declarative_oracle__V_26_26;

                      {
                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_oracle__V_26_26, mdb__declarative_oracle__V_78_78, mdb__declarative_oracle__V_23_23);
                      }
                      mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_26_26 == (MR_Integer) 0);
                      mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                      if (mdb__declarative_oracle__succeeded)
                        *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_26_26;
                      else
                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__V_77_77, mdb__declarative_oracle__V_24_24);
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
            MR_Integer mdb__declarative_oracle__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
            MR_String mdb__declarative_oracle__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdb__declarative_oracle__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word mdb__declarative_oracle__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String mdb__declarative_oracle__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer mdb__declarative_oracle__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_oracle__V_52_52;

                  {
                    mdbcomp__sym_name____Compare____sym_name_0_0(&mdb__declarative_oracle__V_52_52, mdb__declarative_oracle__V_75_75, mdb__declarative_oracle__V_49_49);
                  }
                  mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_52_52 == (MR_Integer) 0);
                  mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                  if (mdb__declarative_oracle__succeeded)
                    *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_52_52;
                  else
                    {
                      MR_Word mdb__declarative_oracle__V_53_53;

                      {
                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_oracle__V_53_53, mdb__declarative_oracle__V_74_74, mdb__declarative_oracle__V_50_50);
                      }
                      mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_53_53 == (MR_Integer) 0);
                      mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                      if (mdb__declarative_oracle__succeeded)
                        *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_53_53;
                      else
                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__V_73_73, mdb__declarative_oracle__V_51_51);
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
            MR_Word mdb__declarative_oracle__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__V_4_4;

            mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_oracle__succeeded)
              {
                mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mdb__declarative_oracle__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdb__declarative_oracle__V_3_3, mdb__declarative_oracle__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mdb__declarative_oracle__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mdb__declarative_oracle__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mdb__declarative_oracle__V_8_8;
            MR_String mdb__declarative_oracle__V_9_9;
            MR_Integer mdb__declarative_oracle__V_10_10;

            mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_oracle__succeeded)
              {
                mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_oracle__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_oracle__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
                {
                  mdb__declarative_oracle__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdb__declarative_oracle__V_5_5, mdb__declarative_oracle__V_8_8);
                }
                if (mdb__declarative_oracle__succeeded)
                  {
                    mdb__declarative_oracle__succeeded = (strcmp(mdb__declarative_oracle__V_6_6, mdb__declarative_oracle__V_9_9) == 0);
                    if (mdb__declarative_oracle__succeeded)
                      mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_7_7 == mdb__declarative_oracle__V_10_10);
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mdb__declarative_oracle__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mdb__declarative_oracle__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mdb__declarative_oracle__V_14_14;
            MR_String mdb__declarative_oracle__V_15_15;
            MR_Integer mdb__declarative_oracle__V_16_16;

            mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (mdb__declarative_oracle__succeeded)
              {
                mdb__declarative_oracle__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_oracle__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_oracle__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
                {
                  mdb__declarative_oracle__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdb__declarative_oracle__V_11_11, mdb__declarative_oracle__V_14_14);
                }
                if (mdb__declarative_oracle__succeeded)
                  {
                    mdb__declarative_oracle__succeeded = (strcmp(mdb__declarative_oracle__V_12_12, mdb__declarative_oracle__V_15_15) == 0);
                    if (mdb__declarative_oracle__succeeded)
                      mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_13_13 == mdb__declarative_oracle__V_16_16);
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
        MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word mdb__declarative_oracle__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word mdb__declarative_oracle__V_14_14;
        MR_Integer mdb__declarative_oracle__CastX_33 = (MR_Integer) mdb__declarative_oracle__V_4_4;
        MR_Integer mdb__declarative_oracle__CastY_34 = (MR_Integer) mdb__declarative_oracle__V_9_9;

        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_33 == mdb__declarative_oracle__CastY_34);
        if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
            mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
            if (mdb__declarative_oracle__succeeded)
              {
                mdb__declarative_oracle__V_14_14 = (MR_Integer) 0;
                mdb__declarative_oracle__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word mdb__declarative_oracle__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_4_4, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_4_4, (MR_Integer) 1)));
            MR_Word mdb__declarative_oracle__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_4_4, (MR_Integer) 2)));
            MR_Word mdb__declarative_oracle__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_9_9, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_9_9, (MR_Integer) 1)));
            MR_Word mdb__declarative_oracle__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_9_9, (MR_Integer) 2)));
            MR_Word mdb__declarative_oracle__V_31_31;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[0], &mdb__declarative_oracle__V_31_31, ((MR_Box) (mdb__declarative_oracle__V_25_25)), ((MR_Box) (mdb__declarative_oracle__V_28_28)));
            }
            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_31_31 == (MR_Integer) 0);
            mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
            if (mdb__declarative_oracle__succeeded)
              {
                mdb__declarative_oracle__V_14_14 = mdb__declarative_oracle__V_31_31;
                mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_14_14 == (MR_Integer) 0);
                mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
              }
            else
              {
                MR_Word mdb__declarative_oracle__V_32_32;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[1], &mdb__declarative_oracle__V_32_32, ((MR_Box) (mdb__declarative_oracle__V_26_26)), ((MR_Box) (mdb__declarative_oracle__V_29_29)));
                }
                mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_32_32 == (MR_Integer) 0);
                mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                if (mdb__declarative_oracle__succeeded)
                  {
                    mdb__declarative_oracle__V_14_14 = mdb__declarative_oracle__V_32_32;
                    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_14_14 == (MR_Integer) 0);
                    mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                  }
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[2], &mdb__declarative_oracle__V_14_14, ((MR_Box) (mdb__declarative_oracle__V_27_27)), ((MR_Box) (mdb__declarative_oracle__V_30_30)));
                    }
                    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_14_14 == (MR_Integer) 0);
                    mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                  }
              }
          }
        if (mdb__declarative_oracle__succeeded)
          *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_14_14;
        else
          {
            MR_Word mdb__declarative_oracle__V_15_15;
            MR_Integer mdb__declarative_oracle__CastX_46 = (MR_Integer) mdb__declarative_oracle__V_5_5;
            MR_Integer mdb__declarative_oracle__CastY_47 = (MR_Integer) mdb__declarative_oracle__V_10_10;

            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_46 == mdb__declarative_oracle__CastY_47);
            if (mdb__declarative_oracle__succeeded)
              {
                mdb__declarative_oracle__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
                mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                if (mdb__declarative_oracle__succeeded)
                  {
                    mdb__declarative_oracle__V_15_15 = (MR_Integer) 0;
                    mdb__declarative_oracle__succeeded = MR_TRUE;
                  }
              }
            else
              {
                MR_Word mdb__declarative_oracle__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_5_5, (MR_Integer) 0)));
                MR_Word mdb__declarative_oracle__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_5_5, (MR_Integer) 1)));
                MR_Word mdb__declarative_oracle__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_5_5, (MR_Integer) 2)));
                MR_Word mdb__declarative_oracle__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_10_10, (MR_Integer) 0)));
                MR_Word mdb__declarative_oracle__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_10_10, (MR_Integer) 1)));
                MR_Word mdb__declarative_oracle__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_10_10, (MR_Integer) 2)));
                MR_Word mdb__declarative_oracle__V_44_44;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[0], &mdb__declarative_oracle__V_44_44, ((MR_Box) (mdb__declarative_oracle__V_38_38)), ((MR_Box) (mdb__declarative_oracle__V_41_41)));
                }
                mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_44_44 == (MR_Integer) 0);
                mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                if (mdb__declarative_oracle__succeeded)
                  {
                    mdb__declarative_oracle__V_15_15 = mdb__declarative_oracle__V_44_44;
                    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_15_15 == (MR_Integer) 0);
                    mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                  }
                else
                  {
                    MR_Word mdb__declarative_oracle__V_45_45;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[1], &mdb__declarative_oracle__V_45_45, ((MR_Box) (mdb__declarative_oracle__V_39_39)), ((MR_Box) (mdb__declarative_oracle__V_42_42)));
                    }
                    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_45_45 == (MR_Integer) 0);
                    mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                    if (mdb__declarative_oracle__succeeded)
                      {
                        mdb__declarative_oracle__V_15_15 = mdb__declarative_oracle__V_45_45;
                        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_15_15 == (MR_Integer) 0);
                        mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                      }
                    else
                      {
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[2], &mdb__declarative_oracle__V_15_15, ((MR_Box) (mdb__declarative_oracle__V_40_40)), ((MR_Box) (mdb__declarative_oracle__V_43_43)));
                        }
                        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_15_15 == (MR_Integer) 0);
                        mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                      }
                  }
              }
            if (mdb__declarative_oracle__succeeded)
              *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_15_15;
            else
              {
                MR_Word mdb__declarative_oracle__V_16_16;

                {
                  mdb__declarative_user____Compare____user_state_0_0(&mdb__declarative_oracle__V_16_16, mdb__declarative_oracle__V_6_6, mdb__declarative_oracle__V_11_11);
                }
                mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_16_16 == (MR_Integer) 0);
                mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                if (mdb__declarative_oracle__succeeded)
                  *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_16_16;
                else
                  {
                    MR_Word mdb__declarative_oracle__V_17_17;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[3], &mdb__declarative_oracle__V_17_17, ((MR_Box) (mdb__declarative_oracle__V_7_7)), ((MR_Box) (mdb__declarative_oracle__V_12_12)));
                    }
                    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_17_17 == (MR_Integer) 0);
                    mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
                    if (mdb__declarative_oracle__succeeded)
                      *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_17_17;
                    else
                      {
                        mercury__counter____Compare____counter_0_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__V_8_8, mdb__declarative_oracle__V_13_13);
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
        MR_Word mdb__declarative_oracle__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mdb__declarative_oracle__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer mdb__declarative_oracle__CastX_24 = (MR_Integer) mdb__declarative_oracle__V_3_3;
        MR_Integer mdb__declarative_oracle__CastY_25 = (MR_Integer) mdb__declarative_oracle__V_8_8;
        MR_Integer mdb__declarative_oracle__CastX_35;
        MR_Integer mdb__declarative_oracle__CastY_36;

        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_24 == mdb__declarative_oracle__CastY_25);
        if (mdb__declarative_oracle__succeeded)
          mdb__declarative_oracle__succeeded = MR_TRUE;
        else
          {
            MR_Word mdb__declarative_oracle__TypeInfo_12_27;
            MR_Word mdb__declarative_oracle__TypeInfo_13_28;
            MR_Word mdb__declarative_oracle__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_3_3, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_3_3, (MR_Integer) 1)));
            MR_Word mdb__declarative_oracle__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_3_3, (MR_Integer) 2)));
            MR_Word mdb__declarative_oracle__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_8_8, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_8_8, (MR_Integer) 1)));
            MR_Word mdb__declarative_oracle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_8_8, (MR_Integer) 2)));

            {
              mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[0], ((MR_Box) (mdb__declarative_oracle__V_18_18)), ((MR_Box) (mdb__declarative_oracle__V_21_21)));
            }
            if (mdb__declarative_oracle__succeeded)
              {
                mdb__declarative_oracle__TypeInfo_12_27 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[1];
                {
                  mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_12_27, ((MR_Box) (mdb__declarative_oracle__V_19_19)), ((MR_Box) (mdb__declarative_oracle__V_22_22)));
                }
                if (mdb__declarative_oracle__succeeded)
                  {
                    mdb__declarative_oracle__TypeInfo_13_28 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[2];
                    {
                      mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_13_28, ((MR_Box) (mdb__declarative_oracle__V_20_20)), ((MR_Box) (mdb__declarative_oracle__V_23_23)));
                    }
                  }
              }
          }
        if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__CastX_35 = (MR_Integer) mdb__declarative_oracle__V_4_4;
            mdb__declarative_oracle__CastY_36 = (MR_Integer) mdb__declarative_oracle__V_9_9;
            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_35 == mdb__declarative_oracle__CastY_36);
            if (mdb__declarative_oracle__succeeded)
              mdb__declarative_oracle__succeeded = MR_TRUE;
            else
              {
                MR_Word mdb__declarative_oracle__TypeInfo_12_38;
                MR_Word mdb__declarative_oracle__TypeInfo_13_39;
                MR_Word mdb__declarative_oracle__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_4_4, (MR_Integer) 0)));
                MR_Word mdb__declarative_oracle__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_4_4, (MR_Integer) 1)));
                MR_Word mdb__declarative_oracle__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_4_4, (MR_Integer) 2)));
                MR_Word mdb__declarative_oracle__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_9_9, (MR_Integer) 0)));
                MR_Word mdb__declarative_oracle__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_9_9, (MR_Integer) 1)));
                MR_Word mdb__declarative_oracle__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_9_9, (MR_Integer) 2)));

                {
                  mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[0], ((MR_Box) (mdb__declarative_oracle__V_29_29)), ((MR_Box) (mdb__declarative_oracle__V_32_32)));
                }
                if (mdb__declarative_oracle__succeeded)
                  {
                    mdb__declarative_oracle__TypeInfo_12_38 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[1];
                    {
                      mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_12_38, ((MR_Box) (mdb__declarative_oracle__V_30_30)), ((MR_Box) (mdb__declarative_oracle__V_33_33)));
                    }
                    if (mdb__declarative_oracle__succeeded)
                      {
                        mdb__declarative_oracle__TypeInfo_13_39 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[2];
                        {
                          mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_13_39, ((MR_Box) (mdb__declarative_oracle__V_31_31)), ((MR_Box) (mdb__declarative_oracle__V_34_34)));
                        }
                      }
                  }
              }
            if (mdb__declarative_oracle__succeeded)
              {
                {
                  mdb__declarative_oracle__succeeded = mdb__declarative_user____Unify____user_state_0_0(mdb__declarative_oracle__V_5_5, mdb__declarative_oracle__V_10_10);
                }
                if (mdb__declarative_oracle__succeeded)
                  {
                    mdb__declarative_oracle__TypeInfo_16_16 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[3];
                    {
                      mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_16_16, ((MR_Box) (mdb__declarative_oracle__V_6_6)), ((MR_Box) (mdb__declarative_oracle__V_11_11)));
                    }
                    if (mdb__declarative_oracle__succeeded)
                      {
                        mdb__declarative_oracle__succeeded = mercury__counter____Unify____counter_0_0(mdb__declarative_oracle__V_7_7, mdb__declarative_oracle__V_12_12);
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
            MR_Word mdb__declarative_oracle__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mdb__declarative_debugger____Compare____decl_answer_1_0(mdb__declarative_oracle__TypeInfo_for_T_54, mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__V_59_59, mdb__declarative_oracle__V_5_5);
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
            MR_Word mdb__declarative_oracle__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word mdb__declarative_oracle__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__io____Compare____output_stream_0_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__V_62_62, mdb__declarative_oracle__V_17_17);
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
                MR_Word mdb__declarative_oracle__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));

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
                          MR_Word mdb__declarative_oracle__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mdb__declarative_oracle__V_63_63 = (MR_Integer) mdb__declarative_oracle__V_60_60;
                          MR_Integer mdb__declarative_oracle__V_64_64 = (MR_Integer) mdb__declarative_oracle__V_29_29;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__V_63_63, mdb__declarative_oracle__V_64_64);
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
                MR_Box mdb__declarative_oracle__V_61_61 = (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1));

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
                          MR_Box mdb__declarative_oracle__V_46_46 = (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1));

                          {
                            mercury__builtin__compare_3_p_0(mdb__declarative_oracle__TypeInfo_for_T_54, mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__V_61_61, mdb__declarative_oracle__V_46_46);
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
            MR_Word mdb__declarative_oracle__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__V_4_4;

            mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_oracle__succeeded)
              {
                mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mdb__declarative_oracle__succeeded = mdb__declarative_debugger____Unify____decl_answer_1_0(mdb__declarative_oracle__TypeInfo_for_T_17, mdb__declarative_oracle__V_3_3, mdb__declarative_oracle__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_oracle__V_6_6;

            mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_oracle__succeeded)
              {
                mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mdb__declarative_oracle__succeeded = mercury__io____Unify____output_stream_0_0(mdb__declarative_oracle__V_5_5, mdb__declarative_oracle__V_6_6);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__declarative_oracle__V_8_8;

                mdb__declarative_oracle__succeeded = ((((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mdb__declarative_oracle__succeeded)
                  {
                    mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_7_7 == mdb__declarative_oracle__V_8_8);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mdb__declarative_oracle__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__declarative_oracle__V_12_12;

                mdb__declarative_oracle__succeeded = ((((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mdb__declarative_oracle__succeeded)
                  {
                    mdb__declarative_oracle__V_12_12 = (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1));
                    {
                      mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_for_T_17, mdb__declarative_oracle__V_11_11, mdb__declarative_oracle__V_12_12);
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
        MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[0], &mdb__declarative_oracle__V_10_10, ((MR_Box) (mdb__declarative_oracle__V_4_4)), ((MR_Box) (mdb__declarative_oracle__V_7_7)));
        }
        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_10_10 == (MR_Integer) 0);
        mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
        if (mdb__declarative_oracle__succeeded)
          *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_10_10;
        else
          {
            MR_Word mdb__declarative_oracle__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[1], &mdb__declarative_oracle__V_11_11, ((MR_Box) (mdb__declarative_oracle__V_5_5)), ((MR_Box) (mdb__declarative_oracle__V_8_8)));
            }
            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_11_11 == (MR_Integer) 0);
            mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
            if (mdb__declarative_oracle__succeeded)
              *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[2], mdb__declarative_oracle__HeadVar__1_1, ((MR_Box) (mdb__declarative_oracle__V_6_6)), ((MR_Box) (mdb__declarative_oracle__V_9_9)));
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
        MR_Word mdb__declarative_oracle__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));

        {
          mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[0], ((MR_Box) (mdb__declarative_oracle__V_3_3)), ((MR_Box) (mdb__declarative_oracle__V_6_6)));
        }
        if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__TypeInfo_12_12 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[1];
            {
              mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_12_12, ((MR_Box) (mdb__declarative_oracle__V_4_4)), ((MR_Box) (mdb__declarative_oracle__V_7_7)));
            }
            if (mdb__declarative_oracle__succeeded)
              {
                mdb__declarative_oracle__TypeInfo_13_13 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[2];
                {
                  mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_13_13, ((MR_Box) (mdb__declarative_oracle__V_5_5)), ((MR_Box) (mdb__declarative_oracle__V_8_8)));
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
        MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_2[0], &mdb__declarative_oracle__V_10_10, ((MR_Box) (mdb__declarative_oracle__V_4_4)), ((MR_Box) (mdb__declarative_oracle__V_7_7)));
        }
        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_10_10 == (MR_Integer) 0);
        mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
        if (mdb__declarative_oracle__succeeded)
          *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_10_10;
        else
          {
            MR_Word mdb__declarative_oracle__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_2[0], &mdb__declarative_oracle__V_11_11, ((MR_Box) (mdb__declarative_oracle__V_5_5)), ((MR_Box) (mdb__declarative_oracle__V_8_8)));
            }
            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_11_11 == (MR_Integer) 0);
            mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
            if (mdb__declarative_oracle__succeeded)
              *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_2[0], mdb__declarative_oracle__HeadVar__1_1, ((MR_Box) (mdb__declarative_oracle__V_6_6)), ((MR_Box) (mdb__declarative_oracle__V_9_9)));
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
        MR_Word mdb__declarative_oracle__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));

        {
          mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_2[0], ((MR_Box) (mdb__declarative_oracle__V_3_3)), ((MR_Box) (mdb__declarative_oracle__V_6_6)));
        }
        if (mdb__declarative_oracle__succeeded)
          {
            mdb__declarative_oracle__TypeInfo_12_12 = (MR_Word) &mdb__declarative_oracle_scalar_common_2[0];
            {
              mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_12_12, ((MR_Box) (mdb__declarative_oracle__V_4_4)), ((MR_Box) (mdb__declarative_oracle__V_7_7)));
            }
            if (mdb__declarative_oracle__succeeded)
              {
                mdb__declarative_oracle__TypeInfo_13_13 = (MR_Word) &mdb__declarative_oracle_scalar_common_2[0];
                {
                  mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_13_13, ((MR_Box) (mdb__declarative_oracle__V_5_5)), ((MR_Box) (mdb__declarative_oracle__V_8_8)));
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
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__FinalDeclAtom_8;
    MR_Word mdb__declarative_oracle__V_11_11;
    MR_Word mdb__declarative_oracle__V_12_12;
    MR_Word mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__FinalAtom_5, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__FinalAtom_5, (MR_Integer) 1)));
    MR_Box mdb__declarative_oracle__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_13_13, (MR_Integer) 0)));

    mdb__declarative_oracle__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_13_13, (MR_Integer) 1)));
    {
      mdb__declarative_oracle__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_11_11, 0) = ((MR_Box) (mdb__declarative_oracle__ProcLayout_6));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_11_11, 1) = ((MR_Box) (mdb__declarative_oracle__V_12_12));
    }
    {
      mdb__declarative_oracle__FinalDeclAtom_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__FinalDeclAtom_8, 0) = ((MR_Box) (mdb__declarative_oracle__V_11_11));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__FinalDeclAtom_8, 1) = ((MR_Box) (mdb__declarative_oracle__V_16_16));
    }
    {
      mercury__map__delete_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, ((MR_Box) (mdb__declarative_oracle__FinalDeclAtom_8)), mdb__declarative_oracle__STATE_VARIABLE_Map_0_9, mdb__declarative_oracle__STATE_VARIABLE_Map_10);
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
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__V_12_12;
    MR_Word mdb__declarative_oracle__V_14_14;
    MR_Word mdb__declarative_oracle__V_15_15;
    MR_Word mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__FinalAtom_7, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__FinalAtom_7, (MR_Integer) 1)));
    MR_Box mdb__declarative_oracle__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_16_16, (MR_Integer) 0)));

    mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_16_16, (MR_Integer) 1)));
    {
      mdb__declarative_oracle__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_14_14, 0) = ((MR_Box) (mdb__declarative_oracle__ProcLayout_8));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_14_14, 1) = ((MR_Box) (mdb__declarative_oracle__V_15_15));
    }
    {
      mdb__declarative_oracle__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_12_12, 0) = ((MR_Box) (mdb__declarative_oracle__V_14_14));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_12_12, 1) = ((MR_Box) (mdb__declarative_oracle__V_18_18));
    }
    {
      mercury__map__set_4_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, ((MR_Box) (mdb__declarative_oracle__V_12_12)), ((MR_Box) (mdb__declarative_oracle__Truth_6)), mdb__declarative_oracle__STATE_VARIABLE_Map_0_10, mdb__declarative_oracle__STATE_VARIABLE_Map_11);
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
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_oracle__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_6_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_7_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__M_4));
    }
  }
}

static void MR_CALL 
mdb__declarative_oracle__set_kb_complete_map_3_p_0(
  MR_Word mdb__declarative_oracle__M_4,
  MR_Word mdb__declarative_oracle__KB_5,
  MR_Word * mdb__declarative_oracle__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_oracle__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_6_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__M_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_8_8));
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
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_oracle__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__M_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_7_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_8_8));
    }
  }
}

static void MR_CALL 
mdb__declarative_oracle__get_kb_exceptions_map_2_p_0(
  MR_Word mdb__declarative_oracle__KB_3,
  MR_Word * mdb__declarative_oracle__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 1)));

    *mdb__declarative_oracle__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 2)));
  }
}

static void MR_CALL 
mdb__declarative_oracle__get_kb_complete_map_2_p_0(
  MR_Word mdb__declarative_oracle__KB_3,
  MR_Word * mdb__declarative_oracle__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_5_5;

    *mdb__declarative_oracle__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 1)));
    mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 2)));
  }
}

static void MR_CALL 
mdb__declarative_oracle__get_kb_ground_map_2_p_0(
  MR_Word mdb__declarative_oracle__KB_3,
  MR_Word * mdb__declarative_oracle__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__V_4_4;
    MR_Word mdb__declarative_oracle__V_5_5;

    *mdb__declarative_oracle__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 0)));
    mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 1)));
    mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 2)));
  }
}

static void MR_CALL 
mdb__declarative_oracle__format_trust_display_4_p_0(
  MR_Integer mdb__declarative_oracle__Id_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
  MR_String mdb__declarative_oracle__S_3,
  MR_String * mdb__declarative_oracle__HeadVar__4_4)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;

    switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String mdb__declarative_oracle__Display_57;
          MR_String mdb__declarative_oracle__V_58_58;

          {
            mdb__declarative_oracle__V_58_58 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Id_1);
          }
          {
            mdb__declarative_oracle__Display_57 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__V_58_58, (MR_String) ": the Mercury standard library\n");
          }
          {
            *mdb__declarative_oracle__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__S_3, mdb__declarative_oracle__Display_57);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_oracle__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
          MR_String mdb__declarative_oracle__Display_8;
          MR_String mdb__declarative_oracle__ModuleNameStr_9;
          MR_String mdb__declarative_oracle__V_10_10;
          MR_String mdb__declarative_oracle__V_11_11;
          MR_String mdb__declarative_oracle__V_13_13;

          {
            mdb__declarative_oracle__ModuleNameStr_9 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_6);
          }
          {
            mdb__declarative_oracle__V_10_10 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Id_1);
          }
          {
            mdb__declarative_oracle__V_13_13 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_9, (MR_String) "\n");
          }
          {
            mdb__declarative_oracle__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) ": module ", mdb__declarative_oracle__V_13_13);
          }
          {
            mdb__declarative_oracle__Display_8 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__V_10_10, mdb__declarative_oracle__V_11_11);
          }
          {
            *mdb__declarative_oracle__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__S_3, mdb__declarative_oracle__Display_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_oracle__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
          MR_String mdb__declarative_oracle__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
          MR_Integer mdb__declarative_oracle__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
          MR_String mdb__declarative_oracle__Display_20;
          MR_String mdb__declarative_oracle__ModuleNameStr_21;
          MR_String mdb__declarative_oracle__V_22_22;
          MR_String mdb__declarative_oracle__V_23_23;
          MR_String mdb__declarative_oracle__V_25_25;
          MR_String mdb__declarative_oracle__V_26_26;
          MR_String mdb__declarative_oracle__V_28_28;
          MR_String mdb__declarative_oracle__V_29_29;
          MR_String mdb__declarative_oracle__V_31_31;
          MR_String mdb__declarative_oracle__V_32_32;

          {
            mdb__declarative_oracle__ModuleNameStr_21 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_16);
          }
          {
            mdb__declarative_oracle__V_22_22 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Id_1);
          }
          {
            mdb__declarative_oracle__V_32_32 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Arity_18);
          }
          {
            mdb__declarative_oracle__V_31_31 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__V_32_32, (MR_String) "\n");
          }
          {
            mdb__declarative_oracle__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__declarative_oracle__V_31_31);
          }
          {
            mdb__declarative_oracle__V_28_28 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__Name_17, mdb__declarative_oracle__V_29_29);
          }
          {
            mdb__declarative_oracle__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_oracle__V_28_28);
          }
          {
            mdb__declarative_oracle__V_25_25 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_21, mdb__declarative_oracle__V_26_26);
          }
          {
            mdb__declarative_oracle__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) ": predicate ", mdb__declarative_oracle__V_25_25);
          }
          {
            mdb__declarative_oracle__Display_20 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__V_22_22, mdb__declarative_oracle__V_23_23);
          }
          {
            *mdb__declarative_oracle__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__S_3, mdb__declarative_oracle__Display_20);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word mdb__declarative_oracle__ModuleName_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
          MR_String mdb__declarative_oracle__Name_36 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
          MR_Integer mdb__declarative_oracle__Arity_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
          MR_String mdb__declarative_oracle__Display_39;
          MR_String mdb__declarative_oracle__ModuleNameStr_40;
          MR_String mdb__declarative_oracle__V_41_41;
          MR_String mdb__declarative_oracle__V_42_42;
          MR_String mdb__declarative_oracle__V_44_44;
          MR_String mdb__declarative_oracle__V_45_45;
          MR_String mdb__declarative_oracle__V_47_47;
          MR_String mdb__declarative_oracle__V_48_48;
          MR_String mdb__declarative_oracle__V_50_50;
          MR_String mdb__declarative_oracle__V_51_51;
          MR_Integer mdb__declarative_oracle__V_52_52;

          {
            mdb__declarative_oracle__ModuleNameStr_40 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_35);
          }
          {
            mdb__declarative_oracle__V_41_41 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Id_1);
          }
          mdb__declarative_oracle__V_52_52 = (mdb__declarative_oracle__Arity_37 - (MR_Integer) 1);
          {
            mdb__declarative_oracle__V_51_51 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__V_52_52);
          }
          {
            mdb__declarative_oracle__V_50_50 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__V_51_51, (MR_String) "\n");
          }
          {
            mdb__declarative_oracle__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__declarative_oracle__V_50_50);
          }
          {
            mdb__declarative_oracle__V_47_47 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__Name_36, mdb__declarative_oracle__V_48_48);
          }
          {
            mdb__declarative_oracle__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_oracle__V_47_47);
          }
          {
            mdb__declarative_oracle__V_44_44 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_40, mdb__declarative_oracle__V_45_45);
          }
          {
            mdb__declarative_oracle__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) ": function ", mdb__declarative_oracle__V_44_44);
          }
          {
            mdb__declarative_oracle__Display_39 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__V_41_41, mdb__declarative_oracle__V_42_42);
          }
          {
            *mdb__declarative_oracle__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__S_3, mdb__declarative_oracle__Display_39);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__declarative_oracle__format_trust_command_3_p_0(
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
  MR_String mdb__declarative_oracle__S_2,
  MR_String * mdb__declarative_oracle__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;

    switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            *mdb__declarative_oracle__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__S_2, (MR_String) "trust std lib\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_oracle__ModuleName_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
          MR_String mdb__declarative_oracle__ModuleNameStr_6;
          MR_String mdb__declarative_oracle__V_7_7;
          MR_String mdb__declarative_oracle__V_9_9;

          {
            mdb__declarative_oracle__ModuleNameStr_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_4);
          }
          {
            mdb__declarative_oracle__V_9_9 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_6, (MR_String) "\n");
          }
          {
            mdb__declarative_oracle__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "trust ", mdb__declarative_oracle__V_9_9);
          }
          {
            *mdb__declarative_oracle__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__S_2, mdb__declarative_oracle__V_7_7);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_oracle__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
          MR_String mdb__declarative_oracle__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer mdb__declarative_oracle__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
          MR_String mdb__declarative_oracle__Command_15;
          MR_String mdb__declarative_oracle__ArityStr_16;
          MR_String mdb__declarative_oracle__ModuleNameStr_17;
          MR_String mdb__declarative_oracle__V_19_19;
          MR_String mdb__declarative_oracle__V_20_20;
          MR_String mdb__declarative_oracle__V_22_22;
          MR_String mdb__declarative_oracle__V_23_23;
          MR_String mdb__declarative_oracle__V_25_25;

          {
            mdb__declarative_oracle__ArityStr_16 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Arity_13);
          }
          {
            mdb__declarative_oracle__ModuleNameStr_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_11);
          }
          {
            mdb__declarative_oracle__V_25_25 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ArityStr_16, (MR_String) "\n");
          }
          {
            mdb__declarative_oracle__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__declarative_oracle__V_25_25);
          }
          {
            mdb__declarative_oracle__V_22_22 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__Name_12, mdb__declarative_oracle__V_23_23);
          }
          {
            mdb__declarative_oracle__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_oracle__V_22_22);
          }
          {
            mdb__declarative_oracle__V_19_19 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_17, mdb__declarative_oracle__V_20_20);
          }
          {
            mdb__declarative_oracle__Command_15 = mercury__string__f_43_43_2_f_0((MR_String) "trust pred*", mdb__declarative_oracle__V_19_19);
          }
          {
            *mdb__declarative_oracle__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__S_2, mdb__declarative_oracle__Command_15);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word mdb__declarative_oracle__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
          MR_String mdb__declarative_oracle__Name_28 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer mdb__declarative_oracle__Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
          MR_String mdb__declarative_oracle__Command_31;
          MR_String mdb__declarative_oracle__ArityStr_32;
          MR_String mdb__declarative_oracle__ModuleNameStr_33;
          MR_Integer mdb__declarative_oracle__V_34_34 = (mdb__declarative_oracle__Arity_29 - (MR_Integer) 1);
          MR_String mdb__declarative_oracle__V_37_37;
          MR_String mdb__declarative_oracle__V_38_38;
          MR_String mdb__declarative_oracle__V_40_40;
          MR_String mdb__declarative_oracle__V_41_41;
          MR_String mdb__declarative_oracle__V_43_43;

          {
            mdb__declarative_oracle__ArityStr_32 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__V_34_34);
          }
          {
            mdb__declarative_oracle__ModuleNameStr_33 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_27);
          }
          {
            mdb__declarative_oracle__V_43_43 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ArityStr_32, (MR_String) "\n");
          }
          {
            mdb__declarative_oracle__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__declarative_oracle__V_43_43);
          }
          {
            mdb__declarative_oracle__V_40_40 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__Name_28, mdb__declarative_oracle__V_41_41);
          }
          {
            mdb__declarative_oracle__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_oracle__V_40_40);
          }
          {
            mdb__declarative_oracle__V_37_37 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_33, mdb__declarative_oracle__V_38_38);
          }
          {
            mdb__declarative_oracle__Command_31 = mercury__string__f_43_43_2_f_0((MR_String) "trust func*", mdb__declarative_oracle__V_37_37);
          }
          {
            *mdb__declarative_oracle__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__S_2, mdb__declarative_oracle__Command_31);
          }
        }
        break;
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
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__User0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__UserResponse_12;
    MR_Word mdb__declarative_oracle__User_13;
    MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43;
    MR_Word mdb__declarative_oracle__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__V_72_72;
    MR_Word mdb__declarative_oracle__V_73_73;
    MR_Word mdb__declarative_oracle__V_75_75;
    MR_Word mdb__declarative_oracle__V_76_76;
    MR_Word mdb__declarative_oracle__V_74_74;

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
          MR_Word mdb__declarative_oracle__V_62_62;
          MR_Word mdb__declarative_oracle__V_63_63;
          MR_Word mdb__declarative_oracle__V_64_64;
          MR_Word mdb__declarative_oracle__V_53_53;
          MR_Word mdb__declarative_oracle__V_54_54;
          MR_Word mdb__declarative_oracle__V_55_55;
          MR_Word mdb__declarative_oracle__V_60_60;
          MR_Word mdb__declarative_oracle__V_61_61;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdb__declarative_oracle__OracleResponse_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_oracle__Answer_15));
          }
          mdb__declarative_oracle__Current0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 0)));
          mdb__declarative_oracle__Revised0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 1)));
          mdb__declarative_oracle__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 2)));
          mdb__declarative_oracle__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 3)));
          mdb__declarative_oracle__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 4)));
          {
            mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(mdb__declarative_oracle__Question_14, mdb__declarative_oracle__Revised0_17, &mdb__declarative_oracle__Revised_18);
          }
          {
            mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(mdb__declarative_oracle__Question_14, mdb__declarative_oracle__Answer_15, mdb__declarative_oracle__Current0_16, &mdb__declarative_oracle__Current_19);
          }
          mdb__declarative_oracle__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 0)));
          mdb__declarative_oracle__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 1)));
          mdb__declarative_oracle__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 2)));
          mdb__declarative_oracle__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 3)));
          mdb__declarative_oracle__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 4)));
          {
            mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, 0) = ((MR_Box) (mdb__declarative_oracle__Current_19));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, 1) = ((MR_Box) (mdb__declarative_oracle__Revised_18));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, 2) = ((MR_Box) (mdb__declarative_oracle__V_62_62));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, 3) = ((MR_Box) (mdb__declarative_oracle__V_63_63));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, 4) = ((MR_Box) (mdb__declarative_oracle__V_64_64));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_oracle__Atom_20;
          MR_Box mdb__declarative_oracle__V_38_38;
          MR_Word mdb__declarative_oracle__V_40_40;
          MR_Box mdb__declarative_oracle__V_41_41;
          MR_Word mdb__declarative_oracle__Question_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 0)));
          MR_Word mdb__declarative_oracle__V_70_70;

          {
            mdb__declarative_oracle__Atom_20 = mdb__declarative_debugger__get_decl_question_atom_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_77, mdb__declarative_oracle__Question_45);
          }
          mdb__declarative_oracle__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_20, (MR_Integer) 0)));
          mdb__declarative_oracle__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_20, (MR_Integer) 1)));
          {
            mdb__declarative_oracle__add_trusted_pred_or_func_3_p_0(mdb__declarative_oracle__V_38_38, mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, &mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43);
          }
          {
            mdb__declarative_oracle__V_41_41 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_77, mdb__declarative_oracle__Question_45);
          }
          {
            mdb__declarative_oracle__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), mdb__declarative_oracle__V_40_40, 0) = mdb__declarative_oracle__V_41_41;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdb__declarative_oracle__OracleResponse_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_40_40));
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
              MR_Box mdb__declarative_oracle__V_34_34;
              MR_Word mdb__declarative_oracle__V_36_36;
              MR_Box mdb__declarative_oracle__V_37_37;
              MR_Word mdb__declarative_oracle__Question_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 1)));
              MR_Word mdb__declarative_oracle__Atom_47;
              MR_Word mdb__declarative_oracle__V_71_71;
              MR_String mdb__declarative_oracle__V_23_23;
              MR_Integer mdb__declarative_oracle__V_24_24;
              MR_Word mdb__declarative_oracle__V_25_25;

              {
                mdb__declarative_oracle__Atom_47 = mdb__declarative_debugger__get_decl_question_atom_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_77, mdb__declarative_oracle__Question_46);
              }
              mdb__declarative_oracle__V_34_34 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_47, (MR_Integer) 0)));
              mdb__declarative_oracle__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_47, (MR_Integer) 1)));
              {
                mdb__declarative_oracle__ProcLabel_21 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_oracle__V_34_34);
              }
              {
                mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_oracle__ProcLabel_21, &mdb__declarative_oracle__Module_22, &mdb__declarative_oracle__V_23_23, &mdb__declarative_oracle__V_24_24, &mdb__declarative_oracle__V_25_25);
              }
              {
                mdb__declarative_oracle__add_trusted_module_3_p_0(mdb__declarative_oracle__Module_22, mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, &mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43);
              }
              {
                mdb__declarative_oracle__V_37_37 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_77, mdb__declarative_oracle__Question_46);
              }
              {
                mdb__declarative_oracle__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), mdb__declarative_oracle__V_36_36, 0) = mdb__declarative_oracle__V_37_37;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_oracle__OracleResponse_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_36_36));
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
    mdb__declarative_oracle__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, (MR_Integer) 0)));
    mdb__declarative_oracle__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, (MR_Integer) 1)));
    mdb__declarative_oracle__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, (MR_Integer) 2)));
    mdb__declarative_oracle__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, (MR_Integer) 3)));
    mdb__declarative_oracle__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_30 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_72_72));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_73_73));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__User_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__V_75_75));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__V_76_76));
    }
  }
}

void MR_CALL 
mdb__declarative_oracle__reset_oracle_knowledge_base_2_p_0(
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_6)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__TypeCtorInfo_6_28 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0;
    MR_Word mdb__declarative_oracle__TypeCtorInfo_7_29;
    MR_Word mdb__declarative_oracle__EmptyKB_4;
    MR_Word mdb__declarative_oracle__V_8_8;
    MR_Word mdb__declarative_oracle__V_11_11;
    MR_Word mdb__declarative_oracle__V_12_12;
    MR_Word mdb__declarative_oracle__V_13_13;
    MR_Word mdb__declarative_oracle__V_16_16;
    MR_Word mdb__declarative_oracle__V_17_17;
    MR_Word mdb__declarative_oracle__V_18_18;
    MR_Word mdb__declarative_oracle__G_24;
    MR_Word mdb__declarative_oracle__C_25;
    MR_Word mdb__declarative_oracle__X_26;
    MR_Word mdb__declarative_oracle__V_10_10;

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
    mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5, (MR_Integer) 0)));
    mdb__declarative_oracle__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5, (MR_Integer) 1)));
    mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5, (MR_Integer) 2)));
    mdb__declarative_oracle__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5, (MR_Integer) 3)));
    mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5, (MR_Integer) 4)));
    mdb__declarative_oracle__V_16_16 = mdb__declarative_oracle__V_11_11;
    mdb__declarative_oracle__V_17_17 = mdb__declarative_oracle__V_12_12;
    mdb__declarative_oracle__V_18_18 = mdb__declarative_oracle__V_13_13;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__EmptyKB_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_8_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_16_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__V_17_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__V_18_18));
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
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__User0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__User_7;
    MR_Word mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__V_15_15;
    MR_Word mdb__declarative_oracle__V_16_16;
    MR_Word mdb__declarative_oracle__V_18_18;
    MR_Word mdb__declarative_oracle__V_19_19;
    MR_Word mdb__declarative_oracle__V_17_17;

    {
      mdb__declarative_user__set_user_testing_flag_3_p_0(mdb__declarative_oracle__Testing_4, mdb__declarative_oracle__User0_6, &mdb__declarative_oracle__User_7);
    }
    mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 0)));
    mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 1)));
    mdb__declarative_oracle__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 2)));
    mdb__declarative_oracle__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 3)));
    mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_15_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_16_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__User_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__V_18_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__V_19_19));
    }
  }
}

MR_Word MR_CALL 
mdb__declarative_oracle__get_user_input_stream_1_f_0(
  MR_Word mdb__declarative_oracle__Oracle_3)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__HeadVar__2_2;
    MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 4)));

    {
      mdb__declarative_oracle__HeadVar__2_2 = mdb__declarative_user__get_user_input_stream_1_f_0(mdb__declarative_oracle__V_4_4);
    }
    return mdb__declarative_oracle__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mdb__declarative_oracle__get_user_output_stream_1_f_0(
  MR_Word mdb__declarative_oracle__Oracle_3)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__HeadVar__2_2;
    MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 4)));

    {
      mdb__declarative_oracle__HeadVar__2_2 = mdb__declarative_user__get_user_output_stream_1_f_0(mdb__declarative_oracle__V_4_4);
    }
    return mdb__declarative_oracle__HeadVar__2_2;
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
    MR_Box mdb__declarative_oracle__V_8_8;
    MR_Word mdb__declarative_oracle__Trusted_19;
    MR_Word mdb__declarative_oracle__ProcLabel_20;
    MR_Word mdb__declarative_oracle__V_11_11;
    MR_Word mdb__declarative_oracle__V_43_43;
    MR_Word mdb__declarative_oracle__V_44_44;
    MR_Word mdb__declarative_oracle__V_45_45;
    MR_Word mdb__declarative_oracle__V_46_46;

    {
      mdb__declarative_oracle__Atom_7 = mdb__declarative_debugger__get_decl_question_atom_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_16, mdb__declarative_oracle__Question_5);
    }
    mdb__declarative_oracle__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_7, (MR_Integer) 0)));
    mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_7, (MR_Integer) 1)));
    mdb__declarative_oracle__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 0)));
    mdb__declarative_oracle__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 1)));
    mdb__declarative_oracle__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 2)));
    mdb__declarative_oracle__Trusted_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 3)));
    mdb__declarative_oracle__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 4)));
    {
      mdb__declarative_oracle__ProcLabel_20 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_oracle__V_8_8);
    }
    if (((MR_tag((MR_Word) mdb__declarative_oracle__ProcLabel_20)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdb__declarative_oracle__Module_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__PredOrFunc_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 1)));
        MR_String mdb__declarative_oracle__Name_24 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 3)));
        MR_Integer mdb__declarative_oracle__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 4)));
        MR_Word mdb__declarative_oracle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 2)));
        MR_Integer mdb__declarative_oracle__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 5)));

        switch (mdb__declarative_oracle__PredOrFunc_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word mdb__declarative_oracle__V_39_39;
              MR_Integer mdb__declarative_oracle__V_32_32;
              MR_Box mdb__declarative_oracle__conv0_V_32_32;

              {
                mdb__declarative_oracle__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), mdb__declarative_oracle__V_39_39, 0) = ((MR_Box) (mdb__declarative_oracle__Module_21));
                MR_hl_field(MR_mktag(3), mdb__declarative_oracle__V_39_39, 1) = ((MR_Box) (mdb__declarative_oracle__Name_24));
                MR_hl_field(MR_mktag(3), mdb__declarative_oracle__V_39_39, 2) = ((MR_Box) (mdb__declarative_oracle__Arity_25));
              }
              {
                mdb__declarative_oracle__succeeded = mercury__bimap__search_3_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_oracle__Trusted_19, ((MR_Box) (mdb__declarative_oracle__V_39_39)), &mdb__declarative_oracle__conv0_V_32_32);
              }
              if (mdb__declarative_oracle__succeeded)
                {
                  mdb__declarative_oracle__V_32_32 = ((MR_Integer) mdb__declarative_oracle__conv0_V_32_32);
                  mdb__declarative_oracle__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word mdb__declarative_oracle__V_40_40;
              MR_Integer mdb__declarative_oracle__V_31_31;
              MR_Box mdb__declarative_oracle__conv1_V_31_31;

              {
                mdb__declarative_oracle__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), mdb__declarative_oracle__V_40_40, 0) = ((MR_Box) (mdb__declarative_oracle__Module_21));
                MR_hl_field(MR_mktag(2), mdb__declarative_oracle__V_40_40, 1) = ((MR_Box) (mdb__declarative_oracle__Name_24));
                MR_hl_field(MR_mktag(2), mdb__declarative_oracle__V_40_40, 2) = ((MR_Box) (mdb__declarative_oracle__Arity_25));
              }
              {
                mdb__declarative_oracle__succeeded = mercury__bimap__search_3_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_oracle__Trusted_19, ((MR_Box) (mdb__declarative_oracle__V_40_40)), &mdb__declarative_oracle__conv1_V_31_31);
              }
              if (mdb__declarative_oracle__succeeded)
                {
                  mdb__declarative_oracle__V_31_31 = ((MR_Integer) mdb__declarative_oracle__conv1_V_31_31);
                  mdb__declarative_oracle__succeeded = MR_TRUE;
                }
            }
            break;
        }
        if (!(mdb__declarative_oracle__succeeded))
          {
            {
              MR_Word mdb__declarative_oracle__V_41_41;
              MR_Integer mdb__declarative_oracle__V_30_30;
              MR_Box mdb__declarative_oracle__conv2_V_30_30;

              {
                mdb__declarative_oracle__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdb__declarative_oracle__V_41_41, 0) = ((MR_Box) (mdb__declarative_oracle__Module_21));
              }
              {
                mdb__declarative_oracle__succeeded = mercury__bimap__search_3_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_oracle__Trusted_19, ((MR_Box) (mdb__declarative_oracle__V_41_41)), &mdb__declarative_oracle__conv2_V_30_30);
              }
              if (mdb__declarative_oracle__succeeded)
                {
                  mdb__declarative_oracle__V_30_30 = ((MR_Integer) mdb__declarative_oracle__conv2_V_30_30);
                  mdb__declarative_oracle__succeeded = MR_TRUE;
                }
            }
            if (!(mdb__declarative_oracle__succeeded))
              {
                MR_String mdb__declarative_oracle__ModuleNameStr_29;
                MR_Integer mdb__declarative_oracle__V_27_27;
                MR_Box mdb__declarative_oracle__conv3_V_27_27;

                {
                  mdb__declarative_oracle__succeeded = mercury__bimap__search_3_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_oracle__Trusted_19, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mdb__declarative_oracle__conv3_V_27_27);
                }
                if (mdb__declarative_oracle__succeeded)
                  {
                    mdb__declarative_oracle__V_27_27 = ((MR_Integer) mdb__declarative_oracle__conv3_V_27_27);
                    mdb__declarative_oracle__succeeded = MR_TRUE;
                  }
                if (mdb__declarative_oracle__succeeded)
                  {
                    if (((MR_tag((MR_Word) mdb__declarative_oracle__Module_21)) == (MR_mktag((MR_Integer) 1))))
                      {
                        MR_Word mdb__declarative_oracle__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Module_21, (MR_Integer) 0)));

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
        MR_Box mdb__declarative_oracle__V_9_9;

        {
          mdb__declarative_oracle__V_9_9 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_16, mdb__declarative_oracle__Question_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mdb__declarative_oracle__Answer_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = mdb__declarative_oracle__V_9_9;
        }
        mdb__declarative_oracle__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mdb__declarative_oracle__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 3)));
        MR_Word mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 4)));

        {
          mdb__declarative_oracle__succeeded = mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(mdb__declarative_oracle__V_10_10, mdb__declarative_oracle__Question_5, mdb__declarative_oracle__Answer_6);
        }
      }
    return mdb__declarative_oracle__succeeded;
  }
}

void MR_CALL 
mdb__declarative_oracle__set_browser_state_3_p_0(
  MR_Word mdb__declarative_oracle__Browser_4,
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7,
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_8)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__User_6;
    MR_Word mdb__declarative_oracle__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__V_15_15;
    MR_Word mdb__declarative_oracle__V_16_16;
    MR_Word mdb__declarative_oracle__V_18_18;
    MR_Word mdb__declarative_oracle__V_19_19;
    MR_Word mdb__declarative_oracle__V_17_17;

    {
      mdb__declarative_user__set_browser_state_3_p_0(mdb__declarative_oracle__Browser_4, mdb__declarative_oracle__V_9_9, &mdb__declarative_oracle__User_6);
    }
    mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 0)));
    mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 1)));
    mdb__declarative_oracle__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 2)));
    mdb__declarative_oracle__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 3)));
    mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_15_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_16_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__User_6));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__V_18_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__V_19_19));
    }
  }
}

MR_Word MR_CALL 
mdb__declarative_oracle__get_browser_state_1_f_0(
  MR_Word mdb__declarative_oracle__Oracle_3)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__HeadVar__2_2;
    MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 4)));

    {
      mdb__declarative_oracle__HeadVar__2_2 = mdb__declarative_user__get_browser_state_1_f_0(mdb__declarative_oracle__V_4_4);
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
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle2_5, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle2_5, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle2_5, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle2_5, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle2_5, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_4, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_4, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_4, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_4, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_4, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_oracle__Oracle3_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_12_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_7_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_14_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__V_15_15));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__V_16_16));
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
    MR_Word mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__Answer_7;

    switch (MR_tag((MR_Word) mdb__declarative_oracle__Question_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mdb__declarative_oracle__Node_37 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_4, (MR_Integer) 0));
          MR_Word mdb__declarative_oracle__Atom_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_4, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__Map_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 0)));
          MR_Word mdb__declarative_oracle__Truth_41;
          MR_Word mdb__declarative_oracle__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_4, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 2)));
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
          MR_Box mdb__declarative_oracle__Node_45 = (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_4, (MR_Integer) 0));
          MR_Word mdb__declarative_oracle__Call_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_4, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__CMap_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__Truth_49;
          MR_Word mdb__declarative_oracle___Solns_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_4, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 0)));
          MR_Word mdb__declarative_oracle__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 2)));
          MR_Box mdb__declarative_oracle__conv0_Truth_49;

          {
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, mdb__declarative_oracle__CMap_48, ((MR_Box) (mdb__declarative_oracle__Call_46)), &mdb__declarative_oracle__conv0_Truth_49);
          }
          if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__Truth_49 = ((MR_Word) mdb__declarative_oracle__conv0_Truth_49);
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
          if (mdb__declarative_oracle__succeeded)
            {
              {
                mdb__declarative_oracle__Answer_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 0) = mdb__declarative_oracle__Node_45;
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 1) = ((MR_Box) (mdb__declarative_oracle__Truth_49));
              }
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mdb__declarative_oracle__Node_53 = (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_4, (MR_Integer) 0));
          MR_Word mdb__declarative_oracle__Call_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_4, (MR_Integer) 1)));
          MR_Word mdb__declarative_oracle__Exception_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_4, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__XMap_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 2)));
          MR_Word mdb__declarative_oracle__X_57;
          MR_Word mdb__declarative_oracle__Possible_58;
          MR_Word mdb__declarative_oracle__Impossible_59;
          MR_Word mdb__declarative_oracle__Inadmissible_60;
          MR_Word mdb__declarative_oracle__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 0)));
          MR_Word mdb__declarative_oracle__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 1)));
          MR_Box mdb__declarative_oracle__conv1_X_57;
          MR_Word mdb__declarative_oracle__TypeCtorInfo_41_70;

          {
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, mdb__declarative_oracle__XMap_56, ((MR_Box) (mdb__declarative_oracle__Call_54)), &mdb__declarative_oracle__conv1_X_57);
          }
          if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__X_57 = ((MR_Word) mdb__declarative_oracle__conv1_X_57);
              mdb__declarative_oracle__succeeded = MR_TRUE;
            }
          if (mdb__declarative_oracle__succeeded)
            {
              mdb__declarative_oracle__Possible_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_57, (MR_Integer) 0)));
              mdb__declarative_oracle__Impossible_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_57, (MR_Integer) 1)));
              mdb__declarative_oracle__Inadmissible_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_57, (MR_Integer) 2)));
              mdb__declarative_oracle__TypeCtorInfo_41_70 = (MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0;
              {
                mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0(mdb__declarative_oracle__TypeCtorInfo_41_70, ((MR_Box) (mdb__declarative_oracle__Exception_55)), mdb__declarative_oracle__Possible_58);
              }
              if (mdb__declarative_oracle__succeeded)
                {
                  {
                    mdb__declarative_oracle__Answer_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 0) = mdb__declarative_oracle__Node_53;
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 1) = ((MR_Box) ((MR_Integer) 0));
                  }
                  mdb__declarative_oracle__succeeded = MR_TRUE;
                }
              else
                {
                  {
                    mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_55)), mdb__declarative_oracle__Impossible_59);
                  }
                  if (mdb__declarative_oracle__succeeded)
                    {
                      {
                        mdb__declarative_oracle__Answer_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 0) = mdb__declarative_oracle__Node_53;
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 1) = ((MR_Box) ((MR_Integer) 1));
                      }
                      mdb__declarative_oracle__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word mdb__declarative_oracle__V_63_63;

                      {
                        mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_55)), mdb__declarative_oracle__Inadmissible_60);
                      }
                      if (mdb__declarative_oracle__succeeded)
                        {
                          mdb__declarative_oracle__V_63_63 = (MR_Integer) 2;
                          {
                            mdb__declarative_oracle__Answer_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 0) = mdb__declarative_oracle__Node_53;
                            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 1) = ((MR_Box) (mdb__declarative_oracle__V_63_63));
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
        MR_Word mdb__declarative_oracle__V_25_25;
        MR_Word mdb__declarative_oracle__V_26_26;
        MR_Word mdb__declarative_oracle__V_27_27;
        MR_Word mdb__declarative_oracle__V_19_19;
        MR_Word mdb__declarative_oracle__V_20_20;
        MR_Word mdb__declarative_oracle__V_21_21;
        MR_Word mdb__declarative_oracle__V_22_22;
        MR_Word mdb__declarative_oracle__V_23_23;
        MR_Word mdb__declarative_oracle__V_24_24;

        {
          mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(mdb__declarative_oracle__Question_4, mdb__declarative_oracle__Current0_6, &mdb__declarative_oracle__Current_8);
        }
        mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 0)));
        mdb__declarative_oracle__Revised0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1)));
        mdb__declarative_oracle__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2)));
        mdb__declarative_oracle__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3)));
        mdb__declarative_oracle__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 4)));
        {
          mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(mdb__declarative_oracle__Question_4, mdb__declarative_oracle__Answer_7, mdb__declarative_oracle__Revised0_9, &mdb__declarative_oracle__Revised_10);
        }
        mdb__declarative_oracle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 0)));
        mdb__declarative_oracle__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1)));
        mdb__declarative_oracle__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2)));
        mdb__declarative_oracle__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3)));
        mdb__declarative_oracle__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 4)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          *mdb__declarative_oracle__STATE_VARIABLE_Oracle_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Current_8));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Revised_10));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_25_25));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__V_26_26));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__V_27_27));
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
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__User0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__User_15;
    MR_Word mdb__declarative_oracle__Oracle1_16;
    MR_Word mdb__declarative_oracle__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__V_25_25;
    MR_Word mdb__declarative_oracle__V_26_26;
    MR_Word mdb__declarative_oracle__V_28_28;
    MR_Word mdb__declarative_oracle__V_29_29;
    MR_Word mdb__declarative_oracle__V_27_27;

    {
      mdb__declarative_user__user_confirm_bug_6_p_0(mdb__declarative_oracle__Bug_8, mdb__declarative_oracle__Confirmation_10, mdb__declarative_oracle__User0_14, &mdb__declarative_oracle__User_15);
    }
    mdb__declarative_oracle__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 0)));
    mdb__declarative_oracle__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 1)));
    mdb__declarative_oracle__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 2)));
    mdb__declarative_oracle__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 3)));
    mdb__declarative_oracle__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 4)));
    {
      mdb__declarative_oracle__Oracle1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_16, 0) = ((MR_Box) (mdb__declarative_oracle__V_25_25));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_16, 1) = ((MR_Box) (mdb__declarative_oracle__V_26_26));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_16, 2) = ((MR_Box) (mdb__declarative_oracle__User_15));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_16, 3) = ((MR_Box) (mdb__declarative_oracle__V_28_28));
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_16, 4) = ((MR_Box) (mdb__declarative_oracle__V_29_29));
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
          MR_Word mdb__declarative_oracle__V_20_20;
          MR_Box mdb__declarative_oracle__conv1_Oracle_12;

          {
            mdb__declarative_oracle__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_20_20, 0) = ((MR_Box) (&mdb__declarative_oracle_scalar_common_3[1]));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_20_20, 1) = ((MR_Box) (mdb__declarative_oracle__oracle_confirm_bug_7_p_0_1));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_20_20, 3) = ((MR_Box) (mdb__declarative_oracle__TypeInfo_for_T_30));
          }
          {
            mdb__declarative_oracle__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__TypeInfo_35_35, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__TypeInfo_35_35, 1) = ((MR_Box) (mdb__declarative_oracle__TypeInfo_for_T_30));
          }
          {
            mercury__list__foldl_4_p_0(mdb__declarative_oracle__TypeInfo_35_35, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0, (MR_Word) mdb__declarative_oracle__V_20_20, (MR_Word) mdb__declarative_oracle__Evidence_9, ((MR_Box) (mdb__declarative_oracle__Oracle1_16)), &mdb__declarative_oracle__conv1_Oracle_12);
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
        MR_Word mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, (MR_Integer) 3)));
        MR_Word mdb__declarative_oracle__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, (MR_Integer) 4)));
        MR_Word mdb__declarative_oracle__DeclTruth_32;
        MR_Word mdb__declarative_oracle__Answer_30;
        MR_Box mdb__declarative_oracle__V_31_31;

        switch (MR_tag((MR_Word) mdb__declarative_oracle__Question_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mdb__declarative_oracle__Node_36 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_8, (MR_Integer) 0));
              MR_Word mdb__declarative_oracle__Atom_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_8, (MR_Integer) 2)));
              MR_Word mdb__declarative_oracle__Map_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 0)));
              MR_Word mdb__declarative_oracle__Truth_40;
              MR_Word mdb__declarative_oracle__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_8, (MR_Integer) 1)));
              MR_Word mdb__declarative_oracle__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 1)));
              MR_Word mdb__declarative_oracle__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 2)));
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
              MR_Box mdb__declarative_oracle__Node_44 = (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_8, (MR_Integer) 0));
              MR_Word mdb__declarative_oracle__Call_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_8, (MR_Integer) 1)));
              MR_Word mdb__declarative_oracle__CMap_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 1)));
              MR_Word mdb__declarative_oracle__Truth_48;
              MR_Word mdb__declarative_oracle___Solns_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_8, (MR_Integer) 2)));
              MR_Word mdb__declarative_oracle__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 0)));
              MR_Word mdb__declarative_oracle__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 2)));
              MR_Box mdb__declarative_oracle__conv0_Truth_48;

              {
                mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, mdb__declarative_oracle__CMap_47, ((MR_Box) (mdb__declarative_oracle__Call_45)), &mdb__declarative_oracle__conv0_Truth_48);
              }
              if (mdb__declarative_oracle__succeeded)
                {
                  mdb__declarative_oracle__Truth_48 = ((MR_Word) mdb__declarative_oracle__conv0_Truth_48);
                  mdb__declarative_oracle__succeeded = MR_TRUE;
                }
              if (mdb__declarative_oracle__succeeded)
                {
                  {
                    mdb__declarative_oracle__Answer_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 0) = mdb__declarative_oracle__Node_44;
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 1) = ((MR_Box) (mdb__declarative_oracle__Truth_48));
                  }
                  mdb__declarative_oracle__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mdb__declarative_oracle__Node_52 = (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_8, (MR_Integer) 0));
              MR_Word mdb__declarative_oracle__Call_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_8, (MR_Integer) 1)));
              MR_Word mdb__declarative_oracle__Exception_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_8, (MR_Integer) 2)));
              MR_Word mdb__declarative_oracle__XMap_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 2)));
              MR_Word mdb__declarative_oracle__X_56;
              MR_Word mdb__declarative_oracle__Possible_57;
              MR_Word mdb__declarative_oracle__Impossible_58;
              MR_Word mdb__declarative_oracle__Inadmissible_59;
              MR_Word mdb__declarative_oracle__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 0)));
              MR_Word mdb__declarative_oracle__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 1)));
              MR_Box mdb__declarative_oracle__conv1_X_56;
              MR_Word mdb__declarative_oracle__TypeCtorInfo_41_69;

              {
                mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, mdb__declarative_oracle__XMap_55, ((MR_Box) (mdb__declarative_oracle__Call_53)), &mdb__declarative_oracle__conv1_X_56);
              }
              if (mdb__declarative_oracle__succeeded)
                {
                  mdb__declarative_oracle__X_56 = ((MR_Word) mdb__declarative_oracle__conv1_X_56);
                  mdb__declarative_oracle__succeeded = MR_TRUE;
                }
              if (mdb__declarative_oracle__succeeded)
                {
                  mdb__declarative_oracle__Possible_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_56, (MR_Integer) 0)));
                  mdb__declarative_oracle__Impossible_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_56, (MR_Integer) 1)));
                  mdb__declarative_oracle__Inadmissible_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_56, (MR_Integer) 2)));
                  mdb__declarative_oracle__TypeCtorInfo_41_69 = (MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0;
                  {
                    mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0(mdb__declarative_oracle__TypeCtorInfo_41_69, ((MR_Box) (mdb__declarative_oracle__Exception_54)), mdb__declarative_oracle__Possible_57);
                  }
                  if (mdb__declarative_oracle__succeeded)
                    {
                      {
                        mdb__declarative_oracle__Answer_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 0) = mdb__declarative_oracle__Node_52;
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 1) = ((MR_Box) ((MR_Integer) 0));
                      }
                      mdb__declarative_oracle__succeeded = MR_TRUE;
                    }
                  else
                    {
                      {
                        mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_54)), mdb__declarative_oracle__Impossible_58);
                      }
                      if (mdb__declarative_oracle__succeeded)
                        {
                          {
                            mdb__declarative_oracle__Answer_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 0) = mdb__declarative_oracle__Node_52;
                            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 1) = ((MR_Box) ((MR_Integer) 1));
                          }
                          mdb__declarative_oracle__succeeded = MR_TRUE;
                        }
                      else
                        {
                          MR_Word mdb__declarative_oracle__V_62_62;

                          {
                            mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_54)), mdb__declarative_oracle__Inadmissible_59);
                          }
                          if (mdb__declarative_oracle__succeeded)
                            {
                              mdb__declarative_oracle__V_62_62 = (MR_Integer) 2;
                              {
                                mdb__declarative_oracle__Answer_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 0) = mdb__declarative_oracle__Node_52;
                                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 1) = ((MR_Box) (mdb__declarative_oracle__V_62_62));
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
                mdb__declarative_oracle__V_31_31 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, (MR_Integer) 0));
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
mdb__declarative_oracle__get_trusted_list_3_p_0_2(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box * mdb__declarative_oracle__wrapper_arg_3)
{
  {
    MR_Box mdb__declarative_oracle__closure = mdb__declarative_oracle__closure_arg;
    MR_String mdb__declarative_oracle__conv2_HeadVar__3_3;

    {
      mdb__declarative_oracle__format_trust_command_3_p_0(((MR_Word) mdb__declarative_oracle__wrapper_arg_1), ((MR_String) mdb__declarative_oracle__wrapper_arg_2), &mdb__declarative_oracle__conv2_HeadVar__3_3);
    }
    *mdb__declarative_oracle__wrapper_arg_3 = ((MR_Box) (mdb__declarative_oracle__conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_1(
  MR_Box mdb__declarative_oracle__closure_arg,
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
  MR_Box mdb__declarative_oracle__wrapper_arg_3,
  MR_Box * mdb__declarative_oracle__wrapper_arg_4)
{
  {
    MR_Box mdb__declarative_oracle__closure = mdb__declarative_oracle__closure_arg;
    MR_String mdb__declarative_oracle__conv0_HeadVar__4_4;

    {
      mdb__declarative_oracle__format_trust_display_4_p_0(((MR_Integer) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), ((MR_String) mdb__declarative_oracle__wrapper_arg_3), &mdb__declarative_oracle__conv0_HeadVar__4_4);
    }
    *mdb__declarative_oracle__wrapper_arg_4 = ((MR_Box) (mdb__declarative_oracle__conv0_HeadVar__4_4));
  }
}

void MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0(
  MR_Word mdb__declarative_oracle__Oracle_1,
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
  MR_String * mdb__declarative_oracle__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_oracle__succeeded;
    MR_Word mdb__declarative_oracle__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_1, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_1, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_1, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_1, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_1, (MR_Integer) 0)));

    switch (mdb__declarative_oracle__HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdb__declarative_oracle__TypeCtorInfo_32_32 = (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0;
          MR_Word mdb__declarative_oracle__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          MR_Word mdb__declarative_oracle__IdToObjectMap_12;
          MR_String mdb__declarative_oracle__DisplayStr0_13;
          MR_Box mdb__declarative_oracle__conv1_DisplayStr0_13;

          {
            mdb__declarative_oracle__IdToObjectMap_12 = mercury__bimap__reverse_map_1_f_0(mdb__declarative_oracle__TypeCtorInfo_32_32, mdb__declarative_oracle__TypeCtorInfo_33_33, mdb__declarative_oracle__V_40_40);
          }
          {
            mercury__map__foldl_4_p_0(mdb__declarative_oracle__TypeCtorInfo_33_33, mdb__declarative_oracle__TypeCtorInfo_32_32, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdb__declarative_oracle_scalar_common_1[4], mdb__declarative_oracle__IdToObjectMap_12, ((MR_Box) ((MR_String) "")), &mdb__declarative_oracle__conv1_DisplayStr0_13);
          }
          mdb__declarative_oracle__DisplayStr0_13 = ((MR_String) mdb__declarative_oracle__conv1_DisplayStr0_13);
          mdb__declarative_oracle__succeeded = (strcmp(mdb__declarative_oracle__DisplayStr0_13, (MR_String) "") == 0);
          if (mdb__declarative_oracle__succeeded)
            *mdb__declarative_oracle__HeadVar__3_3 = (MR_String) "There are no trusted modules, predicates or functions.\n";
          else
            {
              {
                *mdb__declarative_oracle__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "Trusted Objects:\n", mdb__declarative_oracle__DisplayStr0_13);
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_oracle__TypeCtorInfo_26_26 = (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0;
          MR_Word mdb__declarative_oracle__TrustedObjects_6;
          MR_Box mdb__declarative_oracle__conv3_HeadVar__3_3;

          {
            mdb__declarative_oracle__TrustedObjects_6 = mercury__bimap__ordinates_1_f_0(mdb__declarative_oracle__TypeCtorInfo_26_26, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_oracle__V_40_40);
          }
          {
            mercury__list__foldl_4_p_0(mdb__declarative_oracle__TypeCtorInfo_26_26, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdb__declarative_oracle_scalar_common_1[5], mdb__declarative_oracle__TrustedObjects_6, ((MR_Box) ((MR_String) "")), &mdb__declarative_oracle__conv3_HeadVar__3_3);
          }
          *mdb__declarative_oracle__HeadVar__3_3 = ((MR_String) mdb__declarative_oracle__conv3_HeadVar__3_3);
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
    MR_Word mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 4)));
    MR_Word mdb__declarative_oracle__V_6_6;
    MR_Box mdb__declarative_oracle__conv0_V_6_6;
    MR_Word mdb__declarative_oracle__V_17_17;
    MR_Word mdb__declarative_oracle__V_18_18;
    MR_Word mdb__declarative_oracle__V_19_19;
    MR_Word mdb__declarative_oracle__V_20_20;
    MR_Word mdb__declarative_oracle__V_21_21;
    MR_Word mdb__declarative_oracle__V_22_22;
    MR_Word mdb__declarative_oracle__V_23_23;
    MR_Word mdb__declarative_oracle__V_25_25;
    MR_Word mdb__declarative_oracle__V_24_24;

    {
      mdb__declarative_oracle__succeeded = mercury__bimap__search_3_p_1(mdb__declarative_oracle__TypeCtorInfo_26_26, mdb__declarative_oracle__TypeCtorInfo_27_27, mdb__declarative_oracle__V_11_11, &mdb__declarative_oracle__conv0_V_6_6, ((MR_Box) (mdb__declarative_oracle__Id_4)));
    }
    if (mdb__declarative_oracle__succeeded)
      {
        mdb__declarative_oracle__V_6_6 = ((MR_Word) mdb__declarative_oracle__conv0_V_6_6);
        mdb__declarative_oracle__succeeded = MR_TRUE;
      }
    if (mdb__declarative_oracle__succeeded)
      {
        mdb__declarative_oracle__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0)));
        mdb__declarative_oracle__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1)));
        mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2)));
        mdb__declarative_oracle__Trusted0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3)));
        mdb__declarative_oracle__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 4)));
        {
          mercury__bimap__delete_value_3_p_0(mdb__declarative_oracle__TypeCtorInfo_27_27, mdb__declarative_oracle__TypeCtorInfo_26_26, ((MR_Box) (mdb__declarative_oracle__Id_4)), mdb__declarative_oracle__Trusted0_7, &mdb__declarative_oracle__Trusted_8);
        }
        mdb__declarative_oracle__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0)));
        mdb__declarative_oracle__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1)));
        mdb__declarative_oracle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2)));
        mdb__declarative_oracle__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3)));
        mdb__declarative_oracle__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 4)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          *mdb__declarative_oracle__STATE_VARIABLE_Oracle_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_21_21));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_22_22));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_23_23));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Trusted_8));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__V_25_25));
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
    MR_Word mdb__declarative_oracle__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__V_18_18;
    MR_Word mdb__declarative_oracle__V_19_19;
    MR_Word mdb__declarative_oracle__V_20_20;
    MR_Word mdb__declarative_oracle__V_21_21;
    MR_Word mdb__declarative_oracle__Trusted_8;

    {
      mercury__counter__allocate_3_p_0(&mdb__declarative_oracle__Id_5, mdb__declarative_oracle__Counter0_4, &mdb__declarative_oracle__Counter_6);
    }
    mdb__declarative_oracle__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0)));
    mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1)));
    mdb__declarative_oracle__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2)));
    mdb__declarative_oracle__Trusted0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3)));
    mdb__declarative_oracle__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 4)));
    {
      mdb__declarative_oracle__succeeded = mercury__bimap__insert_4_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (mdb__declarative_oracle__Id_5)), mdb__declarative_oracle__Trusted0_7, &mdb__declarative_oracle__Trusted_8);
    }
    if (mdb__declarative_oracle__succeeded)
      {
        MR_Word mdb__declarative_oracle__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3)));
        MR_Word mdb__declarative_oracle__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 4)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          *mdb__declarative_oracle__STATE_VARIABLE_Oracle_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_22_22));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_23_23));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_24_24));
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
    MR_Word mdb__declarative_oracle__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__V_31_31;
    MR_Word mdb__declarative_oracle__V_32_32;
    MR_Word mdb__declarative_oracle__V_33_33;
    MR_Word mdb__declarative_oracle__V_34_34;
    MR_Word mdb__declarative_oracle__Trusted_20;

    {
      mercury__counter__allocate_3_p_0(&mdb__declarative_oracle__Id_7, mdb__declarative_oracle__Counter0_6, &mdb__declarative_oracle__Counter_8);
    }
    {
      mdb__declarative_oracle__ProcLabel_9 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_oracle__ProcLayout_4);
    }
    if (((MR_tag((MR_Word) mdb__declarative_oracle__ProcLabel_9)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdb__declarative_oracle__V_12_12;
        MR_Integer mdb__declarative_oracle__V_15_15;

        mdb__declarative_oracle__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 0)));
        mdb__declarative_oracle__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 1)));
        mdb__declarative_oracle__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 2)));
        mdb__declarative_oracle__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 3)));
        mdb__declarative_oracle__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 4)));
        mdb__declarative_oracle__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 5)));
      }
    else
      {
        MR_Word mdb__declarative_oracle__V_16_16;
        MR_Word mdb__declarative_oracle__V_17_17;
        MR_Integer mdb__declarative_oracle__V_18_18;

        mdb__declarative_oracle__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 0)));
        mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 1)));
        mdb__declarative_oracle__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 2)));
        mdb__declarative_oracle__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 3)));
        mdb__declarative_oracle__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 4)));
        mdb__declarative_oracle__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_9, (MR_Integer) 5)));
        mdb__declarative_oracle__PredOrFunc_11 = (MR_Integer) 0;
      }
    mdb__declarative_oracle__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 0)));
    mdb__declarative_oracle__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 1)));
    mdb__declarative_oracle__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 2)));
    mdb__declarative_oracle__Trusted0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 3)));
    mdb__declarative_oracle__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 4)));
    switch (mdb__declarative_oracle__PredOrFunc_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_oracle__V_23_23;

          {
            mdb__declarative_oracle__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), mdb__declarative_oracle__V_23_23, 0) = ((MR_Box) (mdb__declarative_oracle__ModuleName_10));
            MR_hl_field(MR_mktag(3), mdb__declarative_oracle__V_23_23, 1) = ((MR_Box) (mdb__declarative_oracle__Name_13));
            MR_hl_field(MR_mktag(3), mdb__declarative_oracle__V_23_23, 2) = ((MR_Box) (mdb__declarative_oracle__Arity_14));
          }
          {
            mdb__declarative_oracle__succeeded = mercury__bimap__insert_4_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_oracle__V_23_23)), ((MR_Box) (mdb__declarative_oracle__Id_7)), mdb__declarative_oracle__Trusted0_19, &mdb__declarative_oracle__Trusted_20);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word mdb__declarative_oracle__V_24_24;

          {
            mdb__declarative_oracle__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), mdb__declarative_oracle__V_24_24, 0) = ((MR_Box) (mdb__declarative_oracle__ModuleName_10));
            MR_hl_field(MR_mktag(2), mdb__declarative_oracle__V_24_24, 1) = ((MR_Box) (mdb__declarative_oracle__Name_13));
            MR_hl_field(MR_mktag(2), mdb__declarative_oracle__V_24_24, 2) = ((MR_Box) (mdb__declarative_oracle__Arity_14));
          }
          {
            mdb__declarative_oracle__succeeded = mercury__bimap__insert_4_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_oracle__V_24_24)), ((MR_Box) (mdb__declarative_oracle__Id_7)), mdb__declarative_oracle__Trusted0_19, &mdb__declarative_oracle__Trusted_20);
          }
        }
        break;
    }
    if (mdb__declarative_oracle__succeeded)
      {
        MR_Word mdb__declarative_oracle__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 3)));
        MR_Word mdb__declarative_oracle__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_21, (MR_Integer) 4)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          *mdb__declarative_oracle__STATE_VARIABLE_Oracle_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_35_35));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_36_36));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_37_37));
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
    MR_Word mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 0)));
    MR_Word mdb__declarative_oracle__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1)));
    MR_Word mdb__declarative_oracle__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2)));
    MR_Word mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3)));
    MR_Word mdb__declarative_oracle__V_20_20;
    MR_Word mdb__declarative_oracle__V_21_21;
    MR_Word mdb__declarative_oracle__V_22_22;
    MR_Word mdb__declarative_oracle__V_23_23;
    MR_Word mdb__declarative_oracle__Trusted_10;
    MR_Word mdb__declarative_oracle__V_13_13;

    {
      mercury__counter__allocate_3_p_0(&mdb__declarative_oracle__Id_7, mdb__declarative_oracle__Counter0_6, &mdb__declarative_oracle__Counter_8);
    }
    mdb__declarative_oracle__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 0)));
    mdb__declarative_oracle__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1)));
    mdb__declarative_oracle__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2)));
    mdb__declarative_oracle__Trusted0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3)));
    mdb__declarative_oracle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 4)));
    {
      mdb__declarative_oracle__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_oracle__V_13_13, 0) = ((MR_Box) (mdb__declarative_oracle__ModuleName_4));
    }
    {
      mdb__declarative_oracle__succeeded = mercury__bimap__insert_4_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_oracle__V_13_13)), ((MR_Box) (mdb__declarative_oracle__Id_7)), mdb__declarative_oracle__Trusted0_9, &mdb__declarative_oracle__Trusted_10);
    }
    if (mdb__declarative_oracle__succeeded)
      {
        MR_Word mdb__declarative_oracle__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 0)));
        MR_Word mdb__declarative_oracle__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1)));
        MR_Word mdb__declarative_oracle__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2)));
        MR_Word mdb__declarative_oracle__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3)));
        MR_Word mdb__declarative_oracle__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 4)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          *mdb__declarative_oracle__STATE_VARIABLE_Oracle_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_24_24));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_25_25));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_26_26));
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
    MR_bool mdb__declarative_oracle__succeeded;
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
    MR_Word mdb__declarative_oracle__V_18_18;
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
      mdb__declarative_oracle__V_18_18 = mercury__bimap__init_0_f_0(mdb__declarative_oracle__TypeCtorInfo_20_20, mdb__declarative_oracle__TypeCtorInfo_21_21);
    }
    {
      mercury__bimap__set_4_p_0(mdb__declarative_oracle__TypeCtorInfo_20_20, mdb__declarative_oracle__TypeCtorInfo_21_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) ((MR_Integer) 0)), mdb__declarative_oracle__V_18_18, &mdb__declarative_oracle__Trusted_14);
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.declarative_oracle. */
