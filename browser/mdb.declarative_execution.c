/*
** Automatically generated from `declarative_execution.m'
** by the Mercury compiler,
** version rotd-2018-01-26
** configured for x86_64-pc-linux-gnu.
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


// :- module mdb.declarative_execution.
// :- implementation.

/*
INIT mercury__mdb__declarative_execution__init
ENDINIT
*/

#include "mdb.declarative_execution.mih"
#include "mdb.declarative_execution.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.declarative_analyser.mih"
#include "mdb.declarative_debugger.mih"
#include "mdb.declarative_edt.mih"
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




static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0;

static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1;

static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2;

static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_goal_status_0[3];

static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_goal_status_0[3];

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_goal_status_0[3];

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_implicit_tree_info_0[1];

static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_0_0[2];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_0_0[2];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0;

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_0_0[1];

static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_0[1];

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_0[1];

static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdb__term_rep__type_ctor_info_term_rep_0;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_arg_0_0[3];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_arg_0_0[3];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0;

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_arg_0_0[1];

static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_arg_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_arg_0[1];

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_arg_0[1];

static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdb__declarative_execution__type_ctor_info_implicit_tree_info_0;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdbcomp__rtti_access__type_ctor_info_label_layout_0;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_0[10];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_0[10];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_0;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_1[8];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_1[8];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_1;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_2[5];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_2[5];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_2;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_3[6];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_3[6];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_3;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_4[7];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_4[7];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_4;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_5[2];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_5[2];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_5;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_6[2];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_6[2];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_6;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_7[3];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_7[3];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_7;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_8[3];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_8[3];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_8;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_9[3];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_9[3];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_9;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_10[3];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_10[3];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_10;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_11[3];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_11[3];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_11;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_12[3];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_12[3];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_12;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_13[3];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_13[3];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_13;

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_2[1];

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_3[11];

static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_node_1[4];

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_node_1[14];

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_1[14];

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_id_0[1];

static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_id_0;

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_key_0[1];

static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_key_0;

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_map_0[1];

static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0;

static const MR_FA_TypeInfo_Struct2 mdb__declarative_execution__tree234__ti_tree234_2mdb__declarative_execution__type_ctor_info_trace_node_key_0mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0;

static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_map_0;

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_store_0[1];

static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_store_0;

static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_0;

static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_1;

static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_which_headvars_0[2];

static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_which_headvars_0[2];

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_which_headvars_0[2];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__type_class_id_var_names_annotated_trace_2[2];

static const MR_TypeClassMethod mdb__declarative_execution__mdb__declarative_execution__type_class_id_method_ids_annotated_trace_2[1];

static const MR_TypeClassId mdb__declarative_execution__mdb__declarative_execution__type_class_id_annotated_trace_2;

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mdb__declarative_execution__convert_node_2_p_0(
  MR_Word N1_1,
  MR_Word * N2_2);

static void MR_CALL 
mdb__declarative_execution__node_id_to_key_2_p_0(
  MR_Word Id_1,
  MR_Word * Key_2);

static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0(
  MR_Integer HldsNum_5,
  MR_Integer ProgVis_6,
  MR_Word Args_7,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_value_5_p_0(
  MR_Integer HldsNum_6,
  MR_Integer ProgVis_7,
  MR_Word Val_8,
  MR_Word Args_9,
  MR_Word * HeadVar__5_5);

static MR_Word MR_CALL 
mdb__declarative_execution__init_trace_atom_args_0_f_0(void);

static void MR_CALL 
mdb__declarative_execution__null_trace_node_id_1_p_0(
  MR_Word * Id_1);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_fail_node_3_f_0(
  MR_Word Preceding_5,
  MR_Word Neg_6,
  MR_Box Label_7);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_succ_node_3_f_0(
  MR_Word Preceding_5,
  MR_Word Neg_6,
  MR_Box Label_7);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_node_2_f_0(
  MR_Word Preceding_4,
  MR_Box Label_5);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_else_node_3_f_0(
  MR_Word Preceding_5,
  MR_Word Cond_6,
  MR_Box Label_7);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_then_node_3_f_0(
  MR_Word Preceding_5,
  MR_Word Cond_6,
  MR_Box Label_7);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_cond_node_2_f_0(
  MR_Word Preceding_4,
  MR_Box Label_5);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_later_disj_node_4_f_0(
  MR_Word Store_6,
  MR_Word Preceding_7,
  MR_Box Label_8,
  MR_Word PrevDisj_9);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_first_disj_node_2_f_0(
  MR_Word Preceding_4,
  MR_Box Label_5);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_switch_node_2_f_0(
  MR_Word Preceding_4,
  MR_Box Label_5);

static void MR_CALL 
mdb__declarative_execution__construct_excp_node_8_p_0(
  MR_Word Preceding_9,
  MR_Word Call_10,
  MR_Word MaybeRedo_11,
  MR_Word Exception_12,
  MR_Integer EventNo_13,
  MR_Box Label_14,
  MR_Integer Suspicion_15,
  MR_Word * Excp_16);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_fail_node_6_f_0(
  MR_Word Preceding_8,
  MR_Word Call_9,
  MR_Word Redo_10,
  MR_Integer EventNo_11,
  MR_Box Label_12,
  MR_Integer Suspicion_13);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_redo_node_5_f_0(
  MR_Word Preceding_7,
  MR_Word Exit_8,
  MR_Integer Event_9,
  MR_Box Label_10,
  MR_Integer Suspicion_11);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_exit_node_8_f_0(
  MR_Word Preceding_10,
  MR_Word Call_11,
  MR_Word MaybeRedo_12,
  MR_Word AtomArgs_13,
  MR_Integer EventNo_14,
  MR_Box Label_15,
  MR_Integer IoSeqNum_16,
  MR_Integer Suspicion_17);

static MR_Word MR_CALL 
mdb__declarative_execution__make_no_maybe_label_0_f_0(void);

static MR_Word MR_CALL 
mdb__declarative_execution__make_yes_maybe_label_1_f_0(
  MR_Box Label_3);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_call_node_9_f_0(
  MR_Word Preceding_11,
  MR_Word AtomArgs_12,
  MR_Integer SeqNo_13,
  MR_Integer EventNo_14,
  MR_Word AtMaxDepth_15,
  MR_Word MaybeReturnLabel_16,
  MR_Box Label_17,
  MR_Integer IoSeqNum_18,
  MR_Integer Suspicion_19);

static void MR_CALL 
mdb__declarative_execution__print_trace_node_4_p_0(
  MR_Word OutStr_5,
  MR_Word Node_6);

static MR_Word MR_CALL 
mdb__declarative_execution__find_prev_contour_store_2_f_0(
  MR_Word Store_4,
  MR_Word Id_5);

static MR_Word MR_CALL 
mdb__declarative_execution__step_left_in_contour_store_2_f_0(
  MR_Word Store_4,
  MR_Word Node_5);

static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_first_disj_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_seqno_3_p_0(
  MR_Word S_4,
  MR_Word Node_5,
  MR_Integer * SeqNo_6);

static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_call_3_p_0(
  MR_Word S_1,
  MR_Word HeadVar__2_2,
  MR_Word * Call_3);

static MR_String MR_CALL 
mdb__declarative_execution__trace_node_path_1_f_0(
  MR_Word Node_3);

static MR_Word MR_CALL 
mdb__declarative_execution__trace_node_port_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
mdb__declarative_execution__neg_node_set_status_2_f_0(
  MR_Word Neg0_4,
  MR_Word Status_5);

static MR_Word MR_CALL 
mdb__declarative_execution__cond_node_set_status_2_f_0(
  MR_Word Cond0_4,
  MR_Word Status_5);

static MR_Integer MR_CALL 
mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0(
  MR_Word Call_3);

static MR_Word MR_CALL 
mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0(
  MR_Word Call0_4,
  MR_Integer IdealDepth_5);

static MR_Word MR_CALL 
mdb__declarative_execution__call_node_set_last_interface_2_f_0(
  MR_Word Call0_4,
  MR_Word Last_5);

static MR_Word MR_CALL 
mdb__declarative_execution__call_node_get_last_interface_1_f_0(
  MR_Word Call_3);

static MR_bool MR_CALL 
mdb__declarative_execution__search_trace_node_store_3_p_0(
  MR_Word _Store_1,
  MR_Word Id_2,
  MR_Word * Node_3);

static void MR_CALL 
mdb__declarative_execution__cache_proc_defn_rep_2_p_0(
  MR_Box ProcLayout_1,
  MR_Word ProcDefnRep_2);

static MR_bool MR_CALL 
mdb__declarative_execution__have_cached_proc_defn_rep_2_p_0(
  MR_Box ProcLayout_1,
  MR_Word * ProcDefnRep_2);

static MR_bool MR_CALL 
mdb__declarative_execution__call_node_bytecode_layout_2_p_0(
  MR_Box CallLabelLayout_1,
  MR_Box * ProcLayout_2);

static void MR_CALL 
mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Integer CurArgNum_3,
  MR_Integer * UserArgNum_4);

static void MR_CALL 
mdb__declarative_execution__head_var_num_to_arg_num_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer SearchUserHeadVarNum_2,
  MR_Integer CurArgNum_3,
  MR_Integer * ArgNum_4);

static MR_bool MR_CALL 
mdb__declarative_execution__select_arg_at_pos_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__declarative_execution__node_map_4_p_0(
  MR_Word Store_5,
  MR_Word NodeId_6,
  MR_Word HeadVar__3_3,
  MR_Word * Map_8);

static MR_Box MR_CALL 
mdb__declarative_execution__step_over_redo_or_call_3_f_0(
  MR_Word TypeClassInfo_for_annotated_trace_24,
  MR_Box Store_5,
  MR_Box Call_6,
  MR_Box MaybeRedo_7);

static void MR_CALL 
mdb__declarative_execution__find_prev_contour_3_p_1(
  MR_Word TypeClassInfo_for_annotated_trace_67,
  MR_Box Store_4,
  MR_Word Node_5,
  MR_Box * OnContour_6);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____event_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____event_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____goal_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____goal_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____implicit_tree_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____implicit_tree_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____sequence_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____sequence_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____suspicion_accumulator_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____suspicion_accumulator_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_store_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_store_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____which_headvars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____which_headvars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box mdb__declarative_execution_scalar_common_1[34][2];

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_2[4][3];

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_3[1][4];

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_4[1][1];




static /* final */ const MR_Box mdb__declarative_execution_scalar_common_1[34][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_implicit_tree_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "call_node_maybe_proc_defn_rep")),
    ((MR_Box) ((MR_String) "cannot interpret proc bytecode"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "call_node_from_id")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "cond_node_from_id")),
    ((MR_Box) ((MR_String) "not a COND node"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "neg_node_from_id")),
    ((MR_Box) ((MR_String) "not a NEG node"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "first_disj_node_from_id")),
    ((MR_Box) ((MR_String) "not a first DISJ node"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "exit_node_from_id")),
    ((MR_Box) ((MR_String) "not an EXIT node"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "step_left_in_contour")),
    ((MR_Box) ((MR_String) "unexpected CALL node"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "step_left_in_contour")),
    ((MR_Box) ((MR_String) "failed COND node"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "step_left_in_contour")),
    ((MR_Box) ((MR_String) "unexpected NEGE node"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "maybe_redo_node_from_id")),
    ((MR_Box) ((MR_String) "not a REDO node or NULL"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "step_in_stratum")),
    ((MR_Box) ((MR_String) "unexpected CALL node"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "step_in_stratum")),
    ((MR_Box) ((MR_String) "failed COND node"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "step_in_stratum")),
    ((MR_Box) ((MR_String) "unexpected NEGE node"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "det_trace_node_from_id")),
    ((MR_Box) ((MR_String) "NULL node id"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "disj_node_from_id")),
    ((MR_Box) ((MR_String) "not a DISJ node"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "load_trace_node_map")),
    ((MR_Box) ((MR_String) "unexpected EOF"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "head_var_num_to_arg_num")),
    ((MR_Box) ((MR_String) "nonexistent head_var_num"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "arg_num_to_head_var_num")),
    ((MR_Box) ((MR_String) "nonexistent arg num"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "call_node_get_last_interface")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "call_node_set_last_interface")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "call_node_update_implicit_tree_info")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "get_implicit_tree_max_depth")),
    ((MR_Box) ((MR_String) "not at max depth"))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "get_implicit_tree_max_depth")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "cond_node_set_status")),
    ((MR_Box) ((MR_String) "not a COND node"))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "neg_node_set_status")),
    ((MR_Box) ((MR_String) "not a NEGE node"))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "find_prev_contour")),
    ((MR_Box) ((MR_String) "reached CALL node"))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "find_prev_contour")),
    ((MR_Box) ((MR_String) "reached COND node"))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "find_prev_contour")),
    ((MR_Box) ((MR_String) "reached NEGE node"))
  },
};

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_store_0)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0)),
    ((MR_Box) (&mdb__declarative_execution_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__declarative_execution_scalar_common_3[0])),
    ((MR_Box) (mdb__declarative_execution__maybe_filter_headvars_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__declarative_execution_scalar_common_3[0])),
    ((MR_Box) (mdb__declarative_execution__select_arg_at_pos_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_3[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0))
  },
};

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0))))
  },
};



#include "io.mh"
#include "mdb.mh"
#include "store.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.declarative_execution.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"

#line 902 "declarative_execution.m"
MR_Word 
MR_DD_call_node_get_last_interface(
  MR_Word Call_3)
#line 902 "declarative_execution.m"
{
#line 902 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_get_last_interface_1_f_0((MR_Word) Call_3);
	return ret_value;
}

#line 916 "declarative_execution.m"
MR_Word 
MR_DD_call_node_set_last_interface(
  MR_Word Call0_4,
  MR_Word Last_5)
#line 916 "declarative_execution.m"
{
#line 916 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_set_last_interface_2_f_0((MR_Word) Call0_4, (MR_Word) Last_5);
	return ret_value;
}

#line 933 "declarative_execution.m"
MR_Word 
MR_DD_call_node_update_implicit_tree_info(
  MR_Word Call0_4,
  MR_Integer IdealDepth_5)
#line 933 "declarative_execution.m"
{
#line 933 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0((MR_Word) Call0_4, (MR_Integer) IdealDepth_5);
	return ret_value;
}

#line 950 "declarative_execution.m"
MR_Integer 
MR_DD_get_implicit_tree_ideal_depth(
  MR_Word Call_3)
#line 950 "declarative_execution.m"
{
#line 950 "declarative_execution.m"
	MR_Integer ret_value;
	ret_value = (MR_Integer)mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0((MR_Word) Call_3);
	return ret_value;
}

#line 970 "declarative_execution.m"
MR_Word 
MR_DD_cond_node_set_status(
  MR_Word Cond0_4,
  MR_Word Status_5)
#line 970 "declarative_execution.m"
{
#line 970 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__cond_node_set_status_2_f_0((MR_Word) Cond0_4, (MR_Word) Status_5);
	return ret_value;
}

#line 986 "declarative_execution.m"
MR_Word 
MR_DD_neg_node_set_status(
  MR_Word Neg0_4,
  MR_Word Status_5)
#line 986 "declarative_execution.m"
{
#line 986 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__neg_node_set_status_2_f_0((MR_Word) Neg0_4, (MR_Word) Status_5);
	return ret_value;
}

#line 1010 "declarative_execution.m"
MR_Word 
MR_DD_trace_node_port(
  MR_Word HeadVar__1_1)
#line 1010 "declarative_execution.m"
{
#line 1010 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__trace_node_port_1_f_0((MR_Word) HeadVar__1_1);
	return ret_value;
}

#line 1029 "declarative_execution.m"
MR_String 
MR_DD_trace_node_path(
  MR_Word Node_3)
#line 1029 "declarative_execution.m"
{
#line 1029 "declarative_execution.m"
	MR_String ret_value;
	ret_value = (MR_String)mdb__declarative_execution__trace_node_path_1_f_0((MR_Word) Node_3);
	return ret_value;
}

#line 1056 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_seqno(
  MR_Word S_4,
  MR_Word Node_5,
  MR_Integer * SeqNo_6)
#line 1056 "declarative_execution.m"
{
#line 1056 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_seqno_3_p_0((MR_Word) S_4, (MR_Word) Node_5, (MR_Integer *) SeqNo_6);
	return ret_value;
}

#line 1071 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_call(
  MR_Word S_1,
  MR_Word HeadVar__2_2,
  MR_Word * Call_3)
#line 1071 "declarative_execution.m"
{
#line 1071 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_call_3_p_0((MR_Word) S_1, (MR_Word) HeadVar__2_2, (MR_Word *) Call_3);
	return ret_value;
}

#line 1084 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_first_disj(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
#line 1084 "declarative_execution.m"
{
#line 1084 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_first_disj_2_p_0((MR_Word) HeadVar__1_1, (MR_Word *) HeadVar__2_2);
	return ret_value;
}

#line 1096 "declarative_execution.m"
MR_Word 
MR_DD_step_left_in_contour(
  MR_Word Store_4,
  MR_Word Node_5)
#line 1096 "declarative_execution.m"
{
#line 1096 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__step_left_in_contour_store_2_f_0((MR_Word) Store_4, (MR_Word) Node_5);
	return ret_value;
}

#line 1109 "declarative_execution.m"
MR_Word 
MR_DD_find_prev_contour(
  MR_Word Store_4,
  MR_Word Id_5)
#line 1109 "declarative_execution.m"
{
#line 1109 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__find_prev_contour_store_2_f_0((MR_Word) Store_4, (MR_Word) Id_5);
	return ret_value;
}

#line 1126 "declarative_execution.m"
void 
MR_DD_print_trace_node(
  MR_Word OutStr_5,
  MR_Word Node_6)
#line 1126 "declarative_execution.m"
{
#line 1126 "declarative_execution.m"
	mdb__declarative_execution__print_trace_node_4_p_0((MR_Word) OutStr_5, (MR_Word) Node_6);
}

#line 1142 "declarative_execution.m"
MR_Word 
MR_DD_construct_call_node(
  MR_Word Preceding_11,
  MR_Word AtomArgs_12,
  MR_Integer SeqNo_13,
  MR_Integer EventNo_14,
  MR_Word AtMaxDepth_15,
  MR_Word MaybeReturnLabel_16,
  const MR_LabelLayout * Label_17,
  MR_Integer IoSeqNum_18,
  MR_Integer Suspicion_19)
#line 1142 "declarative_execution.m"
{
#line 1142 "declarative_execution.m"
	MR_Box boxed_Label_17;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_17, boxed_Label_17);
	ret_value = (MR_Word)mdb__declarative_execution__construct_call_node_9_f_0((MR_Word) Preceding_11, (MR_Word) AtomArgs_12, (MR_Integer) SeqNo_13, (MR_Integer) EventNo_14, (MR_Word) AtMaxDepth_15, (MR_Word) MaybeReturnLabel_16, boxed_Label_17, (MR_Integer) IoSeqNum_18, (MR_Integer) Suspicion_19);
	return ret_value;
}

#line 1163 "declarative_execution.m"
MR_Word 
MR_DD_make_yes_maybe_label(
  const MR_LabelLayout * Label_3)
