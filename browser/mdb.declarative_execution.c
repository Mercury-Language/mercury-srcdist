/*
** Automatically generated from `declarative_execution.m'
** by the Mercury compiler,
** version rotd-2026-06-01
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


// :- module mdb.declarative_execution.
// :- implementation.

/*
INIT mercury__mdb__declarative_execution__init
ENDINIT
*/

#include "mdb.declarative_execution.mih"
#include "mdb.declarative_execution.mh"


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
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdb.browser_info.mih"
#include "mdb.declarative_analyser.mih"
#include "mdb.declarative_debugger.mih"
#include "mdb.declarative_edt.mih"
#include "mdb.declarative_tree.mih"
#include "mdb.help.mih"
#include "mdb.io_action.mih"
#include "mdb.term_rep.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"




static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0;

static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1;

static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2;

static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_ordinal_ordered_goal_status_0[3];

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

static const MR_DuArgLocn mdb__declarative_execution__mdb__declarative_execution__field_locns_trace_atom_arg_0_0[3];

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

static const MR_DuArgLocn mdb__declarative_execution__mdb__declarative_execution__field_locns_trace_node_1_8[3];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_8;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_9[3];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_9[3];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_9;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_10[3];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_10[3];

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_10;

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_11[3];

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_11[3];

static const MR_DuArgLocn mdb__declarative_execution__mdb__declarative_execution__field_locns_trace_node_1_11[3];

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

static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_ordinal_ordered_which_headvars_0[2];

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

static MR_bool MR_CALL 
mdb__declarative_execution__find_prev_contour_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_67,
  MR_Box Store_4,
  MR_Word Node_5,
  MR_Box * OnContour_6);

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

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_3[1][1];

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_4[1][4];




static /* final */ const MR_Box mdb__declarative_execution_scalar_common_1[34][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_implicit_tree_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "call_node_maybe_proc_defn_rep")),
    ((MR_Box) ((MR_String) "cannot interpret proc bytecode"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "step_left_in_contour")),
    ((MR_Box) ((MR_String) "unexpected CALL node"))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "step_left_in_contour")),
    ((MR_Box) ((MR_String) "failed COND node"))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "step_left_in_contour")),
    ((MR_Box) ((MR_String) "unexpected NEGE node"))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "step_in_stratum")),
    ((MR_Box) ((MR_String) "unexpected CALL node"))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "step_in_stratum")),
    ((MR_Box) ((MR_String) "failed COND node"))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "step_in_stratum")),
    ((MR_Box) ((MR_String) "unexpected NEGE node"))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "det_trace_node_from_id")),
    ((MR_Box) ((MR_String) "NULL node id"))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "call_node_from_id")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "maybe_redo_node_from_id")),
    ((MR_Box) ((MR_String) "not a REDO node or NULL"))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "exit_node_from_id")),
    ((MR_Box) ((MR_String) "not an EXIT node"))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "cond_node_from_id")),
    ((MR_Box) ((MR_String) "not a COND node"))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "neg_node_from_id")),
    ((MR_Box) ((MR_String) "not a NEG node"))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "first_disj_node_from_id")),
    ((MR_Box) ((MR_String) "not a first DISJ node"))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "disj_node_from_id")),
    ((MR_Box) ((MR_String) "not a DISJ node"))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "load_trace_node_map")),
    ((MR_Box) ((MR_String) "unexpected EOF"))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "find_prev_contour")),
    ((MR_Box) ((MR_String) "reached CALL node"))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "find_prev_contour")),
    ((MR_Box) ((MR_String) "reached COND node"))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "find_prev_contour")),
    ((MR_Box) ((MR_String) "reached NEGE node"))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "call_node_get_last_interface")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "call_node_set_last_interface")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_String) "call_node_update_implicit_tree_info")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_String) "get_implicit_tree_max_depth")),
    ((MR_Box) ((MR_String) "not at max depth"))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_String) "get_implicit_tree_max_depth")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_String) "cond_node_set_status")),
    ((MR_Box) ((MR_String) "not a COND node"))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_String) "neg_node_set_status")),
    ((MR_Box) ((MR_String) "not a NEGE node"))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_String) "head_var_num_to_arg_num")),
    ((MR_Box) ((MR_String) "nonexistent head_var_num"))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_String) "arg_num_to_head_var_num")),
    ((MR_Box) ((MR_String) "nonexistent arg num"))
  },
};

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_store_0)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0)),
    ((MR_Box) (&mdb__declarative_execution_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdb__declarative_execution_scalar_common_4[0])),
    ((MR_Box) (mdb__declarative_execution__maybe_filter_headvars_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdb__declarative_execution_scalar_common_4[0])),
    ((MR_Box) (mdb__declarative_execution__select_arg_at_pos_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) (((MR_Box) ((MR_Integer) 0)))) },
};

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_4[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0))
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
#include "io.stream_ops.mh"
#include "mdb.declarative_execution.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"

#line 886 "declarative_execution.m"
MR_Word 
MR_DD_call_node_get_last_interface(
  MR_Word Call_3)
#line 886 "declarative_execution.m"
{
#line 886 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_get_last_interface_1_f_0((MR_Word) Call_3);
	return ret_value;
}

#line 899 "declarative_execution.m"
MR_Word 
MR_DD_call_node_set_last_interface(
  MR_Word Call0_4,
  MR_Word Last_5)
#line 899 "declarative_execution.m"
{
#line 899 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_set_last_interface_2_f_0((MR_Word) Call0_4, (MR_Word) Last_5);
	return ret_value;
}

#line 915 "declarative_execution.m"
MR_Word 
MR_DD_call_node_update_implicit_tree_info(
  MR_Word Call0_4,
  MR_Integer IdealDepth_5)
#line 915 "declarative_execution.m"
{
#line 915 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0((MR_Word) Call0_4, (MR_Integer) IdealDepth_5);
	return ret_value;
}

#line 931 "declarative_execution.m"
MR_Integer 
MR_DD_get_implicit_tree_ideal_depth(
  MR_Word Call_3)
#line 931 "declarative_execution.m"
{
#line 931 "declarative_execution.m"
	MR_Integer ret_value;
	ret_value = (MR_Integer)mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0((MR_Word) Call_3);
	return ret_value;
}

#line 950 "declarative_execution.m"
MR_Word 
MR_DD_cond_node_set_status(
  MR_Word Cond0_4,
  MR_Word Status_5)
#line 950 "declarative_execution.m"
{
#line 950 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__cond_node_set_status_2_f_0((MR_Word) Cond0_4, (MR_Word) Status_5);
	return ret_value;
}

#line 965 "declarative_execution.m"
MR_Word 
MR_DD_neg_node_set_status(
  MR_Word Neg0_4,
  MR_Word Status_5)
#line 965 "declarative_execution.m"
{
#line 965 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__neg_node_set_status_2_f_0((MR_Word) Neg0_4, (MR_Word) Status_5);
	return ret_value;
}

#line 991 "declarative_execution.m"
MR_Word 
MR_DD_trace_node_port(
  MR_Word HeadVar__1_1)
#line 991 "declarative_execution.m"
{
#line 991 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__trace_node_port_1_f_0((MR_Word) HeadVar__1_1);
	return ret_value;
}

#line 1010 "declarative_execution.m"
MR_String 
MR_DD_trace_node_path(
  MR_Word Node_3)
#line 1010 "declarative_execution.m"
{
#line 1010 "declarative_execution.m"
	MR_String ret_value;
	ret_value = (MR_String)mdb__declarative_execution__trace_node_path_1_f_0((MR_Word) Node_3);
	return ret_value;
}

#line 1036 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_seqno(
  MR_Word S_4,
  MR_Word Node_5,
  MR_Integer * SeqNo_6)
#line 1036 "declarative_execution.m"
{
#line 1036 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_seqno_3_p_0((MR_Word) S_4, (MR_Word) Node_5, (MR_Integer *) SeqNo_6);
	return ret_value;
}

#line 1050 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_call(
  MR_Word S_1,
  MR_Word HeadVar__2_2,
  MR_Word * Call_3)
#line 1050 "declarative_execution.m"
{
#line 1050 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_call_3_p_0((MR_Word) S_1, (MR_Word) HeadVar__2_2, (MR_Word *) Call_3);
	return ret_value;
}

#line 1062 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_first_disj(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
#line 1062 "declarative_execution.m"
{
#line 1062 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_first_disj_2_p_0((MR_Word) HeadVar__1_1, (MR_Word *) HeadVar__2_2);
	return ret_value;
}

#line 1074 "declarative_execution.m"
MR_Word 
MR_DD_step_left_in_contour(
  MR_Word Store_4,
  MR_Word Node_5)
#line 1074 "declarative_execution.m"
{
#line 1074 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__step_left_in_contour_store_2_f_0((MR_Word) Store_4, (MR_Word) Node_5);
	return ret_value;
}

#line 1087 "declarative_execution.m"
MR_Word 
MR_DD_find_prev_contour(
  MR_Word Store_4,
  MR_Word Id_5)
#line 1087 "declarative_execution.m"
{
#line 1087 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__find_prev_contour_store_2_f_0((MR_Word) Store_4, (MR_Word) Id_5);
	return ret_value;
}

#line 1103 "declarative_execution.m"
void 
MR_DD_print_trace_node(
  MR_Word OutStr_5,
  MR_Word Node_6)
#line 1103 "declarative_execution.m"
{
#line 1103 "declarative_execution.m"
	mdb__declarative_execution__print_trace_node_4_p_0((MR_Word) OutStr_5, (MR_Word) Node_6);
}

#line 1119 "declarative_execution.m"
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
#line 1119 "declarative_execution.m"
{
#line 1119 "declarative_execution.m"
	MR_Box boxed_Label_17;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_17, boxed_Label_17);
	ret_value = (MR_Word)mdb__declarative_execution__construct_call_node_9_f_0((MR_Word) Preceding_11, (MR_Word) AtomArgs_12, (MR_Integer) SeqNo_13, (MR_Integer) EventNo_14, (MR_Word) AtMaxDepth_15, (MR_Word) MaybeReturnLabel_16, boxed_Label_17, (MR_Integer) IoSeqNum_18, (MR_Integer) Suspicion_19);
	return ret_value;
}

#line 1140 "declarative_execution.m"
MR_Word 
MR_DD_make_yes_maybe_label(
  const MR_LabelLayout * Label_3)
#line 1140 "declarative_execution.m"
{
#line 1140 "declarative_execution.m"
	MR_Box boxed_Label_3;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_3, boxed_Label_3);
	ret_value = (MR_Word)mdb__declarative_execution__make_yes_maybe_label_1_f_0(boxed_Label_3);
	return ret_value;
}

#line 1146 "declarative_execution.m"
MR_Word 
MR_DD_make_no_maybe_label(void)
#line 1146 "declarative_execution.m"
{
#line 1146 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__make_no_maybe_label_0_f_0();
	return ret_value;
}

#line 1154 "declarative_execution.m"
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
#line 1154 "declarative_execution.m"
{
#line 1154 "declarative_execution.m"
	MR_Box boxed_Label_15;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_15, boxed_Label_15);
	ret_value = (MR_Word)mdb__declarative_execution__construct_exit_node_8_f_0((MR_Word) Preceding_10, (MR_Word) Call_11, (MR_Word) MaybeRedo_12, (MR_Word) AtomArgs_13, (MR_Integer) EventNo_14, boxed_Label_15, (MR_Integer) IoSeqNum_16, (MR_Integer) Suspicion_17);
	return ret_value;
}

#line 1165 "declarative_execution.m"
MR_Word 
MR_DD_construct_redo_node(
  MR_Word Preceding_7,
  MR_Word Exit_8,
  MR_Integer Event_9,
  const MR_LabelLayout * Label_10,
  MR_Integer Suspicion_11)
#line 1165 "declarative_execution.m"
{
#line 1165 "declarative_execution.m"
	MR_Box boxed_Label_10;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_10, boxed_Label_10);
	ret_value = (MR_Word)mdb__declarative_execution__construct_redo_node_5_f_0((MR_Word) Preceding_7, (MR_Word) Exit_8, (MR_Integer) Event_9, boxed_Label_10, (MR_Integer) Suspicion_11);
	return ret_value;
}

#line 1175 "declarative_execution.m"
MR_Word 
MR_DD_construct_fail_node(
  MR_Word Preceding_8,
  MR_Word Call_9,
  MR_Word Redo_10,
  MR_Integer EventNo_11,
  const MR_LabelLayout * Label_12,
  MR_Integer Suspicion_13)
#line 1175 "declarative_execution.m"
{
#line 1175 "declarative_execution.m"
	MR_Box boxed_Label_12;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_12, boxed_Label_12);
	ret_value = (MR_Word)mdb__declarative_execution__construct_fail_node_6_f_0((MR_Word) Preceding_8, (MR_Word) Call_9, (MR_Word) Redo_10, (MR_Integer) EventNo_11, boxed_Label_12, (MR_Integer) Suspicion_13);
	return ret_value;
}

#line 1185 "declarative_execution.m"
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
#line 1185 "declarative_execution.m"
{
#line 1185 "declarative_execution.m"
	MR_Box boxed_Label_14;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_14, boxed_Label_14);
	mdb__declarative_execution__construct_excp_node_8_p_0((MR_Word) Preceding_9, (MR_Word) Call_10, (MR_Word) MaybeRedo_11, (MR_Word) Exception_12, (MR_Integer) EventNo_13, boxed_Label_14, (MR_Integer) Suspicion_15, (MR_Word *) Excp_16);
}

#line 1197 "declarative_execution.m"
MR_Word 
MR_DD_construct_switch_node(
  MR_Word Preceding_4,
  const MR_LabelLayout * Label_5)
#line 1197 "declarative_execution.m"
{
#line 1197 "declarative_execution.m"
	MR_Box boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_5, boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_switch_node_2_f_0((MR_Word) Preceding_4, boxed_Label_5);
	return ret_value;
}

#line 1205 "declarative_execution.m"
MR_Word 
MR_DD_construct_first_disj_node(
  MR_Word Preceding_4,
  const MR_LabelLayout * Label_5)
#line 1205 "declarative_execution.m"
{
#line 1205 "declarative_execution.m"
	MR_Box boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_5, boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_first_disj_node_2_f_0((MR_Word) Preceding_4, boxed_Label_5);
	return ret_value;
}

#line 1214 "declarative_execution.m"
MR_Word 
MR_DD_construct_later_disj_node(
  MR_Word Store_6,
  MR_Word Preceding_7,
  const MR_LabelLayout * Label_8,
  MR_Word PrevDisj_9)
#line 1214 "declarative_execution.m"
{
#line 1214 "declarative_execution.m"
	MR_Box boxed_Label_8;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_8, boxed_Label_8);
	ret_value = (MR_Word)mdb__declarative_execution__construct_later_disj_node_4_f_0((MR_Word) Store_6, (MR_Word) Preceding_7, boxed_Label_8, (MR_Word) PrevDisj_9);
	return ret_value;
}

#line 1230 "declarative_execution.m"
MR_Word 
MR_DD_construct_cond_node(
  MR_Word Preceding_4,
  const MR_LabelLayout * Label_5)
#line 1230 "declarative_execution.m"
{
#line 1230 "declarative_execution.m"
	MR_Box boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_5, boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_cond_node_2_f_0((MR_Word) Preceding_4, boxed_Label_5);
	return ret_value;
}

#line 1238 "declarative_execution.m"
MR_Word 
MR_DD_construct_then_node(
  MR_Word Preceding_5,
  MR_Word Cond_6,
  const MR_LabelLayout * Label_7)