#line 1163 "declarative_execution.m"
{
#line 1163 "declarative_execution.m"
	MR_Box boxed_Label_3;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_3, boxed_Label_3);
	ret_value = (MR_Word)mdb__declarative_execution__make_yes_maybe_label_1_f_0(boxed_Label_3);
	return ret_value;
}

#line 1169 "declarative_execution.m"
MR_Word 
MR_DD_make_no_maybe_label(void)
#line 1169 "declarative_execution.m"
{
#line 1169 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__make_no_maybe_label_0_f_0();
	return ret_value;
}

#line 1177 "declarative_execution.m"
MR_Word 
MR_DD_construct_exit_node(
  MR_Word Preceding_10,
  MR_Word Call_11,
  MR_Word MaybeRedo_12,
  MR_Word AtomArgs_13,
  MR_Integer EventNo_14,
  const MR_LabelLayout * Label_15,
  MR_Integer IoSeqNum_16,
  MR_Integer Suspicion_17)
#line 1177 "declarative_execution.m"
{
#line 1177 "declarative_execution.m"
	MR_Box boxed_Label_15;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_15, boxed_Label_15);
	ret_value = (MR_Word)mdb__declarative_execution__construct_exit_node_8_f_0((MR_Word) Preceding_10, (MR_Word) Call_11, (MR_Word) MaybeRedo_12, (MR_Word) AtomArgs_13, (MR_Integer) EventNo_14, boxed_Label_15, (MR_Integer) IoSeqNum_16, (MR_Integer) Suspicion_17);
	return ret_value;
}

#line 1188 "declarative_execution.m"
MR_Word 
MR_DD_construct_redo_node(
  MR_Word Preceding_7,
  MR_Word Exit_8,
  MR_Integer Event_9,
  const MR_LabelLayout * Label_10,
  MR_Integer Suspicion_11)
#line 1188 "declarative_execution.m"
{
#line 1188 "declarative_execution.m"
	MR_Box boxed_Label_10;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_10, boxed_Label_10);
	ret_value = (MR_Word)mdb__declarative_execution__construct_redo_node_5_f_0((MR_Word) Preceding_7, (MR_Word) Exit_8, (MR_Integer) Event_9, boxed_Label_10, (MR_Integer) Suspicion_11);
	return ret_value;
}

#line 1198 "declarative_execution.m"
MR_Word 
MR_DD_construct_fail_node(
  MR_Word Preceding_8,
  MR_Word Call_9,
  MR_Word Redo_10,
  MR_Integer EventNo_11,
  const MR_LabelLayout * Label_12,
  MR_Integer Suspicion_13)
#line 1198 "declarative_execution.m"
{
#line 1198 "declarative_execution.m"
	MR_Box boxed_Label_12;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_12, boxed_Label_12);
	ret_value = (MR_Word)mdb__declarative_execution__construct_fail_node_6_f_0((MR_Word) Preceding_8, (MR_Word) Call_9, (MR_Word) Redo_10, (MR_Integer) EventNo_11, boxed_Label_12, (MR_Integer) Suspicion_13);
	return ret_value;
}

#line 1208 "declarative_execution.m"
void 
MR_DD_construct_excp_node(
  MR_Word Preceding_9,
  MR_Word Call_10,
  MR_Word MaybeRedo_11,
  MR_Word Exception_12,
  MR_Integer EventNo_13,
  const MR_LabelLayout * Label_14,
  MR_Integer Suspicion_15,
  MR_Word * Excp_16)
#line 1208 "declarative_execution.m"
{
#line 1208 "declarative_execution.m"
	MR_Box boxed_Label_14;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_14, boxed_Label_14);
	mdb__declarative_execution__construct_excp_node_8_p_0((MR_Word) Preceding_9, (MR_Word) Call_10, (MR_Word) MaybeRedo_11, (MR_Word) Exception_12, (MR_Integer) EventNo_13, boxed_Label_14, (MR_Integer) Suspicion_15, (MR_Word *) Excp_16);
}

#line 1220 "declarative_execution.m"
MR_Word 
MR_DD_construct_switch_node(
  MR_Word Preceding_4,
  const MR_LabelLayout * Label_5)
#line 1220 "declarative_execution.m"
{
#line 1220 "declarative_execution.m"
	MR_Box boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_5, boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_switch_node_2_f_0((MR_Word) Preceding_4, boxed_Label_5);
	return ret_value;
}

#line 1228 "declarative_execution.m"
MR_Word 
MR_DD_construct_first_disj_node(
  MR_Word Preceding_4,
  const MR_LabelLayout * Label_5)
#line 1228 "declarative_execution.m"
{
#line 1228 "declarative_execution.m"
	MR_Box boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_5, boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_first_disj_node_2_f_0((MR_Word) Preceding_4, boxed_Label_5);
	return ret_value;
}

#line 1237 "declarative_execution.m"
MR_Word 
MR_DD_construct_later_disj_node(
  MR_Word Store_6,
  MR_Word Preceding_7,
  const MR_LabelLayout * Label_8,
  MR_Word PrevDisj_9)
#line 1237 "declarative_execution.m"
{
#line 1237 "declarative_execution.m"
	MR_Box boxed_Label_8;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_8, boxed_Label_8);
	ret_value = (MR_Word)mdb__declarative_execution__construct_later_disj_node_4_f_0((MR_Word) Store_6, (MR_Word) Preceding_7, boxed_Label_8, (MR_Word) PrevDisj_9);
	return ret_value;
}

#line 1253 "declarative_execution.m"
MR_Word 
MR_DD_construct_cond_node(
  MR_Word Preceding_4,
  const MR_LabelLayout * Label_5)
#line 1253 "declarative_execution.m"
{
#line 1253 "declarative_execution.m"
	MR_Box boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_5, boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_cond_node_2_f_0((MR_Word) Preceding_4, boxed_Label_5);
	return ret_value;
}

#line 1261 "declarative_execution.m"
MR_Word 
MR_DD_construct_then_node(
  MR_Word Preceding_5,
  MR_Word Cond_6,
  const MR_LabelLayout * Label_7)
#line 1261 "declarative_execution.m"
{
#line 1261 "declarative_execution.m"
	MR_Box boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_7, boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_then_node_3_f_0((MR_Word) Preceding_5, (MR_Word) Cond_6, boxed_Label_7);
	return ret_value;
}

#line 1270 "declarative_execution.m"
MR_Word 
MR_DD_construct_else_node(
  MR_Word Preceding_5,
  MR_Word Cond_6,
  const MR_LabelLayout * Label_7)
#line 1270 "declarative_execution.m"
{
#line 1270 "declarative_execution.m"
	MR_Box boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_7, boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_else_node_3_f_0((MR_Word) Preceding_5, (MR_Word) Cond_6, boxed_Label_7);
	return ret_value;
}

#line 1279 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_node(
  MR_Word Preceding_4,
  const MR_LabelLayout * Label_5)
#line 1279 "declarative_execution.m"
{
#line 1279 "declarative_execution.m"
	MR_Box boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_5, boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_node_2_f_0((MR_Word) Preceding_4, boxed_Label_5);
	return ret_value;
}

#line 1287 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_succ_node(
  MR_Word Preceding_5,
  MR_Word Neg_6,
  const MR_LabelLayout * Label_7)
#line 1287 "declarative_execution.m"
{
#line 1287 "declarative_execution.m"
	MR_Box boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_7, boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_succ_node_3_f_0((MR_Word) Preceding_5, (MR_Word) Neg_6, boxed_Label_7);
	return ret_value;
}

#line 1296 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_fail_node(
  MR_Word Preceding_5,
  MR_Word Neg_6,
  const MR_LabelLayout * Label_7)
#line 1296 "declarative_execution.m"
{
#line 1296 "declarative_execution.m"
	MR_Box boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_7, boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_fail_node_3_f_0((MR_Word) Preceding_5, (MR_Word) Neg_6, boxed_Label_7);
	return ret_value;
}

#line 1318 "declarative_execution.m"
MR_Word 
MR_DD_init_trace_atom_args(void)
#line 1318 "declarative_execution.m"
{
#line 1318 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__init_trace_atom_args_0_f_0();
	return ret_value;
}

#line 1331 "declarative_execution.m"
void 
MR_DD_add_trace_atom_arg_value(
  MR_Integer HldsNum_6,
  MR_Integer ProgVis_7,
  MR_Word Val_8,
  MR_Word Args_9,
  MR_Word * HeadVar__5_5)
#line 1331 "declarative_execution.m"
{
#line 1331 "declarative_execution.m"
	mdb__declarative_execution__add_trace_atom_arg_value_5_p_0((MR_Integer) HldsNum_6, (MR_Integer) ProgVis_7, (MR_Word) Val_8, (MR_Word) Args_9, (MR_Word *) HeadVar__5_5);
}

#line 1343 "declarative_execution.m"
void 
MR_DD_add_trace_atom_arg_no_value(
  MR_Integer HldsNum_5,
  MR_Integer ProgVis_6,
  MR_Word Args_7,
  MR_Word * HeadVar__4_4)
#line 1343 "declarative_execution.m"
{
#line 1343 "declarative_execution.m"
	mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0((MR_Integer) HldsNum_5, (MR_Integer) ProgVis_6, (MR_Word) Args_7, (MR_Word *) HeadVar__4_4);
}

#line 1407 "declarative_execution.m"
void 
MR_DD_save_trace(
  MR_Word Stream_6,
  MR_Word Store_7,
  MR_Word NodeId_8)
#line 1407 "declarative_execution.m"
{
#line 1407 "declarative_execution.m"
	mdb__declarative_execution__save_trace_node_store_5_p_0((MR_Word) Stream_6, (MR_Word) Store_7, (MR_Word) NodeId_8);
}