#line 1238 "declarative_execution.m"
{
#line 1238 "declarative_execution.m"
	MR_Box boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_7, boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_then_node_3_f_0((MR_Word) Preceding_5, (MR_Word) Cond_6, boxed_Label_7);
	return ret_value;
}

#line 1247 "declarative_execution.m"
MR_Word 
MR_DD_construct_else_node(
  MR_Word Preceding_5,
  MR_Word Cond_6,
  const MR_LabelLayout * Label_7)
#line 1247 "declarative_execution.m"
{
#line 1247 "declarative_execution.m"
	MR_Box boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_7, boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_else_node_3_f_0((MR_Word) Preceding_5, (MR_Word) Cond_6, boxed_Label_7);
	return ret_value;
}

#line 1256 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_node(
  MR_Word Preceding_4,
  const MR_LabelLayout * Label_5)
#line 1256 "declarative_execution.m"
{
#line 1256 "declarative_execution.m"
	MR_Box boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_5, boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_node_2_f_0((MR_Word) Preceding_4, boxed_Label_5);
	return ret_value;
}

#line 1264 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_succ_node(
  MR_Word Preceding_5,
  MR_Word Neg_6,
  const MR_LabelLayout * Label_7)
#line 1264 "declarative_execution.m"
{
#line 1264 "declarative_execution.m"
	MR_Box boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_7, boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_succ_node_3_f_0((MR_Word) Preceding_5, (MR_Word) Neg_6, boxed_Label_7);
	return ret_value;
}

#line 1273 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_fail_node(
  MR_Word Preceding_5,
  MR_Word Neg_6,
  const MR_LabelLayout * Label_7)
#line 1273 "declarative_execution.m"
{
#line 1273 "declarative_execution.m"
	MR_Box boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Label_7, boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_fail_node_3_f_0((MR_Word) Preceding_5, (MR_Word) Neg_6, boxed_Label_7);
	return ret_value;
}

#line 1299 "declarative_execution.m"
MR_Word 
MR_DD_init_trace_atom_args(void)
#line 1299 "declarative_execution.m"
{
#line 1299 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__init_trace_atom_args_0_f_0();
	return ret_value;
}

#line 1312 "declarative_execution.m"
void 
MR_DD_add_trace_atom_arg_value(
  MR_Integer HldsNum_6,
  MR_Integer ProgVis_7,
  MR_Word Val_8,
  MR_Word Args_9,
  MR_Word * HeadVar__5_5)
#line 1312 "declarative_execution.m"
{
#line 1312 "declarative_execution.m"
	mdb__declarative_execution__add_trace_atom_arg_value_5_p_0((MR_Integer) HldsNum_6, (MR_Integer) ProgVis_7, (MR_Word) Val_8, (MR_Word) Args_9, (MR_Word *) HeadVar__5_5);
}

#line 1324 "declarative_execution.m"
void 
MR_DD_add_trace_atom_arg_no_value(
  MR_Integer HldsNum_5,
  MR_Integer ProgVis_6,
  MR_Word Args_7,
  MR_Word * HeadVar__4_4)
#line 1324 "declarative_execution.m"
{
#line 1324 "declarative_execution.m"
	mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0((MR_Integer) HldsNum_5, (MR_Integer) ProgVis_6, (MR_Word) Args_7, (MR_Word *) HeadVar__4_4);
}

#line 1388 "declarative_execution.m"
void 
MR_DD_save_trace(
  MR_Word Stream_6,
  MR_Word Store_7,
  MR_Word NodeId_8)
#line 1388 "declarative_execution.m"
{
#line 1388 "declarative_execution.m"
	mdb__declarative_execution__save_trace_node_store_5_p_0((MR_Word) Stream_6, (MR_Word) Store_7, (MR_Word) NodeId_8);
}


const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_event_number_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____event_number_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____event_number_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "event_number",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0 = {
  (MR_String) "succeeded",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1 = {
  (MR_String) "failed",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2 = {
  (MR_String) "undecided",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_ordinal_ordered_goal_status_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_execution____Unify____goal_status_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____goal_status_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "goal_status",
  { mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_goal_status_0 },
  { mdb__declarative_execution__mdb__declarative_execution__enum_ordinal_ordered_goal_status_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_goal_status_0,

};

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_implicit_tree_info_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0 = {
  (MR_String) "implicit_tree_info",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_String) "ideal_depth",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_implicit_tree_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____implicit_tree_info_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____implicit_tree_info_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "implicit_tree_info",
  { &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0 },
  { &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_implicit_tree_info_0,

};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_sequence_number_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____sequence_number_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____sequence_number_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "sequence_number",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_suspicion_accumulator_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____suspicion_accumulator_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____suspicion_accumulator_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "suspicion_accumulator",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0) }
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0)
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_0_0[2] = {
  (MR_String) "proc_layout",
  (MR_String) "atom_args"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0 = {
  (MR_String) "atom",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_0_0,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_0_0[1] = { &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0 };

static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_0[1] = { &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0 };

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_atom_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_atom_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_atom",
  { mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_0 },
  { mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_0,

};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdb__term_rep__type_ctor_info_term_rep_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0) }
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_arg_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_execution__maybe__ti_maybe_1mdb__term_rep__type_ctor_info_term_rep_0)
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_arg_0_0[3] = {
  (MR_String) "prog_visible",
  (MR_String) "prog_vis_headvar_num",
  (MR_String) "arg_value"
};