const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_event_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____event_number_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____event_number_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "event_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0 = {
  (MR_String) "succeeded",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1 = {
  (MR_String) "failed",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2 = {
  (MR_String) "undecided",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_goal_status_0[3] = {
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2
};

static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_goal_status_0[3] = {
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2
};

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_goal_status_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_execution____Unify____goal_status_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____goal_status_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "goal_status",
  {     mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_goal_status_0 },
  {     mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_goal_status_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_goal_status_0
};

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_implicit_tree_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0 = {
  (MR_String) "implicit_tree_info",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_String) "ideal_depth",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_implicit_tree_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____implicit_tree_info_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____implicit_tree_info_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "implicit_tree_info",
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0 },
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_implicit_tree_info_0
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_sequence_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____sequence_number_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____sequence_number_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "sequence_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_suspicion_accumulator_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____suspicion_accumulator_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____suspicion_accumulator_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "suspicion_accumulator",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_0_0[2] = {
  (MR_String) "proc_layout",
  (MR_String) "atom_args"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0 = {
  (MR_String) "atom",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_0_0,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_0_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0
};

static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_0_0
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0
};

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_atom_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_atom_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_atom",
  {     mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_0 },
  {     mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_0
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdb__term_rep__type_ctor_info_term_rep_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_arg_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__maybe__ti_maybe_1mdb__term_rep__type_ctor_info_term_rep_0
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_arg_0_0[3] = {
  (MR_String) "prog_visible",
  (MR_String) "prog_vis_headvar_num",
  (MR_String) "arg_value"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0 = {
  (MR_String) "arg_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_arg_0_0,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_arg_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_arg_0_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0
};

static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_arg_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_arg_0_0
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_arg_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0
};

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_arg_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_atom_arg_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_atom_arg_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_atom_arg",
  {     mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_arg_0 },
  {     mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_arg_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_arg_0
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdb__declarative_execution__type_ctor_info_implicit_tree_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_implicit_tree_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdbcomp__rtti_access__type_ctor_info_label_layout_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_0[10] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__maybe__ti_maybe_1mdb__declarative_execution__type_ctor_info_implicit_tree_info_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__maybe__ti_maybe_1mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_0[10] = {
  (MR_String) "call_preceding",
  (MR_String) "call_last_interface",
  (MR_String) "call_atom_args",
  (MR_String) "call_seq",
  (MR_String) "call_event",
  (MR_String) "call_at_max_depth",
  (MR_String) "call_return_label",
  (MR_String) "call_label",
  (MR_String) "call_io_seq_num",
  (MR_String) "call_suspicion"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_0 = {
  (MR_String) "node_call",
  (MR_Integer) 10,
  (MR_Integer) 3,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_0,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_1[8] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_1[8] = {
  (MR_String) "exit_preceding",
  (MR_String) "exit_call",
  (MR_String) "exit_prev_redo",
  (MR_String) "exit_atom_args",
  (MR_String) "exit_event",
  (MR_String) "exit_label",
  (MR_String) "exit_io_seq_num",
  (MR_String) "exit_suspicion"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_1 = {
  (MR_String) "node_exit",
  (MR_Integer) 8,
  (MR_Integer) 7,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_1,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_2[5] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_2[5] = {
  (MR_String) "redo_preceding",
  (MR_String) "redo_exit",
  (MR_String) "redo_event",
  (MR_String) "redo_label",
  (MR_String) "redo_suspicion"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_2 = {
  (MR_String) "node_redo",
  (MR_Integer) 5,
  (MR_Integer) 3,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_2,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_3[6] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_3[6] = {
  (MR_String) "fail_preceding",
  (MR_String) "fail_call",
  (MR_String) "fail_redo",
  (MR_String) "fail_event",
  (MR_String) "fail_label",
  (MR_String) "fail_suspicion"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_3 = {
  (MR_String) "node_fail",
  (MR_Integer) 6,
  (MR_Integer) 7,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_3,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_4[7] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_4[7] = {
  (MR_String) "excp_preceding",
  (MR_String) "excp_call",
  (MR_String) "excp_redo",
  (MR_String) "excp_value",
  (MR_String) "excp_event",
  (MR_String) "excp_label",
  (MR_String) "excp_suspicion"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_4 = {
  (MR_String) "node_excp",
  (MR_Integer) 7,
  (MR_Integer) 7,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_4,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_4,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_5[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_5[2] = {
  (MR_String) "switch_preceding",
  (MR_String) "switch_label"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_5 = {
  (MR_String) "node_switch",
  (MR_Integer) 2,
  (MR_Integer) 1,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_5,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_5,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_6[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_6[2] = {
  (MR_String) "first_disj_preceding",
  (MR_String) "first_disj_label"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_6 = {
  (MR_String) "node_first_disj",
  (MR_Integer) 2,
  (MR_Integer) 1,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_6,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_6,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_7[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_7[3] = {
  (MR_String) "later_disj_preceding",
  (MR_String) "later_disj_label",
  (MR_String) "later_disj_first"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_7 = {
  (MR_String) "node_later_disj",
  (MR_Integer) 3,
  (MR_Integer) 5,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_7,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_7,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_8[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_8[3] = {
  (MR_String) "cond_preceding",
  (MR_String) "cond_label",
  (MR_String) "cond_status"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_8 = {
  (MR_String) "node_cond",
  (MR_Integer) 3,
  (MR_Integer) 1,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_8,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_8,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_9[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_9[3] = {
  (MR_String) "then_preceding",
  (MR_String) "then_cond",
  (MR_String) "then_label"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_9 = {
  (MR_String) "node_then",
  (MR_Integer) 3,
  (MR_Integer) 3,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 9,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_9,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_9,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_10[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_10[3] = {
  (MR_String) "else_preceding",
  (MR_String) "else_cond",
  (MR_String) "else_label"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_10 = {
  (MR_String) "node_else",
  (MR_Integer) 3,
  (MR_Integer) 3,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 10,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_10,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_10,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_11[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_11[3] = {
  (MR_String) "neg_preceding",
  (MR_String) "neg_label",
  (MR_String) "neg_status"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_11 = {
  (MR_String) "node_neg",
  (MR_Integer) 3,
  (MR_Integer) 1,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 11,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_11,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_11,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_12[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_12[3] = {
  (MR_String) "neg_succ_preceding",
  (MR_String) "neg_succ_enter",
  (MR_String) "neg_succ_label"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_12 = {
  (MR_String) "node_neg_succ",
  (MR_Integer) 3,
  (MR_Integer) 3,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 12,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_12,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_12,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_13[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_13[3] = {
  (MR_String) "neg_fail_preceding",
  (MR_String) "neg_fail_enter",
  (MR_String) "neg_fail_label"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_13 = {
  (MR_String) "node_neg_fail",
  (MR_Integer) 3,
  (MR_Integer) 3,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 13,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_13,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_13,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_0
};

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_1[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_1
};

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_2[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_2
};

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_3[11] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_3,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_4,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_5,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_6,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_7,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_8,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_9,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_10,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_11,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_12,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_13
};

static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_node_1[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_2
  },
  {
    (MR_Integer) 11,
    MR_SECTAG_REMOTE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_3
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_node_1[14] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_0,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_8,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_10,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_4,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_1,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_3,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_6,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_7,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_11,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_13,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_12,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_2,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_5,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_9
};

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_1[14] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 11,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 1,
  (MR_Integer) 13,
  (MR_Integer) 2,
  (MR_Integer) 8,
  (MR_Integer) 10,
  (MR_Integer) 9
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_1_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_1_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node",
  {     mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_node_1 },
  {     mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_node_1 },
  (MR_Integer) 14,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_1
};

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_id_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_id_0 = {
  (MR_String) "id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_id_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_id_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node_id",
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_id_0 },
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_id_0
};

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_key_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_key_0 = {
  (MR_String) "key",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_key_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_key_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node_key",
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_key_0 },
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_key_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_key_0
};

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_map_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1,
  {
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0
  }
};

static const MR_FA_TypeInfo_Struct2 mdb__declarative_execution__tree234__ti_tree234_2mdb__declarative_execution__type_ctor_info_trace_node_key_0mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0,
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0
  }
};

static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_map_0 = {
  (MR_String) "map",
  (MR_PseudoTypeInfo) &mdb__declarative_execution__tree234__ti_tree234_2mdb__declarative_execution__type_ctor_info_trace_node_key_0mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_map_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_map_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node_map",
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_map_0 },
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_map_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_map_0
};

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_store_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_store_0 = {
  (MR_String) "store",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_store_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_store_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_store_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node_store",
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_store_0 },
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_store_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_store_0
};

static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_0 = {
  (MR_String) "all_headvars",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_1 = {
  (MR_String) "only_user_headvars",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_which_headvars_0[2] = {
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_0,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_1
};

static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_which_headvars_0[2] = {
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_0,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_1
};

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_which_headvars_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_which_headvars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_execution____Unify____which_headvars_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____which_headvars_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "which_headvars",
  {     mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_which_headvars_0 },
  {     mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_which_headvars_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_which_headvars_0
};

const MR_BaseTypeclassInfo base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001))
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__type_class_id_var_names_annotated_trace_2[2] = {
  (MR_String) "S",
  (MR_String) "R"
};

static const MR_TypeClassMethod mdb__declarative_execution__mdb__declarative_execution__type_class_id_method_ids_annotated_trace_2[1] = {
  {
    (MR_String) "trace_node_from_id",
    (MR_Integer) 3,
    MR_PREDICATE
  }
};

static const MR_TypeClassId mdb__declarative_execution__mdb__declarative_execution__type_class_id_annotated_trace_2 = {
  (MR_String) "mdb.declarative_execution",
  (MR_String) "annotated_trace",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mdb__declarative_execution__mdb__declarative_execution__type_class_id_var_names_annotated_trace_2,
  mdb__declarative_execution__mdb__declarative_execution__type_class_id_method_ids_annotated_trace_2
};

const MR_TypeClassDeclStruct mdb__declarative_execution__mdb__declarative_execution__type_class_decl_annotated_trace_2 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_class_id_annotated_trace_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id =  HeadVar__2_2 ;
		{

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *HeadVar__3_3  = Node;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word Map_6 = (MR_Word) HeadVar__1_1;
    MR_Box conv0_HeadVar__3_3;

    succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0, (MR_Word) &mdb__declarative_execution_scalar_common_1[0], Map_6, ((MR_Box) (HeadVar__2_2)), &conv0_HeadVar__3_3);
    if (succeeded)
    {
      *HeadVar__3_3 = ((MR_Word) conv0_HeadVar__3_3);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____which_headvars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____which_headvars_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_node_store_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) HeadVar__2_2;
      MR_Integer ArgY1_5 = (MR_Integer) HeadVar__3_3;

      mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_store_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer ArgY1_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_node_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) HeadVar__2_2;
      MR_Word ArgY1_5 = (MR_Word) HeadVar__3_3;

      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[1], HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) HeadVar__1_1;
      MR_Word ArgY1_4 = (MR_Word) HeadVar__2_2;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[1], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_node_key_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) HeadVar__2_2;
      MR_Integer ArgY1_5 = (MR_Integer) HeadVar__3_3;

      mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_key_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer ArgY1_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_node_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) HeadVar__2_2;
      MR_Word ArgY1_5 = (MR_Word) HeadVar__3_3;

      mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) HeadVar__1_1;
      MR_Word ArgY1_4 = (MR_Word) HeadVar__2_2;

      succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_node_1_0(
  MR_Word TypeInfo_for_R_1761,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_1759 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_1760 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_1759 == CastY_1760);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_1796 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
            MR_Integer Var_1797 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
            MR_Box Var_1798 = ((MR_Box) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
            MR_Word Var_1799 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
            MR_Word Var_1800 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
            MR_Integer Var_1801 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
            MR_Integer Var_1802 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
            MR_Word Var_1803 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
            MR_Box Var_1804 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
            MR_Box Var_1805 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
                  MR_Box ArgY2_7 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
                  MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Integer ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
                  MR_Integer ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
                  MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
                  MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
                  MR_Box ArgY8_19 = ((MR_Box) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
                  MR_Integer ArgY9_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8)));
                  MR_Integer ArgY10_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9)));
                  MR_Word Var_24;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_24, Var_1805, ArgY1_5);
                  succeeded = (Var_24 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_24;
                  else
                  {
                    MR_Word Var_25;

                    mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_25, Var_1804, ArgY2_7);
                    succeeded = (Var_25 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_25;
                    else
                    {
                      MR_Word Var_26;

                      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[3], &Var_26, ((MR_Box) (Var_1803)), ((MR_Box) (ArgY3_9)));
                      succeeded = (Var_26 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_26;
                      else
                      {
                        MR_Word Var_27;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_27, Var_1802, ArgY4_11);
                        succeeded = (Var_27 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_27;
                        else
                        {
                          MR_Word Var_28;

                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_28, Var_1801, ArgY5_13);
                          succeeded = (Var_28 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_28;
                          else
                          {
                            MR_Word Var_29;

                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[1], &Var_29, ((MR_Box) (Var_1800)), ((MR_Box) (ArgY6_15)));
                            succeeded = (Var_29 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_29;
                            else
                            {
                              MR_Word Var_30;

                              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[5], &Var_30, ((MR_Box) (Var_1799)), ((MR_Box) (ArgY7_17)));
                              succeeded = (Var_30 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_30;
                              else
                              {
                                MR_Word Var_31;

                                mdbcomp__rtti_access____Compare____label_layout_0_0(&Var_31, Var_1798, ArgY8_19);
                                succeeded = (Var_31 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_31;
                                else
                                {
                                  MR_Word Var_32;

                                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_32, Var_1797, ArgY9_21);
                                  succeeded = (Var_32 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    *HeadVar__1_1 = Var_32;
                                  else
                                    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_1796, ArgY10_23);
                                }
                              }
                            }
                          }
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
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 9:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 10:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_1819 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 7)));
            MR_Integer Var_1820 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 6)));
            MR_Box Var_1821 = ((MR_Box) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 5)));
            MR_Integer Var_1822 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4)));
            MR_Word Var_1823 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
            MR_Box Var_1824 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
            MR_Box Var_1825 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
            MR_Box Var_1826 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_233 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
                  MR_Box ArgY2_235 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
                  MR_Box ArgY3_237 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2));
                  MR_Word ArgY4_239 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3)));
                  MR_Integer ArgY5_241 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 4)));
                  MR_Box ArgY6_243 = ((MR_Box) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 5)));
                  MR_Integer ArgY7_245 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 6)));
                  MR_Integer ArgY8_247 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 7)));
                  MR_Word Var_248;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_248, Var_1826, ArgY1_233);
                  succeeded = (Var_248 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_248;
                  else
                  {
                    MR_Word Var_249;

                    mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_249, Var_1825, ArgY2_235);
                    succeeded = (Var_249 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_249;
                    else
                    {
                      MR_Word Var_250;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_250, Var_1824, ArgY3_237);
                      succeeded = (Var_250 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_250;
                      else
                      {
                        MR_Word Var_251;

                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[3], &Var_251, ((MR_Box) (Var_1823)), ((MR_Box) (ArgY4_239)));
                        succeeded = (Var_251 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_251;
                        else
                        {
                          MR_Word Var_252;

                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_252, Var_1822, ArgY5_241);
                          succeeded = (Var_252 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_252;
                          else
                          {
                            MR_Word Var_253;

                            mdbcomp__rtti_access____Compare____label_layout_0_0(&Var_253, Var_1821, ArgY6_243);
                            succeeded = (Var_253 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_253;
                            else
                            {
                              MR_Word Var_254;

                              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_254, Var_1820, ArgY7_245);
                              succeeded = (Var_254 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_254;
                              else
                                mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_1819, ArgY8_247);
                            }
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
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 9:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 10:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_1847 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4)));
            MR_Box Var_1848 = ((MR_Box) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3)));
            MR_Integer Var_1849 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2)));
            MR_Box Var_1850 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
            MR_Box Var_1851 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));

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
                  MR_Box ArgY1_423 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));
                  MR_Box ArgY2_425 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1));
                  MR_Integer ArgY3_427 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Box ArgY4_429 = ((MR_Box) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3)));
                  MR_Integer ArgY5_431 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 4)));
                  MR_Word Var_432;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_432, Var_1851, ArgY1_423);
                  succeeded = (Var_432 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_432;
                  else
                  {
                    MR_Word Var_433;

                    mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_433, Var_1850, ArgY2_425);
                    succeeded = (Var_433 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_433;
                    else
                    {
                      MR_Word Var_434;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_434, Var_1849, ArgY3_427);
                      succeeded = (Var_434 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_434;
                      else
                      {
                        MR_Word Var_435;

                        mdbcomp__rtti_access____Compare____label_layout_0_0(&Var_435, Var_1848, ArgY4_429);
                        succeeded = (Var_435 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_435;
                        else
                          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_1847, ArgY5_431);
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 9:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 10:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Var_1827 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6)));
                MR_Box Var_1828 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
                MR_Integer Var_1829 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                MR_Box Var_1830 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
                MR_Box Var_1831 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
                MR_Box Var_1832 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Box ArgY1_571 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));
                          MR_Box ArgY2_573 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2));
                          MR_Box ArgY3_575 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3));
                          MR_Integer ArgY4_577 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4)));
                          MR_Box ArgY5_579 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5)));
                          MR_Integer ArgY6_581 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 6)));
                          MR_Word Var_582;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_582, Var_1832, ArgY1_571);
                          succeeded = (Var_582 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_582;
                          else
                          {
                            MR_Word Var_583;

                            mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_583, Var_1831, ArgY2_573);
                            succeeded = (Var_583 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_583;
                            else
                            {
                              MR_Word Var_584;

                              mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_584, Var_1830, ArgY3_575);
                              succeeded = (Var_584 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_584;
                              else
                              {
                                MR_Word Var_585;

                                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_585, Var_1829, ArgY4_577);
                                succeeded = (Var_585 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_585;
                                else
                                {
                                  MR_Word Var_586;

                                  mdbcomp__rtti_access____Compare____label_layout_0_0(&Var_586, Var_1828, ArgY5_579);
                                  succeeded = (Var_586 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    *HeadVar__1_1 = Var_586;
                                  else
                                    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_1827, ArgY6_581);
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
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Var_1812 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7)));
                MR_Box Var_1813 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6)));
                MR_Integer Var_1814 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
                MR_Word Var_1815 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                MR_Box Var_1816 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
                MR_Box Var_1817 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
                MR_Box Var_1818 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box ArgY1_737 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));
                          MR_Box ArgY2_739 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2));
                          MR_Box ArgY3_741 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3));
                          MR_Word ArgY4_743 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4)));
                          MR_Integer ArgY5_745 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5)));
                          MR_Box ArgY6_747 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 6)));
                          MR_Integer ArgY7_749 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 7)));
                          MR_Word Var_750;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_750, Var_1818, ArgY1_737);
                          succeeded = (Var_750 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_750;
                          else
                          {
                            MR_Word Var_751;

                            mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_751, Var_1817, ArgY2_739);
                            succeeded = (Var_751 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_751;
                            else
                            {
                              MR_Word Var_752;

                              mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_752, Var_1816, ArgY3_741);
                              succeeded = (Var_752 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_752;
                              else
                              {
                                MR_Word Var_753;

                                mdb__term_rep____Compare____term_rep_0_0(&Var_753, Var_1815, ArgY4_743);
                                succeeded = (Var_753 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_753;
                                else
                                {
                                  MR_Word Var_754;

                                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_754, Var_1814, ArgY5_745);
                                  succeeded = (Var_754 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    *HeadVar__1_1 = Var_754;
                                  else
                                  {
                                    MR_Word Var_755;

                                    mdbcomp__rtti_access____Compare____label_layout_0_0(&Var_755, Var_1813, ArgY6_747);
                                    succeeded = (Var_755 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                      *HeadVar__1_1 = Var_755;
                                    else
                                      mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_1812, ArgY7_749);
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
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Box Var_1852 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Box Var_1853 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Box ArgY1_891 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));
                          MR_Box ArgY2_893 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word Var_894;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_894, Var_1853, ArgY1_891);
                          succeeded = (Var_894 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_894;
                          else
                            mdbcomp__rtti_access____Compare____label_layout_0_0(HeadVar__1_1, Var_1852, ArgY2_893);
                        }
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
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Box Var_1833 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Box Var_1834 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                          MR_Box ArgY1_985 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));
                          MR_Box ArgY2_987 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word Var_988;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_988, Var_1834, ArgY1_985);
                          succeeded = (Var_988 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_988;
                          else
                            mdbcomp__rtti_access____Compare____label_layout_0_0(HeadVar__1_1, Var_1833, ArgY2_987);
                        }
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Box Var_1835 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
                MR_Box Var_1836 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Box Var_1837 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                        {
                          MR_Box ArgY1_1086 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));
                          MR_Box ArgY2_1088 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                          MR_Box ArgY3_1090 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3));
                          MR_Word Var_1091;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_1091, Var_1837, ArgY1_1086);
                          succeeded = (Var_1091 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_1091;
                          else
                          {
                            MR_Word Var_1092;

                            mdbcomp__rtti_access____Compare____label_layout_0_0(&Var_1092, Var_1836, ArgY2_1088);
                            succeeded = (Var_1092 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_1092;
                            else
                              mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, HeadVar__1_1, Var_1835, ArgY3_1090);
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Var_1806 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Box Var_1807 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Box Var_1808 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                        {
                          MR_Box ArgY1_1197 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));
                          MR_Box ArgY2_1199 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word ArgY3_1201 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word Var_1202;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_1202, Var_1808, ArgY1_1197);
                          succeeded = (Var_1202 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_1202;
                          else
                          {
                            MR_Word Var_1203;

                            mdbcomp__rtti_access____Compare____label_layout_0_0(&Var_1203, Var_1807, ArgY2_1199);
                            succeeded = (Var_1203 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_1203;
                            else
                            {
                              MR_Integer Var_1857 = (MR_Integer) Var_1806;
                              MR_Integer Var_1858 = (MR_Integer) ArgY3_1201;

                              mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_1857, Var_1858);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Box Var_1854 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Box Var_1855 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
                MR_Box Var_1856 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Box ArgY1_1308 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));
                          MR_Box ArgY2_1310 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2));
                          MR_Box ArgY3_1312 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word Var_1313;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_1313, Var_1856, ArgY1_1308);
                          succeeded = (Var_1313 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_1313;
                          else
                          {
                            MR_Word Var_1314;

                            mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_1314, Var_1855, ArgY2_1310);
                            succeeded = (Var_1314 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_1314;
                            else
                              mdbcomp__rtti_access____Compare____label_layout_0_0(HeadVar__1_1, Var_1854, ArgY3_1312);
                          }
                        }
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Box Var_1809 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Box Var_1810 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
                MR_Box Var_1811 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 7:
                        {
                          MR_Box ArgY1_1419 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));
                          MR_Box ArgY2_1421 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2));
                          MR_Box ArgY3_1423 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word Var_1424;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_1424, Var_1811, ArgY1_1419);
                          succeeded = (Var_1424 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_1424;
                          else
                          {
                            MR_Word Var_1425;

                            mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_1425, Var_1810, ArgY2_1421);
                            succeeded = (Var_1425 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_1425;
                            else
                              mdbcomp__rtti_access____Compare____label_layout_0_0(HeadVar__1_1, Var_1809, ArgY3_1423);
                          }
                        }
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word Var_1838 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Box Var_1839 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Box Var_1840 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Box ArgY1_1530 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));
                          MR_Box ArgY2_1532 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word ArgY3_1534 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word Var_1535;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_1535, Var_1840, ArgY1_1530);
                          succeeded = (Var_1535 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_1535;
                          else
                          {
                            MR_Word Var_1536;

                            mdbcomp__rtti_access____Compare____label_layout_0_0(&Var_1536, Var_1839, ArgY2_1532);
                            succeeded = (Var_1536 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_1536;
                            else
                            {
                              MR_Integer Var_1859 = (MR_Integer) Var_1838;
                              MR_Integer Var_1860 = (MR_Integer) ArgY3_1534;

                              mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_1859, Var_1860);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 9:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Box Var_1844 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Box Var_1845 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
                MR_Box Var_1846 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 9:
                        {
                          MR_Box ArgY1_1641 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));
                          MR_Box ArgY2_1643 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2));
                          MR_Box ArgY3_1645 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word Var_1646;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_1646, Var_1846, ArgY1_1641);
                          succeeded = (Var_1646 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_1646;
                          else
                          {
                            MR_Word Var_1647;

                            mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_1647, Var_1845, ArgY2_1643);
                            succeeded = (Var_1647 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_1647;
                            else
                              mdbcomp__rtti_access____Compare____label_layout_0_0(HeadVar__1_1, Var_1844, ArgY3_1645);
                          }
                        }
                        break;
                      case (MR_Integer) 10:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Box Var_1841 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Box Var_1842 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
                MR_Box Var_1843 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 9:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 10:
                        {
                          MR_Box ArgY1_1752 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));
                          MR_Box ArgY2_1754 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2));
                          MR_Box ArgY3_1756 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word Var_1757;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_1757, Var_1843, ArgY1_1752);
                          succeeded = (Var_1757 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_1757;
                          else
                          {
                            MR_Word Var_1758;

                            mercury__builtin__compare_3_p_0(TypeInfo_for_R_1761, &Var_1758, Var_1842, ArgY2_1754);
                            succeeded = (Var_1758 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_1758;
                            else
                              mdbcomp__rtti_access____Compare____label_layout_0_0(HeadVar__1_1, Var_1841, ArgY3_1756);
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
mdb__declarative_execution____Unify____trace_node_1_0(
  MR_Word TypeInfo_for_R_127,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_125 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_126 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_125 == CastY_126);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_128_128;
            MR_Word TypeInfo_129_129;
            MR_Word TypeInfo_130_130;
            MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_4;
            MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
            MR_Box ArgY2_6;
            MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word ArgY3_8;
            MR_Integer ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
            MR_Integer ArgY4_10;
            MR_Integer ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
            MR_Integer ArgY5_12;
            MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
            MR_Word ArgY6_14;
            MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
            MR_Word ArgY7_16;
            MR_Box ArgX8_17 = ((MR_Box) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
            MR_Box ArgY8_18;
            MR_Integer ArgX9_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8)));
            MR_Integer ArgY9_20;
            MR_Integer ArgX10_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9)));
            MR_Integer ArgY10_22;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
              ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
              ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
              ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
              ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
              ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
              ArgY8_18 = ((MR_Box) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
              ArgY9_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
              ArgY10_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_3, ArgY1_4);
              if (succeeded)
              {
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX2_5, ArgY2_6);
                if (succeeded)
                {
                  TypeInfo_128_128 = (MR_Word) &mdb__declarative_execution_scalar_common_1[3];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_128_128, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
                  if (succeeded)
                  {
                    succeeded = (ArgX4_9 == ArgY4_10);
                    if (succeeded)
                    {
                      succeeded = (ArgX5_11 == ArgY5_12);
                      if (succeeded)
                      {
                        TypeInfo_129_129 = (MR_Word) &mdb__declarative_execution_scalar_common_1[1];
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_129_129, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                        if (succeeded)
                        {
                          TypeInfo_130_130 = (MR_Word) &mdb__declarative_execution_scalar_common_1[5];
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_130_130, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                          if (succeeded)
                          {
                            succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(ArgX8_17, ArgY8_18);
                            if (succeeded)
                            {
                              succeeded = (ArgX9_19 == ArgY9_20);
                              if (succeeded)
                                succeeded = (ArgX10_21 == ArgY10_22);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_132_132;
            MR_Box ArgX1_23 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_24;
            MR_Box ArgX2_25 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
            MR_Box ArgY2_26;
            MR_Box ArgX3_27 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
            MR_Box ArgY3_28;
            MR_Word ArgX4_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
            MR_Word ArgY4_30;
            MR_Integer ArgX5_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4)));
            MR_Integer ArgY5_32;
            MR_Box ArgX6_33 = ((MR_Box) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 5)));
            MR_Box ArgY6_34;
            MR_Integer ArgX7_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 6)));
            MR_Integer ArgY7_36;
            MR_Integer ArgX8_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 7)));
            MR_Integer ArgY8_38;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_24 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_26 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
              ArgY3_28 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
              ArgY4_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
              ArgY5_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4)));
              ArgY6_34 = ((MR_Box) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 5)));
              ArgY7_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 6)));
              ArgY8_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 7)));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_23, ArgY1_24);
              if (succeeded)
              {
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX2_25, ArgY2_26);
                if (succeeded)
                {
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX3_27, ArgY3_28);
                  if (succeeded)
                  {
                    TypeInfo_132_132 = (MR_Word) &mdb__declarative_execution_scalar_common_1[3];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_132_132, ((MR_Box) (ArgX4_29)), ((MR_Box) (ArgY4_30)));
                    if (succeeded)
                    {
                      succeeded = (ArgX5_31 == ArgY5_32);
                      if (succeeded)
                      {
                        succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(ArgX6_33, ArgY6_34);
                        if (succeeded)
                        {
                          succeeded = (ArgX7_35 == ArgY7_36);
                          if (succeeded)
                            succeeded = (ArgX8_37 == ArgY8_38);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box ArgX1_39 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_40;
            MR_Box ArgX2_41 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1));
            MR_Box ArgY2_42;
            MR_Integer ArgX3_43 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer ArgY3_44;
            MR_Box ArgX4_45 = ((MR_Box) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3)));
            MR_Box ArgY4_46;
            MR_Integer ArgX5_47 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4)));
            MR_Integer ArgY5_48;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_40 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_42 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
              ArgY3_44 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2)));
              ArgY4_46 = ((MR_Box) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3)));
              ArgY5_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4)));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_39, ArgY1_40);
              if (succeeded)
              {
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX2_41, ArgY2_42);
                if (succeeded)
                {
                  succeeded = (ArgX3_43 == ArgY3_44);
                  if (succeeded)
                  {
                    succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(ArgX4_45, ArgY4_46);
                    if (succeeded)
                      succeeded = (ArgX5_47 == ArgY5_48);
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box ArgX1_49 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_50;
                MR_Box ArgX2_51 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
                MR_Box ArgY2_52;
                MR_Box ArgX3_53 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3));
                MR_Box ArgY3_54;
                MR_Integer ArgX4_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4)));
                MR_Integer ArgY4_56;
                MR_Box ArgX5_57 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5)));
                MR_Box ArgY5_58;
                MR_Integer ArgX6_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6)));
                MR_Integer ArgY6_60;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_50 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  ArgY2_52 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
                  ArgY3_54 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
                  ArgY4_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                  ArgY5_58 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
                  ArgY6_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6)));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_49, ArgY1_50);
                  if (succeeded)
                  {
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX2_51, ArgY2_52);
                    if (succeeded)
                    {
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX3_53, ArgY3_54);
                      if (succeeded)
                      {
                        succeeded = (ArgX4_55 == ArgY4_56);
                        if (succeeded)
                        {
                          succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(ArgX5_57, ArgY5_58);
                          if (succeeded)
                            succeeded = (ArgX6_59 == ArgY6_60);
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box ArgX1_61 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_62;
                MR_Box ArgX2_63 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
                MR_Box ArgY2_64;
                MR_Box ArgX3_65 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3));
                MR_Box ArgY3_66;
                MR_Word ArgX4_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4)));
                MR_Word ArgY4_68;
                MR_Integer ArgX5_69 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5)));
                MR_Integer ArgY5_70;
                MR_Box ArgX6_71 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6)));
                MR_Box ArgY6_72;
                MR_Integer ArgX7_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7)));
                MR_Integer ArgY7_74;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_62 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  ArgY2_64 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
                  ArgY3_66 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
                  ArgY4_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                  ArgY5_70 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
                  ArgY6_72 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6)));
                  ArgY7_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7)));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_61, ArgY1_62);
                  if (succeeded)
                  {
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX2_63, ArgY2_64);
                    if (succeeded)
                    {
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX3_65, ArgY3_66);
                      if (succeeded)
                      {
                        succeeded = mdb__term_rep____Unify____term_rep_0_0(ArgX4_67, ArgY4_68);
                        if (succeeded)
                        {
                          succeeded = (ArgX5_69 == ArgY5_70);
                          if (succeeded)
                          {
                            succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(ArgX6_71, ArgY6_72);
                            if (succeeded)
                              succeeded = (ArgX7_73 == ArgY7_74);
                          }
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Box ArgX1_75 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_76;
                MR_Box ArgX2_77 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Box ArgY2_78;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_76 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  ArgY2_78 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_75, ArgY1_76);
                  if (succeeded)
                    succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(ArgX2_77, ArgY2_78);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Box ArgX1_79 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_80;
                MR_Box ArgX2_81 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Box ArgY2_82;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_80 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  ArgY2_82 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_79, ArgY1_80);
                  if (succeeded)
                    succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(ArgX2_81, ArgY2_82);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Box ArgX1_83 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_84;
                MR_Box ArgX2_85 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Box ArgY2_86;
                MR_Box ArgX3_87 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3));
                MR_Box ArgY3_88;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_84 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  ArgY2_86 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  ArgY3_88 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_83, ArgY1_84);
                  if (succeeded)
                  {
                    succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(ArgX2_85, ArgY2_86);
                    if (succeeded)
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX3_87, ArgY3_88);
                  }
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Box ArgX1_89 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_90;
                MR_Box ArgX2_91 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Box ArgY2_92;
                MR_Word ArgX3_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_Word ArgY3_94;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  ArgY1_90 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  ArgY2_92 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  ArgY3_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_89, ArgY1_90);
                  if (succeeded)
                  {
                    succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(ArgX2_91, ArgY2_92);
                    if (succeeded)
                      succeeded = (ArgX3_93 == ArgY3_94);
                  }
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Box ArgX1_95 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_96;
                MR_Box ArgX2_97 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
                MR_Box ArgY2_98;
                MR_Box ArgX3_99 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_Box ArgY3_100;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  ArgY1_96 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  ArgY2_98 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
                  ArgY3_100 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_95, ArgY1_96);
                  if (succeeded)
                  {
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX2_97, ArgY2_98);
                    if (succeeded)
                      succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(ArgX3_99, ArgY3_100);
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Box ArgX1_101 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_102;
                MR_Box ArgX2_103 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
                MR_Box ArgY2_104;
                MR_Box ArgX3_105 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_Box ArgY3_106;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  ArgY1_102 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  ArgY2_104 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
                  ArgY3_106 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_101, ArgY1_102);
                  if (succeeded)
                  {
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX2_103, ArgY2_104);
                    if (succeeded)
                      succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(ArgX3_105, ArgY3_106);
                  }
                }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Box ArgX1_107 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_108;
                MR_Box ArgX2_109 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Box ArgY2_110;
                MR_Word ArgX3_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_Word ArgY3_112;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
                if (succeeded)
                {
                  ArgY1_108 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  ArgY2_110 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  ArgY3_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_107, ArgY1_108);
                  if (succeeded)
                  {
                    succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(ArgX2_109, ArgY2_110);
                    if (succeeded)
                      succeeded = (ArgX3_111 == ArgY3_112);
                  }
                }
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Box ArgX1_113 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_114;
                MR_Box ArgX2_115 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
                MR_Box ArgY2_116;
                MR_Box ArgX3_117 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_Box ArgY3_118;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ArgY1_114 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  ArgY2_116 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
                  ArgY3_118 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_113, ArgY1_114);
                  if (succeeded)
                  {
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX2_115, ArgY2_116);
                    if (succeeded)
                      succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(ArgX3_117, ArgY3_118);
                  }
                }
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Box ArgX1_119 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_120;
                MR_Box ArgX2_121 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
                MR_Box ArgY2_122;
                MR_Box ArgX3_123 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_Box ArgY3_124;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
                if (succeeded)
                {
                  ArgY1_120 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  ArgY2_122 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
                  ArgY3_124 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_119, ArgY1_120);
                  if (succeeded)
                  {
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX2_121, ArgY2_122);
                    if (succeeded)
                      succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(ArgX3_123, ArgY3_124);
                  }
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
mdb__declarative_execution____Compare____trace_atom_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;
      MR_Integer Var_17 = (MR_Integer) ArgX1_4;
      MR_Integer Var_18 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_10, Var_17, Var_18);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[4], HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeInfo_11_11 = (MR_Word) &mdb__declarative_execution_scalar_common_1[4];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Box ArgY1_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mdbcomp__rtti_access____Compare____proc_layout_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[3], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Box ArgX1_3 = ((MR_Box) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Box ArgY1_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mdbcomp__rtti_access____Unify____proc_layout_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) &mdb__declarative_execution_scalar_common_1[3];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____suspicion_accumulator_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____suspicion_accumulator_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____sequence_number_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____sequence_number_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____implicit_tree_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) HeadVar__2_2;
      MR_Integer ArgY1_5 = (MR_Integer) HeadVar__3_3;

      mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____implicit_tree_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer ArgY1_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____goal_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____goal_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____event_number_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____event_number_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mdb__declarative_execution__trace_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_annotated_trace_4, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box conv1_HeadVar__3_3;

    succeeded = func_0(((MR_Box) TypeClassInfo_for_annotated_trace_4), HeadVar__1_1, HeadVar__2_2, &conv1_HeadVar__3_3);
    if (succeeded)
    {
      *HeadVar__3_3 = ((MR_Word) conv1_HeadVar__3_3);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution__convert_node_2_p_0(
  MR_Word N1_1,
  MR_Word * N2_2)
{
  {
{
#define MR_PROC_LABEL mdb__declarative_execution__convert_node_2_p_0

	MR_Word N1;
	MR_Word N2;

	N1 =  N1_1 ;
		{

    N2 = N1;


		;}
#undef MR_PROC_LABEL
	 *N2_2  = N2;
}
  }
}

static void MR_CALL 
mdb__declarative_execution__node_id_to_key_2_p_0(
  MR_Word Id_1,
  MR_Word * Key_2)
{
  {
{
#define MR_PROC_LABEL mdb__declarative_execution__node_id_to_key_2_p_0

	MR_Word Id;
	MR_Word Key;

	Id =  Id_1 ;
		{

    Key = (MR_Integer) Id;


		;}
#undef MR_PROC_LABEL
	 *Key_2  = Key;
}
  }
}

static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0(
  MR_Integer HldsNum_5,
  MR_Integer ProgVis_6,
  MR_Word Args_7,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded = (ProgVis_6 == (MR_Integer) 0);
    MR_Word Arg_8;
    MR_Word Var_9;

    if (succeeded)
      Var_9 = (MR_Integer) 0;
    else
      Var_9 = (MR_Integer) 1;
    {
      Arg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Arg_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Arg_8, 1) = ((MR_Box) (HldsNum_5));
      MR_hl_field(MR_mktag(0), Arg_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_7));
    }
  }
}

static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_value_5_p_0(
  MR_Integer HldsNum_6,
  MR_Integer ProgVis_7,
  MR_Word Val_8,
  MR_Word Args_9,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;
    MR_Word Arg_10;
    MR_Word Rep_11;
    MR_Word Var_12;
    MR_Word Var_13;

    mdb__term_rep__univ_to_rep_2_p_0(Val_8, &Rep_11);
    succeeded = (ProgVis_7 == (MR_Integer) 0);
    if (succeeded)
      Var_12 = (MR_Integer) 0;
    else
      Var_12 = (MR_Integer) 1;
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Rep_11));
    }
    {
      Arg_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Arg_10, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), Arg_10, 1) = ((MR_Box) (HldsNum_6));
      MR_hl_field(MR_mktag(0), Arg_10, 2) = ((MR_Box) (Var_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_9));
    }
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__init_trace_atom_args_0_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
mdb__declarative_execution__null_trace_node_id_1_p_0(
  MR_Word * Id_1)
{
  {
{
#define MR_PROC_LABEL mdb__declarative_execution__null_trace_node_id_1_p_0

	MR_Word Id;

		{

    Id = (MR_Word) NULL;


		;}
#undef MR_PROC_LABEL
	 *Id_1  = Id;
}
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_fail_node_3_f_0(
  MR_Word Preceding_5,
  MR_Word Neg_6,
  MR_Box Label_7)
{
  {
    MR_Word HeadVar__4_4;

    {
      HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 1) = ((MR_Box) (Preceding_5));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 2) = ((MR_Box) (Neg_6));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 3) = ((MR_Box) (Label_7));
    }
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_succ_node_3_f_0(
  MR_Word Preceding_5,
  MR_Word Neg_6,
  MR_Box Label_7)
{
  {
    MR_Word HeadVar__4_4;

    {
      HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 1) = ((MR_Box) (Preceding_5));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 2) = ((MR_Box) (Neg_6));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 3) = ((MR_Box) (Label_7));
    }
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_node_2_f_0(
  MR_Word Preceding_4,
  MR_Box Label_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Preceding_4));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Label_5));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 3) = ((MR_Box) ((MR_Integer) 2));
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_else_node_3_f_0(
  MR_Word Preceding_5,
  MR_Word Cond_6,
  MR_Box Label_7)
{
  {
    MR_Word HeadVar__4_4;

    {
      HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 1) = ((MR_Box) (Preceding_5));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 2) = ((MR_Box) (Cond_6));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 3) = ((MR_Box) (Label_7));
    }
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_then_node_3_f_0(
  MR_Word Preceding_5,
  MR_Word Cond_6,
  MR_Box Label_7)
{
  {
    MR_Word HeadVar__4_4;

    {
      HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 1) = ((MR_Box) (Preceding_5));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 2) = ((MR_Box) (Cond_6));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 3) = ((MR_Box) (Label_7));
    }
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_cond_node_2_f_0(
  MR_Word Preceding_4,
  MR_Box Label_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Preceding_4));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Label_5));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 3) = ((MR_Box) ((MR_Integer) 2));
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_later_disj_node_4_f_0(
  MR_Word Store_6,
  MR_Word Preceding_7,
  MR_Box Label_8,
  MR_Word PrevDisj_9)
{
  {
    MR_Word HeadVar__5_5;
    MR_Word FirstDisj_10;
    MR_Word PrevDisjNode_11;

    mdb__declarative_execution__disj_node_from_id_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[0], ((MR_Box) (Store_6)), ((MR_Box) (PrevDisj_9)), &PrevDisjNode_11);
    if (((((MR_tag((MR_Word) PrevDisjNode_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PrevDisjNode_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
      FirstDisj_10 = PrevDisj_9;
    else
    {
      MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), PrevDisjNode_11, (MR_Integer) 1)));
      MR_Box Var_15 = ((MR_Box) (MR_hl_field(MR_mktag(3), PrevDisjNode_11, (MR_Integer) 2)));

      FirstDisj_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), PrevDisjNode_11, (MR_Integer) 3)));
    }
    {
      HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), HeadVar__5_5, 1) = ((MR_Box) (Preceding_7));
      MR_hl_field(MR_mktag(3), HeadVar__5_5, 2) = ((MR_Box) (Label_8));
      MR_hl_field(MR_mktag(3), HeadVar__5_5, 3) = ((MR_Box) (FirstDisj_10));
    }
    return HeadVar__5_5;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_first_disj_node_2_f_0(
  MR_Word Preceding_4,
  MR_Box Label_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Preceding_4));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Label_5));
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_switch_node_2_f_0(
  MR_Word Preceding_4,
  MR_Box Label_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Preceding_4));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Label_5));
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
mdb__declarative_execution__construct_excp_node_8_p_0(
  MR_Word Preceding_9,
  MR_Word Call_10,
  MR_Word MaybeRedo_11,
  MR_Word Exception_12,
  MR_Integer EventNo_13,
  MR_Box Label_14,
  MR_Integer Suspicion_15,
  MR_Word * Excp_16)
{
  {
    MR_Word ExceptionRep_17;

    mdb__term_rep__univ_to_rep_2_p_0(Exception_12, &ExceptionRep_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
      *Excp_16 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Preceding_9));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Call_10));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybeRedo_11));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ExceptionRep_17));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (EventNo_13));
      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Label_14));
      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (Suspicion_15));
    }
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_fail_node_6_f_0(
  MR_Word Preceding_8,
  MR_Word Call_9,
  MR_Word Redo_10,
  MR_Integer EventNo_11,
  MR_Box Label_12,
  MR_Integer Suspicion_13)
{
  {
    MR_Word HeadVar__7_7;

    {
      HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__7_7, 1) = ((MR_Box) (Preceding_8));
      MR_hl_field(MR_mktag(3), HeadVar__7_7, 2) = ((MR_Box) (Call_9));
      MR_hl_field(MR_mktag(3), HeadVar__7_7, 3) = ((MR_Box) (Redo_10));
      MR_hl_field(MR_mktag(3), HeadVar__7_7, 4) = ((MR_Box) (EventNo_11));
      MR_hl_field(MR_mktag(3), HeadVar__7_7, 5) = ((MR_Box) (Label_12));
      MR_hl_field(MR_mktag(3), HeadVar__7_7, 6) = ((MR_Box) (Suspicion_13));
    }
    return HeadVar__7_7;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_redo_node_5_f_0(
  MR_Word Preceding_7,
  MR_Word Exit_8,
  MR_Integer Event_9,
  MR_Box Label_10,
  MR_Integer Suspicion_11)
{
  {
    MR_Word HeadVar__6_6;

    {
      HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__6_6, 0) = ((MR_Box) (Preceding_7));
      MR_hl_field(MR_mktag(2), HeadVar__6_6, 1) = ((MR_Box) (Exit_8));
      MR_hl_field(MR_mktag(2), HeadVar__6_6, 2) = ((MR_Box) (Event_9));
      MR_hl_field(MR_mktag(2), HeadVar__6_6, 3) = ((MR_Box) (Label_10));
      MR_hl_field(MR_mktag(2), HeadVar__6_6, 4) = ((MR_Box) (Suspicion_11));
    }
    return HeadVar__6_6;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_exit_node_8_f_0(
  MR_Word Preceding_10,
  MR_Word Call_11,
  MR_Word MaybeRedo_12,
  MR_Word AtomArgs_13,
  MR_Integer EventNo_14,
  MR_Box Label_15,
  MR_Integer IoSeqNum_16,
  MR_Integer Suspicion_17)
{
  {
    MR_Word HeadVar__9_9;

    {
      HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__9_9, 0) = ((MR_Box) (Preceding_10));
      MR_hl_field(MR_mktag(1), HeadVar__9_9, 1) = ((MR_Box) (Call_11));
      MR_hl_field(MR_mktag(1), HeadVar__9_9, 2) = ((MR_Box) (MaybeRedo_12));
      MR_hl_field(MR_mktag(1), HeadVar__9_9, 3) = ((MR_Box) (AtomArgs_13));
      MR_hl_field(MR_mktag(1), HeadVar__9_9, 4) = ((MR_Box) (EventNo_14));
      MR_hl_field(MR_mktag(1), HeadVar__9_9, 5) = ((MR_Box) (Label_15));
      MR_hl_field(MR_mktag(1), HeadVar__9_9, 6) = ((MR_Box) (IoSeqNum_16));
      MR_hl_field(MR_mktag(1), HeadVar__9_9, 7) = ((MR_Box) (Suspicion_17));
    }
    return HeadVar__9_9;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__make_no_maybe_label_0_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__make_yes_maybe_label_1_f_0(
  MR_Box Label_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Label_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_call_node_9_f_0(
  MR_Word Preceding_11,
  MR_Word AtomArgs_12,
  MR_Integer SeqNo_13,
  MR_Integer EventNo_14,
  MR_Word AtMaxDepth_15,
  MR_Word MaybeReturnLabel_16,
  MR_Box Label_17,
  MR_Integer IoSeqNum_18,
  MR_Integer Suspicion_19)
{
  {
    MR_Word Call_20;
    MR_Word MaybeImplicitTreeInfo_21;
    MR_Word LastInterface_22;

    switch (AtMaxDepth_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeImplicitTreeInfo_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MaybeImplicitTreeInfo_21 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_execution_scalar_common_4[0]);
        }
        break;
    }
{
#define MR_PROC_LABEL mdb__declarative_execution__construct_call_node_9_f_0

	MR_Word Id;

		{

    Id = (MR_Word) NULL;


		;}
#undef MR_PROC_LABEL
	 LastInterface_22  = Id;
}
    {
      Call_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Call_20, 0) = ((MR_Box) (Preceding_11));
      MR_hl_field(MR_mktag(0), Call_20, 1) = ((MR_Box) (LastInterface_22));
      MR_hl_field(MR_mktag(0), Call_20, 2) = ((MR_Box) (AtomArgs_12));
      MR_hl_field(MR_mktag(0), Call_20, 3) = ((MR_Box) (SeqNo_13));
      MR_hl_field(MR_mktag(0), Call_20, 4) = ((MR_Box) (EventNo_14));
      MR_hl_field(MR_mktag(0), Call_20, 5) = ((MR_Box) (MaybeImplicitTreeInfo_21));
      MR_hl_field(MR_mktag(0), Call_20, 6) = ((MR_Box) (MaybeReturnLabel_16));
      MR_hl_field(MR_mktag(0), Call_20, 7) = ((MR_Box) (Label_17));
      MR_hl_field(MR_mktag(0), Call_20, 8) = ((MR_Box) (IoSeqNum_18));
      MR_hl_field(MR_mktag(0), Call_20, 9) = ((MR_Box) (Suspicion_19));
    }
    return Call_20;
  }
}

static void MR_CALL 
mdb__declarative_execution__print_trace_node_4_p_0(
  MR_Word OutStr_5,
  MR_Word Node_6)
{
  {
    MR_Word CNode_8;

{
#define MR_PROC_LABEL mdb__declarative_execution__print_trace_node_4_p_0

	MR_Word N1;
	MR_Word N2;

	N1 =  Node_6 ;
		{

    N2 = N1;


		;}
#undef MR_PROC_LABEL
	 CNode_8  = N2;
}
    mercury__io__write_4_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[0], OutStr_5, ((MR_Box) (CNode_8)));
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__find_prev_contour_store_2_f_0(
  MR_Word Store_4,
  MR_Word Id_5)
{
  {
    MR_bool succeeded;
    MR_Word Prev_6;
    MR_Word TypeClassInfo_for_annotated_trace_9 = (MR_Word) &mdb__declarative_execution_scalar_common_2[0];
    MR_Word Node_7;
    MR_Word Prev0_8;

    mdb__declarative_execution__det_trace_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_9, ((MR_Box) (Store_4)), ((MR_Box) (Id_5)), &Node_7);
    switch (MR_tag((MR_Word) Node_7)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[31])));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Exit_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), Node_7, (MR_Integer) 1)));
          MR_Word ExitNode_25;
          MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), Node_7, (MR_Integer) 0)));
          MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Node_7, (MR_Integer) 2)));
          MR_Box Var_23 = ((MR_Box) (MR_hl_field(MR_mktag(2), Node_7, (MR_Integer) 3)));
          MR_Integer Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Node_7, (MR_Integer) 4)));
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Integer Var_69;
          MR_Box Var_70;
          MR_Integer Var_71;
          MR_Integer Var_72;

          mdb__declarative_execution__exit_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_9, ((MR_Box) (Store_4)), ((MR_Box) (Exit_21)), &ExitNode_25);
          Prev0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ExitNode_25, (MR_Integer) 0)));
          Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ExitNode_25, (MR_Integer) 1)));
          Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ExitNode_25, (MR_Integer) 2)));
          Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ExitNode_25, (MR_Integer) 3)));
          Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ExitNode_25, (MR_Integer) 4)));
          Var_70 = ((MR_Box) (MR_hl_field(MR_mktag(1), ExitNode_25, (MR_Integer) 5)));
          Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ExitNode_25, (MR_Integer) 6)));
          Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ExitNode_25, (MR_Integer) 7)));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word Call_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 2)));
              MR_Word CallNode_19;
              MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 1)));
              MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 3)));
              MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 4)));
              MR_Box Var_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 5)));
              MR_Integer Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 6)));
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Integer Var_59;
              MR_Integer Var_60;
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Box Var_63;
              MR_Integer Var_64;
              MR_Integer Var_65;

              mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_9, ((MR_Box) (Store_4)), ((MR_Box) (Call_14)), &CallNode_19);
              Prev0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_19, (MR_Integer) 0)));
              Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_19, (MR_Integer) 1)));
              Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_19, (MR_Integer) 2)));
              Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_19, (MR_Integer) 3)));
              Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_19, (MR_Integer) 4)));
              Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_19, (MR_Integer) 5)));
              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_19, (MR_Integer) 6)));
              Var_63 = ((MR_Box) (MR_hl_field(MR_mktag(0), CallNode_19, (MR_Integer) 7)));
              Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_19, (MR_Integer) 8)));
              Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_19, (MR_Integer) 9)));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[32])));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[33])));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Neg_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 2)));
              MR_Word Var_56;
              MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 1)));
              MR_Box Var_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 3)));
              MR_Box Var_29;
              MR_Word Var_30;

              mdb__declarative_execution__neg_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_9, ((MR_Box) (Store_4)), ((MR_Box) (Neg_27)), &Var_56);
              Prev0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_56, (MR_Integer) 1)));
              Var_29 = ((MR_Box) (MR_hl_field(MR_mktag(3), Var_56, (MR_Integer) 2)));
              Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_56, (MR_Integer) 3)));
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (succeeded)
      Prev_6 = Prev0_8;
    else
      Prev_6 = Id_5;
    return Prev_6;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__step_left_in_contour_store_2_f_0(
  MR_Word Store_4,
  MR_Word Node_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Box conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mdb__declarative_execution__step_left_in_contour_2_f_0((MR_Word) &mdb__declarative_execution_scalar_common_2[0], ((MR_Box) (Store_4)), Node_5);
    HeadVar__3_3 = ((MR_Word) conv0_HeadVar__3_3);
    return HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_first_disj_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if (((((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
    {
{
#define MR_PROC_LABEL mdb__declarative_execution__trace_node_first_disj_2_p_0

	MR_Word Id;

		{

    Id = (MR_Word) NULL;


		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = Id;
}
      succeeded = MR_TRUE;
    }
    else
    if (((((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
    {
      MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
      MR_Box Var_7 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));

      *HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_seqno_3_p_0(
  MR_Word S_4,
  MR_Word Node_5,
  MR_Integer * SeqNo_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Node_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Integer SeqNo0_7;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Integer Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Box Var_16;
    MR_Integer Var_17;
    MR_Integer Var_18;

    if (succeeded)
    {
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node_5, (MR_Integer) 0)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node_5, (MR_Integer) 1)));
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node_5, (MR_Integer) 2)));
      SeqNo0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Node_5, (MR_Integer) 3)));
      Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Node_5, (MR_Integer) 4)));
      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node_5, (MR_Integer) 5)));
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node_5, (MR_Integer) 6)));
      Var_16 = ((MR_Box) (MR_hl_field(MR_mktag(0), Node_5, (MR_Integer) 7)));
      Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Node_5, (MR_Integer) 8)));
      Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Node_5, (MR_Integer) 9)));
      *SeqNo_6 = SeqNo0_7;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeClassInfo_for_annotated_trace_28;
      MR_Word Call_8;
      MR_Word CallNode_9;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Integer Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Box Var_25;
      MR_Integer Var_26;
      MR_Integer Var_27;

      succeeded = mdb__declarative_execution__trace_node_call_3_p_0(S_4, Node_5, &Call_8);
      if (succeeded)
      {
        TypeClassInfo_for_annotated_trace_28 = (MR_Word) &mdb__declarative_execution_scalar_common_2[0];
        mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_28, ((MR_Box) (S_4)), ((MR_Box) (Call_8)), &CallNode_9);
        Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_9, (MR_Integer) 0)));
        Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_9, (MR_Integer) 1)));
        Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_9, (MR_Integer) 2)));
        *SeqNo_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_9, (MR_Integer) 3)));
        Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_9, (MR_Integer) 4)));
        Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_9, (MR_Integer) 5)));
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_9, (MR_Integer) 6)));
        Var_25 = ((MR_Box) (MR_hl_field(MR_mktag(0), CallNode_9, (MR_Integer) 7)));
        Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_9, (MR_Integer) 8)));
        Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_9, (MR_Integer) 9)));
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_call_3_p_0(
  MR_Word S_1,
  MR_Word HeadVar__2_2,
  MR_Word * Call_3)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
          MR_Word Var_7;
          MR_Word Var_8;
          MR_Integer Var_9;
          MR_Box Var_10;
          MR_Integer Var_11;
          MR_Integer Var_12;

          *Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
          Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
          Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
          Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4)));
          Var_10 = ((MR_Box) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 5)));
          Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 6)));
          Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 7)));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Exit_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
          MR_Word ExitNode_20;
          MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
          MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2)));
          MR_Box Var_17 = ((MR_Box) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3)));
          MR_Integer Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4)));
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Integer Var_39;
          MR_Box Var_40;
          MR_Integer Var_41;
          MR_Integer Var_42;

          mdb__declarative_execution__exit_node_from_id_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[0], ((MR_Box) (S_1)), ((MR_Box) (Exit_15)), &ExitNode_20);
          Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ExitNode_20, (MR_Integer) 0)));
          *Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ExitNode_20, (MR_Integer) 1)));
          Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ExitNode_20, (MR_Integer) 2)));
          Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ExitNode_20, (MR_Integer) 3)));
          Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ExitNode_20, (MR_Integer) 4)));
          Var_40 = ((MR_Box) (MR_hl_field(MR_mktag(1), ExitNode_20, (MR_Integer) 5)));
          Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ExitNode_20, (MR_Integer) 6)));
          Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ExitNode_20, (MR_Integer) 7)));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
              MR_Word Var_24;
              MR_Integer Var_25;
              MR_Box Var_26;
              MR_Integer Var_27;

              *Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
              Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
              Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
              Var_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
              Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6)));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
              MR_Word Var_31;
              MR_Word Var_32;
              MR_Integer Var_33;
              MR_Box Var_34;
              MR_Integer Var_35;

              *Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
              Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
              Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
              Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
              Var_34 = ((MR_Box) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6)));
              Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7)));
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static MR_String MR_CALL 
mdb__declarative_execution__trace_node_path_1_f_0(
  MR_Word Node_3)
{
  {
    MR_String Path_4;
    MR_Box Label_5;

    switch (MR_tag((MR_Word) Node_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node_3, (MR_Integer) 0)));
          MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node_3, (MR_Integer) 1)));
          MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node_3, (MR_Integer) 2)));
          MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Node_3, (MR_Integer) 3)));
          MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Node_3, (MR_Integer) 4)));
          MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node_3, (MR_Integer) 5)));
          MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node_3, (MR_Integer) 6)));
          MR_Integer Var_15;
          MR_Integer Var_16;

          Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), Node_3, (MR_Integer) 7)));
          Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Node_3, (MR_Integer) 8)));
          Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Node_3, (MR_Integer) 9)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Node_3, (MR_Integer) 0)));
          MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Node_3, (MR_Integer) 1)));
          MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Node_3, (MR_Integer) 2)));
          MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Node_3, (MR_Integer) 3)));
          MR_Integer Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Node_3, (MR_Integer) 4)));
          MR_Integer Var_23;
          MR_Integer Var_24;

          Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(1), Node_3, (MR_Integer) 5)));
          Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Node_3, (MR_Integer) 6)));
          Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Node_3, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), Node_3, (MR_Integer) 0)));
          MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), Node_3, (MR_Integer) 1)));
          MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Node_3, (MR_Integer) 2)));
          MR_Integer Var_29;

          Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(2), Node_3, (MR_Integer) 3)));
          Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Node_3, (MR_Integer) 4)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 1)));
              MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 2)));
              MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 3)));
              MR_Integer Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 4)));
              MR_Integer Var_35;

              Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 5)));
              Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 6)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 1)));
              MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 2)));
              MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 3)));
              MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 4)));
              MR_Integer Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 5)));
              MR_Integer Var_42;

              Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 6)));
              Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 7)));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 1)));

              Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 1)));

              Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 1)));
              MR_Word Var_49;

              Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 2)));
              Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 1)));
              MR_Word Var_52;

              Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 2)));
              Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 1)));
              MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 2)));

              Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 1)));
              MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 2)));

              Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 1)));
              MR_Word Var_61;

              Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 2)));
              Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 1)));
              MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 2)));

              Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 1)));
              MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 2)));

              Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_3, (MR_Integer) 3)));
            }
            break;
        }
        break;
    }
    Path_4 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(Label_5);
    return Path_4;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__trace_node_port_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 2;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 3;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 5;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 14;
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Integer) 12;
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_Integer) 13;
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Integer) 6;
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_Integer) 7;
            break;
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_Integer) 8;
            break;
          case (MR_Integer) 8:
            HeadVar__2_2 = (MR_Integer) 9;
            break;
          case (MR_Integer) 9:
            HeadVar__2_2 = (MR_Integer) 10;
            break;
          case (MR_Integer) 10:
            HeadVar__2_2 = (MR_Integer) 11;
            break;
        }
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__neg_node_set_status_2_f_0(
  MR_Word Neg0_4,
  MR_Word Status_5)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Neg0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Neg0_4, (MR_Integer) 0)))) == (MR_Integer) 8)));
    MR_Word Neg_6;
    MR_Word TypeCtorInfo_16_16;
    MR_Word TypeInfo_16_27;
    MR_Word TypeInfo_18_29;
    MR_Word TypeClassInfo_for_store_31;
    MR_Word TypeInfo_21_32;
    MR_Word Neg1_10;
    MR_Word Ref_22;
    MR_Word ArgRef_24;
    MR_Word Var_7;
    MR_Box Var_8;
    MR_Word Var_9;
    MR_Box conv0_S1_23;
    MR_Box conv1_S2_25;
    MR_Box conv2_S_26;
    MR_Box conv3_Neg_6;

    if (succeeded)
    {
      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Neg0_4, (MR_Integer) 1)));
      Var_8 = ((MR_Box) (MR_hl_field(MR_mktag(3), Neg0_4, (MR_Integer) 2)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Neg0_4, (MR_Integer) 3)));
      Neg1_10 = Neg0_4;
    }
    else
    {
      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[30])));
    }
    TypeCtorInfo_16_16 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0;
    mercury__store__init_1_p_0(&TypeInfo_16_27);
    {
      TypeInfo_18_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_18_29, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
      MR_hl_field(MR_mktag(0), TypeInfo_18_29, 1) = ((MR_Box) (TypeInfo_16_27));
    }
    {
      TypeClassInfo_for_store_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_store_31, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_store_31, 1) = ((MR_Box) (TypeInfo_16_27));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_store_31, 2) = ((MR_Box) (TypeInfo_18_29));
    }
    TypeInfo_21_32 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
    mercury__store__new_ref_4_p_0(TypeInfo_21_32, TypeClassInfo_for_store_31, ((MR_Box) (Neg1_10)), &Ref_22, ((MR_Box) ((MR_Integer) 0)), &conv0_S1_23);
    mercury__store__arg_ref_5_p_0(TypeInfo_21_32, TypeCtorInfo_16_16, TypeClassInfo_for_store_31, Ref_22, (MR_Integer) 2, &ArgRef_24, ((MR_Box) ((MR_Integer) 0)), &conv1_S2_25);
    mercury__store__set_ref_value_4_p_0(TypeCtorInfo_16_16, TypeClassInfo_for_store_31, ArgRef_24, ((MR_Box) (Status_5)), ((MR_Box) ((MR_Integer) 0)), &conv2_S_26);
    mercury__store__extract_ref_value_3_p_0(TypeInfo_21_32, TypeClassInfo_for_store_31, ((MR_Box) ((MR_Integer) 0)), Ref_22, &conv3_Neg_6);
    Neg_6 = ((MR_Word) conv3_Neg_6);
    return Neg_6;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__cond_node_set_status_2_f_0(
  MR_Word Cond0_4,
  MR_Word Status_5)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Cond0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Cond0_4, (MR_Integer) 0)))) == (MR_Integer) 5)));
    MR_Word Cond_6;
    MR_Word TypeCtorInfo_16_16;
    MR_Word TypeInfo_16_27;
    MR_Word TypeInfo_18_29;
    MR_Word TypeClassInfo_for_store_31;
    MR_Word TypeInfo_21_32;
    MR_Word Cond1_10;
    MR_Word Ref_22;
    MR_Word ArgRef_24;
    MR_Word Var_7;
    MR_Box Var_8;
    MR_Word Var_9;
    MR_Box conv0_S1_23;
    MR_Box conv1_S2_25;
    MR_Box conv2_S_26;
    MR_Box conv3_Cond_6;

    if (succeeded)
    {
      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Cond0_4, (MR_Integer) 1)));
      Var_8 = ((MR_Box) (MR_hl_field(MR_mktag(3), Cond0_4, (MR_Integer) 2)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Cond0_4, (MR_Integer) 3)));
      Cond1_10 = Cond0_4;
    }
    else
    {
      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[29])));
    }
    TypeCtorInfo_16_16 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0;
    mercury__store__init_1_p_0(&TypeInfo_16_27);
    {
      TypeInfo_18_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_18_29, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
      MR_hl_field(MR_mktag(0), TypeInfo_18_29, 1) = ((MR_Box) (TypeInfo_16_27));
    }
    {
      TypeClassInfo_for_store_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_store_31, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_store_31, 1) = ((MR_Box) (TypeInfo_16_27));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_store_31, 2) = ((MR_Box) (TypeInfo_18_29));
    }
    TypeInfo_21_32 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
    mercury__store__new_ref_4_p_0(TypeInfo_21_32, TypeClassInfo_for_store_31, ((MR_Box) (Cond1_10)), &Ref_22, ((MR_Box) ((MR_Integer) 0)), &conv0_S1_23);
    mercury__store__arg_ref_5_p_0(TypeInfo_21_32, TypeCtorInfo_16_16, TypeClassInfo_for_store_31, Ref_22, (MR_Integer) 2, &ArgRef_24, ((MR_Box) ((MR_Integer) 0)), &conv1_S2_25);
    mercury__store__set_ref_value_4_p_0(TypeCtorInfo_16_16, TypeClassInfo_for_store_31, ArgRef_24, ((MR_Box) (Status_5)), ((MR_Box) ((MR_Integer) 0)), &conv2_S_26);
    mercury__store__extract_ref_value_3_p_0(TypeInfo_21_32, TypeClassInfo_for_store_31, ((MR_Box) ((MR_Integer) 0)), Ref_22, &conv3_Cond_6);
    Cond_6 = ((MR_Word) conv3_Cond_6);
    return Cond_6;
  }
}