static const MR_DuArgLocn mdb__declarative_execution__mdb__declarative_execution__field_locns_trace_atom_arg_0_0[3] = {
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

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0 = {
  (MR_String) "arg_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_arg_0_0,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_arg_0_0,
  mdb__declarative_execution__mdb__declarative_execution__field_locns_trace_atom_arg_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_arg_0_0[1] = { &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0 };

static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_arg_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_arg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_arg_0[1] = { &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0 };

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_arg_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_atom_arg_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_atom_arg_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_atom_arg",
  { mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_arg_0 },
  { mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_arg_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_arg_0,

};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdb__declarative_execution__type_ctor_info_implicit_tree_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_implicit_tree_info_0) }
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdbcomp__rtti_access__type_ctor_info_label_layout_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0) }
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_0[10] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_execution__maybe__ti_maybe_1mdb__declarative_execution__type_ctor_info_implicit_tree_info_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_execution__maybe__ti_maybe_1mdbcomp__rtti_access__type_ctor_info_label_layout_0),
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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
  INT16_C(10),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_0,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_1[8] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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
  INT16_C(8),
  UINT16_C(7),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_1,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_2[5] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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
  INT16_C(5),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_2,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_3[6] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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
  INT16_C(6),
  UINT16_C(7),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_3,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_4[7] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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
  INT16_C(7),
  UINT16_C(7),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_4,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_4,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_5[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0)
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_5[2] = {
  (MR_String) "switch_preceding",
  (MR_String) "switch_label"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_5 = {
  (MR_String) "node_switch",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_5,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_5,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_6[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0)
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_6[2] = {
  (MR_String) "first_disj_preceding",
  (MR_String) "first_disj_label"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_6 = {
  (MR_String) "node_first_disj",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_6,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_6,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_7[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_7[3] = {
  (MR_String) "later_disj_preceding",
  (MR_String) "later_disj_label",
  (MR_String) "later_disj_first"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_7 = {
  (MR_String) "node_later_disj",
  INT16_C(3),
  UINT16_C(5),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_7,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_7,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_8[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0)
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_8[3] = {
  (MR_String) "cond_preceding",
  (MR_String) "cond_label",
  (MR_String) "cond_status"
};

static const MR_DuArgLocn mdb__declarative_execution__mdb__declarative_execution__field_locns_trace_node_1_8[3] = {
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
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_8 = {
  (MR_String) "node_cond",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_8,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_8,
  mdb__declarative_execution__mdb__declarative_execution__field_locns_trace_node_1_8,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_9[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0)
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_9[3] = {
  (MR_String) "then_preceding",
  (MR_String) "then_cond",
  (MR_String) "then_label"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_9 = {
  (MR_String) "node_then",
  INT16_C(3),
  UINT16_C(3),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_9,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_9,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_10[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0)
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_10[3] = {
  (MR_String) "else_preceding",
  (MR_String) "else_cond",
  (MR_String) "else_label"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_10 = {
  (MR_String) "node_else",
  INT16_C(3),
  UINT16_C(3),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_10,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_10,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_11[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0)
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_11[3] = {
  (MR_String) "neg_preceding",
  (MR_String) "neg_label",
  (MR_String) "neg_status"
};

static const MR_DuArgLocn mdb__declarative_execution__mdb__declarative_execution__field_locns_trace_node_1_11[3] = {
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
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_11 = {
  (MR_String) "node_neg",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(11),
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_11,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_11,
  mdb__declarative_execution__mdb__declarative_execution__field_locns_trace_node_1_11,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_12[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0)
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_12[3] = {
  (MR_String) "neg_succ_preceding",
  (MR_String) "neg_succ_enter",
  (MR_String) "neg_succ_label"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_12 = {
  (MR_String) "node_neg_succ",
  INT16_C(3),
  UINT16_C(3),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(12),
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_12,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_12,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_13[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0)
};

static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_13[3] = {
  (MR_String) "neg_fail_preceding",
  (MR_String) "neg_fail_enter",
  (MR_String) "neg_fail_label"
};

static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_13 = {
  (MR_String) "node_neg_fail",
  INT16_C(3),
  UINT16_C(3),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 10,
  INT32_C(13),
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_13,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_13,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_0[1] = { &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_0 };

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_1[1] = { &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_1 };

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_2[1] = { &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_2 };

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
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(11),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_1_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_1_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node",
  { mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_node_1 },
  { mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_node_1 },
  (MR_Integer) 14,
  UINT16_C(12),
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_1,

};

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_id_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_id_0 = {
  (MR_String) "id",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_id_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_id_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node_id",
  { &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_id_0 },
  { &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_id_0,

};

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_key_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_key_0 = {
  (MR_String) "key",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_key_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_key_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node_key",
  { &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_key_0 },
  { &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_key_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_key_0,

};

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_map_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1,
  { (MR_TypeInfo) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0) }
};

static const MR_FA_TypeInfo_Struct2 mdb__declarative_execution__tree234__ti_tree234_2mdb__declarative_execution__type_ctor_info_trace_node_key_0mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0),
    (MR_TypeInfo) (&mdb__declarative_execution__mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0)
  }
};

static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_map_0 = {
  (MR_String) "map",
  (MR_PseudoTypeInfo) (&mdb__declarative_execution__tree234__ti_tree234_2mdb__declarative_execution__type_ctor_info_trace_node_key_0mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_map_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_map_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node_map",
  { &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_map_0 },
  { &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_map_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_map_0,

};

static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_store_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_store_0 = {
  (MR_String) "store",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_store_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_store_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_store_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node_store",
  { &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_store_0 },
  { &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_store_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_store_0,

};

static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_0 = {
  (MR_String) "all_headvars",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_1 = {
  (MR_String) "only_user_headvars",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_ordinal_ordered_which_headvars_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_execution____Unify____which_headvars_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____which_headvars_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "which_headvars",
  { mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_which_headvars_0 },
  { mdb__declarative_execution__mdb__declarative_execution__enum_ordinal_ordered_which_headvars_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_which_headvars_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
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
  MR_bool succeeded;

{
#define MR_PROC_LABEL mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id = HeadVar__2_2 ;
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

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Map_4 = (MR_Word) (HeadVar__1_1);
  MR_Box conv0_HeadVar__3_3;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0), (MR_Word) (&mdb__declarative_execution_scalar_common_1[0]), Map_4, ((MR_Box) (HeadVar__2_2)), &conv0_HeadVar__3_3);
  if (succeeded)
  {
    *HeadVar__3_3 = ((MR_Word) (conv0_HeadVar__3_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_execution____Compare____which_headvars_0_0(
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
mdb__declarative_execution____Unify____which_headvars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_node_store_0_0(
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
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_store_0_0(
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
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_node_map_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_map_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_node_key_0_0(
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
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_key_0_0(
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
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_node_id_0_0(
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

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_id_0_0(
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

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_node_1_0(
  MR_Word TypeInfo_for_R_175,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_173 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_174 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_173 == CastY_174);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
              MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 0));
              MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, 1));
              MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, 1));
              MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
              MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
              MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
              MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
              MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
              MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 4))));
              MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
              MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
              MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
              MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
              MR_Box ArgX8_25 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, 7))));
              MR_Box ArgY8_26 = ((MR_Box) ((MR_hl_field(0, HeadVar__3_3, 7))));
              MR_Integer ArgX9_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 8))));
              MR_Integer ArgY9_29 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 8))));
              MR_Integer ArgX10_31 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 9))));
              MR_Integer ArgY10_32 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 9))));
              MR_Word SubResult1_6;

              mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                MR_Word SubResult2_9;

                mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult2_9, ArgX2_7, ArgY2_8);
                succeeded = (SubResult2_9 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_9;
                else
                {
                  MR_Word SubResult3_12;

                  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
                  succeeded = (SubResult3_12 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_12;
                  else
                  {
                    MR_Word SubResult4_15;

                    succeeded = (ArgX4_13 < ArgY4_14);
                    if (succeeded)
                    {
                      SubResult4_15 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX4_13 > ArgY4_14);
                      if (succeeded)
                      {
                        SubResult4_15 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult4_15;
                    else
                    {
                      MR_Word SubResult5_18;

                      succeeded = (ArgX5_16 < ArgY5_17);
                      if (succeeded)
                      {
                        SubResult5_18 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX5_16 > ArgY5_17);
                        if (succeeded)
                        {
                          SubResult5_18 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult5_18;
                      else
                      {
                        MR_Word SubResult6_21;

                        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[1]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                        succeeded = (SubResult6_21 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult6_21;
                        else
                        {
                          MR_Word SubResult7_24;

                          mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[5]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                          succeeded = (SubResult7_24 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult7_24;
                          else
                          {
                            MR_Word SubResult8_27;

                            mdbcomp__rtti_access____Compare____label_layout_0_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                            succeeded = (SubResult8_27 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult8_27;
                            else
                            {
                              MR_Word SubResult9_30;

                              succeeded = (ArgX9_28 < ArgY9_29);
                              if (succeeded)
                              {
                                SubResult9_30 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (ArgX9_28 > ArgY9_29);
                                if (succeeded)
                                {
                                  SubResult9_30 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult9_30;
                              else
                              {
                                succeeded = (ArgX10_31 < ArgY10_32);
                                if (succeeded)
                                  *HeadVar__1_1 = (MR_Integer) 1;
                                else
                                {
                                  succeeded = (ArgX10_31 > ArgY10_32);
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
                    }
                  }
                }
              }
            }
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
              MR_Box ArgX1_33 = (MR_hl_field(1, HeadVar__2_2, 0));
              MR_Box ArgY1_34 = (MR_hl_field(1, HeadVar__3_3, 0));
              MR_Box ArgX2_36 = (MR_hl_field(1, HeadVar__2_2, 1));
              MR_Box ArgY2_37 = (MR_hl_field(1, HeadVar__3_3, 1));
              MR_Box ArgX3_39 = (MR_hl_field(1, HeadVar__2_2, 2));
              MR_Box ArgY3_40 = (MR_hl_field(1, HeadVar__3_3, 2));
              MR_Word ArgX4_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
              MR_Word ArgY4_43 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 3))));
              MR_Integer ArgX5_45 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 4))));
              MR_Integer ArgY5_46 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 4))));
              MR_Box ArgX6_48 = ((MR_Box) ((MR_hl_field(1, HeadVar__2_2, 5))));
              MR_Box ArgY6_49 = ((MR_Box) ((MR_hl_field(1, HeadVar__3_3, 5))));
              MR_Integer ArgX7_51 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 6))));
              MR_Integer ArgY7_52 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 6))));
              MR_Integer ArgX8_54 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 7))));
              MR_Integer ArgY8_55 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 7))));
              MR_Word SubResult1_35;

              mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult1_35, ArgX1_33, ArgY1_34);
              succeeded = (SubResult1_35 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_35;
              else
              {
                MR_Word SubResult2_38;

                mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult2_38, ArgX2_36, ArgY2_37);
                succeeded = (SubResult2_38 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_38;
                else
                {
                  MR_Word SubResult3_41;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult3_41, ArgX3_39, ArgY3_40);
                  succeeded = (SubResult3_41 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_41;
                  else
                  {
                    MR_Word SubResult4_44;

                    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[3]), &SubResult4_44, ((MR_Box) (ArgX4_42)), ((MR_Box) (ArgY4_43)));
                    succeeded = (SubResult4_44 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult4_44;
                    else
                    {
                      MR_Word SubResult5_47;

                      succeeded = (ArgX5_45 < ArgY5_46);
                      if (succeeded)
                      {
                        SubResult5_47 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX5_45 > ArgY5_46);
                        if (succeeded)
                        {
                          SubResult5_47 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult5_47;
                      else
                      {
                        MR_Word SubResult6_50;

                        mdbcomp__rtti_access____Compare____label_layout_0_0(&SubResult6_50, ArgX6_48, ArgY6_49);
                        succeeded = (SubResult6_50 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult6_50;
                        else
                        {
                          MR_Word SubResult7_53;

                          succeeded = (ArgX7_51 < ArgY7_52);
                          if (succeeded)
                          {
                            SubResult7_53 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (ArgX7_51 > ArgY7_52);
                            if (succeeded)
                            {
                              SubResult7_53 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult7_53;
                          else
                          {
                            succeeded = (ArgX8_54 < ArgY8_55);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (ArgX8_54 > ArgY8_55);
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
                }
              }
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
              MR_Box ArgX1_56 = (MR_hl_field(2, HeadVar__2_2, 0));
              MR_Box ArgY1_57 = (MR_hl_field(2, HeadVar__3_3, 0));
              MR_Box ArgX2_59 = (MR_hl_field(2, HeadVar__2_2, 1));
              MR_Box ArgY2_60 = (MR_hl_field(2, HeadVar__3_3, 1));
              MR_Integer ArgX3_62 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 2))));
              MR_Integer ArgY3_63 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 2))));
              MR_Box ArgX4_65 = ((MR_Box) ((MR_hl_field(2, HeadVar__2_2, 3))));
              MR_Box ArgY4_66 = ((MR_Box) ((MR_hl_field(2, HeadVar__3_3, 3))));
              MR_Integer ArgX5_68 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 4))));
              MR_Integer ArgY5_69 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 4))));
              MR_Word SubResult1_58;

              mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult1_58, ArgX1_56, ArgY1_57);
              succeeded = (SubResult1_58 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_58;
              else
              {
                MR_Word SubResult2_61;

                mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult2_61, ArgX2_59, ArgY2_60);
                succeeded = (SubResult2_61 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_61;
                else
                {
                  MR_Word SubResult3_64;

                  succeeded = (ArgX3_62 < ArgY3_63);
                  if (succeeded)
                  {
                    SubResult3_64 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX3_62 > ArgY3_63);
                    if (succeeded)
                    {
                      SubResult3_64 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_64;
                  else
                  {
                    MR_Word SubResult4_67;

                    mdbcomp__rtti_access____Compare____label_layout_0_0(&SubResult4_67, ArgX4_65, ArgY4_66);
                    succeeded = (SubResult4_67 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult4_67;
                    else
                    {
                      succeeded = (ArgX5_68 < ArgY5_69);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX5_68 > ArgY5_69);
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
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
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
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Box ArgX1_70 = (MR_hl_field(3, HeadVar__2_2, 1));
                      MR_Box ArgY1_71 = (MR_hl_field(3, HeadVar__3_3, 1));
                      MR_Box ArgX2_73 = (MR_hl_field(3, HeadVar__2_2, 2));
                      MR_Box ArgY2_74 = (MR_hl_field(3, HeadVar__3_3, 2));
                      MR_Box ArgX3_76 = (MR_hl_field(3, HeadVar__2_2, 3));
                      MR_Box ArgY3_77 = (MR_hl_field(3, HeadVar__3_3, 3));
                      MR_Integer ArgX4_79 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Integer ArgY4_80 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Box ArgX5_82 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 5))));
                      MR_Box ArgY5_83 = ((MR_Box) ((MR_hl_field(3, HeadVar__3_3, 5))));
                      MR_Integer ArgX6_85 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 6))));
                      MR_Integer ArgY6_86 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 6))));
                      MR_Word SubResult1_72;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult1_72, ArgX1_70, ArgY1_71);
                      succeeded = (SubResult1_72 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_72;
                      else
                      {
                        MR_Word SubResult2_75;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult2_75, ArgX2_73, ArgY2_74);
                        succeeded = (SubResult2_75 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_75;
                        else
                        {
                          MR_Word SubResult3_78;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult3_78, ArgX3_76, ArgY3_77);
                          succeeded = (SubResult3_78 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_78;
                          else
                          {
                            MR_Word SubResult4_81;

                            succeeded = (ArgX4_79 < ArgY4_80);
                            if (succeeded)
                            {
                              SubResult4_81 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (ArgX4_79 > ArgY4_80);
                              if (succeeded)
                              {
                                SubResult4_81 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult4_81;
                            else
                            {
                              MR_Word SubResult5_84;

                              mdbcomp__rtti_access____Compare____label_layout_0_0(&SubResult5_84, ArgX5_82, ArgY5_83);
                              succeeded = (SubResult5_84 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult5_84;
                              else
                              {
                                succeeded = (ArgX6_85 < ArgY6_86);
                                if (succeeded)
                                  *HeadVar__1_1 = (MR_Integer) 1;
                                else
                                {
                                  succeeded = (ArgX6_85 > ArgY6_86);
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
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                  case (MR_Integer) 10:
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
                      MR_Box ArgX1_87 = (MR_hl_field(3, HeadVar__2_2, 1));
                      MR_Box ArgY1_88 = (MR_hl_field(3, HeadVar__3_3, 1));
                      MR_Box ArgX2_90 = (MR_hl_field(3, HeadVar__2_2, 2));
                      MR_Box ArgY2_91 = (MR_hl_field(3, HeadVar__3_3, 2));
                      MR_Box ArgX3_93 = (MR_hl_field(3, HeadVar__2_2, 3));
                      MR_Box ArgY3_94 = (MR_hl_field(3, HeadVar__3_3, 3));
                      MR_Word ArgX4_96 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_97 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Integer ArgX5_99 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 5))));
                      MR_Integer ArgY5_100 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 5))));
                      MR_Box ArgX6_102 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 6))));
                      MR_Box ArgY6_103 = ((MR_Box) ((MR_hl_field(3, HeadVar__3_3, 6))));
                      MR_Integer ArgX7_105 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 7))));
                      MR_Integer ArgY7_106 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 7))));
                      MR_Word SubResult1_89;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult1_89, ArgX1_87, ArgY1_88);
                      succeeded = (SubResult1_89 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_89;
                      else
                      {
                        MR_Word SubResult2_92;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult2_92, ArgX2_90, ArgY2_91);
                        succeeded = (SubResult2_92 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_92;
                        else
                        {
                          MR_Word SubResult3_95;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult3_95, ArgX3_93, ArgY3_94);
                          succeeded = (SubResult3_95 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_95;
                          else
                          {
                            MR_Word SubResult4_98;

                            mdb__term_rep____Compare____term_rep_0_0(&SubResult4_98, ArgX4_96, ArgY4_97);
                            succeeded = (SubResult4_98 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult4_98;
                            else
                            {
                              MR_Word SubResult5_101;

                              succeeded = (ArgX5_99 < ArgY5_100);
                              if (succeeded)
                              {
                                SubResult5_101 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (ArgX5_99 > ArgY5_100);
                                if (succeeded)
                                {
                                  SubResult5_101 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult5_101;
                              else
                              {
                                MR_Word SubResult6_104;

                                mdbcomp__rtti_access____Compare____label_layout_0_0(&SubResult6_104, ArgX6_102, ArgY6_103);
                                succeeded = (SubResult6_104 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult6_104;
                                else
                                {
                                  succeeded = (ArgX7_105 < ArgY7_106);
                                  if (succeeded)
                                    *HeadVar__1_1 = (MR_Integer) 1;
                                  else
                                  {
                                    succeeded = (ArgX7_105 > ArgY7_106);
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
                      }
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
                  case (MR_Integer) 10:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Box ArgX1_107 = (MR_hl_field(3, HeadVar__2_2, 1));
                      MR_Box ArgY1_108 = (MR_hl_field(3, HeadVar__3_3, 1));
                      MR_Box ArgX2_110 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Box ArgY2_111 = ((MR_Box) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_109;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult1_109, ArgX1_107, ArgY1_108);
                      succeeded = (SubResult1_109 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_109;
                      else
                        mdbcomp__rtti_access____Compare____label_layout_0_0(HeadVar__1_1, ArgX2_110, ArgY2_111);
                    }
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                  case (MR_Integer) 10:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Box ArgX1_112 = (MR_hl_field(3, HeadVar__2_2, 1));
                      MR_Box ArgY1_113 = (MR_hl_field(3, HeadVar__3_3, 1));
                      MR_Box ArgX2_115 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Box ArgY2_116 = ((MR_Box) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_114;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult1_114, ArgX1_112, ArgY1_113);
                      succeeded = (SubResult1_114 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_114;
                      else
                        mdbcomp__rtti_access____Compare____label_layout_0_0(HeadVar__1_1, ArgX2_115, ArgY2_116);
                    }
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                  case (MR_Integer) 10:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Box ArgX1_117 = (MR_hl_field(3, HeadVar__2_2, 1));
                      MR_Box ArgY1_118 = (MR_hl_field(3, HeadVar__3_3, 1));
                      MR_Box ArgX2_120 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Box ArgY2_121 = ((MR_Box) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Box ArgX3_123 = (MR_hl_field(3, HeadVar__2_2, 3));
                      MR_Box ArgY3_124 = (MR_hl_field(3, HeadVar__3_3, 3));
                      MR_Word SubResult1_119;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult1_119, ArgX1_117, ArgY1_118);
                      succeeded = (SubResult1_119 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_119;
                      else
                      {
                        MR_Word SubResult2_122;

                        mdbcomp__rtti_access____Compare____label_layout_0_0(&SubResult2_122, ArgX2_120, ArgY2_121);
                        succeeded = (SubResult2_122 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_122;
                        else
                          mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, HeadVar__1_1, ArgX3_123, ArgY3_124);
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                  case (MR_Integer) 10:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 5:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Box ArgX1_125 = (MR_hl_field(3, HeadVar__2_2, 1));
                      MR_Box ArgY1_126 = (MR_hl_field(3, HeadVar__3_3, 1));
                      MR_Box ArgX2_128 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Box ArgY2_129 = ((MR_Box) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_131 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))) & (MR_Integer) 3);
                      MR_Word ArgY3_132 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 3))) & (MR_Integer) 3);
                      MR_Word SubResult1_127;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult1_127, ArgX1_125, ArgY1_126);
                      succeeded = (SubResult1_127 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_127;
                      else
                      {
                        MR_Word SubResult2_130;

                        mdbcomp__rtti_access____Compare____label_layout_0_0(&SubResult2_130, ArgX2_128, ArgY2_129);
                        succeeded = (SubResult2_130 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_130;
                        else
                        {
                          MR_Integer Var_212 = (MR_Integer) (ArgX3_131);
                          MR_Integer Var_213 = (MR_Integer) (ArgY3_132);

                          succeeded = (Var_212 < Var_213);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_212 > Var_213);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                  case (MR_Integer) 10:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 6:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Box ArgX1_133 = (MR_hl_field(3, HeadVar__2_2, 1));
                      MR_Box ArgY1_134 = (MR_hl_field(3, HeadVar__3_3, 1));
                      MR_Box ArgX2_136 = (MR_hl_field(3, HeadVar__2_2, 2));
                      MR_Box ArgY2_137 = (MR_hl_field(3, HeadVar__3_3, 2));
                      MR_Box ArgX3_139 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Box ArgY3_140 = ((MR_Box) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word SubResult1_135;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult1_135, ArgX1_133, ArgY1_134);
                      succeeded = (SubResult1_135 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_135;
                      else
                      {
                        MR_Word SubResult2_138;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult2_138, ArgX2_136, ArgY2_137);
                        succeeded = (SubResult2_138 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_138;
                        else
                          mdbcomp__rtti_access____Compare____label_layout_0_0(HeadVar__1_1, ArgX3_139, ArgY3_140);
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                  case (MR_Integer) 10:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 7:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Box ArgX1_141 = (MR_hl_field(3, HeadVar__2_2, 1));
                      MR_Box ArgY1_142 = (MR_hl_field(3, HeadVar__3_3, 1));
                      MR_Box ArgX2_144 = (MR_hl_field(3, HeadVar__2_2, 2));
                      MR_Box ArgY2_145 = (MR_hl_field(3, HeadVar__3_3, 2));
                      MR_Box ArgX3_147 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Box ArgY3_148 = ((MR_Box) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word SubResult1_143;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult1_143, ArgX1_141, ArgY1_142);
                      succeeded = (SubResult1_143 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_143;
                      else
                      {
                        MR_Word SubResult2_146;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult2_146, ArgX2_144, ArgY2_145);
                        succeeded = (SubResult2_146 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_146;
                        else
                          mdbcomp__rtti_access____Compare____label_layout_0_0(HeadVar__1_1, ArgX3_147, ArgY3_148);
                      }
                    }
                    break;
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                  case (MR_Integer) 10:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 8:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Box ArgX1_149 = (MR_hl_field(3, HeadVar__2_2, 1));
                      MR_Box ArgY1_150 = (MR_hl_field(3, HeadVar__3_3, 1));
                      MR_Box ArgX2_152 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Box ArgY2_153 = ((MR_Box) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_155 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))) & (MR_Integer) 3);
                      MR_Word ArgY3_156 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 3))) & (MR_Integer) 3);
                      MR_Word SubResult1_151;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult1_151, ArgX1_149, ArgY1_150);
                      succeeded = (SubResult1_151 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_151;
                      else
                      {
                        MR_Word SubResult2_154;

                        mdbcomp__rtti_access____Compare____label_layout_0_0(&SubResult2_154, ArgX2_152, ArgY2_153);
                        succeeded = (SubResult2_154 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_154;
                        else
                        {
                          MR_Integer Var_210 = (MR_Integer) (ArgX3_155);
                          MR_Integer Var_211 = (MR_Integer) (ArgY3_156);

                          succeeded = (Var_210 < Var_211);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_210 > Var_211);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 9:
                  case (MR_Integer) 10:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 9:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 9:
                    {
                      MR_Box ArgX1_157 = (MR_hl_field(3, HeadVar__2_2, 1));
                      MR_Box ArgY1_158 = (MR_hl_field(3, HeadVar__3_3, 1));
                      MR_Box ArgX2_160 = (MR_hl_field(3, HeadVar__2_2, 2));
                      MR_Box ArgY2_161 = (MR_hl_field(3, HeadVar__3_3, 2));
                      MR_Box ArgX3_163 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Box ArgY3_164 = ((MR_Box) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word SubResult1_159;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult1_159, ArgX1_157, ArgY1_158);
                      succeeded = (SubResult1_159 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_159;
                      else
                      {
                        MR_Word SubResult2_162;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult2_162, ArgX2_160, ArgY2_161);
                        succeeded = (SubResult2_162 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_162;
                        else
                          mdbcomp__rtti_access____Compare____label_layout_0_0(HeadVar__1_1, ArgX3_163, ArgY3_164);
                      }
                    }
                    break;
                  case (MR_Integer) 10:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 10:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 10:
                    {
                      MR_Box ArgX1_165 = (MR_hl_field(3, HeadVar__2_2, 1));
                      MR_Box ArgY1_166 = (MR_hl_field(3, HeadVar__3_3, 1));
                      MR_Box ArgX2_168 = (MR_hl_field(3, HeadVar__2_2, 2));
                      MR_Box ArgY2_169 = (MR_hl_field(3, HeadVar__3_3, 2));
                      MR_Box ArgX3_171 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Box ArgY3_172 = ((MR_Box) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word SubResult1_167;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult1_167, ArgX1_165, ArgY1_166);
                      succeeded = (SubResult1_167 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_167;
                      else
                      {
                        MR_Word SubResult2_170;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_R_175, &SubResult2_170, ArgX2_168, ArgY2_169);
                        succeeded = (SubResult2_170 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_170;
                        else
                          mdbcomp__rtti_access____Compare____label_layout_0_0(HeadVar__1_1, ArgX3_171, ArgY3_172);
                      }
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
mdb__declarative_execution____Unify____trace_node_1_0(
  MR_Word TypeInfo_for_R_127,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_125 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_126 = (MR_Integer) (HeadVar__2_2);

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
          MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 0));
          MR_Box ArgY1_4;
          MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, 1));
          MR_Box ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
          MR_Word ArgY3_8;
          MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
          MR_Integer ArgY4_10;
          MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 4))));
          MR_Integer ArgY5_12;
          MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
          MR_Word ArgY6_14;
          MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
          MR_Word ArgY7_16;
          MR_Box ArgX8_17 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, 7))));
          MR_Box ArgY8_18;
          MR_Integer ArgX9_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 8))));
          MR_Integer ArgY9_20;
          MR_Integer ArgX10_21 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 9))));
          MR_Integer ArgY10_22;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
            ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, 1));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
            ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
            ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
            ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
            ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
            ArgY8_18 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, 7))));
            ArgY9_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 8))));
            ArgY10_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 9))));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX2_5, ArgY2_6);
              if (succeeded)
              {
                TypeInfo_128_128 = (MR_Word) (&mdb__declarative_execution_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_128_128, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
                if (succeeded)
                {
                  succeeded = (ArgX4_9 == ArgY4_10);
                  if (succeeded)
                  {
                    succeeded = (ArgX5_11 == ArgY5_12);
                    if (succeeded)
                    {
                      TypeInfo_129_129 = (MR_Word) (&mdb__declarative_execution_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_129_129, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                      if (succeeded)
                      {
                        TypeInfo_130_130 = (MR_Word) (&mdb__declarative_execution_scalar_common_1[5]);
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
          MR_Box ArgX1_23 = (MR_hl_field(1, HeadVar__1_1, 0));
          MR_Box ArgY1_24;
          MR_Box ArgX2_25 = (MR_hl_field(1, HeadVar__1_1, 1));
          MR_Box ArgY2_26;
          MR_Box ArgX3_27 = (MR_hl_field(1, HeadVar__1_1, 2));
          MR_Box ArgY3_28;
          MR_Word ArgX4_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 3))));
          MR_Word ArgY4_30;
          MR_Integer ArgX5_31 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 4))));
          MR_Integer ArgY5_32;
          MR_Box ArgX6_33 = ((MR_Box) ((MR_hl_field(1, HeadVar__1_1, 5))));
          MR_Box ArgY6_34;
          MR_Integer ArgX7_35 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 6))));
          MR_Integer ArgY7_36;
          MR_Integer ArgX8_37 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 7))));
          MR_Integer ArgY8_38;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_24 = (MR_hl_field(1, HeadVar__2_2, 0));
            ArgY2_26 = (MR_hl_field(1, HeadVar__2_2, 1));
            ArgY3_28 = (MR_hl_field(1, HeadVar__2_2, 2));
            ArgY4_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
            ArgY5_32 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 4))));
            ArgY6_34 = ((MR_Box) ((MR_hl_field(1, HeadVar__2_2, 5))));
            ArgY7_36 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 6))));
            ArgY8_38 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 7))));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_23, ArgY1_24);
            if (succeeded)
            {
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX2_25, ArgY2_26);
              if (succeeded)
              {
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX3_27, ArgY3_28);
                if (succeeded)
                {
                  TypeInfo_132_132 = (MR_Word) (&mdb__declarative_execution_scalar_common_1[3]);
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
          MR_Box ArgX1_39 = (MR_hl_field(2, HeadVar__1_1, 0));
          MR_Box ArgY1_40;
          MR_Box ArgX2_41 = (MR_hl_field(2, HeadVar__1_1, 1));
          MR_Box ArgY2_42;
          MR_Integer ArgX3_43 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 2))));
          MR_Integer ArgY3_44;
          MR_Box ArgX4_45 = ((MR_Box) ((MR_hl_field(2, HeadVar__1_1, 3))));
          MR_Box ArgY4_46;
          MR_Integer ArgX5_47 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 4))));
          MR_Integer ArgY5_48;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_40 = (MR_hl_field(2, HeadVar__2_2, 0));
            ArgY2_42 = (MR_hl_field(2, HeadVar__2_2, 1));
            ArgY3_44 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 2))));
            ArgY4_46 = ((MR_Box) ((MR_hl_field(2, HeadVar__2_2, 3))));
            ArgY5_48 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 4))));
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box ArgX1_49 = (MR_hl_field(3, HeadVar__1_1, 1));
              MR_Box ArgY1_50;
              MR_Box ArgX2_51 = (MR_hl_field(3, HeadVar__1_1, 2));
              MR_Box ArgY2_52;
              MR_Box ArgX3_53 = (MR_hl_field(3, HeadVar__1_1, 3));
              MR_Box ArgY3_54;
              MR_Integer ArgX4_55 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Integer ArgY4_56;
              MR_Box ArgX5_57 = ((MR_Box) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Box ArgY5_58;
              MR_Integer ArgX6_59 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 6))));
              MR_Integer ArgY6_60;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_50 = (MR_hl_field(3, HeadVar__2_2, 1));
                ArgY2_52 = (MR_hl_field(3, HeadVar__2_2, 2));
                ArgY3_54 = (MR_hl_field(3, HeadVar__2_2, 3));
                ArgY4_56 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_58 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 5))));
                ArgY6_60 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 6))));
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
              MR_Box ArgX1_61 = (MR_hl_field(3, HeadVar__1_1, 1));
              MR_Box ArgY1_62;
              MR_Box ArgX2_63 = (MR_hl_field(3, HeadVar__1_1, 2));
              MR_Box ArgY2_64;
              MR_Box ArgX3_65 = (MR_hl_field(3, HeadVar__1_1, 3));
              MR_Box ArgY3_66;
              MR_Word ArgX4_67 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_68;
              MR_Integer ArgX5_69 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Integer ArgY5_70;
              MR_Box ArgX6_71 = ((MR_Box) ((MR_hl_field(3, HeadVar__1_1, 6))));
              MR_Box ArgY6_72;
              MR_Integer ArgX7_73 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 7))));
              MR_Integer ArgY7_74;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_62 = (MR_hl_field(3, HeadVar__2_2, 1));
                ArgY2_64 = (MR_hl_field(3, HeadVar__2_2, 2));
                ArgY3_66 = (MR_hl_field(3, HeadVar__2_2, 3));
                ArgY4_68 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_70 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 5))));
                ArgY6_72 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 6))));
                ArgY7_74 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 7))));
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
              MR_Box ArgX1_75 = (MR_hl_field(3, HeadVar__1_1, 1));
              MR_Box ArgY1_76;
              MR_Box ArgX2_77 = ((MR_Box) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Box ArgY2_78;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_76 = (MR_hl_field(3, HeadVar__2_2, 1));
                ArgY2_78 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_75, ArgY1_76);
                if (succeeded)
                  succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(ArgX2_77, ArgY2_78);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box ArgX1_79 = (MR_hl_field(3, HeadVar__1_1, 1));
              MR_Box ArgY1_80;
              MR_Box ArgX2_81 = ((MR_Box) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Box ArgY2_82;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_80 = (MR_hl_field(3, HeadVar__2_2, 1));
                ArgY2_82 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_127, ArgX1_79, ArgY1_80);
                if (succeeded)
                  succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(ArgX2_81, ArgY2_82);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Box ArgX1_83 = (MR_hl_field(3, HeadVar__1_1, 1));
              MR_Box ArgY1_84;
              MR_Box ArgX2_85 = ((MR_Box) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Box ArgY2_86;
              MR_Box ArgX3_87 = (MR_hl_field(3, HeadVar__1_1, 3));
              MR_Box ArgY3_88;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_84 = (MR_hl_field(3, HeadVar__2_2, 1));
                ArgY2_86 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_88 = (MR_hl_field(3, HeadVar__2_2, 3));
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
              MR_Box ArgX1_89 = (MR_hl_field(3, HeadVar__1_1, 1));
              MR_Box ArgY1_90;
              MR_Box ArgX2_91 = ((MR_Box) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Box ArgY2_92;
              MR_Word ArgX3_93 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 3))) & (MR_Integer) 3);
              MR_Word ArgY3_94;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_90 = (MR_hl_field(3, HeadVar__2_2, 1));
                ArgY2_92 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_94 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))) & (MR_Integer) 3);
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
              MR_Box ArgX1_95 = (MR_hl_field(3, HeadVar__1_1, 1));
              MR_Box ArgY1_96;
              MR_Box ArgX2_97 = (MR_hl_field(3, HeadVar__1_1, 2));
              MR_Box ArgY2_98;
              MR_Box ArgX3_99 = ((MR_Box) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Box ArgY3_100;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_96 = (MR_hl_field(3, HeadVar__2_2, 1));
                ArgY2_98 = (MR_hl_field(3, HeadVar__2_2, 2));
                ArgY3_100 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 3))));
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
              MR_Box ArgX1_101 = (MR_hl_field(3, HeadVar__1_1, 1));
              MR_Box ArgY1_102;
              MR_Box ArgX2_103 = (MR_hl_field(3, HeadVar__1_1, 2));
              MR_Box ArgY2_104;
              MR_Box ArgX3_105 = ((MR_Box) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Box ArgY3_106;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_102 = (MR_hl_field(3, HeadVar__2_2, 1));
                ArgY2_104 = (MR_hl_field(3, HeadVar__2_2, 2));
                ArgY3_106 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 3))));
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
              MR_Box ArgX1_107 = (MR_hl_field(3, HeadVar__1_1, 1));
              MR_Box ArgY1_108;
              MR_Box ArgX2_109 = ((MR_Box) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Box ArgY2_110;
              MR_Word ArgX3_111 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 3))) & (MR_Integer) 3);
              MR_Word ArgY3_112;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_108 = (MR_hl_field(3, HeadVar__2_2, 1));
                ArgY2_110 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_112 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))) & (MR_Integer) 3);
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
              MR_Box ArgX1_113 = (MR_hl_field(3, HeadVar__1_1, 1));
              MR_Box ArgY1_114;
              MR_Box ArgX2_115 = (MR_hl_field(3, HeadVar__1_1, 2));
              MR_Box ArgY2_116;
              MR_Box ArgX3_117 = ((MR_Box) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Box ArgY3_118;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_114 = (MR_hl_field(3, HeadVar__2_2, 1));
                ArgY2_116 = (MR_hl_field(3, HeadVar__2_2, 2));
                ArgY3_118 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 3))));
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
              MR_Box ArgX1_119 = (MR_hl_field(3, HeadVar__1_1, 1));
              MR_Box ArgY1_120;
              MR_Box ArgX2_121 = (MR_hl_field(3, HeadVar__1_1, 2));
              MR_Box ArgY2_122;
              MR_Box ArgX3_123 = ((MR_Box) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Box ArgY3_124;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_120 = (MR_hl_field(3, HeadVar__2_2, 1));
                ArgY2_122 = (MR_hl_field(3, HeadVar__2_2, 2));
                ArgY3_124 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, 3))));
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

void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_arg_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
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

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_arg_0_0(
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
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&mdb__declarative_execution_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_0_0(
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
    MR_Box ArgX1_4 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Box ArgY1_5 = ((MR_Box) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mdbcomp__rtti_access____Compare____proc_layout_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_0_0(
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
    MR_Word TypeInfo_9_9;
    MR_Box ArgX1_3 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Box ArgY1_4 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mdbcomp__rtti_access____Unify____proc_layout_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&mdb__declarative_execution_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_execution____Compare____suspicion_accumulator_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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
mdb__declarative_execution____Unify____suspicion_accumulator_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mdb__declarative_execution____Compare____sequence_number_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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
mdb__declarative_execution____Unify____sequence_number_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mdb__declarative_execution____Compare____implicit_tree_info_0_0(
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
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____implicit_tree_info_0_0(
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
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_execution____Compare____goal_status_0_0(
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
mdb__declarative_execution____Unify____goal_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdb__declarative_execution____Compare____event_number_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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
mdb__declarative_execution____Unify____event_number_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

MR_bool MR_CALL 
mdb__declarative_execution__trace_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_annotated_trace_4, 0)), 5))));
  MR_Box conv1_HeadVar__3_3;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_4)), HeadVar__1_1, HeadVar__2_2, &conv1_HeadVar__3_3);
  if (succeeded)
  {
    *HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_execution__convert_node_2_p_0(
  MR_Word N1_1,
  MR_Word * N2_2)
{
{
#define MR_PROC_LABEL mdb__declarative_execution__convert_node_2_p_0

	MR_Word N1;
	MR_Word N2;

	N1 = N1_1 ;
		{

    N2 = N1;


		;}
#undef MR_PROC_LABEL
	*N2_2  = N2;
}
}

static void MR_CALL 
mdb__declarative_execution__node_id_to_key_2_p_0(
  MR_Word Id_1,
  MR_Word * Key_2)
{
{
#define MR_PROC_LABEL mdb__declarative_execution__node_id_to_key_2_p_0

	MR_Word Id;
	MR_Word Key;

	Id = Id_1 ;
		{

    Key = (MR_Integer) Id;


		;}
#undef MR_PROC_LABEL
	*Key_2  = Key;
}
}

static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0(
  MR_Integer HldsNum_5,
  MR_Integer ProgVis_6,
  MR_Word Args_7,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded = (ProgVis_6 == (MR_Integer) 0);
  MR_Word Arg_8;
  MR_Word Var_9;

  if (succeeded)
    Var_9 = (MR_Integer) 0;
  else
    Var_9 = (MR_Integer) 1;
  {
    Arg_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Arg_8, 0) = (MR_Box) ((MR_Unsigned) (Var_9));
    MR_hl_field(0, Arg_8, 1) = ((MR_Box) (HldsNum_5));
    MR_hl_field(0, Arg_8, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__4_4 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Arg_8));
    MR_hl_field(1, base, 1) = ((MR_Box) (Args_7));
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
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (Rep_11));
  }
  {
    Arg_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Arg_10, 0) = (MR_Box) ((MR_Unsigned) (Var_12));
    MR_hl_field(0, Arg_10, 1) = ((MR_Box) (HldsNum_6));
    MR_hl_field(0, Arg_10, 2) = ((MR_Box) (Var_13));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__5_5 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Arg_10));
    MR_hl_field(1, base, 1) = ((MR_Box) (Args_9));
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__init_trace_atom_args_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
mdb__declarative_execution__null_trace_node_id_1_p_0(
  MR_Word * Id_1)
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