static MR_Integer MR_CALL 
mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0(
  MR_Word Call_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Call_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Integer IdealDepth_4;
    MR_Word MaybeImplicitTreeInfo_5;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Integer Var_16;
    MR_Integer Var_17;
    MR_Word Var_18;
    MR_Box Var_19;
    MR_Integer Var_20;
    MR_Integer Var_21;

    if (succeeded)
    {
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 0)));
      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 1)));
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 2)));
      Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 3)));
      Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 4)));
      MaybeImplicitTreeInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 5)));
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 6)));
      Var_19 = ((MR_Box) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 7)));
      Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 8)));
      Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 9)));
      if ((MaybeImplicitTreeInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[27])));
      }
      else
      {
        MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeImplicitTreeInfo_5, (MR_Integer) 0)));

        IdealDepth_4 = (MR_Integer) Var_9;
      }
    }
    else
    {
      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[28])));
    }
    return IdealDepth_4;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0(
  MR_Word Call0_4,
  MR_Integer IdealDepth_5)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Call0_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Call_6;
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_16_36;
    MR_Word TypeInfo_18_38;
    MR_Word TypeClassInfo_for_store_40;
    MR_Word TypeInfo_21_41;
    MR_Word Call1_17;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Ref_31;
    MR_Word ArgRef_33;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer Var_10;
    MR_Integer Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Box Var_14;
    MR_Integer Var_15;
    MR_Integer Var_16;
    MR_Box conv0_S1_32;
    MR_Box conv1_S2_34;
    MR_Box conv2_S_35;
    MR_Box conv3_Call_6;

    if (succeeded)
    {
      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 0)));
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 1)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 2)));
      Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 3)));
      Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 4)));
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 5)));
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 6)));
      Var_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 7)));
      Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 8)));
      Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 9)));
      Call1_17 = Call0_4;
    }
    else
    {
      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[26])));
    }
    Var_23 = (MR_Word) IdealDepth_5;
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
    }
    TypeInfo_25_25 = (MR_Word) &mdb__declarative_execution_scalar_common_1[1];
    mercury__store__init_1_p_0(&TypeInfo_16_36);
    {
      TypeInfo_18_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_18_38, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
      MR_hl_field(MR_mktag(0), TypeInfo_18_38, 1) = ((MR_Box) (TypeInfo_16_36));
    }
    {
      TypeClassInfo_for_store_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_store_40, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_store_40, 1) = ((MR_Box) (TypeInfo_16_36));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_store_40, 2) = ((MR_Box) (TypeInfo_18_38));
    }
    TypeInfo_21_41 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
    mercury__store__new_ref_4_p_0(TypeInfo_21_41, TypeClassInfo_for_store_40, ((MR_Box) (Call1_17)), &Ref_31, ((MR_Box) ((MR_Integer) 0)), &conv0_S1_32);
    mercury__store__arg_ref_5_p_0(TypeInfo_21_41, TypeInfo_25_25, TypeClassInfo_for_store_40, Ref_31, (MR_Integer) 5, &ArgRef_33, ((MR_Box) ((MR_Integer) 0)), &conv1_S2_34);
    mercury__store__set_ref_value_4_p_0(TypeInfo_25_25, TypeClassInfo_for_store_40, ArgRef_33, ((MR_Box) (Var_22)), ((MR_Box) ((MR_Integer) 0)), &conv2_S_35);
    mercury__store__extract_ref_value_3_p_0(TypeInfo_21_41, TypeClassInfo_for_store_40, ((MR_Box) ((MR_Integer) 0)), Ref_31, &conv3_Call_6);
    Call_6 = ((MR_Word) conv3_Call_6);
    return Call_6;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__call_node_set_last_interface_2_f_0(
  MR_Word Call0_4,
  MR_Word Last_5)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Call0_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Call_6;
    MR_Word TypeCtorInfo_23_23;
    MR_Word TypeInfo_16_34;
    MR_Word TypeInfo_18_36;
    MR_Word TypeClassInfo_for_store_38;
    MR_Word TypeInfo_21_39;
    MR_Word Call1_17;
    MR_Word Ref_29;
    MR_Word ArgRef_31;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer Var_10;
    MR_Integer Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Box Var_14;
    MR_Integer Var_15;
    MR_Integer Var_16;
    MR_Box conv0_S1_30;
    MR_Box conv1_S2_32;
    MR_Box conv2_S_33;
    MR_Box conv3_Call_6;

    if (succeeded)
    {
      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 0)));
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 1)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 2)));
      Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 3)));
      Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 4)));
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 5)));
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 6)));
      Var_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 7)));
      Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 8)));
      Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Call0_4, (MR_Integer) 9)));
      Call1_17 = Call0_4;
    }
    else
    {
      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[25])));
    }
    TypeCtorInfo_23_23 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0;
    mercury__store__init_1_p_0(&TypeInfo_16_34);
    {
      TypeInfo_18_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_18_36, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
      MR_hl_field(MR_mktag(0), TypeInfo_18_36, 1) = ((MR_Box) (TypeInfo_16_34));
    }
    {
      TypeClassInfo_for_store_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_store_38, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_store_38, 1) = ((MR_Box) (TypeInfo_16_34));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_store_38, 2) = ((MR_Box) (TypeInfo_18_36));
    }
    TypeInfo_21_39 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
    mercury__store__new_ref_4_p_0(TypeInfo_21_39, TypeClassInfo_for_store_38, ((MR_Box) (Call1_17)), &Ref_29, ((MR_Box) ((MR_Integer) 0)), &conv0_S1_30);
    mercury__store__arg_ref_5_p_0(TypeInfo_21_39, TypeCtorInfo_23_23, TypeClassInfo_for_store_38, Ref_29, (MR_Integer) 1, &ArgRef_31, ((MR_Box) ((MR_Integer) 0)), &conv1_S2_32);
    mercury__store__set_ref_value_4_p_0(TypeCtorInfo_23_23, TypeClassInfo_for_store_38, ArgRef_31, ((MR_Box) (Last_5)), ((MR_Box) ((MR_Integer) 0)), &conv2_S_33);
    mercury__store__extract_ref_value_3_p_0(TypeInfo_21_39, TypeClassInfo_for_store_38, ((MR_Box) ((MR_Integer) 0)), Ref_29, &conv3_Call_6);
    Call_6 = ((MR_Word) conv3_Call_6);
    return Call_6;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__call_node_get_last_interface_1_f_0(
  MR_Word Call_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Call_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Last_4;
    MR_Word Last0_6;
    MR_Word Var_5;
    MR_Word Var_7;
    MR_Integer Var_8;
    MR_Integer Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Box Var_12;
    MR_Integer Var_13;
    MR_Integer Var_14;

    if (succeeded)
    {
      Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 0)));
      Last0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 1)));
      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 2)));
      Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 3)));
      Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 4)));
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 5)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 6)));
      Var_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 7)));
      Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 8)));
      Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Call_3, (MR_Integer) 9)));
      Last_4 = Last0_6;
    }
    else
    {
      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[24])));
    }
    return Last_4;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__search_trace_node_store_3_p_0(
  MR_Word _Store_1,
  MR_Word Id_2,
  MR_Word * Node_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mdb__declarative_execution__search_trace_node_store_3_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id =  Id_2 ;
		{

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *Node_3  = Node;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution__cache_proc_defn_rep_2_p_0(
  MR_Box ProcLayout_1,
  MR_Word ProcDefnRep_2)
{
  {
{
#define MR_PROC_LABEL mdb__declarative_execution__cache_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;

	ProcLayout = (const MR_ProcLayout *) ProcLayout_1 ;
	ProcDefnRep =  ProcDefnRep_2 ;
		{

#ifdef MR_DEBUG_PROC_REP
    printf("cache_proc_defn_rep: %p %x\n", ProcLayout, ProcDefnRep);
#endif
    MR_insert_proc_defn_rep(ProcLayout, ProcDefnRep);


		;}
#undef MR_PROC_LABEL
}
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__have_cached_proc_defn_rep_2_p_0(
  MR_Box ProcLayout_1,
  MR_Word * ProcDefnRep_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mdb__declarative_execution__have_cached_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;
	MR_bool SUCCESS_INDICATOR;

	ProcLayout = (const MR_ProcLayout *) ProcLayout_1 ;
		{

    ProcDefnRep = MR_lookup_proc_defn_rep(ProcLayout);
    if (ProcDefnRep != 0) {
#ifdef MR_DEBUG_PROC_REP
        printf("have_cached_proc_defn_rep: %p success\n", ProcLayout);
#endif
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
#ifdef MR_DEBUG_PROC_REP
        printf("have_cached_proc_defn_rep: %p failure\n", ProcLayout);
#endif
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *ProcDefnRep_2  = ProcDefnRep;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__call_node_bytecode_layout_2_p_0(
  MR_Box CallLabelLayout_1,
  MR_Box * ProcLayout_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_bytecode_layout_2_p_0

	const MR_LabelLayout * CallLabelLayout;
	const MR_ProcLayout * ProcLayout;
	MR_bool SUCCESS_INDICATOR;

	CallLabelLayout = (const MR_LabelLayout *) CallLabelLayout_1 ;
		{

    ProcLayout = CallLabelLayout->MR_sll_entry;
    if (ProcLayout->MR_sle_body_bytes != NULL) {
#ifdef MR_DEBUG_PROC_REP
        printf("call_node_bytecode_layout: %p success\n", CallLabelLayout);
#endif
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
#ifdef MR_DEBUG_PROC_REP
        printf("call_node_bytecode_layout: %p failure\n", CallLabelLayout);
#endif
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *ProcLayout_2  = (MR_Box) ProcLayout;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution__user_arg_num_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer * ArgNum_3)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *ArgNum_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      break;
    case (MR_Integer) 1:
      {
        MR_Integer AnyArgNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        MR_Word Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
        MR_Box Var_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

        mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(Args_8, AnyArgNum_6, (MR_Integer) 1, ArgNum_3);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer AnyArgNumFromBack_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
        MR_Word Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer Var_15;
        MR_Integer Var_17;
        MR_Integer Var_18;
        MR_Box Var_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

        Var_18 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, Args_13);
        Var_17 = (Var_18 - AnyArgNumFromBack_11);
        Var_15 = (Var_17 + (MR_Integer) 1);
        mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(Args_13, Var_15, (MR_Integer) 1, ArgNum_3);
      }
      break;
  }
}

static void MR_CALL 
mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Integer CurArgNum_3,
  MR_Integer * UserArgNum_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[23])));
        return;
      }
    }
    else
    {
      MR_Word Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word UserVis_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 0)));
      MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 1)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 2)));

      switch (UserVis_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_23 = (ArgNum_2 - (MR_Integer) 1);
            MR_Word next_value_of_HeadVar__1_1 = Args_12;
            MR_Integer next_value_of_ArgNum_2 = Var_23;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            ArgNum_2 = next_value_of_ArgNum_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            succeeded = (ArgNum_2 == (MR_Integer) 1);
            if (succeeded)
              *UserArgNum_4 = CurArgNum_3;
            else
            {
              MR_Integer Var_19 = (ArgNum_2 - (MR_Integer) 1);
              MR_Integer Var_20 = (CurArgNum_3 + (MR_Integer) 1);
              MR_Word next_value_of_HeadVar__1_1 = Args_12;
              MR_Integer next_value_of_ArgNum_2 = Var_19;
              MR_Integer next_value_of_CurArgNum_3 = Var_20;

              // direct tailcall eliminated
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              ArgNum_2 = next_value_of_ArgNum_2;
              CurArgNum_3 = next_value_of_CurArgNum_3;
              continue;
            }
          }
          break;
      }
    }
    break;
  }
}