static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_fail_node_3_f_0(
  MR_Word Preceding_5,
  MR_Word Neg_6,
  MR_Box Label_7)
{
  MR_Word HeadVar__4_4;

  {
    HeadVar__4_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__4_4, 0) = ((MR_Box) ((MR_Unsigned) 10U));
    MR_hl_field(3, HeadVar__4_4, 1) = ((MR_Box) (Preceding_5));
    MR_hl_field(3, HeadVar__4_4, 2) = ((MR_Box) (Neg_6));
    MR_hl_field(3, HeadVar__4_4, 3) = ((MR_Box) (Label_7));
  }
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_succ_node_3_f_0(
  MR_Word Preceding_5,
  MR_Word Neg_6,
  MR_Box Label_7)
{
  MR_Word HeadVar__4_4;

  {
    HeadVar__4_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__4_4, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, HeadVar__4_4, 1) = ((MR_Box) (Preceding_5));
    MR_hl_field(3, HeadVar__4_4, 2) = ((MR_Box) (Neg_6));
    MR_hl_field(3, HeadVar__4_4, 3) = ((MR_Box) (Label_7));
  }
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_node_2_f_0(
  MR_Word Preceding_4,
  MR_Box Label_5)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, HeadVar__3_3, 1) = ((MR_Box) (Preceding_4));
    MR_hl_field(3, HeadVar__3_3, 2) = ((MR_Box) (Label_5));
    MR_hl_field(3, HeadVar__3_3, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_else_node_3_f_0(
  MR_Word Preceding_5,
  MR_Word Cond_6,
  MR_Box Label_7)
{
  MR_Word HeadVar__4_4;

  {
    HeadVar__4_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__4_4, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, HeadVar__4_4, 1) = ((MR_Box) (Preceding_5));
    MR_hl_field(3, HeadVar__4_4, 2) = ((MR_Box) (Cond_6));
    MR_hl_field(3, HeadVar__4_4, 3) = ((MR_Box) (Label_7));
  }
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_then_node_3_f_0(
  MR_Word Preceding_5,
  MR_Word Cond_6,
  MR_Box Label_7)
{
  MR_Word HeadVar__4_4;

  {
    HeadVar__4_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__4_4, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, HeadVar__4_4, 1) = ((MR_Box) (Preceding_5));
    MR_hl_field(3, HeadVar__4_4, 2) = ((MR_Box) (Cond_6));
    MR_hl_field(3, HeadVar__4_4, 3) = ((MR_Box) (Label_7));
  }
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_cond_node_2_f_0(
  MR_Word Preceding_4,
  MR_Box Label_5)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, HeadVar__3_3, 1) = ((MR_Box) (Preceding_4));
    MR_hl_field(3, HeadVar__3_3, 2) = ((MR_Box) (Label_5));
    MR_hl_field(3, HeadVar__3_3, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_later_disj_node_4_f_0(
  MR_Word Store_6,
  MR_Word Preceding_7,
  MR_Box Label_8,
  MR_Word PrevDisj_9)
{
  MR_bool succeeded;
  MR_Word HeadVar__5_5;
  MR_Word FirstDisj_10;
  MR_Word PrevDisjNode_11;
  MR_Word Node0_17;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mdb__declarative_execution_scalar_common_2[0]), 0)), 5))));
  MR_Box conv1_Node0_17;

  succeeded = func_0(((MR_Box) ((MR_Word) (&mdb__declarative_execution_scalar_common_2[0]))), ((MR_Box) (Store_6)), ((MR_Box) (PrevDisj_9)), &conv1_Node0_17);
  if (succeeded)
  {
    Node0_17 = ((MR_Word) (conv1_Node0_17));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    if (((((MR_tag((MR_Word) Node0_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Node0_17, 0)))) == (MR_Integer) 3))))
      succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) Node0_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Node0_17, 0)))) == (MR_Integer) 4))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
    PrevDisjNode_11 = Node0_17;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[20])));
  if (((((MR_tag((MR_Word) PrevDisjNode_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PrevDisjNode_11, 0)))) == (MR_Integer) 3))))
    FirstDisj_10 = PrevDisj_9;
  else
    FirstDisj_10 = ((MR_Word) ((MR_hl_field(3, PrevDisjNode_11, 3))));
  {
    HeadVar__5_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__5_5, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, HeadVar__5_5, 1) = ((MR_Box) (Preceding_7));
    MR_hl_field(3, HeadVar__5_5, 2) = ((MR_Box) (Label_8));
    MR_hl_field(3, HeadVar__5_5, 3) = ((MR_Box) (FirstDisj_10));
  }
  return HeadVar__5_5;
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_first_disj_node_2_f_0(
  MR_Word Preceding_4,
  MR_Box Label_5)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, HeadVar__3_3, 1) = ((MR_Box) (Preceding_4));
    MR_hl_field(3, HeadVar__3_3, 2) = ((MR_Box) (Label_5));
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_switch_node_2_f_0(
  MR_Word Preceding_4,
  MR_Box Label_5)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__3_3, 1) = ((MR_Box) (Preceding_4));
    MR_hl_field(3, HeadVar__3_3, 2) = ((MR_Box) (Label_5));
  }
  return HeadVar__3_3;
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
  MR_Word ExceptionRep_17;

  mdb__term_rep__univ_to_rep_2_p_0(Exception_12, &ExceptionRep_17);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
    *Excp_16 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Preceding_9));
    MR_hl_field(3, base, 2) = ((MR_Box) (Call_10));
    MR_hl_field(3, base, 3) = ((MR_Box) (MaybeRedo_11));
    MR_hl_field(3, base, 4) = ((MR_Box) (ExceptionRep_17));
    MR_hl_field(3, base, 5) = ((MR_Box) (EventNo_13));
    MR_hl_field(3, base, 6) = ((MR_Box) (Label_14));
    MR_hl_field(3, base, 7) = ((MR_Box) (Suspicion_15));
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
  MR_Word HeadVar__7_7;

  {
    HeadVar__7_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__7_7, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, HeadVar__7_7, 1) = ((MR_Box) (Preceding_8));
    MR_hl_field(3, HeadVar__7_7, 2) = ((MR_Box) (Call_9));
    MR_hl_field(3, HeadVar__7_7, 3) = ((MR_Box) (Redo_10));
    MR_hl_field(3, HeadVar__7_7, 4) = ((MR_Box) (EventNo_11));
    MR_hl_field(3, HeadVar__7_7, 5) = ((MR_Box) (Label_12));
    MR_hl_field(3, HeadVar__7_7, 6) = ((MR_Box) (Suspicion_13));
  }
  return HeadVar__7_7;
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_redo_node_5_f_0(
  MR_Word Preceding_7,
  MR_Word Exit_8,
  MR_Integer Event_9,
  MR_Box Label_10,
  MR_Integer Suspicion_11)
{
  MR_Word HeadVar__6_6;

  {
    HeadVar__6_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__6_6, 0) = ((MR_Box) (Preceding_7));
    MR_hl_field(2, HeadVar__6_6, 1) = ((MR_Box) (Exit_8));
    MR_hl_field(2, HeadVar__6_6, 2) = ((MR_Box) (Event_9));
    MR_hl_field(2, HeadVar__6_6, 3) = ((MR_Box) (Label_10));
    MR_hl_field(2, HeadVar__6_6, 4) = ((MR_Box) (Suspicion_11));
  }
  return HeadVar__6_6;
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
  MR_Word HeadVar__9_9;

  {
    HeadVar__9_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__9_9, 0) = ((MR_Box) (Preceding_10));
    MR_hl_field(1, HeadVar__9_9, 1) = ((MR_Box) (Call_11));
    MR_hl_field(1, HeadVar__9_9, 2) = ((MR_Box) (MaybeRedo_12));
    MR_hl_field(1, HeadVar__9_9, 3) = ((MR_Box) (AtomArgs_13));
    MR_hl_field(1, HeadVar__9_9, 4) = ((MR_Box) (EventNo_14));
    MR_hl_field(1, HeadVar__9_9, 5) = ((MR_Box) (Label_15));
    MR_hl_field(1, HeadVar__9_9, 6) = ((MR_Box) (IoSeqNum_16));
    MR_hl_field(1, HeadVar__9_9, 7) = ((MR_Box) (Suspicion_17));
  }
  return HeadVar__9_9;
}

static MR_Word MR_CALL 
mdb__declarative_execution__make_no_maybe_label_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_Word MR_CALL 
mdb__declarative_execution__make_yes_maybe_label_1_f_0(
  MR_Box Label_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Label_3));
  }
  return HeadVar__2_2;
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
  MR_Word Call_20;
  MR_Word MaybeImplicitTreeInfo_21;
  MR_Word LastInterface_22;

  switch (AtMaxDepth_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MaybeImplicitTreeInfo_21 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      MaybeImplicitTreeInfo_21 = (MR_Word) (MR_mkword(1, &mdb__declarative_execution_scalar_common_3[0]));
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
    Call_20 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Call_20, 0) = ((MR_Box) (Preceding_11));
    MR_hl_field(0, Call_20, 1) = ((MR_Box) (LastInterface_22));
    MR_hl_field(0, Call_20, 2) = ((MR_Box) (AtomArgs_12));
    MR_hl_field(0, Call_20, 3) = ((MR_Box) (SeqNo_13));
    MR_hl_field(0, Call_20, 4) = ((MR_Box) (EventNo_14));
    MR_hl_field(0, Call_20, 5) = ((MR_Box) (MaybeImplicitTreeInfo_21));
    MR_hl_field(0, Call_20, 6) = ((MR_Box) (MaybeReturnLabel_16));
    MR_hl_field(0, Call_20, 7) = ((MR_Box) (Label_17));
    MR_hl_field(0, Call_20, 8) = ((MR_Box) (IoSeqNum_18));
    MR_hl_field(0, Call_20, 9) = ((MR_Box) (Suspicion_19));
  }
  return Call_20;
}

static void MR_CALL 
mdb__declarative_execution__print_trace_node_4_p_0(
  MR_Word OutStr_5,
  MR_Word Node_6)
{
  MR_Word CNode_8;

{
#define MR_PROC_LABEL mdb__declarative_execution__print_trace_node_4_p_0

	MR_Word N1;
	MR_Word N2;

	N1 = Node_6 ;
		{

    N2 = N1;


		;}
#undef MR_PROC_LABEL
	CNode_8  = N2;
}
  mercury__io__write_4_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[0]), OutStr_5, ((MR_Box) (CNode_8)));
}

static MR_Word MR_CALL 
mdb__declarative_execution__find_prev_contour_store_2_f_0(
  MR_Word Store_4,
  MR_Word Id_5)
{
  MR_bool succeeded;
  MR_Word Prev_6;
  MR_Word Node_7;
  MR_Word Node0_10;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mdb__declarative_execution_scalar_common_2[0]), 0)), 5))));
  MR_Box conv1_Node0_10;
  MR_Word Prev0_8;
  MR_Box conv2_Prev0_8;

  succeeded = func_0(((MR_Box) ((MR_Word) (&mdb__declarative_execution_scalar_common_2[0]))), ((MR_Box) (Store_4)), ((MR_Box) (Id_5)), &conv1_Node0_10);
  if (succeeded)
  {
    Node0_10 = ((MR_Word) (conv1_Node0_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    Node_7 = Node0_10;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[13])));
  succeeded = mdb__declarative_execution__find_prev_contour_3_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_2[0]), ((MR_Box) (Store_4)), Node_7, &conv2_Prev0_8);
  if (succeeded)
  {
    Prev0_8 = ((MR_Word) (conv2_Prev0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    Prev_6 = Prev0_8;
  else
    Prev_6 = Id_5;
  return Prev_6;
}

static MR_Word MR_CALL 
mdb__declarative_execution__step_left_in_contour_store_2_f_0(
  MR_Word Store_4,
  MR_Word Node_5)
{
  MR_Word HeadVar__3_3;
  MR_Box conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mdb__declarative_execution__step_left_in_contour_2_f_0((MR_Word) (&mdb__declarative_execution_scalar_common_2[0]), ((MR_Box) (Store_4)), Node_5);
  HeadVar__3_3 = ((MR_Word) (conv0_HeadVar__3_3));
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_first_disj_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if (((((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0)))) == (MR_Integer) 3))))
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
  if (((((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0)))) == (MR_Integer) 4))))
  {
    *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_seqno_3_p_0(
  MR_Word S_4,
  MR_Word Node_5,
  MR_Integer * SeqNo_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Node_5)) == (MR_Integer) 0);
  MR_Integer SeqNo0_7;

  if (succeeded)
  {
    SeqNo0_7 = ((MR_Integer) ((MR_hl_field(0, Node_5, 3))));
    *SeqNo_6 = SeqNo0_7;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeClassInfo_for_annotated_trace_28;
    MR_Word Call_8;
    MR_Word CallNode_9;
    MR_Word Node0_29;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Node0_29;

    succeeded = mdb__declarative_execution__trace_node_call_3_p_0(S_4, Node_5, &Call_8);
    if (succeeded)
    {
      TypeClassInfo_for_annotated_trace_28 = (MR_Word) (&mdb__declarative_execution_scalar_common_2[0]);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_annotated_trace_28, 0)), 5))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_28)), ((MR_Box) (S_4)), ((MR_Box) (Call_8)), &conv1_Node0_29);
      if (succeeded)
      {
        Node0_29 = ((MR_Word) (conv1_Node0_29));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        succeeded = ((MR_tag((MR_Word) Node0_29)) == (MR_Integer) 0);
      if (succeeded)
        CallNode_9 = Node0_29;
      else
        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[14])));
      *SeqNo_6 = ((MR_Integer) ((MR_hl_field(0, CallNode_9, 3))));
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_call_3_p_0(
  MR_Word S_1,
  MR_Word HeadVar__2_2,
  MR_Word * Call_3)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      {
        *Call_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Exit_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
        MR_Word ExitNode_20;
        MR_Word Node0_44;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mdb__declarative_execution_scalar_common_2[0]), 0)), 5))));
        MR_Box conv1_Node0_44;

        succeeded = func_0(((MR_Box) ((MR_Word) (&mdb__declarative_execution_scalar_common_2[0]))), ((MR_Box) (S_1)), ((MR_Box) (Exit_15)), &conv1_Node0_44);
        if (succeeded)
        {
          Node0_44 = ((MR_Word) (conv1_Node0_44));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          succeeded = ((MR_tag((MR_Word) Node0_44)) == (MR_Integer) 1);
        if (succeeded)
          ExitNode_20 = Node0_44;
        else
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[16])));
        *Call_3 = ((MR_Word) ((MR_hl_field(1, ExitNode_20, 1))));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            *Call_3 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            *Call_3 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_String MR_CALL 
mdb__declarative_execution__trace_node_path_1_f_0(
  MR_Word Node_3)
{
  MR_String Path_4;
  MR_Box Label_5;

  switch (MR_tag((MR_Word) Node_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Label_5 = ((MR_Box) ((MR_hl_field(0, Node_3, 7))));
      break;
    case (MR_Integer) 1:
      Label_5 = ((MR_Box) ((MR_hl_field(1, Node_3, 5))));
      break;
    case (MR_Integer) 2:
      Label_5 = ((MR_Box) ((MR_hl_field(2, Node_3, 3))));
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Node_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Label_5 = ((MR_Box) ((MR_hl_field(3, Node_3, 5))));
          break;
        case (MR_Integer) 1:
          Label_5 = ((MR_Box) ((MR_hl_field(3, Node_3, 6))));
          break;
        case (MR_Integer) 2:
          Label_5 = ((MR_Box) ((MR_hl_field(3, Node_3, 2))));
          break;
        case (MR_Integer) 3:
          Label_5 = ((MR_Box) ((MR_hl_field(3, Node_3, 2))));
          break;
        case (MR_Integer) 4:
          Label_5 = ((MR_Box) ((MR_hl_field(3, Node_3, 2))));
          break;
        case (MR_Integer) 5:
          Label_5 = ((MR_Box) ((MR_hl_field(3, Node_3, 2))));
          break;
        case (MR_Integer) 6:
          Label_5 = ((MR_Box) ((MR_hl_field(3, Node_3, 3))));
          break;
        case (MR_Integer) 7:
          Label_5 = ((MR_Box) ((MR_hl_field(3, Node_3, 3))));
          break;
        case (MR_Integer) 8:
          Label_5 = ((MR_Box) ((MR_hl_field(3, Node_3, 2))));
          break;
        case (MR_Integer) 9:
          Label_5 = ((MR_Box) ((MR_hl_field(3, Node_3, 3))));
          break;
        case (MR_Integer) 10:
          Label_5 = ((MR_Box) ((MR_hl_field(3, Node_3, 3))));
          break;
      }
      break;
  }
  Path_4 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(Label_5);
  return Path_4;
}

static MR_Word MR_CALL 
mdb__declarative_execution__trace_node_port_1_f_0(
  MR_Word HeadVar__1_1)
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
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
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

static MR_Word MR_CALL 
mdb__declarative_execution__neg_node_set_status_2_f_0(
  MR_Word Neg0_4,
  MR_Word Status_5)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Neg0_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Neg0_4, 0)))) == (MR_Integer) 8)));
  MR_Word Neg_6;
  MR_Word TypeInfo_16_23;
  MR_Word TypeInfo_18_25;
  MR_Word TypeClassInfo_for_store_27;
  MR_Word Neg1_10;
  MR_Word Ref_18;
  MR_Word ArgRef_20;
  MR_Box conv0_S1_19;
  MR_Box conv1_S2_21;
  MR_Box conv2_S_22;
  MR_Box conv3_Neg_6;

  if (succeeded)
    Neg1_10 = Neg0_4;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[31])));
  mercury__store__init_1_p_0(&TypeInfo_16_23);
  {
    TypeInfo_18_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_25, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
    MR_hl_field(0, TypeInfo_18_25, 1) = ((MR_Box) (TypeInfo_16_23));
  }
  {
    TypeClassInfo_for_store_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_store_27, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
    MR_hl_field(0, TypeClassInfo_for_store_27, 1) = ((MR_Box) (TypeInfo_16_23));
    MR_hl_field(0, TypeClassInfo_for_store_27, 2) = ((MR_Box) (TypeInfo_18_25));
  }
  mercury__store__new_ref_4_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[2]), TypeClassInfo_for_store_27, ((MR_Box) (Neg1_10)), &Ref_18, ((MR_Box) ((MR_Integer) 0)), &conv0_S1_19);
  mercury__store__arg_ref_5_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[2]), (MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0), TypeClassInfo_for_store_27, Ref_18, (MR_Integer) 2, &ArgRef_20, ((MR_Box) ((MR_Integer) 0)), &conv1_S2_21);
  mercury__store__set_ref_value_4_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0), TypeClassInfo_for_store_27, ArgRef_20, ((MR_Box) (Status_5)), ((MR_Box) ((MR_Integer) 0)), &conv2_S_22);
  mercury__store__extract_ref_value_3_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[2]), TypeClassInfo_for_store_27, ((MR_Box) ((MR_Integer) 0)), Ref_18, &conv3_Neg_6);
  Neg_6 = ((MR_Word) (conv3_Neg_6));
  return Neg_6;
}

static MR_Word MR_CALL 
mdb__declarative_execution__cond_node_set_status_2_f_0(
  MR_Word Cond0_4,
  MR_Word Status_5)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Cond0_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Cond0_4, 0)))) == (MR_Integer) 5)));
  MR_Word Cond_6;
  MR_Word TypeInfo_16_23;
  MR_Word TypeInfo_18_25;
  MR_Word TypeClassInfo_for_store_27;
  MR_Word Cond1_10;
  MR_Word Ref_18;
  MR_Word ArgRef_20;
  MR_Box conv0_S1_19;
  MR_Box conv1_S2_21;
  MR_Box conv2_S_22;
  MR_Box conv3_Cond_6;

  if (succeeded)
    Cond1_10 = Cond0_4;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[30])));
  mercury__store__init_1_p_0(&TypeInfo_16_23);
  {
    TypeInfo_18_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_25, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
    MR_hl_field(0, TypeInfo_18_25, 1) = ((MR_Box) (TypeInfo_16_23));
  }
  {
    TypeClassInfo_for_store_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_store_27, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
    MR_hl_field(0, TypeClassInfo_for_store_27, 1) = ((MR_Box) (TypeInfo_16_23));
    MR_hl_field(0, TypeClassInfo_for_store_27, 2) = ((MR_Box) (TypeInfo_18_25));
  }
  mercury__store__new_ref_4_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[2]), TypeClassInfo_for_store_27, ((MR_Box) (Cond1_10)), &Ref_18, ((MR_Box) ((MR_Integer) 0)), &conv0_S1_19);
  mercury__store__arg_ref_5_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[2]), (MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0), TypeClassInfo_for_store_27, Ref_18, (MR_Integer) 2, &ArgRef_20, ((MR_Box) ((MR_Integer) 0)), &conv1_S2_21);
  mercury__store__set_ref_value_4_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0), TypeClassInfo_for_store_27, ArgRef_20, ((MR_Box) (Status_5)), ((MR_Box) ((MR_Integer) 0)), &conv2_S_22);
  mercury__store__extract_ref_value_3_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[2]), TypeClassInfo_for_store_27, ((MR_Box) ((MR_Integer) 0)), Ref_18, &conv3_Cond_6);
  Cond_6 = ((MR_Word) (conv3_Cond_6));
  return Cond_6;
}

static MR_Integer MR_CALL 
mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0(
  MR_Word Call_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Call_3)) == (MR_Integer) 0);
  MR_Integer IdealDepth_4;
  MR_Word MaybeImplicitTreeInfo_5;

  if (succeeded)
  {
    MaybeImplicitTreeInfo_5 = ((MR_Word) ((MR_hl_field(0, Call_3, 5))));
    if ((MaybeImplicitTreeInfo_5 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[28])));
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, MaybeImplicitTreeInfo_5, 0))));

      IdealDepth_4 = (MR_Integer) (Var_6);
    }
  }
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[29])));
  return IdealDepth_4;
}

static MR_Word MR_CALL 
mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0(
  MR_Word Call0_4,
  MR_Integer IdealDepth_5)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Call0_4)) == (MR_Integer) 0);
  MR_Word Call_6;
  MR_Word TypeInfo_16_32;
  MR_Word TypeInfo_18_34;
  MR_Word TypeClassInfo_for_store_36;
  MR_Word Call1_17;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Ref_27;
  MR_Word ArgRef_29;
  MR_Box conv0_S1_28;
  MR_Box conv1_S2_30;
  MR_Box conv2_S_31;
  MR_Box conv3_Call_6;

  if (succeeded)
    Call1_17 = Call0_4;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[27])));
  Var_23 = (MR_Word) (IdealDepth_5);
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
  }
  mercury__store__init_1_p_0(&TypeInfo_16_32);
  {
    TypeInfo_18_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_34, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
    MR_hl_field(0, TypeInfo_18_34, 1) = ((MR_Box) (TypeInfo_16_32));
  }
  {
    TypeClassInfo_for_store_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_store_36, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
    MR_hl_field(0, TypeClassInfo_for_store_36, 1) = ((MR_Box) (TypeInfo_16_32));
    MR_hl_field(0, TypeClassInfo_for_store_36, 2) = ((MR_Box) (TypeInfo_18_34));
  }
  mercury__store__new_ref_4_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[2]), TypeClassInfo_for_store_36, ((MR_Box) (Call1_17)), &Ref_27, ((MR_Box) ((MR_Integer) 0)), &conv0_S1_28);
  mercury__store__arg_ref_5_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[2]), (MR_Word) (&mdb__declarative_execution_scalar_common_1[1]), TypeClassInfo_for_store_36, Ref_27, (MR_Integer) 5, &ArgRef_29, ((MR_Box) ((MR_Integer) 0)), &conv1_S2_30);
  mercury__store__set_ref_value_4_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[1]), TypeClassInfo_for_store_36, ArgRef_29, ((MR_Box) (Var_22)), ((MR_Box) ((MR_Integer) 0)), &conv2_S_31);
  mercury__store__extract_ref_value_3_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[2]), TypeClassInfo_for_store_36, ((MR_Box) ((MR_Integer) 0)), Ref_27, &conv3_Call_6);
  Call_6 = ((MR_Word) (conv3_Call_6));
  return Call_6;
}

static MR_Word MR_CALL 
mdb__declarative_execution__call_node_set_last_interface_2_f_0(
  MR_Word Call0_4,
  MR_Word Last_5)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Call0_4)) == (MR_Integer) 0);
  MR_Word Call_6;
  MR_Word TypeInfo_16_30;
  MR_Word TypeInfo_18_32;
  MR_Word TypeClassInfo_for_store_34;
  MR_Word Call1_17;
  MR_Word Ref_25;
  MR_Word ArgRef_27;
  MR_Box conv0_S1_26;
  MR_Box conv1_S2_28;
  MR_Box conv2_S_29;
  MR_Box conv3_Call_6;

  if (succeeded)
    Call1_17 = Call0_4;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[26])));
  mercury__store__init_1_p_0(&TypeInfo_16_30);
  {
    TypeInfo_18_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_32, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
    MR_hl_field(0, TypeInfo_18_32, 1) = ((MR_Box) (TypeInfo_16_30));
  }
  {
    TypeClassInfo_for_store_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_store_34, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
    MR_hl_field(0, TypeClassInfo_for_store_34, 1) = ((MR_Box) (TypeInfo_16_30));
    MR_hl_field(0, TypeClassInfo_for_store_34, 2) = ((MR_Box) (TypeInfo_18_32));
  }
  mercury__store__new_ref_4_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[2]), TypeClassInfo_for_store_34, ((MR_Box) (Call1_17)), &Ref_25, ((MR_Box) ((MR_Integer) 0)), &conv0_S1_26);
  mercury__store__arg_ref_5_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[2]), (MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0), TypeClassInfo_for_store_34, Ref_25, (MR_Integer) 1, &ArgRef_27, ((MR_Box) ((MR_Integer) 0)), &conv1_S2_28);
  mercury__store__set_ref_value_4_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0), TypeClassInfo_for_store_34, ArgRef_27, ((MR_Box) (Last_5)), ((MR_Box) ((MR_Integer) 0)), &conv2_S_29);
  mercury__store__extract_ref_value_3_p_0((MR_Word) (&mdb__declarative_execution_scalar_common_1[2]), TypeClassInfo_for_store_34, ((MR_Box) ((MR_Integer) 0)), Ref_25, &conv3_Call_6);
  Call_6 = ((MR_Word) (conv3_Call_6));
  return Call_6;
}

static MR_Word MR_CALL 
mdb__declarative_execution__call_node_get_last_interface_1_f_0(
  MR_Word Call_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Call_3)) == (MR_Integer) 0);
  MR_Word Last_4;
  MR_Word Last0_6;

  if (succeeded)
  {
    Last0_6 = ((MR_Word) ((MR_hl_field(0, Call_3, 1))));
    Last_4 = Last0_6;
  }
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[25])));
  return Last_4;
}

static MR_bool MR_CALL 
mdb__declarative_execution__search_trace_node_store_3_p_0(
  MR_Word _Store_1,
  MR_Word Id_2,
  MR_Word * Node_3)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mdb__declarative_execution__search_trace_node_store_3_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id = Id_2 ;
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

static MR_bool MR_CALL 
mdb__declarative_execution__find_prev_contour_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_67,
  MR_Box Store_4,
  MR_Word Node_5,
  MR_Box * OnContour_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Node_5)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[22])));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box Exit_15 = (MR_hl_field(2, Node_5, 1));
        MR_Word ExitNode_19;

        mdb__declarative_execution__exit_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_67, Store_4, Exit_15, &ExitNode_19);
        *OnContour_6 = (MR_hl_field(1, ExitNode_19, 0));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Node_5, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Box Call_8 = (MR_hl_field(3, Node_5, 2));
            MR_Word CallNode_13;
            MR_Word Node0_71;
            MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_annotated_trace_67, 0)), 5))));
            MR_Box conv1_Node0_71;

            succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_67)), Store_4, Call_8, &conv1_Node0_71);
            if (succeeded)
            {
              Node0_71 = ((MR_Word) (conv1_Node0_71));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              succeeded = ((MR_tag((MR_Word) Node0_71)) == (MR_Integer) 0);
            if (succeeded)
              CallNode_13 = Node0_71;
            else
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[14])));
            *OnContour_6 = (MR_hl_field(0, CallNode_13, 0));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[23])));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[24])));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Box Neg_21 = (MR_hl_field(3, Node_5, 2));
            MR_Word Var_41;
            MR_Word Node0_86;
            MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_annotated_trace_67, 0)), 5))));
            MR_Box conv3_Node0_86;

            succeeded = func_2(((MR_Box) (TypeClassInfo_for_annotated_trace_67)), Store_4, Neg_21, &conv3_Node0_86);
            if (succeeded)
            {
              Node0_86 = ((MR_Word) (conv3_Node0_86));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              succeeded = ((((MR_tag((MR_Word) Node0_86)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Node0_86, 0)))) == (MR_Integer) 8)));
            if (succeeded)
              Var_41 = Node0_86;
            else
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[18])));
            *OnContour_6 = (MR_hl_field(3, Var_41, 1));
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_execution__cache_proc_defn_rep_2_p_0(
  MR_Box ProcLayout_1,
  MR_Word ProcDefnRep_2)
{
{
#define MR_PROC_LABEL mdb__declarative_execution__cache_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;

	ProcLayout = (const MR_ProcLayout *) ProcLayout_1 ;
	ProcDefnRep = ProcDefnRep_2 ;
		{

#ifdef MR_DEBUG_PROC_REP
    printf("cache_proc_defn_rep: %p %x\n", ProcLayout, ProcDefnRep);
#endif
    MR_insert_proc_defn_rep(ProcLayout, ProcDefnRep);


		;}
#undef MR_PROC_LABEL
}
}

static MR_bool MR_CALL 
mdb__declarative_execution__have_cached_proc_defn_rep_2_p_0(
  MR_Box ProcLayout_1,
  MR_Word * ProcDefnRep_2)
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

static MR_bool MR_CALL 
mdb__declarative_execution__call_node_bytecode_layout_2_p_0(
  MR_Box CallLabelLayout_1,
  MR_Box * ProcLayout_2)
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