void MR_CALL 
mdb__declarative_execution__absolute_arg_num_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
        MR_Word Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
        MR_Box Var_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

        mdb__declarative_execution__head_var_num_to_arg_num_4_p_0(Args_8, N_6, (MR_Integer) 1, HeadVar__3_3);
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      break;
    case (MR_Integer) 2:
      {
        MR_Integer M_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
        MR_Word Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer Var_14;
        MR_Integer Var_15;
        MR_Box Var_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

        Var_15 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, Args_13);
        Var_14 = (Var_15 - M_11);
        *HeadVar__3_3 = (Var_14 + (MR_Integer) 1);
      }
      break;
  }
}

static void MR_CALL 
mdb__declarative_execution__head_var_num_to_arg_num_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer SearchUserHeadVarNum_2,
  MR_Integer CurArgNum_3,
  MR_Integer * ArgNum_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[22])));
        return;
      }
    }
    else
    {
      MR_Word Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word UserVis_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 0)));
      MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 1)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 2)));

      switch (UserVis_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_23 = (CurArgNum_3 + (MR_Integer) 1);
            MR_Word next_value_of_HeadVar__1_1 = Args_12;
            MR_Integer next_value_of_CurArgNum_3 = Var_23;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            CurArgNum_3 = next_value_of_CurArgNum_3;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            succeeded = (SearchUserHeadVarNum_2 == (MR_Integer) 1);
            if (succeeded)
              *ArgNum_4 = CurArgNum_3;
            else
            {
              MR_Integer Var_19 = (SearchUserHeadVarNum_2 - (MR_Integer) 1);
              MR_Integer Var_20 = (CurArgNum_3 + (MR_Integer) 1);
              MR_Word next_value_of_HeadVar__1_1 = Args_12;
              MR_Integer next_value_of_SearchUserHeadVarNum_2 = Var_19;
              MR_Integer next_value_of_CurArgNum_3 = Var_20;

              // direct tailcall eliminated
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              SearchUserHeadVarNum_2 = next_value_of_SearchUserHeadVarNum_2;
              CurArgNum_3 = next_value_of_CurArgNum_3;
              continue;
            }
          }
          break;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__select_arg_at_pos_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdb__declarative_execution__is_user_visible_arg_1_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution__select_arg_at_pos_3_p_0(
  MR_Word ArgPos_4,
  MR_Word Args0_5,
  MR_Word * Arg_6)
{
  {
    MR_bool succeeded;
    MR_Integer N_7;
    MR_Word Args_10;
    MR_Box conv0_Arg_6;

    switch (MR_tag((MR_Word) ArgPos_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ArgPos_4, (MR_Integer) 0)));
          Args_10 = mercury__list__filter_2_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, (MR_Word) &mdb__declarative_execution_scalar_common_2[3], Args0_5);
        }
        break;
      case (MR_Integer) 1:
        {
          N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ArgPos_4, (MR_Integer) 0)));
          Args_10 = Args0_5;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer M_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ArgPos_4, (MR_Integer) 0)));
          MR_Integer Var_11;
          MR_Integer Var_12;

          Var_12 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, Args0_5);
          Var_11 = (Var_12 - M_9);
          N_7 = (Var_11 + (MR_Integer) 1);
          Args_10 = Args0_5;
        }
        break;
    }
    mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, Args_10, N_7, &conv0_Arg_6);
    *Arg_6 = ((MR_Word) conv0_Arg_6);
  }
}

MR_bool MR_CALL 
mdb__declarative_execution__is_user_visible_arg_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Var_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));

    succeeded = (Var_4 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_Word MR_CALL 
mdb__declarative_execution__chosen_head_vars_presentation_0_f_0(void)
{
  {
    return (MR_Integer) 1;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdb__declarative_execution__is_user_visible_arg_1_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0(
  MR_Word Which_4,
  MR_Word Args0_5,
  MR_Word * Args_6)
{
  {
    MR_bool succeeded;

    switch (Which_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Args_6 = Args0_5;
        break;
      case (MR_Integer) 1:
        {
          *Args_6 = mercury__list__filter_2_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, (MR_Word) &mdb__declarative_execution_scalar_common_2[2], Args0_5);
        }
        break;
    }
  }
}

void MR_CALL 
mdb__declarative_execution__save_trace_node_store_5_p_0(
  MR_Word Stream_6,
  MR_Word Store_7,
  MR_Word NodeId_8)
{
  {
    MR_Word TypeCtorInfo_22_22 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0;
    MR_Word Map0_10;
    MR_Word Key_11;
    MR_Word Map_12;
    MR_Word Var_15;

    mercury__map__init_1_p_0(TypeCtorInfo_22_22, (MR_Word) &mdb__declarative_execution_scalar_common_1[0], &Map0_10);
{
#define MR_PROC_LABEL mdb__declarative_execution__save_trace_node_store_5_p_0

	MR_Word Id;
	MR_Word Key;

	Id =  NodeId_8 ;
		{

    Key = (MR_Integer) Id;


		;}
#undef MR_PROC_LABEL
	 Key_11  = Key;
}
    Var_15 = (MR_Word) Map0_10;
    mdb__declarative_execution__node_map_4_p_0(Store_7, NodeId_8, Var_15, &Map_12);
    mercury__io__write_4_p_0(TypeCtorInfo_22_22, Stream_6, ((MR_Box) (Key_11)));
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".\n");
    mercury__io__write_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0, Stream_6, ((MR_Box) (Map_12)));
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".\n");
  }
}

static void MR_CALL 
mdb__declarative_execution__node_map_4_p_0(
  MR_Word Store_5,
  MR_Word NodeId_6,
  MR_Word HeadVar__3_3,
  MR_Word * Map_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Map0_7 = (MR_Word) HeadVar__3_3;
    MR_Word Node1_9;

    // setup for model_det tailcalls optimized into a loop
{
#define MR_PROC_LABEL mdb__declarative_execution__node_map_4_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id =  NodeId_6 ;
		{

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Node1_9  = Node;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Word Key_10;
      MR_Word Node2_11;
      MR_Word Map1_12;
      MR_Word Next_13;
      MR_Word Var_14;
      MR_Word next_value_of_NodeId_6;
      MR_Word next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mdb__declarative_execution__node_map_4_p_0

	MR_Word Id;
	MR_Word Key;

	Id =  NodeId_6 ;
		{

    Key = (MR_Integer) Id;


		;}
#undef MR_PROC_LABEL
	 Key_10  = Key;
}
{
#define MR_PROC_LABEL mdb__declarative_execution__node_map_4_p_0

	MR_Word N1;
	MR_Word N2;

	N1 =  Node1_9 ;
		{

    N2 = N1;


		;}
#undef MR_PROC_LABEL
	 Node2_11  = N2;
}
      mercury__map__det_insert_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0, (MR_Word) &mdb__declarative_execution_scalar_common_1[0], ((MR_Box) (Key_10)), ((MR_Box) (Node2_11)), Map0_7, &Map1_12);
      switch (MR_tag((MR_Word) Node1_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_29;
            MR_Word Var_30;
            MR_Integer Var_31;
            MR_Integer Var_32;
            MR_Word Var_33;
            MR_Word Var_34;
            MR_Box Var_35;
            MR_Integer Var_36;
            MR_Integer Var_37;

            Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node1_9, (MR_Integer) 0)));
            Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node1_9, (MR_Integer) 1)));
            Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node1_9, (MR_Integer) 2)));
            Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Node1_9, (MR_Integer) 3)));
            Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Node1_9, (MR_Integer) 4)));
            Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node1_9, (MR_Integer) 5)));
            Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node1_9, (MR_Integer) 6)));
            Var_35 = ((MR_Box) (MR_hl_field(MR_mktag(0), Node1_9, (MR_Integer) 7)));
            Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Node1_9, (MR_Integer) 8)));
            Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Node1_9, (MR_Integer) 9)));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Integer Var_42;
            MR_Box Var_43;
            MR_Integer Var_44;
            MR_Integer Var_45;

            Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Node1_9, (MR_Integer) 0)));
            Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Node1_9, (MR_Integer) 1)));
            Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), Node1_9, (MR_Integer) 2)));
            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Node1_9, (MR_Integer) 3)));
            Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Node1_9, (MR_Integer) 4)));
            Var_43 = ((MR_Box) (MR_hl_field(MR_mktag(1), Node1_9, (MR_Integer) 5)));
            Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Node1_9, (MR_Integer) 6)));
            Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Node1_9, (MR_Integer) 7)));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_47;
            MR_Integer Var_48;
            MR_Box Var_49;
            MR_Integer Var_50;

            Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), Node1_9, (MR_Integer) 0)));
            Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), Node1_9, (MR_Integer) 1)));
            Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Node1_9, (MR_Integer) 2)));
            Var_49 = ((MR_Box) (MR_hl_field(MR_mktag(2), Node1_9, (MR_Integer) 3)));
            Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Node1_9, (MR_Integer) 4)));
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_52;
                MR_Word Var_53;
                MR_Integer Var_54;
                MR_Box Var_55;
                MR_Integer Var_56;

                Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 1)));
                Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 2)));
                Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 3)));
                Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 4)));
                Var_55 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 5)));
                Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 6)));
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_58;
                MR_Word Var_59;
                MR_Word Var_60;
                MR_Integer Var_61;
                MR_Box Var_62;
                MR_Integer Var_63;

                Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 1)));
                Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 2)));
                Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 3)));
                Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 4)));
                Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 5)));
                Var_62 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 6)));
                Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 7)));
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Box Var_65;

                Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 1)));
                Var_65 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 2)));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Box Var_67;

                Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 1)));
                Var_67 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 2)));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Box Var_69;
                MR_Word Var_70;

                Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 1)));
                Var_69 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 2)));
                Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 3)));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Box Var_72;
                MR_Word Var_73;

                Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 1)));
                Var_72 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 2)));
                Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 3)));
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Var_75;
                MR_Box Var_76;

                Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 1)));
                Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 2)));
                Var_76 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 3)));
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Var_78;
                MR_Box Var_79;

                Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 1)));
                Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 2)));
                Var_79 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 3)));
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Box Var_81;
                MR_Word Var_82;

                Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 1)));
                Var_81 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 2)));
                Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 3)));
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word Var_84;
                MR_Box Var_85;

                Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 1)));
                Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 2)));
                Var_85 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 3)));
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Var_87;
                MR_Box Var_88;

                Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 1)));
                Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 2)));
                Var_88 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node1_9, (MR_Integer) 3)));
              }
              break;
          }
          break;
      }
      Var_14 = (MR_Word) Map1_12;
      // direct tailcall eliminated
      next_value_of_NodeId_6 = Next_13;
      next_value_of_HeadVar__3_3 = Var_14;
      NodeId_6 = next_value_of_NodeId_6;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    else
      *Map_8 = HeadVar__3_3;
    break;
  }
}