void MR_CALL 
mdb__declarative_execution__user_arg_num_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer * ArgNum_3)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *ArgNum_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
      break;
    case (MR_Integer) 1:
      {
        MR_Integer AnyArgNum_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
        MR_Word Args_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

        mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(Args_8, AnyArgNum_6, (MR_Integer) 1, ArgNum_3);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer AnyArgNumFromBack_11 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 0))));
        MR_Word Args_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
        MR_Integer Var_15;
        MR_Integer Var_17;
        MR_Integer Var_18;

        Var_18 = mercury__list__length_1_f_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), Args_13);
        Var_17 = (MR_Integer) ((MR_Unsigned) Var_18 - (MR_Unsigned) AnyArgNumFromBack_11);
        Var_15 = (MR_Integer) ((MR_Unsigned) Var_17 + (MR_Unsigned) 1);
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[33])));
        return;
      }
    else
    {
      MR_Word Arg_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Args_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word UserVis_16 = ((MR_Unsigned) ((MR_hl_field(0, Arg_11, 0))) & (MR_Integer) 1);

      switch (UserVis_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) ArgNum_2 - (MR_Unsigned) 1);
            MR_Word next_value_of_HeadVar__1_1 = Args_12;
            MR_Integer next_value_of_ArgNum_2 = Var_19;

            // direct tailcall eliminated
            ;
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
              MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) ArgNum_2 - (MR_Unsigned) 1);
              MR_Integer Var_22 = (MR_Integer) ((MR_Unsigned) CurArgNum_3 + (MR_Unsigned) 1);
              MR_Word next_value_of_HeadVar__1_1 = Args_12;
              MR_Integer next_value_of_ArgNum_2 = Var_21;
              MR_Integer next_value_of_CurArgNum_3 = Var_22;

              // direct tailcall eliminated
              ;
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
        MR_Integer N_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
        MR_Word Args_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

        mdb__declarative_execution__head_var_num_to_arg_num_4_p_0(Args_8, N_6, (MR_Integer) 1, HeadVar__3_3);
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__3_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      break;
    case (MR_Integer) 2:
      {
        MR_Integer M_11 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 0))));
        MR_Word Args_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
        MR_Integer Var_14;
        MR_Integer Var_15;

        Var_15 = mercury__list__length_1_f_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), Args_13);
        Var_14 = (MR_Integer) ((MR_Unsigned) Var_15 - (MR_Unsigned) M_11);
        *HeadVar__3_3 = (MR_Integer) ((MR_Unsigned) Var_14 + (MR_Unsigned) 1);
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[32])));
        return;
      }
    else
    {
      MR_Word Arg_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Args_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word UserVis_16 = ((MR_Unsigned) ((MR_hl_field(0, Arg_11, 0))) & (MR_Integer) 1);

      switch (UserVis_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) CurArgNum_3 + (MR_Unsigned) 1);
            MR_Word next_value_of_HeadVar__1_1 = Args_12;
            MR_Integer next_value_of_CurArgNum_3 = Var_19;

            // direct tailcall eliminated
            ;
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
              MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) SearchUserHeadVarNum_2 - (MR_Unsigned) 1);
              MR_Integer Var_22 = (MR_Integer) ((MR_Unsigned) CurArgNum_3 + (MR_Unsigned) 1);
              MR_Word next_value_of_HeadVar__1_1 = Args_12;
              MR_Integer next_value_of_SearchUserHeadVarNum_2 = Var_21;
              MR_Integer next_value_of_CurArgNum_3 = Var_22;

              // direct tailcall eliminated
              ;
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
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdb__declarative_execution__is_user_visible_arg_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
mdb__declarative_execution__select_arg_at_pos_3_p_0(
  MR_Word ArgPos_4,
  MR_Word Args0_5,
  MR_Word * Arg_6)
{
  MR_bool succeeded;
  MR_Integer N_7;
  MR_Word Args_10;
  MR_Box conv0_Arg_6;

  switch (MR_tag((MR_Word) ArgPos_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        N_7 = ((MR_Integer) ((MR_hl_field(0, ArgPos_4, 0))));
        Args_10 = mercury__list__filter_2_f_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), (MR_Word) (&mdb__declarative_execution_scalar_common_2[3]), Args0_5);
      }
      break;
    case (MR_Integer) 1:
      {
        N_7 = ((MR_Integer) ((MR_hl_field(1, ArgPos_4, 0))));
        Args_10 = Args0_5;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer M_9 = ((MR_Integer) ((MR_hl_field(2, ArgPos_4, 0))));
        MR_Integer Var_11;
        MR_Integer Var_12;

        Var_12 = mercury__list__length_1_f_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), Args0_5);
        Var_11 = (MR_Integer) ((MR_Unsigned) Var_12 - (MR_Unsigned) M_9);
        N_7 = (MR_Integer) ((MR_Unsigned) Var_11 + (MR_Unsigned) 1);
        Args_10 = Args0_5;
      }
      break;
  }
  mercury__list__det_index1_3_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), Args_10, N_7, &conv0_Arg_6);
  *Arg_6 = ((MR_Word) (conv0_Arg_6));
}

MR_bool MR_CALL 
mdb__declarative_execution__is_user_visible_arg_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Var_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 1);
  return succeeded;
}

MR_Word MR_CALL 
mdb__declarative_execution__chosen_head_vars_presentation_0_f_0(void)
{
  return (MR_Integer) 1;
}

static MR_bool MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdb__declarative_execution__is_user_visible_arg_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0(
  MR_Word Which_4,
  MR_Word Args0_5,
  MR_Word * Args_6)
{
  MR_bool succeeded;

  switch (Which_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Args_6 = Args0_5;
      break;
    case (MR_Integer) 1:
      *Args_6 = mercury__list__filter_2_f_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), (MR_Word) (&mdb__declarative_execution_scalar_common_2[2]), Args0_5);
      break;
  }
}

void MR_CALL 
mdb__declarative_execution__save_trace_node_store_5_p_0(
  MR_Word Stream_6,
  MR_Word Store_7,
  MR_Word NodeId_8)
{
  MR_Word Map0_10;
  MR_Word Key_11;
  MR_Word Map_12;
  MR_Word Var_15;

  mercury__map__init_1_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0), (MR_Word) (&mdb__declarative_execution_scalar_common_1[0]), &Map0_10);
{
#define MR_PROC_LABEL mdb__declarative_execution__save_trace_node_store_5_p_0

	MR_Word Id;
	MR_Word Key;

	Id = NodeId_8 ;
		{

    Key = (MR_Integer) Id;


		;}
#undef MR_PROC_LABEL
	Key_11  = Key;
}
  Var_15 = (MR_Word) (Map0_10);
  mdb__declarative_execution__node_map_4_p_0(Store_7, NodeId_8, Var_15, &Map_12);
  mercury__io__write_4_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0), Stream_6, ((MR_Box) (Key_11)));
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".\n");
  mercury__io__write_4_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0), Stream_6, ((MR_Box) (Map_12)));
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".\n");
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
    MR_Word Map0_7 = (MR_Word) (HeadVar__3_3);
    MR_Word Node1_9;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mdb__declarative_execution__node_map_4_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id = NodeId_6 ;
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

	Id = NodeId_6 ;
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

	N1 = Node1_9 ;
		{

    N2 = N1;


		;}
#undef MR_PROC_LABEL
	Node2_11  = N2;
}
      mercury__map__det_insert_4_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0), (MR_Word) (&mdb__declarative_execution_scalar_common_1[0]), ((MR_Box) (Key_10)), ((MR_Box) (Node2_11)), Map0_7, &Map1_12);
      switch (MR_tag((MR_Word) Node1_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Next_13 = ((MR_Word) ((MR_hl_field(0, Node1_9, 0))));
          break;
        case (MR_Integer) 1:
          Next_13 = ((MR_Word) ((MR_hl_field(1, Node1_9, 0))));
          break;
        case (MR_Integer) 2:
          Next_13 = ((MR_Word) ((MR_hl_field(2, Node1_9, 0))));
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Node1_9, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Next_13 = ((MR_Word) ((MR_hl_field(3, Node1_9, 1))));
              break;
            case (MR_Integer) 1:
              Next_13 = ((MR_Word) ((MR_hl_field(3, Node1_9, 1))));
              break;
            case (MR_Integer) 2:
              Next_13 = ((MR_Word) ((MR_hl_field(3, Node1_9, 1))));
              break;
            case (MR_Integer) 3:
              Next_13 = ((MR_Word) ((MR_hl_field(3, Node1_9, 1))));
              break;
            case (MR_Integer) 4:
              Next_13 = ((MR_Word) ((MR_hl_field(3, Node1_9, 1))));
              break;
            case (MR_Integer) 5:
              Next_13 = ((MR_Word) ((MR_hl_field(3, Node1_9, 1))));
              break;
            case (MR_Integer) 6:
              Next_13 = ((MR_Word) ((MR_hl_field(3, Node1_9, 1))));
              break;
            case (MR_Integer) 7:
              Next_13 = ((MR_Word) ((MR_hl_field(3, Node1_9, 1))));
              break;
            case (MR_Integer) 8:
              Next_13 = ((MR_Word) ((MR_hl_field(3, Node1_9, 1))));
              break;
            case (MR_Integer) 9:
              Next_13 = ((MR_Word) ((MR_hl_field(3, Node1_9, 1))));
              break;
            case (MR_Integer) 10:
              Next_13 = ((MR_Word) ((MR_hl_field(3, Node1_9, 1))));
              break;
          }
          break;
      }
      Var_14 = (MR_Word) (Map1_12);
      // direct tailcall eliminated
      ;
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
  MR_Word ResKey_10;
  MR_String Msg_11;
  MR_Word ResMap_13;

  mercury__io__read_4_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0), Stream_6, &ResKey_10);
  switch (MR_tag((MR_Word) ResKey_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (MR_mkword(1, &mdb__declarative_execution_scalar_common_1[21]))));
        return;
      }
      break;
    case (MR_Integer) 1:
      *Key_8 = ((MR_Word) ((MR_hl_field(1, ResKey_10, 0))));
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_21;

        Msg_11 = ((MR_String) ((MR_hl_field(2, ResKey_10, 0))));
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) ((MR_String) "load_trace_node_map"));
          MR_hl_field(1, Var_21, 1) = ((MR_Box) (Msg_11));
        }
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (Var_21)));
          return;
        }
      }
      break;
  }
  mercury__io__read_4_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0), Stream_6, &ResMap_13);
  switch (MR_tag((MR_Word) ResMap_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (MR_mkword(1, &mdb__declarative_execution_scalar_common_1[21]))));
        return;
      }
      break;
    case (MR_Integer) 1:
      *Map_7 = ((MR_Word) ((MR_hl_field(1, ResMap_13, 0))));
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_27;

        Msg_11 = ((MR_String) ((MR_hl_field(2, ResMap_13, 0))));
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) ((MR_String) "load_trace_node_map"));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) (Msg_11));
        }
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (Var_27)));
          return;
        }
      }
      break;
  }
}

void MR_CALL 
mdb__declarative_execution__disj_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_16,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * Node_6)
{
  MR_bool succeeded;
  MR_Word Node0_7;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_annotated_trace_16, 0)), 5))));
  MR_Box conv1_Node0_7;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_16)), Store_4, NodeId_5, &conv1_Node0_7);
  if (succeeded)
  {
    Node0_7 = ((MR_Word) (conv1_Node0_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    if (((((MR_tag((MR_Word) Node0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Node0_7, 0)))) == (MR_Integer) 3))))
      succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) Node0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Node0_7, 0)))) == (MR_Integer) 4))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
    *Node_6 = Node0_7;
  else
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[20])));
      return;
    }
}

MR_bool MR_CALL 
mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_16,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * Node_6)
{
  MR_bool succeeded;
  MR_Word Node0_7;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_annotated_trace_16, 0)), 5))));
  MR_Box conv1_Node0_7;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_16)), Store_4, NodeId_5, &conv1_Node0_7);
  if (succeeded)
  {
    Node0_7 = ((MR_Word) (conv1_Node0_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) Node0_7)) == (MR_Integer) 2);
    if (succeeded)
      *Node_6 = Node0_7;
    else
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[15])));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_execution__det_trace_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_11,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * Node_6)
{
  MR_bool succeeded;
  MR_Word Node0_7;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_annotated_trace_11, 0)), 5))));
  MR_Box conv1_Node0_7;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_11)), Store_4, NodeId_5, &conv1_Node0_7);
  if (succeeded)
  {
    Node0_7 = ((MR_Word) (conv1_Node0_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *Node_6 = Node0_7;
  else
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[13])));
      return;
    }
}

MR_Box MR_CALL 
mdb__declarative_execution__step_in_stratum_2_f_0(
  MR_Word TypeClassInfo_for_annotated_trace_90,
  MR_Box Store_4,
  MR_Word Node_5)
{
  MR_Box Next_6;

  switch (MR_tag((MR_Word) Node_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[10])));
      break;
    case (MR_Integer) 1:
      {
        MR_Box Call_8 = (MR_hl_field(1, Node_5, 1));
        MR_Box MaybeRedo_9 = (MR_hl_field(1, Node_5, 2));

        Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(TypeClassInfo_for_annotated_trace_90, Store_4, Call_8, MaybeRedo_9);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box Exit_25 = (MR_hl_field(2, Node_5, 1));
        MR_Word ExitNode_29;

        mdb__declarative_execution__exit_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_90, Store_4, Exit_25, &ExitNode_29);
        Next_6 = (MR_hl_field(1, ExitNode_29, 0));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Node_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box Call_78 = (MR_hl_field(3, Node_5, 2));
            MR_Box MaybeRedo_79 = (MR_hl_field(3, Node_5, 3));

            Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(TypeClassInfo_for_annotated_trace_90, Store_4, Call_78, MaybeRedo_79);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box Call_80 = (MR_hl_field(3, Node_5, 2));
            MR_Box MaybeRedo_81 = (MR_hl_field(3, Node_5, 3));

            Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(TypeClassInfo_for_annotated_trace_90, Store_4, Call_80, MaybeRedo_81);
          }
          break;
        case (MR_Integer) 2:
          Next_6 = (MR_hl_field(3, Node_5, 1));
          break;
        case (MR_Integer) 3:
          Next_6 = (MR_hl_field(3, Node_5, 1));
          break;
        case (MR_Integer) 4:
          Next_6 = (MR_hl_field(3, Node_5, 1));
          break;
        case (MR_Integer) 5:
          {
            MR_Box Prec_34 = (MR_hl_field(3, Node_5, 1));
            MR_Word Status_36 = ((MR_Unsigned) ((MR_hl_field(3, Node_5, 3))) & (MR_Integer) 3);

            switch (Status_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[11])));
                break;
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                Next_6 = Prec_34;
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          Next_6 = (MR_hl_field(3, Node_5, 1));
          break;
        case (MR_Integer) 7:
          {
            MR_Box Cond_40 = (MR_hl_field(3, Node_5, 2));
            MR_Word Var_69;

            mdb__declarative_execution__cond_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_90, Store_4, Cond_40, &Var_69);
            Next_6 = (MR_hl_field(3, Var_69, 1));
          }
          break;
        case (MR_Integer) 8:
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[12])));
          break;
        case (MR_Integer) 9:
          {
            MR_Box Neg_45 = (MR_hl_field(3, Node_5, 2));
            MR_Word Var_70;

            mdb__declarative_execution__neg_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_90, Store_4, Neg_45, &Var_70);
            Next_6 = (MR_hl_field(3, Var_70, 1));
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Var_71;
            MR_Box Neg_82 = (MR_hl_field(3, Node_5, 2));

            mdb__declarative_execution__neg_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_90, Store_4, Neg_82, &Var_71);
            Next_6 = (MR_hl_field(3, Var_71, 1));
          }
          break;
      }
      break;
  }
  return Next_6;
}

static MR_Box MR_CALL 
mdb__declarative_execution__step_over_redo_or_call_3_f_0(
  MR_Word TypeClassInfo_for_annotated_trace_24,
  MR_Box Store_5,
  MR_Box Call_6,
  MR_Box MaybeRedo_7)
{
  MR_bool succeeded;
  MR_Box Next_8;
  MR_Word Redo_9;
  MR_Word Node0_25;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_annotated_trace_24, 0)), 5))));
  MR_Box conv1_Node0_25;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_24)), Store_5, MaybeRedo_7, &conv1_Node0_25);
  if (succeeded)
  {
    Node0_25 = ((MR_Word) (conv1_Node0_25));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) Node0_25)) == (MR_Integer) 2);
    if (succeeded)
      Redo_9 = Node0_25;
    else
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[15])));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    Next_8 = (MR_hl_field(2, Redo_9, 0));
  else
  {
    MR_Word CallNode_14;
    MR_Word Node0_35;
    MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_annotated_trace_24, 0)), 5))));
    MR_Box conv3_Node0_35;

    succeeded = func_2(((MR_Box) (TypeClassInfo_for_annotated_trace_24)), Store_5, Call_6, &conv3_Node0_35);
    if (succeeded)
    {
      Node0_35 = ((MR_Word) (conv3_Node0_35));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      succeeded = ((MR_tag((MR_Word) Node0_35)) == (MR_Integer) 0);
    if (succeeded)
      CallNode_14 = Node0_35;
    else
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[14])));
    Next_8 = (MR_hl_field(0, CallNode_14, 0));
  }
  return Next_8;
}

MR_Box MR_CALL 
mdb__declarative_execution__step_left_in_contour_2_f_0(
  MR_Word TypeClassInfo_for_annotated_trace_100,
  MR_Box Store_4,
  MR_Word Node_5)
{
  MR_Box Prec_6;

  switch (MR_tag((MR_Word) Node_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[7])));
      break;
    case (MR_Integer) 1:
      {
        MR_Box Call_8 = (MR_hl_field(1, Node_5, 1));
        MR_Word CallNode_15;

        mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_100, Store_4, Call_8, &CallNode_15);
        Prec_6 = (MR_hl_field(0, CallNode_15, 0));
      }
      break;
    case (MR_Integer) 2:
      mdb__declarative_execution__find_prev_contour_3_p_1(TypeClassInfo_for_annotated_trace_100, Store_4, Node_5, &Prec_6);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Node_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 10:
          mdb__declarative_execution__find_prev_contour_3_p_1(TypeClassInfo_for_annotated_trace_100, Store_4, Node_5, &Prec_6);
          break;
        case (MR_Integer) 1:
          {
            MR_Box Call_79 = (MR_hl_field(3, Node_5, 2));
            MR_Word CallNode_80;

            mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_100, Store_4, Call_79, &CallNode_80);
            Prec_6 = (MR_hl_field(0, CallNode_80, 0));
          }
          break;
        case (MR_Integer) 2:
          Prec_6 = (MR_hl_field(3, Node_5, 1));
          break;
        case (MR_Integer) 3:
          Prec_6 = (MR_hl_field(3, Node_5, 1));
          break;
        case (MR_Integer) 4:
          {
            MR_Box FirstDisj_26 = (MR_hl_field(3, Node_5, 3));
            MR_Word Var_67;

            mdb__declarative_execution__first_disj_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_100, Store_4, FirstDisj_26, &Var_67);
            Prec_6 = (MR_hl_field(3, Var_67, 1));
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Status_29;

            Prec_6 = (MR_hl_field(3, Node_5, 1));
            Status_29 = ((MR_Unsigned) ((MR_hl_field(3, Node_5, 3))) & (MR_Integer) 3);
            switch (Status_29) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[8])));
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
          Prec_6 = (MR_hl_field(3, Node_5, 1));
          break;
        case (MR_Integer) 7:
          {
            MR_Box Cond_33 = (MR_hl_field(3, Node_5, 2));
            MR_Word Var_71;

            mdb__declarative_execution__cond_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_100, Store_4, Cond_33, &Var_71);
            Prec_6 = (MR_hl_field(3, Var_71, 1));
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Status_81;

            Prec_6 = (MR_hl_field(3, Node_5, 1));
            Status_81 = ((MR_Unsigned) ((MR_hl_field(3, Node_5, 3))) & (MR_Integer) 3);
            switch (Status_81) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 0:
                mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[9])));
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
            MR_Box Neg_38 = (MR_hl_field(3, Node_5, 2));
            MR_Word Var_72;

            mdb__declarative_execution__neg_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_100, Store_4, Neg_38, &Var_72);
            Prec_6 = (MR_hl_field(3, Var_72, 1));
          }
          break;
      }
      break;
  }
  return Prec_6;
}

static void MR_CALL 
mdb__declarative_execution__find_prev_contour_3_p_1(
  MR_Word TypeClassInfo_for_annotated_trace_67,
  MR_Box Store_4,
  MR_Word Node_5,
  MR_Box * OnContour_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Node_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Box Exit_15 = (MR_hl_field(2, Node_5, 1));
        MR_Word ExitNode_19;

        mdb__declarative_execution__exit_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_67, Store_4, Exit_15, &ExitNode_19);
        *OnContour_6 = (MR_hl_field(1, ExitNode_19, 0));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Node_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box Call_8 = (MR_hl_field(3, Node_5, 2));
            MR_Word CallNode_13;
            MR_Word Node0_71;
            MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_annotated_trace_67, 0)), 5))));
            MR_Box conv1_Node0_71;

            succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_67)), Store_4, Call_8, &conv1_Node0_71);
            if (succeeded)
            {
              Node0_71 = ((MR_Word) (conv1_Node0_71));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              succeeded = ((MR_tag((MR_Word) Node0_71)) == (MR_Integer) 0);
            if (succeeded)
              CallNode_13 = Node0_71;
            else
              {
                mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[14])));
                return;
              }
            *OnContour_6 = (MR_hl_field(0, CallNode_13, 0));
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Box Neg_21 = (MR_hl_field(3, Node_5, 2));
            MR_Word Var_41;
            MR_Word Node0_86;
            MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_annotated_trace_67, 0)), 5))));
            MR_Box conv3_Node0_86;

            succeeded = func_2(((MR_Box) (TypeClassInfo_for_annotated_trace_67)), Store_4, Neg_21, &conv3_Node0_86);
            if (succeeded)
            {
              Node0_86 = ((MR_Word) (conv3_Node0_86));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              succeeded = ((((MR_tag((MR_Word) Node0_86)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Node0_86, 0)))) == (MR_Integer) 8)));
            if (succeeded)
              Var_41 = Node0_86;
            else
              {
                mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[18])));
                return;
              }
            *OnContour_6 = (MR_hl_field(3, Var_41, 1));
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
  MR_bool succeeded;
  MR_Word Node0_7;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_annotated_trace_19, 0)), 5))));
  MR_Box conv1_Node0_7;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_19)), Store_4, NodeId_5, &conv1_Node0_7);
  if (succeeded)
  {
    Node0_7 = ((MR_Word) (conv1_Node0_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    succeeded = ((MR_tag((MR_Word) Node0_7)) == (MR_Integer) 1);
  if (succeeded)
    *Node_6 = Node0_7;
  else
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[16])));
      return;
    }
}

void MR_CALL 
mdb__declarative_execution__first_disj_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_13,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * Node_6)
{
  MR_bool succeeded;
  MR_Word Node0_7;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_annotated_trace_13, 0)), 5))));
  MR_Box conv1_Node0_7;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_13)), Store_4, NodeId_5, &conv1_Node0_7);
  if (succeeded)
  {
    Node0_7 = ((MR_Word) (conv1_Node0_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    succeeded = ((((MR_tag((MR_Word) Node0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Node0_7, 0)))) == (MR_Integer) 3)));
  if (succeeded)
    *Node_6 = Node0_7;
  else
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[19])));
      return;
    }
}

void MR_CALL 
mdb__declarative_execution__neg_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_14,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * Node_6)
{
  MR_bool succeeded;
  MR_Word Node0_7;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_annotated_trace_14, 0)), 5))));
  MR_Box conv1_Node0_7;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_14)), Store_4, NodeId_5, &conv1_Node0_7);
  if (succeeded)
  {
    Node0_7 = ((MR_Word) (conv1_Node0_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    succeeded = ((((MR_tag((MR_Word) Node0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Node0_7, 0)))) == (MR_Integer) 8)));
  if (succeeded)
    *Node_6 = Node0_7;
  else
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[18])));
      return;
    }
}

void MR_CALL 
mdb__declarative_execution__cond_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_14,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * Node_6)
{
  MR_bool succeeded;
  MR_Word Node0_7;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_annotated_trace_14, 0)), 5))));
  MR_Box conv1_Node0_7;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_14)), Store_4, NodeId_5, &conv1_Node0_7);
  if (succeeded)
  {
    Node0_7 = ((MR_Word) (conv1_Node0_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    succeeded = ((((MR_tag((MR_Word) Node0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Node0_7, 0)))) == (MR_Integer) 5)));
  if (succeeded)
    *Node_6 = Node0_7;
  else
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[17])));
      return;
    }
}

void MR_CALL 
mdb__declarative_execution__call_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_21,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * Node_6)
{
  MR_bool succeeded;
  MR_Word Node0_7;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_annotated_trace_21, 0)), 5))));
  MR_Box conv1_Node0_7;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_21)), Store_4, NodeId_5, &conv1_Node0_7);
  if (succeeded)
  {
    Node0_7 = ((MR_Word) (conv1_Node0_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    succeeded = ((MR_tag((MR_Word) Node0_7)) == (MR_Integer) 0);
  if (succeeded)
    *Node_6 = Node0_7;
  else
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[14])));
      return;
    }
}

void MR_CALL 
mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0(
  MR_Word TypeInfo_for_R_22,
  MR_Word CallNode_3,
  MR_Word * MaybeProcDefnRep_4)
{
  MR_bool succeeded;
  MR_Box Label_5 = ((MR_Box) ((MR_hl_field(0, CallNode_3, 7))));
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
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeProcDefnRep_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ProcDefnRep_7));
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
	ProcDefnRep = ProcDefnRep_12 ;
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
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeProcDefnRep_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ProcDefnRep_12));
        }
      }
      else
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_execution_scalar_common_1[6])));
          return;
        }
    }
  }
  else
    *MaybeProcDefnRep_4 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
mdb__declarative_execution__get_pred_attributes_5_p_0(
  MR_Word ProcId_6,
  MR_Word * Module_7,
  MR_String * Name_8,
  MR_Integer * Arity_9,
  MR_Word * PredOrFunc_10)
{
  if (((MR_tag((MR_Word) ProcId_6)) == (MR_Integer) 0))
  {
    *Module_7 = ((MR_Word) ((MR_hl_field(0, ProcId_6, 0))));
    *PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, ProcId_6, 1))) & (MR_Integer) 1);
    *Name_8 = ((MR_String) ((MR_hl_field(0, ProcId_6, 3))));
    *Arity_9 = ((MR_Integer) ((MR_hl_field(0, ProcId_6, 4))));
  }
  else
  {
    MR_Word SpecialId_13;

    *Module_7 = ((MR_Word) ((MR_hl_field(1, ProcId_6, 0))));
    SpecialId_13 = ((MR_Unsigned) ((MR_hl_field(1, ProcId_6, 1))) & (MR_Integer) 3);
    *PredOrFunc_10 = (MR_Integer) 0;
    *Arity_9 = mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(SpecialId_13);
    *Name_8 = mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(SpecialId_13);
  }
}

MR_bool MR_CALL 
mdb__declarative_execution__get_trace_call_atom_2_p_1(
  MR_Word TypeInfo_for_R_16,
  MR_Word Node_3,
  MR_Word * Atom_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Node_3)) == (MR_Integer) 0);
  MR_Word AtomArgs_7;
  MR_Box Label_12;
  MR_Box ProcLayout_15;

  if (succeeded)
  {
    AtomArgs_7 = ((MR_Word) ((MR_hl_field(0, Node_3, 2))));
    Label_12 = ((MR_Box) ((MR_hl_field(0, Node_3, 7))));
    ProcLayout_15 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(Label_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Atom_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ProcLayout_15));
      MR_hl_field(0, base, 1) = ((MR_Box) (AtomArgs_7));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_execution__get_trace_call_atom_2_p_0(
  MR_Word TypeInfo_for_R_16,
  MR_Word Node_3,
  MR_Word * Atom_4)
{
  MR_Word AtomArgs_7 = ((MR_Word) ((MR_hl_field(0, Node_3, 2))));
  MR_Box Label_12 = ((MR_Box) ((MR_hl_field(0, Node_3, 7))));
  MR_Box ProcLayout_15;

  ProcLayout_15 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(Label_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Atom_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ProcLayout_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (AtomArgs_7));
  }
}

MR_bool MR_CALL 
mdb__declarative_execution__get_trace_exit_atom_2_p_1(
  MR_Word TypeInfo_for_R_14,
  MR_Word Node_3,
  MR_Word * Atom_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Node_3)) == (MR_Integer) 1);
  MR_Word AtomArgs_8;
  MR_Box Label_10;
  MR_Box ProcLayout_13;

  if (succeeded)
  {
    AtomArgs_8 = ((MR_Word) ((MR_hl_field(1, Node_3, 3))));
    Label_10 = ((MR_Box) ((MR_hl_field(1, Node_3, 5))));
    ProcLayout_13 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(Label_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Atom_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ProcLayout_13));
      MR_hl_field(0, base, 1) = ((MR_Box) (AtomArgs_8));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_execution__get_trace_exit_atom_2_p_0(
  MR_Word TypeInfo_for_R_14,
  MR_Word Node_3,
  MR_Word * Atom_4)
{
  MR_Word AtomArgs_8 = ((MR_Word) ((MR_hl_field(1, Node_3, 3))));
  MR_Box Label_10 = ((MR_Box) ((MR_hl_field(1, Node_3, 5))));
  MR_Box ProcLayout_13;

  ProcLayout_13 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(Label_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Atom_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ProcLayout_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (AtomArgs_8));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____event_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_execution____Unify____event_number_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_execution____Compare____event_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_execution____Compare____event_number_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____goal_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_execution____Unify____goal_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_execution____Compare____goal_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_execution____Compare____goal_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____implicit_tree_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_execution____Unify____implicit_tree_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_execution____Compare____implicit_tree_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_execution____Compare____implicit_tree_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____sequence_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_execution____Unify____sequence_number_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_execution____Compare____sequence_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_execution____Compare____sequence_number_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____suspicion_accumulator_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_execution____Unify____suspicion_accumulator_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_execution____Compare____suspicion_accumulator_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_execution____Compare____suspicion_accumulator_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_execution____Unify____trace_atom_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_execution____Compare____trace_atom_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_execution____Unify____trace_atom_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_execution____Compare____trace_atom_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_execution____Unify____trace_node_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_execution____Compare____trace_node_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_execution____Unify____trace_node_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_execution____Compare____trace_node_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_execution____Unify____trace_node_key_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_execution____Compare____trace_node_key_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_execution____Unify____trace_node_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_execution____Compare____trace_node_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_store_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_execution____Unify____trace_node_store_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_store_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_execution____Compare____trace_node_store_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____which_headvars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_execution____Unify____which_headvars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_execution____Compare____which_headvars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_execution____Compare____which_headvars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  succeeded = mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  succeeded = mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
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