void MR_CALL 
mdb__declarative_execution__load_trace_node_map_5_p_0(
  MR_Word Stream_6,
  MR_Word * Map_7,
  MR_Word * Key_8)
{
  {
    MR_Word ResKey_10;
    MR_String Msg_11;
    MR_Word ResMap_13;

    mercury__io__read_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0, Stream_6, &ResKey_10);
    switch (MR_tag((MR_Word) ResKey_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_execution_scalar_common_1[21]))));
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        *Key_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ResKey_10, (MR_Integer) 0)));
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_18;
          MR_Integer Var_12;

          Msg_11 = ((MR_String) (MR_hl_field(MR_mktag(2), ResKey_10, (MR_Integer) 0)));
          Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ResKey_10, (MR_Integer) 1)));
          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) ((MR_String) "load_trace_node_map"));
            MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Msg_11));
          }
          {
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (Var_18)));
            return;
          }
        }
        break;
    }
    mercury__io__read_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0, Stream_6, &ResMap_13);
    switch (MR_tag((MR_Word) ResMap_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_execution_scalar_common_1[21]))));
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        *Map_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ResMap_13, (MR_Integer) 0)));
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_24;
          MR_Integer Var_14;

          Msg_11 = ((MR_String) (MR_hl_field(MR_mktag(2), ResMap_13, (MR_Integer) 0)));
          Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ResMap_13, (MR_Integer) 1)));
          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) ((MR_String) "load_trace_node_map"));
            MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Msg_11));
          }
          {
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (Var_24)));
            return;
          }
        }
        break;
    }
  }
}

void MR_CALL 
mdb__declarative_execution__disj_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_16,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * Node_6)
{
  {
    MR_bool succeeded;
    MR_Word Node0_7;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_annotated_trace_16, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box conv1_Node0_7;

    succeeded = func_0(((MR_Box) TypeClassInfo_for_annotated_trace_16), Store_4, NodeId_5, &conv1_Node0_7);
    if (succeeded)
    {
      Node0_7 = ((MR_Word) conv1_Node0_7);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      if (((((MR_tag((MR_Word) Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Node0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Node0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
      *Node_6 = Node0_7;
    else
    {
      {
        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[20])));
        return;
      }
    }
  }
}

void MR_CALL 
mdb__declarative_execution__det_trace_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_11,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * Node_6)
{
  {
    MR_bool succeeded;
    MR_Word Node0_7;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_annotated_trace_11, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box conv1_Node0_7;

    succeeded = func_0(((MR_Box) TypeClassInfo_for_annotated_trace_11), Store_4, NodeId_5, &conv1_Node0_7);
    if (succeeded)
    {
      Node0_7 = ((MR_Word) conv1_Node0_7);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *Node_6 = Node0_7;
    else
    {
      {
        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[19])));
        return;
      }
    }
  }
}

MR_Box MR_CALL 
mdb__declarative_execution__step_in_stratum_2_f_0(
  MR_Word TypeClassInfo_for_annotated_trace_90,
  MR_Box Store_4,
  MR_Word Node_5)
{
  {
    MR_Box Next_6;

    switch (MR_tag((MR_Word) Node_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[16])));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box Call_8 = (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 1));
          MR_Box MaybeRedo_9 = (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 2));
          MR_Box Var_7 = (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 0));
          MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 3)));
          MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 4)));
          MR_Box Var_12 = ((MR_Box) (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 5)));
          MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 6)));
          MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 7)));

          Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(TypeClassInfo_for_annotated_trace_90, Store_4, Call_8, MaybeRedo_9);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Exit_25 = (MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 1));
          MR_Word ExitNode_29;
          MR_Box Var_24 = (MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 0));
          MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 2)));
          MR_Box Var_27 = ((MR_Box) (MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 3)));
          MR_Integer Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 4)));
          MR_Box Var_83;
          MR_Box Var_84;
          MR_Word Var_85;
          MR_Integer Var_86;
          MR_Box Var_87;
          MR_Integer Var_88;
          MR_Integer Var_89;

          mdb__declarative_execution__exit_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_90, Store_4, Exit_25, &ExitNode_29);
          Next_6 = (MR_hl_field(MR_mktag(1), ExitNode_29, (MR_Integer) 0));
          Var_83 = (MR_hl_field(MR_mktag(1), ExitNode_29, (MR_Integer) 1));
          Var_84 = (MR_hl_field(MR_mktag(1), ExitNode_29, (MR_Integer) 2));
          Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ExitNode_29, (MR_Integer) 3)));
          Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ExitNode_29, (MR_Integer) 4)));
          Var_87 = ((MR_Box) (MR_hl_field(MR_mktag(1), ExitNode_29, (MR_Integer) 5)));
          Var_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ExitNode_29, (MR_Integer) 6)));
          Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ExitNode_29, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box Call_78 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2));
              MR_Box MaybeRedo_79 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3));
              MR_Box Var_15 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 4)));
              MR_Box Var_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 5)));
              MR_Integer Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 6)));

              Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(TypeClassInfo_for_annotated_trace_90, Store_4, Call_78, MaybeRedo_79);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box Call_80 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2));
              MR_Box MaybeRedo_81 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3));
              MR_Box Var_19 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 4)));
              MR_Integer Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 5)));
              MR_Box Var_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 6)));
              MR_Integer Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 7)));

              Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(TypeClassInfo_for_annotated_trace_90, Store_4, Call_80, MaybeRedo_81);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box Var_30;

              Next_6 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              Var_30 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box Var_31;

              Next_6 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              Var_31 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Box Var_32;
              MR_Box Var_33;

              Next_6 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              Var_32 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2)));
              Var_33 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Box Prec_34 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              MR_Word Status_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3)));
              MR_Box Var_35 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2)));

              switch (Status_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[17])));
                  }
                  break;
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  Next_6 = Prec_34;
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Box Var_37;
              MR_Box Var_38;

              Next_6 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              Var_37 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2));
              Var_38 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Box Cond_40 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2));
              MR_Word Var_74;
              MR_Box Var_39 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              MR_Box Var_41 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3)));
              MR_Box Var_42;
              MR_Word Var_43;

              mdb__declarative_execution__cond_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_90, Store_4, Cond_40, &Var_74);
              Next_6 = (MR_hl_field(MR_mktag(3), Var_74, (MR_Integer) 1));
              Var_42 = ((MR_Box) (MR_hl_field(MR_mktag(3), Var_74, (MR_Integer) 2)));
              Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_74, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[18])));
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Box Neg_45 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2));
              MR_Word Var_73;
              MR_Box Var_44 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              MR_Box Var_46 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3)));
              MR_Box Var_47;
              MR_Word Var_48;

              mdb__declarative_execution__neg_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_90, Store_4, Neg_45, &Var_73);
              Next_6 = (MR_hl_field(MR_mktag(3), Var_73, (MR_Integer) 1));
              Var_47 = ((MR_Box) (MR_hl_field(MR_mktag(3), Var_73, (MR_Integer) 2)));
              Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_73, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Var_72;
              MR_Box Neg_82 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2));
              MR_Box Var_49 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              MR_Box Var_50 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3)));
              MR_Box Var_51;
              MR_Word Var_52;

              mdb__declarative_execution__neg_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_90, Store_4, Neg_82, &Var_72);
              Next_6 = (MR_hl_field(MR_mktag(3), Var_72, (MR_Integer) 1));
              Var_51 = ((MR_Box) (MR_hl_field(MR_mktag(3), Var_72, (MR_Integer) 2)));
              Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_72, (MR_Integer) 3)));
            }
            break;
        }
        break;
    }
    return Next_6;
  }
}

static MR_Box MR_CALL 
mdb__declarative_execution__step_over_redo_or_call_3_f_0(
  MR_Word TypeClassInfo_for_annotated_trace_24,
  MR_Box Store_5,
  MR_Box Call_6,
  MR_Box MaybeRedo_7)
{
  {
    MR_bool succeeded;
    MR_Box Next_8;
    MR_Word Redo_9;

    succeeded = mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_24, Store_5, MaybeRedo_7, &Redo_9);
    if (succeeded)
    {
      MR_Box Var_10;
      MR_Integer Var_11;
      MR_Box Var_12;
      MR_Integer Var_13;

      Next_8 = (MR_hl_field(MR_mktag(2), Redo_9, (MR_Integer) 0));
      Var_10 = (MR_hl_field(MR_mktag(2), Redo_9, (MR_Integer) 1));
      Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Redo_9, (MR_Integer) 2)));
      Var_12 = ((MR_Box) (MR_hl_field(MR_mktag(2), Redo_9, (MR_Integer) 3)));
      Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Redo_9, (MR_Integer) 4)));
    }
    else
    {
      MR_Word CallNode_14;
      MR_Box Var_15;
      MR_Word Var_16;
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Box Var_21;
      MR_Integer Var_22;
      MR_Integer Var_23;

      mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_24, Store_5, Call_6, &CallNode_14);
      Next_8 = (MR_hl_field(MR_mktag(0), CallNode_14, (MR_Integer) 0));
      Var_15 = (MR_hl_field(MR_mktag(0), CallNode_14, (MR_Integer) 1));
      Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_14, (MR_Integer) 2)));
      Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_14, (MR_Integer) 3)));
      Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_14, (MR_Integer) 4)));
      Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_14, (MR_Integer) 5)));
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_14, (MR_Integer) 6)));
      Var_21 = ((MR_Box) (MR_hl_field(MR_mktag(0), CallNode_14, (MR_Integer) 7)));
      Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_14, (MR_Integer) 8)));
      Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_14, (MR_Integer) 9)));
    }
    return Next_8;
  }
}

MR_bool MR_CALL 
mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_16,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * Node_6)
{
  {
    MR_bool succeeded;
    MR_Word Node0_7;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_annotated_trace_16, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box conv1_Node0_7;
    MR_Box Var_8;
    MR_Box Var_9;
    MR_Integer Var_10;
    MR_Box Var_11;
    MR_Integer Var_12;

    succeeded = func_0(((MR_Box) TypeClassInfo_for_annotated_trace_16), Store_4, NodeId_5, &conv1_Node0_7);
    if (succeeded)
    {
      Node0_7 = ((MR_Word) conv1_Node0_7);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Node0_7)) == (MR_mktag((MR_Integer) 2)));
      if (succeeded)
      {
        Var_8 = (MR_hl_field(MR_mktag(2), Node0_7, (MR_Integer) 0));
        Var_9 = (MR_hl_field(MR_mktag(2), Node0_7, (MR_Integer) 1));
        Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Node0_7, (MR_Integer) 2)));
        Var_11 = ((MR_Box) (MR_hl_field(MR_mktag(2), Node0_7, (MR_Integer) 3)));
        Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Node0_7, (MR_Integer) 4)));
        *Node_6 = Node0_7;
      }
      else
      {
        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[15])));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Box MR_CALL 
mdb__declarative_execution__step_left_in_contour_2_f_0(
  MR_Word TypeClassInfo_for_annotated_trace_100,
  MR_Box Store_4,
  MR_Word Node_5)
{
  {
    MR_Box Prec_6;

    switch (MR_tag((MR_Word) Node_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[12])));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box Call_8 = (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 1));
          MR_Word CallNode_15;
          MR_Box Var_7 = (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 0));
          MR_Box Var_9 = (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 2));
          MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 3)));
          MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 4)));
          MR_Box Var_12 = ((MR_Box) (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 5)));
          MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 6)));
          MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 7)));
          MR_Box Var_82;
          MR_Word Var_83;
          MR_Integer Var_84;
          MR_Integer Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Box Var_88;
          MR_Integer Var_89;
          MR_Integer Var_90;

          mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_100, Store_4, Call_8, &CallNode_15);
          Prec_6 = (MR_hl_field(MR_mktag(0), CallNode_15, (MR_Integer) 0));
          Var_82 = (MR_hl_field(MR_mktag(0), CallNode_15, (MR_Integer) 1));
          Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_15, (MR_Integer) 2)));
          Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_15, (MR_Integer) 3)));
          Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_15, (MR_Integer) 4)));
          Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_15, (MR_Integer) 5)));
          Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_15, (MR_Integer) 6)));
          Var_88 = ((MR_Box) (MR_hl_field(MR_mktag(0), CallNode_15, (MR_Integer) 7)));
          Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_15, (MR_Integer) 8)));
          Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_15, (MR_Integer) 9)));
        }
        break;
      case (MR_Integer) 2:
        mdb__declarative_execution__find_prev_contour_3_p_1(TypeClassInfo_for_annotated_trace_100, Store_4, Node_5, &Prec_6);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box Call_108 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2));
              MR_Word CallNode_113;
              MR_Box Var_107 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              MR_Box Var_109 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3));
              MR_Integer Var_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 4)));
              MR_Box Var_111 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 5)));
              MR_Integer Var_112 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 6)));
              MR_Box Var_151;
              MR_Word Var_152;
              MR_Integer Var_153;
              MR_Integer Var_154;
              MR_Word Var_155;
              MR_Word Var_156;
              MR_Box Var_157;
              MR_Integer Var_158;
              MR_Integer Var_159;

              mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_100, Store_4, Call_108, &CallNode_113);
              Prec_6 = (MR_hl_field(MR_mktag(0), CallNode_113, (MR_Integer) 0));
              Var_151 = (MR_hl_field(MR_mktag(0), CallNode_113, (MR_Integer) 1));
              Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_113, (MR_Integer) 2)));
              Var_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_113, (MR_Integer) 3)));
              Var_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_113, (MR_Integer) 4)));
              Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_113, (MR_Integer) 5)));
              Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_113, (MR_Integer) 6)));
              Var_157 = ((MR_Box) (MR_hl_field(MR_mktag(0), CallNode_113, (MR_Integer) 7)));
              Var_158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_113, (MR_Integer) 8)));
              Var_159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_113, (MR_Integer) 9)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box Call_79 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2));
              MR_Word CallNode_80;
              MR_Box Var_16 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              MR_Box Var_17 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3));
              MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 4)));
              MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 5)));
              MR_Box Var_20 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 6)));
              MR_Integer Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 7)));
              MR_Box Var_91;
              MR_Word Var_92;
              MR_Integer Var_93;
              MR_Integer Var_94;
              MR_Word Var_95;
              MR_Word Var_96;
              MR_Box Var_97;
              MR_Integer Var_98;
              MR_Integer Var_99;

              mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_100, Store_4, Call_79, &CallNode_80);
              Prec_6 = (MR_hl_field(MR_mktag(0), CallNode_80, (MR_Integer) 0));
              Var_91 = (MR_hl_field(MR_mktag(0), CallNode_80, (MR_Integer) 1));
              Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_80, (MR_Integer) 2)));
              Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_80, (MR_Integer) 3)));
              Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_80, (MR_Integer) 4)));
              Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_80, (MR_Integer) 5)));
              Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_80, (MR_Integer) 6)));
              Var_97 = ((MR_Box) (MR_hl_field(MR_mktag(0), CallNode_80, (MR_Integer) 7)));
              Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_80, (MR_Integer) 8)));
              Var_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_80, (MR_Integer) 9)));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box Var_22;

              Prec_6 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              Var_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box Var_23;

              Prec_6 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              Var_23 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Box FirstDisj_26 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3));
              MR_Word Var_78;
              MR_Box Var_24 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              MR_Box Var_25 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2)));
              MR_Box Var_27;

              mdb__declarative_execution__first_disj_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_100, Store_4, FirstDisj_26, &Var_78);
              Prec_6 = (MR_hl_field(MR_mktag(3), Var_78, (MR_Integer) 1));
              Var_27 = ((MR_Box) (MR_hl_field(MR_mktag(3), Var_78, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Status_29;
              MR_Box Var_28;

              Prec_6 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              Var_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2)));
              Status_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3)));
              switch (Status_29) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[13])));
                  }
                  break;
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 2:
                  {
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Box Var_30;
              MR_Box Var_31;

              Prec_6 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              Var_30 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2));
              Var_31 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Box Cond_33 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2));
              MR_Word Var_74;
              MR_Box Var_32 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              MR_Box Var_34 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3)));
              MR_Box Var_35;
              MR_Word Var_36;

              mdb__declarative_execution__cond_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_100, Store_4, Cond_33, &Var_74);
              Prec_6 = (MR_hl_field(MR_mktag(3), Var_74, (MR_Integer) 1));
              Var_35 = ((MR_Box) (MR_hl_field(MR_mktag(3), Var_74, (MR_Integer) 2)));
              Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_74, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Status_81;
              MR_Box Var_52;

              Prec_6 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              Var_52 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2)));
              Status_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3)));
              switch (Status_81) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                case (MR_Integer) 0:
                  {
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[14])));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Box Neg_38 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2));
              MR_Word Var_73;
              MR_Box Var_37 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              MR_Box Var_39 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3)));
              MR_Box Var_40;
              MR_Word Var_41;

              mdb__declarative_execution__neg_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_100, Store_4, Neg_38, &Var_73);
              Prec_6 = (MR_hl_field(MR_mktag(3), Var_73, (MR_Integer) 1));
              Var_40 = ((MR_Box) (MR_hl_field(MR_mktag(3), Var_73, (MR_Integer) 2)));
              Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_73, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Box Neg_187 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2));
              MR_Word Var_216;
              MR_Box Var_186 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
              MR_Box Var_188 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3)));
              MR_Box Var_189;
              MR_Word Var_190;

              mdb__declarative_execution__neg_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_100, Store_4, Neg_187, &Var_216);
              Prec_6 = (MR_hl_field(MR_mktag(3), Var_216, (MR_Integer) 1));
              Var_189 = ((MR_Box) (MR_hl_field(MR_mktag(3), Var_216, (MR_Integer) 2)));
              Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_216, (MR_Integer) 3)));
            }
            break;
        }
        break;
    }
    return Prec_6;
  }
}

static void MR_CALL 
mdb__declarative_execution__find_prev_contour_3_p_1(
  MR_Word TypeClassInfo_for_annotated_trace_67,
  MR_Box Store_4,
  MR_Word Node_5,
  MR_Box * OnContour_6)
{
  switch (MR_tag((MR_Word) Node_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Box Exit_15 = (MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 1));
        MR_Word ExitNode_19;
        MR_Box Var_14 = (MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 0));
        MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 2)));
        MR_Box Var_17 = ((MR_Box) (MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 3)));
        MR_Integer Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 4)));
        MR_Box Var_60;
        MR_Box Var_61;
        MR_Word Var_62;
        MR_Integer Var_63;
        MR_Box Var_64;
        MR_Integer Var_65;
        MR_Integer Var_66;

        mdb__declarative_execution__exit_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_67, Store_4, Exit_15, &ExitNode_19);
        *OnContour_6 = (MR_hl_field(MR_mktag(1), ExitNode_19, (MR_Integer) 0));
        Var_60 = (MR_hl_field(MR_mktag(1), ExitNode_19, (MR_Integer) 1));
        Var_61 = (MR_hl_field(MR_mktag(1), ExitNode_19, (MR_Integer) 2));
        Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ExitNode_19, (MR_Integer) 3)));
        Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ExitNode_19, (MR_Integer) 4)));
        Var_64 = ((MR_Box) (MR_hl_field(MR_mktag(1), ExitNode_19, (MR_Integer) 5)));
        Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ExitNode_19, (MR_Integer) 6)));
        Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ExitNode_19, (MR_Integer) 7)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box Call_8 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2));
            MR_Word CallNode_13;
            MR_Box Var_7 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
            MR_Box Var_9 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3));
            MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 4)));
            MR_Box Var_11 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 5)));
            MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 6)));
            MR_Box Var_51;
            MR_Word Var_52;
            MR_Integer Var_53;
            MR_Integer Var_54;
            MR_Word Var_55;
            MR_Word Var_56;
            MR_Box Var_57;
            MR_Integer Var_58;
            MR_Integer Var_59;

            mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_67, Store_4, Call_8, &CallNode_13);
            *OnContour_6 = (MR_hl_field(MR_mktag(0), CallNode_13, (MR_Integer) 0));
            Var_51 = (MR_hl_field(MR_mktag(0), CallNode_13, (MR_Integer) 1));
            Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_13, (MR_Integer) 2)));
            Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_13, (MR_Integer) 3)));
            Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_13, (MR_Integer) 4)));
            Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_13, (MR_Integer) 5)));
            Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_13, (MR_Integer) 6)));
            Var_57 = ((MR_Box) (MR_hl_field(MR_mktag(0), CallNode_13, (MR_Integer) 7)));
            Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_13, (MR_Integer) 8)));
            Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_13, (MR_Integer) 9)));
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Box Neg_21 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 2));
            MR_Word Var_50;
            MR_Box Var_20 = (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 1));
            MR_Box Var_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node_5, (MR_Integer) 3)));
            MR_Box Var_23;
            MR_Word Var_24;

            mdb__declarative_execution__neg_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_67, Store_4, Neg_21, &Var_50);
            *OnContour_6 = (MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 1));
            Var_23 = ((MR_Box) (MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 2)));
            Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 3)));
          }
          break;
      }
      break;
  }
}

void MR_CALL 
mdb__declarative_execution__exit_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_19,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * Node_6)
{
  {
    MR_bool succeeded;
    MR_Word Node0_7;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_annotated_trace_19, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box conv1_Node0_7;
    MR_Box Var_8;
    MR_Box Var_9;
    MR_Box Var_10;
    MR_Word Var_11;
    MR_Integer Var_12;
    MR_Box Var_13;
    MR_Integer Var_14;
    MR_Integer Var_15;

    succeeded = func_0(((MR_Box) TypeClassInfo_for_annotated_trace_19), Store_4, NodeId_5, &conv1_Node0_7);
    if (succeeded)
    {
      Node0_7 = ((MR_Word) conv1_Node0_7);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Node0_7)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_8 = (MR_hl_field(MR_mktag(1), Node0_7, (MR_Integer) 0));
        Var_9 = (MR_hl_field(MR_mktag(1), Node0_7, (MR_Integer) 1));
        Var_10 = (MR_hl_field(MR_mktag(1), Node0_7, (MR_Integer) 2));
        Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Node0_7, (MR_Integer) 3)));
        Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Node0_7, (MR_Integer) 4)));
        Var_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), Node0_7, (MR_Integer) 5)));
        Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Node0_7, (MR_Integer) 6)));
        Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Node0_7, (MR_Integer) 7)));
      }
    }
    if (succeeded)
      *Node_6 = Node0_7;
    else
    {
      {
        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[11])));
        return;
      }
    }
  }
}

void MR_CALL 
mdb__declarative_execution__first_disj_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_13,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * Node_6)
{
  {
    MR_bool succeeded;
    MR_Word Node0_7;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_annotated_trace_13, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box conv1_Node0_7;
    MR_Box Var_8;
    MR_Box Var_9;

    succeeded = func_0(((MR_Box) TypeClassInfo_for_annotated_trace_13), Store_4, NodeId_5, &conv1_Node0_7);
    if (succeeded)
    {
      Node0_7 = ((MR_Word) conv1_Node0_7);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Node0_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        Var_8 = (MR_hl_field(MR_mktag(3), Node0_7, (MR_Integer) 1));
        Var_9 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node0_7, (MR_Integer) 2)));
      }
    }
    if (succeeded)
      *Node_6 = Node0_7;
    else
    {
      {
        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[10])));
        return;
      }
    }
  }
}

void MR_CALL 
mdb__declarative_execution__neg_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_14,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * Node_6)
{
  {
    MR_bool succeeded;
    MR_Word Node0_7;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_annotated_trace_14, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box conv1_Node0_7;
    MR_Box Var_8;
    MR_Box Var_9;
    MR_Word Var_10;

    succeeded = func_0(((MR_Box) TypeClassInfo_for_annotated_trace_14), Store_4, NodeId_5, &conv1_Node0_7);
    if (succeeded)
    {
      Node0_7 = ((MR_Word) conv1_Node0_7);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Node0_7, (MR_Integer) 0)))) == (MR_Integer) 8)));
      if (succeeded)
      {
        Var_8 = (MR_hl_field(MR_mktag(3), Node0_7, (MR_Integer) 1));
        Var_9 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node0_7, (MR_Integer) 2)));
        Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node0_7, (MR_Integer) 3)));
      }
    }
    if (succeeded)
      *Node_6 = Node0_7;
    else
    {
      {
        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[9])));
        return;
      }
    }
  }
}

void MR_CALL 
mdb__declarative_execution__cond_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_14,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * Node_6)
{
  {
    MR_bool succeeded;
    MR_Word Node0_7;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_annotated_trace_14, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box conv1_Node0_7;
    MR_Box Var_8;
    MR_Box Var_9;
    MR_Word Var_10;

    succeeded = func_0(((MR_Box) TypeClassInfo_for_annotated_trace_14), Store_4, NodeId_5, &conv1_Node0_7);
    if (succeeded)
    {
      Node0_7 = ((MR_Word) conv1_Node0_7);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Node0_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Var_8 = (MR_hl_field(MR_mktag(3), Node0_7, (MR_Integer) 1));
        Var_9 = ((MR_Box) (MR_hl_field(MR_mktag(3), Node0_7, (MR_Integer) 2)));
        Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Node0_7, (MR_Integer) 3)));
      }
    }
    if (succeeded)
      *Node_6 = Node0_7;
    else
    {
      {
        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[8])));
        return;
      }
    }
  }
}

void MR_CALL 
mdb__declarative_execution__call_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_21,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * Node_6)
{
  {
    MR_bool succeeded;
    MR_Word Node0_7;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_annotated_trace_21, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box conv1_Node0_7;
    MR_Box Var_8;
    MR_Box Var_9;
    MR_Word Var_10;
    MR_Integer Var_11;
    MR_Integer Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Box Var_15;
    MR_Integer Var_16;
    MR_Integer Var_17;

    succeeded = func_0(((MR_Box) TypeClassInfo_for_annotated_trace_21), Store_4, NodeId_5, &conv1_Node0_7);
    if (succeeded)
    {
      Node0_7 = ((MR_Word) conv1_Node0_7);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Node0_7)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_8 = (MR_hl_field(MR_mktag(0), Node0_7, (MR_Integer) 0));
        Var_9 = (MR_hl_field(MR_mktag(0), Node0_7, (MR_Integer) 1));
        Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node0_7, (MR_Integer) 2)));
        Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Node0_7, (MR_Integer) 3)));
        Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Node0_7, (MR_Integer) 4)));
        Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node0_7, (MR_Integer) 5)));
        Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Node0_7, (MR_Integer) 6)));
        Var_15 = ((MR_Box) (MR_hl_field(MR_mktag(0), Node0_7, (MR_Integer) 7)));
        Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Node0_7, (MR_Integer) 8)));
        Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Node0_7, (MR_Integer) 9)));
      }
    }
    if (succeeded)
      *Node_6 = Node0_7;
    else
    {
      {
        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[7])));
        return;
      }
    }
  }
}

void MR_CALL 
mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0(
  MR_Word TypeInfo_for_R_23,
  MR_Word CallNode_3,
  MR_Word * MaybeProcDefnRep_4)
{
  {
    MR_bool succeeded;
    MR_Box Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), CallNode_3, (MR_Integer) 7)));
    MR_Box Var_14 = (MR_hl_field(MR_mktag(0), CallNode_3, (MR_Integer) 0));
    MR_Box Var_15 = (MR_hl_field(MR_mktag(0), CallNode_3, (MR_Integer) 1));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_3, (MR_Integer) 2)));
    MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_3, (MR_Integer) 3)));
    MR_Integer Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_3, (MR_Integer) 4)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_3, (MR_Integer) 5)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallNode_3, (MR_Integer) 6)));
    MR_Integer Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_3, (MR_Integer) 8)));
    MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallNode_3, (MR_Integer) 9)));
    MR_Box ProcLayout_6;

{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0

	const MR_LabelLayout * CallLabelLayout;
	const MR_ProcLayout * ProcLayout;
	MR_bool SUCCESS_INDICATOR;

	CallLabelLayout = (const MR_LabelLayout *) Label_5 ;
		{

    ProcLayout = CallLabelLayout->MR_sll_entry;
    if (ProcLayout->MR_sle_body_bytes != NULL) {
#ifdef MR_DEBUG_PROC_REP
        printf("call_node_bytecode_layout: %p success\n", CallLabelLayout);
#endif
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
#ifdef MR_DEBUG_PROC_REP
        printf("call_node_bytecode_layout: %p failure\n", CallLabelLayout);
#endif
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 ProcLayout_6  = (MR_Box) ProcLayout;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Word ProcDefnRep_7;

{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;
	MR_bool SUCCESS_INDICATOR;

	ProcLayout = (const MR_ProcLayout *) ProcLayout_6 ;
		{

    ProcDefnRep = MR_lookup_proc_defn_rep(ProcLayout);
    if (ProcDefnRep != 0) {
#ifdef MR_DEBUG_PROC_REP
        printf("have_cached_proc_defn_rep: %p success\n", ProcLayout);
#endif
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
#ifdef MR_DEBUG_PROC_REP
        printf("have_cached_proc_defn_rep: %p failure\n", ProcLayout);
#endif
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 ProcDefnRep_7  = ProcDefnRep;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeProcDefnRep_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcDefnRep_7));
        }
      else
      {
        MR_Box ByteCodeBytes_8;
        MR_Word ProcDefnRep_12;

        ByteCodeBytes_8 = mdbcomp__rtti_access__proc_bytecode_bytes_1_f_0(ProcLayout_6);
        succeeded = mdbcomp__program_representation__trace_read_proc_defn_rep_3_p_0(ByteCodeBytes_8, Label_5, &ProcDefnRep_12);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;

	ProcLayout = (const MR_ProcLayout *) ProcLayout_6 ;
	ProcDefnRep =  ProcDefnRep_12 ;
		{

#ifdef MR_DEBUG_PROC_REP
    printf("cache_proc_defn_rep: %p %x\n", ProcLayout, ProcDefnRep);
#endif
    MR_insert_proc_defn_rep(ProcLayout, ProcDefnRep);


		;}
#undef MR_PROC_LABEL
}
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeProcDefnRep_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcDefnRep_12));
          }
        }
        else
        {
          {
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[6])));
            return;
          }
        }
      }
    }
    else
      *MaybeProcDefnRep_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void MR_CALL 
mdb__declarative_execution__get_pred_attributes_5_p_0(
  MR_Word ProcId_6,
  MR_Word * Module_7,
  MR_String * Name_8,
  MR_Integer * Arity_9,
  MR_Word * PredOrFunc_10)
{
  if (((MR_tag((MR_Word) ProcId_6)) == (MR_mktag((MR_Integer) 0))))
  {
    MR_Word Var_11;
    MR_Integer Var_12;

    *Module_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcId_6, (MR_Integer) 0)));
    *PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcId_6, (MR_Integer) 1)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcId_6, (MR_Integer) 2)));
    *Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ProcId_6, (MR_Integer) 3)));
    *Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcId_6, (MR_Integer) 4)));
    Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcId_6, (MR_Integer) 5)));
  }
  else
  {
    MR_Word SpecialId_13;
    MR_Word Var_14;
    MR_String Var_15;
    MR_Integer Var_16;
    MR_Integer Var_17;

    *Module_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ProcId_6, (MR_Integer) 0)));
    SpecialId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ProcId_6, (MR_Integer) 1)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ProcId_6, (MR_Integer) 2)));
    Var_15 = ((MR_String) (MR_hl_field(MR_mktag(1), ProcId_6, (MR_Integer) 3)));
    Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ProcId_6, (MR_Integer) 4)));
    Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ProcId_6, (MR_Integer) 5)));
    *PredOrFunc_10 = (MR_Integer) 0;
    *Arity_9 = mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(SpecialId_13);
    *Name_8 = mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(SpecialId_13);
  }
}

MR_bool MR_CALL 
mdb__declarative_execution__get_trace_call_atom_1_f_1(
  MR_Word TypeInfo_for_R_15,
  MR_Word HeadVar__1_1,
  MR_Word * Atom_13)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
    MR_Word AtomArgs_5;
    MR_Box Label_10;
    MR_Box ProcLayout_14;
    MR_Box Var_3;
    MR_Box Var_4;
    MR_Integer Var_6;
    MR_Integer Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer Var_11;
    MR_Integer Var_12;

    if (succeeded)
    {
      Var_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      Var_4 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
      AtomArgs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      Label_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8)));
      Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9)));
      ProcLayout_14 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(Label_10);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *Atom_13 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ProcLayout_14));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (AtomArgs_5));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mdb__declarative_execution__get_trace_call_atom_1_f_0(
  MR_Word TypeInfo_for_R_15,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Atom_13;
    MR_Word AtomArgs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Box Label_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
    MR_Box ProcLayout_14;
    MR_Box Var_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Box Var_4 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
    MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
    MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9)));

    ProcLayout_14 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(Label_10);
    {
      Atom_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Atom_13, 0) = ((MR_Box) (ProcLayout_14));
      MR_hl_field(MR_mktag(0), Atom_13, 1) = ((MR_Box) (AtomArgs_5));
    }
    return Atom_13;
  }
}

MR_bool MR_CALL 
mdb__declarative_execution__get_trace_exit_atom_1_f_1(
  MR_Word TypeInfo_for_R_13,
  MR_Word HeadVar__1_1,
  MR_Word * Atom_11)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word AtomArgs_6;
    MR_Box Label_8;
    MR_Box ProcLayout_12;
    MR_Box Var_3;
    MR_Box Var_4;
    MR_Box Var_5;
    MR_Integer Var_7;
    MR_Integer Var_9;
    MR_Integer Var_10;

    if (succeeded)
    {
      Var_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      Var_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      Var_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
      AtomArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4)));
      Label_8 = ((MR_Box) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 5)));
      Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 6)));
      Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 7)));
      ProcLayout_12 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(Label_8);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *Atom_11 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ProcLayout_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (AtomArgs_6));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mdb__declarative_execution__get_trace_exit_atom_1_f_0(
  MR_Word TypeInfo_for_R_13,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Atom_11;
    MR_Word AtomArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
    MR_Box Label_8 = ((MR_Box) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 5)));
    MR_Box ProcLayout_12;
    MR_Box Var_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Box Var_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
    MR_Box Var_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
    MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4)));
    MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 6)));
    MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 7)));

    ProcLayout_12 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(Label_8);
    {
      Atom_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Atom_11, 0) = ((MR_Box) (ProcLayout_12));
      MR_hl_field(MR_mktag(0), Atom_11, 1) = ((MR_Box) (AtomArgs_6));
    }
    return Atom_11;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____event_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_execution____Unify____event_number_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____event_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_execution____Compare____event_number_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____goal_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_execution____Unify____goal_status_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____goal_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_execution____Compare____goal_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____implicit_tree_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_execution____Unify____implicit_tree_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____implicit_tree_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_execution____Compare____implicit_tree_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____sequence_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_execution____Unify____sequence_number_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____sequence_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_execution____Compare____sequence_number_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____suspicion_accumulator_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_execution____Unify____suspicion_accumulator_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____suspicion_accumulator_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_execution____Compare____suspicion_accumulator_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_execution____Unify____trace_atom_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_execution____Compare____trace_atom_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_execution____Unify____trace_atom_arg_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_execution____Compare____trace_atom_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_execution____Unify____trace_node_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_execution____Compare____trace_node_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_execution____Unify____trace_node_id_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_execution____Compare____trace_node_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_execution____Unify____trace_node_key_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_execution____Compare____trace_node_key_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_execution____Unify____trace_node_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_execution____Compare____trace_node_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_store_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_execution____Unify____trace_node_store_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_store_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_execution____Compare____trace_node_store_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____which_headvars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_execution____Unify____which_headvars_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____which_headvars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_execution____Compare____which_headvars_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    succeeded = mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__3_3);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    succeeded = mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__3_3);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void mercury__mdb__declarative_execution__init(void)
{
}

void mercury__mdb__declarative_execution__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_event_number_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_implicit_tree_info_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_sequence_number_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_suspicion_accumulator_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_store_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_which_headvars_0);
}

void mercury__mdb__declarative_execution__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__declarative_execution__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.declarative_execution.
