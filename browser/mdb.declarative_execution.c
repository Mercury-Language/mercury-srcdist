/*
** Automatically generated from `declarative_execution.m'
** by the Mercury compiler,
** version 2016-10-30
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


/* :- module mdb.declarative_execution. */
/* :- implementation. */

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
mdb__declarative_execution____Unify____event_number_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____event_number_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____goal_status_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____goal_status_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____implicit_tree_info_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____implicit_tree_info_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____sequence_number_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____sequence_number_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____suspicion_accumulator_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____suspicion_accumulator_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_arg_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_arg_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_1_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_1_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box * mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3,
  MR_Box mdb__declarative_execution__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_id_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_id_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_key_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_key_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_map_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_map_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_store_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_store_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____which_headvars_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_execution____Compare____which_headvars_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
  MR_Box mdb__declarative_execution__closure_arg,
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box * mdb__declarative_execution__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
  MR_Box mdb__declarative_execution__closure_arg,
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box * mdb__declarative_execution__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word * mdb__declarative_execution__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word * mdb__declarative_execution__HeadVar__3_3);

static void MR_CALL 
mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Integer mdb__declarative_execution__ArgNum_2,
  MR_Integer mdb__declarative_execution__CurArgNum_3,
  MR_Integer * mdb__declarative_execution__UserArgNum_4);

static void MR_CALL 
mdb__declarative_execution__head_var_num_to_arg_num_4_p_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Integer mdb__declarative_execution__SearchUserHeadVarNum_2,
  MR_Integer mdb__declarative_execution__CurArgNum_3,
  MR_Integer * mdb__declarative_execution__ArgNum_4);

static void MR_CALL 
mdb__declarative_execution__convert_node_2_p_0(
  MR_Word mdb__declarative_execution__N1_1,
  MR_Word * mdb__declarative_execution__N2_2);

static void MR_CALL 
mdb__declarative_execution__node_id_to_key_2_p_0(
  MR_Word mdb__declarative_execution__Id_1,
  MR_Word * mdb__declarative_execution__Key_2);

static void MR_CALL 
mdb__declarative_execution__node_map_4_p_0(
  MR_Word mdb__declarative_execution__Store_5,
  MR_Word mdb__declarative_execution__NodeId_6,
  MR_Word mdb__declarative_execution__HeadVar__3_3,
  MR_Word * mdb__declarative_execution__Map_8);

static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0(
  MR_Integer mdb__declarative_execution__HldsNum_5,
  MR_Integer mdb__declarative_execution__ProgVis_6,
  MR_Word mdb__declarative_execution__Args_7,
  MR_Word * mdb__declarative_execution__HeadVar__4_4);

static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_value_5_p_0(
  MR_Integer mdb__declarative_execution__HldsNum_6,
  MR_Integer mdb__declarative_execution__ProgVis_7,
  MR_Word mdb__declarative_execution__Val_8,
  MR_Word mdb__declarative_execution__Args_9,
  MR_Word * mdb__declarative_execution__HeadVar__5_5);

static MR_Word MR_CALL 
mdb__declarative_execution__init_trace_atom_args_0_f_0(void);

static void MR_CALL 
mdb__declarative_execution__null_trace_node_id_1_p_0(
  MR_Word * mdb__declarative_execution__Id_1);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_fail_node_3_f_0(
  MR_Word mdb__declarative_execution__Preceding_5,
  MR_Word mdb__declarative_execution__Neg_6,
  MR_Box mdb__declarative_execution__Label_7);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_succ_node_3_f_0(
  MR_Word mdb__declarative_execution__Preceding_5,
  MR_Word mdb__declarative_execution__Neg_6,
  MR_Box mdb__declarative_execution__Label_7);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_node_2_f_0(
  MR_Word mdb__declarative_execution__Preceding_4,
  MR_Box mdb__declarative_execution__Label_5);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_else_node_3_f_0(
  MR_Word mdb__declarative_execution__Preceding_5,
  MR_Word mdb__declarative_execution__Cond_6,
  MR_Box mdb__declarative_execution__Label_7);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_then_node_3_f_0(
  MR_Word mdb__declarative_execution__Preceding_5,
  MR_Word mdb__declarative_execution__Cond_6,
  MR_Box mdb__declarative_execution__Label_7);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_cond_node_2_f_0(
  MR_Word mdb__declarative_execution__Preceding_4,
  MR_Box mdb__declarative_execution__Label_5);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_later_disj_node_4_f_0(
  MR_Word mdb__declarative_execution__Store_6,
  MR_Word mdb__declarative_execution__Preceding_7,
  MR_Box mdb__declarative_execution__Label_8,
  MR_Word mdb__declarative_execution__PrevDisj_9);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_first_disj_node_2_f_0(
  MR_Word mdb__declarative_execution__Preceding_4,
  MR_Box mdb__declarative_execution__Label_5);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_switch_node_2_f_0(
  MR_Word mdb__declarative_execution__Preceding_4,
  MR_Box mdb__declarative_execution__Label_5);

static void MR_CALL 
mdb__declarative_execution__construct_excp_node_8_p_0(
  MR_Word mdb__declarative_execution__Preceding_9,
  MR_Word mdb__declarative_execution__Call_10,
  MR_Word mdb__declarative_execution__MaybeRedo_11,
  MR_Word mdb__declarative_execution__Exception_12,
  MR_Integer mdb__declarative_execution__EventNo_13,
  MR_Box mdb__declarative_execution__Label_14,
  MR_Integer mdb__declarative_execution__Suspicion_15,
  MR_Word * mdb__declarative_execution__Excp_16);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_fail_node_6_f_0(
  MR_Word mdb__declarative_execution__Preceding_8,
  MR_Word mdb__declarative_execution__Call_9,
  MR_Word mdb__declarative_execution__Redo_10,
  MR_Integer mdb__declarative_execution__EventNo_11,
  MR_Box mdb__declarative_execution__Label_12,
  MR_Integer mdb__declarative_execution__Suspicion_13);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_redo_node_5_f_0(
  MR_Word mdb__declarative_execution__Preceding_7,
  MR_Word mdb__declarative_execution__Exit_8,
  MR_Integer mdb__declarative_execution__Event_9,
  MR_Box mdb__declarative_execution__Label_10,
  MR_Integer mdb__declarative_execution__Suspicion_11);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_exit_node_8_f_0(
  MR_Word mdb__declarative_execution__Preceding_10,
  MR_Word mdb__declarative_execution__Call_11,
  MR_Word mdb__declarative_execution__MaybeRedo_12,
  MR_Word mdb__declarative_execution__AtomArgs_13,
  MR_Integer mdb__declarative_execution__EventNo_14,
  MR_Box mdb__declarative_execution__Label_15,
  MR_Integer mdb__declarative_execution__IoSeqNum_16,
  MR_Integer mdb__declarative_execution__Suspicion_17);

static MR_Word MR_CALL 
mdb__declarative_execution__make_no_maybe_label_0_f_0(void);

static MR_Word MR_CALL 
mdb__declarative_execution__make_yes_maybe_label_1_f_0(
  MR_Box mdb__declarative_execution__Label_3);

static MR_Word MR_CALL 
mdb__declarative_execution__construct_call_node_9_f_0(
  MR_Word mdb__declarative_execution__Preceding_11,
  MR_Word mdb__declarative_execution__AtomArgs_12,
  MR_Integer mdb__declarative_execution__SeqNo_13,
  MR_Integer mdb__declarative_execution__EventNo_14,
  MR_Word mdb__declarative_execution__AtMaxDepth_15,
  MR_Word mdb__declarative_execution__MaybeReturnLabel_16,
  MR_Box mdb__declarative_execution__Label_17,
  MR_Integer mdb__declarative_execution__IoSeqNum_18,
  MR_Integer mdb__declarative_execution__Suspicion_19);

static void MR_CALL 
mdb__declarative_execution__print_trace_node_4_p_0(
  MR_Word mdb__declarative_execution__OutStr_5,
  MR_Word mdb__declarative_execution__Node_6);

static MR_Word MR_CALL 
mdb__declarative_execution__find_prev_contour_store_2_f_0(
  MR_Word mdb__declarative_execution__Store_4,
  MR_Word mdb__declarative_execution__Id_5);

static MR_Word MR_CALL 
mdb__declarative_execution__step_left_in_contour_store_2_f_0(
  MR_Word mdb__declarative_execution__Store_4,
  MR_Word mdb__declarative_execution__Node_5);

static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_first_disj_2_p_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word * mdb__declarative_execution__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_call_3_p_0(
  MR_Word mdb__declarative_execution__S_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word * mdb__declarative_execution__Call_3);

static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_seqno_3_p_0(
  MR_Word mdb__declarative_execution__S_4,
  MR_Word mdb__declarative_execution__Node_5,
  MR_Integer * mdb__declarative_execution__SeqNo_6);

static MR_String MR_CALL 
mdb__declarative_execution__trace_node_path_1_f_0(
  MR_Word mdb__declarative_execution__Node_3);

static MR_Word MR_CALL 
mdb__declarative_execution__trace_node_port_1_f_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1);

static MR_Word MR_CALL 
mdb__declarative_execution__neg_node_set_status_2_f_0(
  MR_Word mdb__declarative_execution__Neg0_4,
  MR_Word mdb__declarative_execution__Status_5);

static MR_Word MR_CALL 
mdb__declarative_execution__cond_node_set_status_2_f_0(
  MR_Word mdb__declarative_execution__Cond0_4,
  MR_Word mdb__declarative_execution__Status_5);

static MR_Integer MR_CALL 
mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0(
  MR_Word mdb__declarative_execution__Call_3);

static MR_Word MR_CALL 
mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0(
  MR_Word mdb__declarative_execution__Call0_4,
  MR_Integer mdb__declarative_execution__IdealDepth_5);

static MR_Word MR_CALL 
mdb__declarative_execution__call_node_set_last_interface_2_f_0(
  MR_Word mdb__declarative_execution__Call0_4,
  MR_Word mdb__declarative_execution__Last_5);

static MR_Word MR_CALL 
mdb__declarative_execution__call_node_get_last_interface_1_f_0(
  MR_Word mdb__declarative_execution__Call_3);

static MR_bool MR_CALL 
mdb__declarative_execution__search_trace_node_store_3_p_0(
  MR_Word mdb__declarative_execution___Store_1,
  MR_Word mdb__declarative_execution__Id_2,
  MR_Word * mdb__declarative_execution__Node_3);

static MR_Box MR_CALL 
mdb__declarative_execution__step_over_redo_or_call_3_f_0(
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_24,
  MR_Box mdb__declarative_execution__Store_5,
  MR_Box mdb__declarative_execution__Call_6,
  MR_Box mdb__declarative_execution__MaybeRedo_7);

static void MR_CALL 
mdb__declarative_execution__find_prev_contour_3_p_1(
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67,
  MR_Box mdb__declarative_execution__Store_4,
  MR_Word mdb__declarative_execution__Node_5,
  MR_Box * mdb__declarative_execution__OnContour_6);

static void MR_CALL 
mdb__declarative_execution__cache_proc_defn_rep_2_p_0(
  MR_Box mdb__declarative_execution__ProcLayout_1,
  MR_Word mdb__declarative_execution__ProcDefnRep_2);

static MR_bool MR_CALL 
mdb__declarative_execution__have_cached_proc_defn_rep_2_p_0(
  MR_Box mdb__declarative_execution__ProcLayout_1,
  MR_Word * mdb__declarative_execution__ProcDefnRep_2);

static MR_bool MR_CALL 
mdb__declarative_execution__call_node_bytecode_layout_2_p_0(
  MR_Box mdb__declarative_execution__CallLabelLayout_1,
  MR_Box * mdb__declarative_execution__ProcLayout_2);

static MR_bool MR_CALL 
mdb__declarative_execution__select_arg_at_pos_3_p_0_1(
  MR_Box mdb__declarative_execution__closure_arg,
  MR_Box mdb__declarative_execution__wrapper_arg_1);

static MR_bool MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0_1(
  MR_Box mdb__declarative_execution__closure_arg,
  MR_Box mdb__declarative_execution__wrapper_arg_1);


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
    ((MR_Box) ((MR_String) "step_left_in_contour")),
    ((MR_Box) ((MR_String) "unexpected CALL node"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "step_left_in_contour")),
    ((MR_Box) ((MR_String) "failed COND node"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "step_left_in_contour")),
    ((MR_Box) ((MR_String) "unexpected NEGE node"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "step_in_stratum")),
    ((MR_Box) ((MR_String) "unexpected CALL node"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "step_in_stratum")),
    ((MR_Box) ((MR_String) "failed COND node"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "step_in_stratum")),
    ((MR_Box) ((MR_String) "unexpected NEGE node"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "det_trace_node_from_id")),
    ((MR_Box) ((MR_String) "NULL node id"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "call_node_from_id")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "maybe_redo_node_from_id")),
    ((MR_Box) ((MR_String) "not a REDO node or NULL"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "exit_node_from_id")),
    ((MR_Box) ((MR_String) "not an EXIT node"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "cond_node_from_id")),
    ((MR_Box) ((MR_String) "not a COND node"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "neg_node_from_id")),
    ((MR_Box) ((MR_String) "not a NEG node"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "first_disj_node_from_id")),
    ((MR_Box) ((MR_String) "not a first DISJ node"))
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
    ((MR_Box) ((MR_String) "call_node_get_last_interface")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "call_node_set_last_interface")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "call_node_update_implicit_tree_info")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "get_implicit_tree_max_depth")),
    ((MR_Box) ((MR_String) "not at max depth"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "get_implicit_tree_max_depth")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "cond_node_set_status")),
    ((MR_Box) ((MR_String) "not a COND node"))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "neg_node_set_status")),
    ((MR_Box) ((MR_String) "not a NEGE node"))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "find_prev_contour")),
    ((MR_Box) ((MR_String) "reached CALL node"))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "find_prev_contour")),
    ((MR_Box) ((MR_String) "reached COND node"))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "find_prev_contour")),
    ((MR_Box) ((MR_String) "reached NEGE node"))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "head_var_num_to_arg_num")),
    ((MR_Box) ((MR_String) "nonexistent head_var_num"))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "arg_num_to_head_var_num")),
    ((MR_Box) ((MR_String) "nonexistent arg num"))
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

#line 900 "declarative_execution.m"
MR_Word 
MR_DD_call_node_get_last_interface(
  MR_Word mdb__declarative_execution__Call_3)
#line 900 "declarative_execution.m"
{
#line 900 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_get_last_interface_1_f_0((MR_Word) mdb__declarative_execution__Call_3);
	return ret_value;
}

#line 914 "declarative_execution.m"
MR_Word 
MR_DD_call_node_set_last_interface(
  MR_Word mdb__declarative_execution__Call0_4,
  MR_Word mdb__declarative_execution__Last_5)
#line 914 "declarative_execution.m"
{
#line 914 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_set_last_interface_2_f_0((MR_Word) mdb__declarative_execution__Call0_4, (MR_Word) mdb__declarative_execution__Last_5);
	return ret_value;
}

#line 931 "declarative_execution.m"
MR_Word 
MR_DD_call_node_update_implicit_tree_info(
  MR_Word mdb__declarative_execution__Call0_4,
  MR_Integer mdb__declarative_execution__IdealDepth_5)
#line 931 "declarative_execution.m"
{
#line 931 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0((MR_Word) mdb__declarative_execution__Call0_4, (MR_Integer) mdb__declarative_execution__IdealDepth_5);
	return ret_value;
}

#line 948 "declarative_execution.m"
MR_Integer 
MR_DD_get_implicit_tree_ideal_depth(
  MR_Word mdb__declarative_execution__Call_3)
#line 948 "declarative_execution.m"
{
#line 948 "declarative_execution.m"
	MR_Integer ret_value;
	ret_value = (MR_Integer)mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0((MR_Word) mdb__declarative_execution__Call_3);
	return ret_value;
}

#line 968 "declarative_execution.m"
MR_Word 
MR_DD_cond_node_set_status(
  MR_Word mdb__declarative_execution__Cond0_4,
  MR_Word mdb__declarative_execution__Status_5)
#line 968 "declarative_execution.m"
{
#line 968 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__cond_node_set_status_2_f_0((MR_Word) mdb__declarative_execution__Cond0_4, (MR_Word) mdb__declarative_execution__Status_5);
	return ret_value;
}

#line 984 "declarative_execution.m"
MR_Word 
MR_DD_neg_node_set_status(
  MR_Word mdb__declarative_execution__Neg0_4,
  MR_Word mdb__declarative_execution__Status_5)
#line 984 "declarative_execution.m"
{
#line 984 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__neg_node_set_status_2_f_0((MR_Word) mdb__declarative_execution__Neg0_4, (MR_Word) mdb__declarative_execution__Status_5);
	return ret_value;
}

#line 1008 "declarative_execution.m"
MR_Word 
MR_DD_trace_node_port(
  MR_Word mdb__declarative_execution__HeadVar__1_1)
#line 1008 "declarative_execution.m"
{
#line 1008 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__trace_node_port_1_f_0((MR_Word) mdb__declarative_execution__HeadVar__1_1);
	return ret_value;
}

#line 1027 "declarative_execution.m"
MR_String 
MR_DD_trace_node_path(
  MR_Word mdb__declarative_execution__Node_3)
#line 1027 "declarative_execution.m"
{
#line 1027 "declarative_execution.m"
	MR_String ret_value;
	ret_value = (MR_String)mdb__declarative_execution__trace_node_path_1_f_0((MR_Word) mdb__declarative_execution__Node_3);
	return ret_value;
}

#line 1054 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_seqno(
  MR_Word mdb__declarative_execution__S_4,
  MR_Word mdb__declarative_execution__Node_5,
  MR_Integer * mdb__declarative_execution__SeqNo_6)
#line 1054 "declarative_execution.m"
{
#line 1054 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_seqno_3_p_0((MR_Word) mdb__declarative_execution__S_4, (MR_Word) mdb__declarative_execution__Node_5, (MR_Integer *) mdb__declarative_execution__SeqNo_6);
	return ret_value;
}

#line 1069 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_call(
  MR_Word mdb__declarative_execution__S_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word * mdb__declarative_execution__Call_3)
#line 1069 "declarative_execution.m"
{
#line 1069 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_call_3_p_0((MR_Word) mdb__declarative_execution__S_1, (MR_Word) mdb__declarative_execution__HeadVar__2_2, (MR_Word *) mdb__declarative_execution__Call_3);
	return ret_value;
}

#line 1082 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_first_disj(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word * mdb__declarative_execution__HeadVar__2_2)
#line 1082 "declarative_execution.m"
{
#line 1082 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_first_disj_2_p_0((MR_Word) mdb__declarative_execution__HeadVar__1_1, (MR_Word *) mdb__declarative_execution__HeadVar__2_2);
	return ret_value;
}

#line 1094 "declarative_execution.m"
MR_Word 
MR_DD_step_left_in_contour(
  MR_Word mdb__declarative_execution__Store_4,
  MR_Word mdb__declarative_execution__Node_5)
#line 1094 "declarative_execution.m"
{
#line 1094 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__step_left_in_contour_store_2_f_0((MR_Word) mdb__declarative_execution__Store_4, (MR_Word) mdb__declarative_execution__Node_5);
	return ret_value;
}

#line 1107 "declarative_execution.m"
MR_Word 
MR_DD_find_prev_contour(
  MR_Word mdb__declarative_execution__Store_4,
  MR_Word mdb__declarative_execution__Id_5)
#line 1107 "declarative_execution.m"
{
#line 1107 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__find_prev_contour_store_2_f_0((MR_Word) mdb__declarative_execution__Store_4, (MR_Word) mdb__declarative_execution__Id_5);
	return ret_value;
}

#line 1124 "declarative_execution.m"
void 
MR_DD_print_trace_node(
  MR_Word mdb__declarative_execution__OutStr_5,
  MR_Word mdb__declarative_execution__Node_6)
#line 1124 "declarative_execution.m"
{
#line 1124 "declarative_execution.m"
	mdb__declarative_execution__print_trace_node_4_p_0((MR_Word) mdb__declarative_execution__OutStr_5, (MR_Word) mdb__declarative_execution__Node_6);
}

#line 1140 "declarative_execution.m"
MR_Word 
MR_DD_construct_call_node(
  MR_Word mdb__declarative_execution__Preceding_11,
  MR_Word mdb__declarative_execution__AtomArgs_12,
  MR_Integer mdb__declarative_execution__SeqNo_13,
  MR_Integer mdb__declarative_execution__EventNo_14,
  MR_Word mdb__declarative_execution__AtMaxDepth_15,
  MR_Word mdb__declarative_execution__MaybeReturnLabel_16,
  const MR_LabelLayout * mdb__declarative_execution__Label_17,
  MR_Integer mdb__declarative_execution__IoSeqNum_18,
  MR_Integer mdb__declarative_execution__Suspicion_19)
#line 1140 "declarative_execution.m"
{
#line 1140 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_17;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_17, mdb__declarative_execution__boxed_Label_17);
	ret_value = (MR_Word)mdb__declarative_execution__construct_call_node_9_f_0((MR_Word) mdb__declarative_execution__Preceding_11, (MR_Word) mdb__declarative_execution__AtomArgs_12, (MR_Integer) mdb__declarative_execution__SeqNo_13, (MR_Integer) mdb__declarative_execution__EventNo_14, (MR_Word) mdb__declarative_execution__AtMaxDepth_15, (MR_Word) mdb__declarative_execution__MaybeReturnLabel_16, mdb__declarative_execution__boxed_Label_17, (MR_Integer) mdb__declarative_execution__IoSeqNum_18, (MR_Integer) mdb__declarative_execution__Suspicion_19);
	return ret_value;
}

#line 1161 "declarative_execution.m"
MR_Word 
MR_DD_make_yes_maybe_label(
  const MR_LabelLayout * mdb__declarative_execution__Label_3)
#line 1161 "declarative_execution.m"
{
#line 1161 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_3;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_3, mdb__declarative_execution__boxed_Label_3);
	ret_value = (MR_Word)mdb__declarative_execution__make_yes_maybe_label_1_f_0(mdb__declarative_execution__boxed_Label_3);
	return ret_value;
}

#line 1167 "declarative_execution.m"
MR_Word 
MR_DD_make_no_maybe_label(void)
#line 1167 "declarative_execution.m"
{
#line 1167 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__make_no_maybe_label_0_f_0();
	return ret_value;
}

#line 1175 "declarative_execution.m"
MR_Word 
MR_DD_construct_exit_node(
  MR_Word mdb__declarative_execution__Preceding_10,
  MR_Word mdb__declarative_execution__Call_11,
  MR_Word mdb__declarative_execution__MaybeRedo_12,
  MR_Word mdb__declarative_execution__AtomArgs_13,
  MR_Integer mdb__declarative_execution__EventNo_14,
  const MR_LabelLayout * mdb__declarative_execution__Label_15,
  MR_Integer mdb__declarative_execution__IoSeqNum_16,
  MR_Integer mdb__declarative_execution__Suspicion_17)
#line 1175 "declarative_execution.m"
{
#line 1175 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_15;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_15, mdb__declarative_execution__boxed_Label_15);
	ret_value = (MR_Word)mdb__declarative_execution__construct_exit_node_8_f_0((MR_Word) mdb__declarative_execution__Preceding_10, (MR_Word) mdb__declarative_execution__Call_11, (MR_Word) mdb__declarative_execution__MaybeRedo_12, (MR_Word) mdb__declarative_execution__AtomArgs_13, (MR_Integer) mdb__declarative_execution__EventNo_14, mdb__declarative_execution__boxed_Label_15, (MR_Integer) mdb__declarative_execution__IoSeqNum_16, (MR_Integer) mdb__declarative_execution__Suspicion_17);
	return ret_value;
}

#line 1186 "declarative_execution.m"
MR_Word 
MR_DD_construct_redo_node(
  MR_Word mdb__declarative_execution__Preceding_7,
  MR_Word mdb__declarative_execution__Exit_8,
  MR_Integer mdb__declarative_execution__Event_9,
  const MR_LabelLayout * mdb__declarative_execution__Label_10,
  MR_Integer mdb__declarative_execution__Suspicion_11)
#line 1186 "declarative_execution.m"
{
#line 1186 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_10;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_10, mdb__declarative_execution__boxed_Label_10);
	ret_value = (MR_Word)mdb__declarative_execution__construct_redo_node_5_f_0((MR_Word) mdb__declarative_execution__Preceding_7, (MR_Word) mdb__declarative_execution__Exit_8, (MR_Integer) mdb__declarative_execution__Event_9, mdb__declarative_execution__boxed_Label_10, (MR_Integer) mdb__declarative_execution__Suspicion_11);
	return ret_value;
}

#line 1196 "declarative_execution.m"
MR_Word 
MR_DD_construct_fail_node(
  MR_Word mdb__declarative_execution__Preceding_8,
  MR_Word mdb__declarative_execution__Call_9,
  MR_Word mdb__declarative_execution__Redo_10,
  MR_Integer mdb__declarative_execution__EventNo_11,
  const MR_LabelLayout * mdb__declarative_execution__Label_12,
  MR_Integer mdb__declarative_execution__Suspicion_13)
#line 1196 "declarative_execution.m"
{
#line 1196 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_12;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_12, mdb__declarative_execution__boxed_Label_12);
	ret_value = (MR_Word)mdb__declarative_execution__construct_fail_node_6_f_0((MR_Word) mdb__declarative_execution__Preceding_8, (MR_Word) mdb__declarative_execution__Call_9, (MR_Word) mdb__declarative_execution__Redo_10, (MR_Integer) mdb__declarative_execution__EventNo_11, mdb__declarative_execution__boxed_Label_12, (MR_Integer) mdb__declarative_execution__Suspicion_13);
	return ret_value;
}

#line 1206 "declarative_execution.m"
void 
MR_DD_construct_excp_node(
  MR_Word mdb__declarative_execution__Preceding_9,
  MR_Word mdb__declarative_execution__Call_10,
  MR_Word mdb__declarative_execution__MaybeRedo_11,
  MR_Word mdb__declarative_execution__Exception_12,
  MR_Integer mdb__declarative_execution__EventNo_13,
  const MR_LabelLayout * mdb__declarative_execution__Label_14,
  MR_Integer mdb__declarative_execution__Suspicion_15,
  MR_Word * mdb__declarative_execution__Excp_16)
#line 1206 "declarative_execution.m"
{
#line 1206 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_14;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_14, mdb__declarative_execution__boxed_Label_14);
	mdb__declarative_execution__construct_excp_node_8_p_0((MR_Word) mdb__declarative_execution__Preceding_9, (MR_Word) mdb__declarative_execution__Call_10, (MR_Word) mdb__declarative_execution__MaybeRedo_11, (MR_Word) mdb__declarative_execution__Exception_12, (MR_Integer) mdb__declarative_execution__EventNo_13, mdb__declarative_execution__boxed_Label_14, (MR_Integer) mdb__declarative_execution__Suspicion_15, (MR_Word *) mdb__declarative_execution__Excp_16);
}

#line 1218 "declarative_execution.m"
MR_Word 
MR_DD_construct_switch_node(
  MR_Word mdb__declarative_execution__Preceding_4,
  const MR_LabelLayout * mdb__declarative_execution__Label_5)
#line 1218 "declarative_execution.m"
{
#line 1218 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_5, mdb__declarative_execution__boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_switch_node_2_f_0((MR_Word) mdb__declarative_execution__Preceding_4, mdb__declarative_execution__boxed_Label_5);
	return ret_value;
}

#line 1226 "declarative_execution.m"
MR_Word 
MR_DD_construct_first_disj_node(
  MR_Word mdb__declarative_execution__Preceding_4,
  const MR_LabelLayout * mdb__declarative_execution__Label_5)
#line 1226 "declarative_execution.m"
{
#line 1226 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_5, mdb__declarative_execution__boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_first_disj_node_2_f_0((MR_Word) mdb__declarative_execution__Preceding_4, mdb__declarative_execution__boxed_Label_5);
	return ret_value;
}

#line 1235 "declarative_execution.m"
MR_Word 
MR_DD_construct_later_disj_node(
  MR_Word mdb__declarative_execution__Store_6,
  MR_Word mdb__declarative_execution__Preceding_7,
  const MR_LabelLayout * mdb__declarative_execution__Label_8,
  MR_Word mdb__declarative_execution__PrevDisj_9)
#line 1235 "declarative_execution.m"
{
#line 1235 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_8;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_8, mdb__declarative_execution__boxed_Label_8);
	ret_value = (MR_Word)mdb__declarative_execution__construct_later_disj_node_4_f_0((MR_Word) mdb__declarative_execution__Store_6, (MR_Word) mdb__declarative_execution__Preceding_7, mdb__declarative_execution__boxed_Label_8, (MR_Word) mdb__declarative_execution__PrevDisj_9);
	return ret_value;
}

#line 1251 "declarative_execution.m"
MR_Word 
MR_DD_construct_cond_node(
  MR_Word mdb__declarative_execution__Preceding_4,
  const MR_LabelLayout * mdb__declarative_execution__Label_5)
#line 1251 "declarative_execution.m"
{
#line 1251 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_5, mdb__declarative_execution__boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_cond_node_2_f_0((MR_Word) mdb__declarative_execution__Preceding_4, mdb__declarative_execution__boxed_Label_5);
	return ret_value;
}

#line 1259 "declarative_execution.m"
MR_Word 
MR_DD_construct_then_node(
  MR_Word mdb__declarative_execution__Preceding_5,
  MR_Word mdb__declarative_execution__Cond_6,
  const MR_LabelLayout * mdb__declarative_execution__Label_7)
#line 1259 "declarative_execution.m"
{
#line 1259 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_7, mdb__declarative_execution__boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_then_node_3_f_0((MR_Word) mdb__declarative_execution__Preceding_5, (MR_Word) mdb__declarative_execution__Cond_6, mdb__declarative_execution__boxed_Label_7);
	return ret_value;
}

#line 1268 "declarative_execution.m"
MR_Word 
MR_DD_construct_else_node(
  MR_Word mdb__declarative_execution__Preceding_5,
  MR_Word mdb__declarative_execution__Cond_6,
  const MR_LabelLayout * mdb__declarative_execution__Label_7)
#line 1268 "declarative_execution.m"
{
#line 1268 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_7, mdb__declarative_execution__boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_else_node_3_f_0((MR_Word) mdb__declarative_execution__Preceding_5, (MR_Word) mdb__declarative_execution__Cond_6, mdb__declarative_execution__boxed_Label_7);
	return ret_value;
}

#line 1277 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_node(
  MR_Word mdb__declarative_execution__Preceding_4,
  const MR_LabelLayout * mdb__declarative_execution__Label_5)
#line 1277 "declarative_execution.m"
{
#line 1277 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_5, mdb__declarative_execution__boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_node_2_f_0((MR_Word) mdb__declarative_execution__Preceding_4, mdb__declarative_execution__boxed_Label_5);
	return ret_value;
}

#line 1285 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_succ_node(
  MR_Word mdb__declarative_execution__Preceding_5,
  MR_Word mdb__declarative_execution__Neg_6,
  const MR_LabelLayout * mdb__declarative_execution__Label_7)
#line 1285 "declarative_execution.m"
{
#line 1285 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_7, mdb__declarative_execution__boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_succ_node_3_f_0((MR_Word) mdb__declarative_execution__Preceding_5, (MR_Word) mdb__declarative_execution__Neg_6, mdb__declarative_execution__boxed_Label_7);
	return ret_value;
}

#line 1294 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_fail_node(
  MR_Word mdb__declarative_execution__Preceding_5,
  MR_Word mdb__declarative_execution__Neg_6,
  const MR_LabelLayout * mdb__declarative_execution__Label_7)
#line 1294 "declarative_execution.m"
{
#line 1294 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_7, mdb__declarative_execution__boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_fail_node_3_f_0((MR_Word) mdb__declarative_execution__Preceding_5, (MR_Word) mdb__declarative_execution__Neg_6, mdb__declarative_execution__boxed_Label_7);
	return ret_value;
}

#line 1315 "declarative_execution.m"
MR_Word 
MR_DD_init_trace_atom_args(void)
#line 1315 "declarative_execution.m"
{
#line 1315 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__init_trace_atom_args_0_f_0();
	return ret_value;
}

#line 1328 "declarative_execution.m"
void 
MR_DD_add_trace_atom_arg_value(
  MR_Integer mdb__declarative_execution__HldsNum_6,
  MR_Integer mdb__declarative_execution__ProgVis_7,
  MR_Word mdb__declarative_execution__Val_8,
  MR_Word mdb__declarative_execution__Args_9,
  MR_Word * mdb__declarative_execution__HeadVar__5_5)
#line 1328 "declarative_execution.m"
{
#line 1328 "declarative_execution.m"
	mdb__declarative_execution__add_trace_atom_arg_value_5_p_0((MR_Integer) mdb__declarative_execution__HldsNum_6, (MR_Integer) mdb__declarative_execution__ProgVis_7, (MR_Word) mdb__declarative_execution__Val_8, (MR_Word) mdb__declarative_execution__Args_9, (MR_Word *) mdb__declarative_execution__HeadVar__5_5);
}

#line 1340 "declarative_execution.m"
void 
MR_DD_add_trace_atom_arg_no_value(
  MR_Integer mdb__declarative_execution__HldsNum_5,
  MR_Integer mdb__declarative_execution__ProgVis_6,
  MR_Word mdb__declarative_execution__Args_7,
  MR_Word * mdb__declarative_execution__HeadVar__4_4)
#line 1340 "declarative_execution.m"
{
#line 1340 "declarative_execution.m"
	mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0((MR_Integer) mdb__declarative_execution__HldsNum_5, (MR_Integer) mdb__declarative_execution__ProgVis_6, (MR_Word) mdb__declarative_execution__Args_7, (MR_Word *) mdb__declarative_execution__HeadVar__4_4);
}

#line 1404 "declarative_execution.m"
void 
MR_DD_save_trace(
  MR_Word mdb__declarative_execution__Stream_6,
  MR_Word mdb__declarative_execution__Store_7,
  MR_Word mdb__declarative_execution__NodeId_8)
#line 1404 "declarative_execution.m"
{
#line 1404 "declarative_execution.m"
	mdb__declarative_execution__save_trace_node_store_5_p_0((MR_Word) mdb__declarative_execution__Stream_6, (MR_Word) mdb__declarative_execution__Store_7, (MR_Word) mdb__declarative_execution__NodeId_8);
}


const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_event_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_implicit_tree_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_0_0,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_0_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0
};

static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_arg_0_0,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_arg_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_arg_0_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0
};

static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_arg_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_0,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_1,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_1,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_2,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_2,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_3,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_3,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_4,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_4,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_5,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_5,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_6,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_6,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_7,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_7,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_8,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_8,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 9,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_9,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_9,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 10,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_10,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_10,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 11,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_11,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_11,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 12,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_12,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_12,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 13,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_13,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_13,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_2
  },
  {
    (MR_Integer) 11,
    mercury__private_builtin__MR_SECTAG_REMOTE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_store_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
    mercury__private_builtin__MR_PREDICATE
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
mdb__declarative_execution____Unify____event_number_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____event_number_0_0(((MR_Integer) mdb__declarative_execution__wrapper_arg_1), ((MR_Integer) mdb__declarative_execution__wrapper_arg_2));
    }
    return mdb__declarative_execution__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____event_number_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

    {
      mdb__declarative_execution____Compare____event_number_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Integer) mdb__declarative_execution__wrapper_arg_2), ((MR_Integer) mdb__declarative_execution__wrapper_arg_3));
    }
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____goal_status_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____goal_status_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
    return mdb__declarative_execution__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____goal_status_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

    {
      mdb__declarative_execution____Compare____goal_status_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____implicit_tree_info_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____implicit_tree_info_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
    return mdb__declarative_execution__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____implicit_tree_info_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

    {
      mdb__declarative_execution____Compare____implicit_tree_info_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____sequence_number_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____sequence_number_0_0(((MR_Integer) mdb__declarative_execution__wrapper_arg_1), ((MR_Integer) mdb__declarative_execution__wrapper_arg_2));
    }
    return mdb__declarative_execution__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____sequence_number_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

    {
      mdb__declarative_execution____Compare____sequence_number_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Integer) mdb__declarative_execution__wrapper_arg_2), ((MR_Integer) mdb__declarative_execution__wrapper_arg_3));
    }
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____suspicion_accumulator_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____suspicion_accumulator_0_0(((MR_Integer) mdb__declarative_execution__wrapper_arg_1), ((MR_Integer) mdb__declarative_execution__wrapper_arg_2));
    }
    return mdb__declarative_execution__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____suspicion_accumulator_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

    {
      mdb__declarative_execution____Compare____suspicion_accumulator_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Integer) mdb__declarative_execution__wrapper_arg_2), ((MR_Integer) mdb__declarative_execution__wrapper_arg_3));
    }
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_atom_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
    return mdb__declarative_execution__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

    {
      mdb__declarative_execution____Compare____trace_atom_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_arg_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_atom_arg_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
    return mdb__declarative_execution__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_arg_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

    {
      mdb__declarative_execution____Compare____trace_atom_arg_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_1_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_1_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
    return mdb__declarative_execution__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_1_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box * mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3,
  MR_Box mdb__declarative_execution__wrapper_arg_4)
{
  {
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

    {
      mdb__declarative_execution____Compare____trace_node_1_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), &mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_3), ((MR_Word) mdb__declarative_execution__wrapper_arg_4));
    }
    *mdb__declarative_execution__wrapper_arg_2 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_id_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_id_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
    return mdb__declarative_execution__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_id_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

    {
      mdb__declarative_execution____Compare____trace_node_id_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_key_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_key_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
    return mdb__declarative_execution__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_key_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

    {
      mdb__declarative_execution____Compare____trace_node_key_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_map_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_map_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
    return mdb__declarative_execution__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_map_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

    {
      mdb__declarative_execution____Compare____trace_node_map_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_store_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_store_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
    return mdb__declarative_execution__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_store_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

    {
      mdb__declarative_execution____Compare____trace_node_store_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution____Unify____which_headvars_0_0_10001(
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____which_headvars_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
    return mdb__declarative_execution__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution____Compare____which_headvars_0_0_10001(
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box mdb__declarative_execution__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

    {
      mdb__declarative_execution____Compare____which_headvars_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
  MR_Box mdb__declarative_execution__closure_arg,
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box * mdb__declarative_execution__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Box mdb__declarative_execution__closure;
    MR_Word mdb__declarative_execution__conv0_HeadVar__3_3;

    mdb__declarative_execution__closure = mdb__declarative_execution__closure_arg;
    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2), &mdb__declarative_execution__conv0_HeadVar__3_3);
    }
    if (mdb__declarative_execution__succeeded)
      {
        *mdb__declarative_execution__wrapper_arg_3 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__3_3));
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    return mdb__declarative_execution__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
  MR_Box mdb__declarative_execution__closure_arg,
  MR_Box mdb__declarative_execution__wrapper_arg_1,
  MR_Box mdb__declarative_execution__wrapper_arg_2,
  MR_Box * mdb__declarative_execution__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Box mdb__declarative_execution__closure;
    MR_Word mdb__declarative_execution__conv0_HeadVar__3_3;

    mdb__declarative_execution__closure = mdb__declarative_execution__closure_arg;
    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2), &mdb__declarative_execution__conv0_HeadVar__3_3);
    }
    if (mdb__declarative_execution__succeeded)
      {
        *mdb__declarative_execution__wrapper_arg_3 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__3_3));
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    return mdb__declarative_execution__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word * mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

{
#define MR_PROC_LABEL mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id =  mdb__declarative_execution__HeadVar__2_2 ;
		{

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mdb__declarative_execution__HeadVar__3_3  = Node;
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
    return mdb__declarative_execution__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word * mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__Map_6 = (MR_Word) mdb__declarative_execution__HeadVar__1_1;
    MR_Box mdb__declarative_execution__conv0_HeadVar__3_3;

    {
      mdb__declarative_execution__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0, (MR_Word) &mdb__declarative_execution_scalar_common_1[0], mdb__declarative_execution__Map_6, ((MR_Box) (mdb__declarative_execution__HeadVar__2_2)), &mdb__declarative_execution__conv0_HeadVar__3_3);
    }
    if (mdb__declarative_execution__succeeded)
      {
        *mdb__declarative_execution__HeadVar__3_3 = ((MR_Word) mdb__declarative_execution__conv0_HeadVar__3_3);
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____which_headvars_0_0(
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____which_headvars_0_0(
  MR_Word mdb__declarative_execution__HeadVar__2_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded = (mdb__declarative_execution__HeadVar__2_1 == mdb__declarative_execution__HeadVar__2_2);

    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_node_store_0_0(
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
    if (mdb__declarative_execution__succeeded)
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
        MR_Integer mdb__declarative_execution__V_5_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_store_0_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
    if (mdb__declarative_execution__succeeded)
      mdb__declarative_execution__succeeded = MR_TRUE;
    else
      {
        MR_Integer mdb__declarative_execution__V_3_3 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_3_3 == mdb__declarative_execution__V_4_4);
      }
    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_node_map_0_0(
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
    if (mdb__declarative_execution__succeeded)
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdb__declarative_execution__V_4_4 = (MR_Word) mdb__declarative_execution__HeadVar__2_2;
        MR_Word mdb__declarative_execution__V_5_5 = (MR_Word) mdb__declarative_execution__HeadVar__3_3;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[1], mdb__declarative_execution__HeadVar__1_1, ((MR_Box) (mdb__declarative_execution__V_4_4)), ((MR_Box) (mdb__declarative_execution__V_5_5)));
        }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_map_0_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
    if (mdb__declarative_execution__succeeded)
      mdb__declarative_execution__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__declarative_execution__V_3_3 = (MR_Word) mdb__declarative_execution__HeadVar__1_1;
        MR_Word mdb__declarative_execution__V_4_4 = (MR_Word) mdb__declarative_execution__HeadVar__2_2;

        {
          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[1], ((MR_Box) (mdb__declarative_execution__V_3_3)), ((MR_Box) (mdb__declarative_execution__V_4_4)));
        }
      }
    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_node_key_0_0(
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
    if (mdb__declarative_execution__succeeded)
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
        MR_Integer mdb__declarative_execution__V_5_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_key_0_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
    if (mdb__declarative_execution__succeeded)
      mdb__declarative_execution__succeeded = MR_TRUE;
    else
      {
        MR_Integer mdb__declarative_execution__V_3_3 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_3_3 == mdb__declarative_execution__V_4_4);
      }
    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_node_id_0_0(
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
    if (mdb__declarative_execution__succeeded)
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdb__declarative_execution__V_4_4 = (MR_Word) mdb__declarative_execution__HeadVar__2_2;
        MR_Word mdb__declarative_execution__V_5_5 = (MR_Word) mdb__declarative_execution__HeadVar__3_3;

        {
          mercury__builtin____Compare____c_pointer_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_id_0_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
    if (mdb__declarative_execution__succeeded)
      mdb__declarative_execution__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__declarative_execution__V_3_3 = (MR_Word) mdb__declarative_execution__HeadVar__1_1;
        MR_Word mdb__declarative_execution__V_4_4 = (MR_Word) mdb__declarative_execution__HeadVar__2_2;

        {
          mdb__declarative_execution__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdb__declarative_execution__V_3_3, mdb__declarative_execution__V_4_4);
        }
      }
    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_node_1_0(
  MR_Word mdb__declarative_execution__TypeInfo_for_R_1761,
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__CastX_1759 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
    MR_Integer mdb__declarative_execution__CastY_1760 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_1759 == mdb__declarative_execution__CastY_1760);
    if (mdb__declarative_execution__succeeded)
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mdb__declarative_execution__V_1796_1796 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 9)));
            MR_Integer mdb__declarative_execution__V_1797_1797 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 8)));
            MR_Box mdb__declarative_execution__V_1798_1798 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
            MR_Word mdb__declarative_execution__V_1799_1799 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
            MR_Word mdb__declarative_execution__V_1800_1800 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
            MR_Integer mdb__declarative_execution__V_1801_1801 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
            MR_Integer mdb__declarative_execution__V_1802_1802 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
            MR_Word mdb__declarative_execution__V_1803_1803 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
            MR_Box mdb__declarative_execution__V_1804_1804 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
            MR_Box mdb__declarative_execution__V_1805_1805 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box mdb__declarative_execution__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box mdb__declarative_execution__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
                  MR_Word mdb__declarative_execution__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Integer mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
                  MR_Word mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 5)));
                  MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 6)));
                  MR_Box mdb__declarative_execution__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 7)));
                  MR_Integer mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 8)));
                  MR_Integer mdb__declarative_execution__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 9)));
                  MR_Word mdb__declarative_execution__V_24_24;

                  {
                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_24_24, mdb__declarative_execution__V_1805_1805, mdb__declarative_execution__V_14_14);
                  }
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_24_24 == (MR_Integer) 0);
                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                  if (mdb__declarative_execution__succeeded)
                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_24_24;
                  else
                    {
                      MR_Word mdb__declarative_execution__V_25_25;

                      {
                        mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_25_25, mdb__declarative_execution__V_1804_1804, mdb__declarative_execution__V_15_15);
                      }
                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_25_25 == (MR_Integer) 0);
                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                      if (mdb__declarative_execution__succeeded)
                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_25_25;
                      else
                        {
                          MR_Word mdb__declarative_execution__V_26_26;

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[3], &mdb__declarative_execution__V_26_26, ((MR_Box) (mdb__declarative_execution__V_1803_1803)), ((MR_Box) (mdb__declarative_execution__V_16_16)));
                          }
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_26_26 == (MR_Integer) 0);
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                          if (mdb__declarative_execution__succeeded)
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_26_26;
                          else
                            {
                              MR_Word mdb__declarative_execution__V_27_27;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_27_27, mdb__declarative_execution__V_1802_1802, mdb__declarative_execution__V_17_17);
                              }
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_27_27 == (MR_Integer) 0);
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                              if (mdb__declarative_execution__succeeded)
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_27_27;
                              else
                                {
                                  MR_Word mdb__declarative_execution__V_28_28;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_28_28, mdb__declarative_execution__V_1801_1801, mdb__declarative_execution__V_18_18);
                                  }
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_28_28 == (MR_Integer) 0);
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                                  if (mdb__declarative_execution__succeeded)
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_28_28;
                                  else
                                    {
                                      MR_Word mdb__declarative_execution__V_29_29;

                                      {
                                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[1], &mdb__declarative_execution__V_29_29, ((MR_Box) (mdb__declarative_execution__V_1800_1800)), ((MR_Box) (mdb__declarative_execution__V_19_19)));
                                      }
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_29_29 == (MR_Integer) 0);
                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                                      if (mdb__declarative_execution__succeeded)
                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_29_29;
                                      else
                                        {
                                          MR_Word mdb__declarative_execution__V_30_30;

                                          {
                                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[5], &mdb__declarative_execution__V_30_30, ((MR_Box) (mdb__declarative_execution__V_1799_1799)), ((MR_Box) (mdb__declarative_execution__V_20_20)));
                                          }
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_30_30 == (MR_Integer) 0);
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                                          if (mdb__declarative_execution__succeeded)
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_30_30;
                                          else
                                            {
                                              MR_Word mdb__declarative_execution__V_31_31;

                                              {
                                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_31_31, mdb__declarative_execution__V_1798_1798, mdb__declarative_execution__V_21_21);
                                              }
                                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_31_31 == (MR_Integer) 0);
                                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                                              if (mdb__declarative_execution__succeeded)
                                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_31_31;
                                              else
                                                {
                                                  MR_Word mdb__declarative_execution__V_32_32;

                                                  {
                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_32_32, mdb__declarative_execution__V_1797_1797, mdb__declarative_execution__V_22_22);
                                                  }
                                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_32_32 == (MR_Integer) 0);
                                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                                                  if (mdb__declarative_execution__succeeded)
                                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_32_32;
                                                  else
                                                    {
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1796_1796, mdb__declarative_execution__V_23_23);
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
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 9:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 10:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mdb__declarative_execution__V_1819_1819 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
            MR_Integer mdb__declarative_execution__V_1820_1820 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
            MR_Box mdb__declarative_execution__V_1821_1821 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
            MR_Integer mdb__declarative_execution__V_1822_1822 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
            MR_Word mdb__declarative_execution__V_1823_1823 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
            MR_Box mdb__declarative_execution__V_1824_1824 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
            MR_Box mdb__declarative_execution__V_1825_1825 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
            MR_Box mdb__declarative_execution__V_1826_1826 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box mdb__declarative_execution__V_240_240 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box mdb__declarative_execution__V_241_241 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
                  MR_Box mdb__declarative_execution__V_242_242 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
                  MR_Word mdb__declarative_execution__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Integer mdb__declarative_execution__V_244_244 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
                  MR_Box mdb__declarative_execution__V_245_245 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 5)));
                  MR_Integer mdb__declarative_execution__V_246_246 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 6)));
                  MR_Integer mdb__declarative_execution__V_247_247 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 7)));
                  MR_Word mdb__declarative_execution__V_248_248;

                  {
                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_248_248, mdb__declarative_execution__V_1826_1826, mdb__declarative_execution__V_240_240);
                  }
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_248_248 == (MR_Integer) 0);
                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                  if (mdb__declarative_execution__succeeded)
                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_248_248;
                  else
                    {
                      MR_Word mdb__declarative_execution__V_249_249;

                      {
                        mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_249_249, mdb__declarative_execution__V_1825_1825, mdb__declarative_execution__V_241_241);
                      }
                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_249_249 == (MR_Integer) 0);
                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                      if (mdb__declarative_execution__succeeded)
                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_249_249;
                      else
                        {
                          MR_Word mdb__declarative_execution__V_250_250;

                          {
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_250_250, mdb__declarative_execution__V_1824_1824, mdb__declarative_execution__V_242_242);
                          }
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_250_250 == (MR_Integer) 0);
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                          if (mdb__declarative_execution__succeeded)
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_250_250;
                          else
                            {
                              MR_Word mdb__declarative_execution__V_251_251;

                              {
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[3], &mdb__declarative_execution__V_251_251, ((MR_Box) (mdb__declarative_execution__V_1823_1823)), ((MR_Box) (mdb__declarative_execution__V_243_243)));
                              }
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_251_251 == (MR_Integer) 0);
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                              if (mdb__declarative_execution__succeeded)
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_251_251;
                              else
                                {
                                  MR_Word mdb__declarative_execution__V_252_252;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_252_252, mdb__declarative_execution__V_1822_1822, mdb__declarative_execution__V_244_244);
                                  }
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_252_252 == (MR_Integer) 0);
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                                  if (mdb__declarative_execution__succeeded)
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_252_252;
                                  else
                                    {
                                      MR_Word mdb__declarative_execution__V_253_253;

                                      {
                                        mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_253_253, mdb__declarative_execution__V_1821_1821, mdb__declarative_execution__V_245_245);
                                      }
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_253_253 == (MR_Integer) 0);
                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                                      if (mdb__declarative_execution__succeeded)
                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_253_253;
                                      else
                                        {
                                          MR_Word mdb__declarative_execution__V_254_254;

                                          {
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_254_254, mdb__declarative_execution__V_1820_1820, mdb__declarative_execution__V_246_246);
                                          }
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_254_254 == (MR_Integer) 0);
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                                          if (mdb__declarative_execution__succeeded)
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_254_254;
                                          else
                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1819_1819, mdb__declarative_execution__V_247_247);
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
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 9:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 10:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mdb__declarative_execution__V_1847_1847 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
            MR_Box mdb__declarative_execution__V_1848_1848 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
            MR_Integer mdb__declarative_execution__V_1849_1849 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
            MR_Box mdb__declarative_execution__V_1850_1850 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
            MR_Box mdb__declarative_execution__V_1851_1851 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Box mdb__declarative_execution__V_427_427 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box mdb__declarative_execution__V_428_428 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
                  MR_Integer mdb__declarative_execution__V_429_429 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Box mdb__declarative_execution__V_430_430 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Integer mdb__declarative_execution__V_431_431 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
                  MR_Word mdb__declarative_execution__V_432_432;

                  {
                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_432_432, mdb__declarative_execution__V_1851_1851, mdb__declarative_execution__V_427_427);
                  }
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_432_432 == (MR_Integer) 0);
                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                  if (mdb__declarative_execution__succeeded)
                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_432_432;
                  else
                    {
                      MR_Word mdb__declarative_execution__V_433_433;

                      {
                        mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_433_433, mdb__declarative_execution__V_1850_1850, mdb__declarative_execution__V_428_428);
                      }
                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_433_433 == (MR_Integer) 0);
                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                      if (mdb__declarative_execution__succeeded)
                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_433_433;
                      else
                        {
                          MR_Word mdb__declarative_execution__V_434_434;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_434_434, mdb__declarative_execution__V_1849_1849, mdb__declarative_execution__V_429_429);
                          }
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_434_434 == (MR_Integer) 0);
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                          if (mdb__declarative_execution__succeeded)
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_434_434;
                          else
                            {
                              MR_Word mdb__declarative_execution__V_435_435;

                              {
                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_435_435, mdb__declarative_execution__V_1848_1848, mdb__declarative_execution__V_430_430);
                              }
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_435_435 == (MR_Integer) 0);
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                              if (mdb__declarative_execution__succeeded)
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_435_435;
                              else
                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1847_1847, mdb__declarative_execution__V_431_431);
                                }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 9:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 10:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__declarative_execution__V_1827_1827 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
                MR_Box mdb__declarative_execution__V_1828_1828 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
                MR_Integer mdb__declarative_execution__V_1829_1829 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
                MR_Box mdb__declarative_execution__V_1830_1830 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
                MR_Box mdb__declarative_execution__V_1831_1831 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
                MR_Box mdb__declarative_execution__V_1832_1832 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Box mdb__declarative_execution__V_576_576 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
                          MR_Box mdb__declarative_execution__V_577_577 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
                          MR_Box mdb__declarative_execution__V_578_578 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3));
                          MR_Integer mdb__declarative_execution__V_579_579 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Box mdb__declarative_execution__V_580_580 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Integer mdb__declarative_execution__V_581_581 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 6)));
                          MR_Word mdb__declarative_execution__V_582_582;

                          {
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_582_582, mdb__declarative_execution__V_1832_1832, mdb__declarative_execution__V_576_576);
                          }
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_582_582 == (MR_Integer) 0);
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                          if (mdb__declarative_execution__succeeded)
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_582_582;
                          else
                            {
                              MR_Word mdb__declarative_execution__V_583_583;

                              {
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_583_583, mdb__declarative_execution__V_1831_1831, mdb__declarative_execution__V_577_577);
                              }
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_583_583 == (MR_Integer) 0);
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                              if (mdb__declarative_execution__succeeded)
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_583_583;
                              else
                                {
                                  MR_Word mdb__declarative_execution__V_584_584;

                                  {
                                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_584_584, mdb__declarative_execution__V_1830_1830, mdb__declarative_execution__V_578_578);
                                  }
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_584_584 == (MR_Integer) 0);
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                                  if (mdb__declarative_execution__succeeded)
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_584_584;
                                  else
                                    {
                                      MR_Word mdb__declarative_execution__V_585_585;

                                      {
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_585_585, mdb__declarative_execution__V_1829_1829, mdb__declarative_execution__V_579_579);
                                      }
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_585_585 == (MR_Integer) 0);
                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                                      if (mdb__declarative_execution__succeeded)
                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_585_585;
                                      else
                                        {
                                          MR_Word mdb__declarative_execution__V_586_586;

                                          {
                                            mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_586_586, mdb__declarative_execution__V_1828_1828, mdb__declarative_execution__V_580_580);
                                          }
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_586_586 == (MR_Integer) 0);
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                                          if (mdb__declarative_execution__succeeded)
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_586_586;
                                          else
                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1827_1827, mdb__declarative_execution__V_581_581);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__declarative_execution__V_1812_1812 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
                MR_Box mdb__declarative_execution__V_1813_1813 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
                MR_Integer mdb__declarative_execution__V_1814_1814 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
                MR_Word mdb__declarative_execution__V_1815_1815 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
                MR_Box mdb__declarative_execution__V_1816_1816 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
                MR_Box mdb__declarative_execution__V_1817_1817 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
                MR_Box mdb__declarative_execution__V_1818_1818 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box mdb__declarative_execution__V_743_743 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
                          MR_Box mdb__declarative_execution__V_744_744 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
                          MR_Box mdb__declarative_execution__V_745_745 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3));
                          MR_Word mdb__declarative_execution__V_746_746 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Integer mdb__declarative_execution__V_747_747 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Box mdb__declarative_execution__V_748_748 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 6)));
                          MR_Integer mdb__declarative_execution__V_749_749 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 7)));
                          MR_Word mdb__declarative_execution__V_750_750;

                          {
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_750_750, mdb__declarative_execution__V_1818_1818, mdb__declarative_execution__V_743_743);
                          }
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_750_750 == (MR_Integer) 0);
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                          if (mdb__declarative_execution__succeeded)
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_750_750;
                          else
                            {
                              MR_Word mdb__declarative_execution__V_751_751;

                              {
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_751_751, mdb__declarative_execution__V_1817_1817, mdb__declarative_execution__V_744_744);
                              }
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_751_751 == (MR_Integer) 0);
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                              if (mdb__declarative_execution__succeeded)
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_751_751;
                              else
                                {
                                  MR_Word mdb__declarative_execution__V_752_752;

                                  {
                                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_752_752, mdb__declarative_execution__V_1816_1816, mdb__declarative_execution__V_745_745);
                                  }
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_752_752 == (MR_Integer) 0);
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                                  if (mdb__declarative_execution__succeeded)
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_752_752;
                                  else
                                    {
                                      MR_Word mdb__declarative_execution__V_753_753;

                                      {
                                        mdb__term_rep____Compare____term_rep_0_0(&mdb__declarative_execution__V_753_753, mdb__declarative_execution__V_1815_1815, mdb__declarative_execution__V_746_746);
                                      }
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_753_753 == (MR_Integer) 0);
                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                                      if (mdb__declarative_execution__succeeded)
                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_753_753;
                                      else
                                        {
                                          MR_Word mdb__declarative_execution__V_754_754;

                                          {
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_754_754, mdb__declarative_execution__V_1814_1814, mdb__declarative_execution__V_747_747);
                                          }
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_754_754 == (MR_Integer) 0);
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                                          if (mdb__declarative_execution__succeeded)
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_754_754;
                                          else
                                            {
                                              MR_Word mdb__declarative_execution__V_755_755;

                                              {
                                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_755_755, mdb__declarative_execution__V_1813_1813, mdb__declarative_execution__V_748_748);
                                              }
                                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_755_755 == (MR_Integer) 0);
                                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                                              if (mdb__declarative_execution__succeeded)
                                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_755_755;
                                              else
                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1812_1812, mdb__declarative_execution__V_749_749);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Box mdb__declarative_execution__V_1852_1852 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
                MR_Box mdb__declarative_execution__V_1853_1853 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Box mdb__declarative_execution__V_892_892 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
                          MR_Box mdb__declarative_execution__V_893_893 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word mdb__declarative_execution__V_894_894;

                          {
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_894_894, mdb__declarative_execution__V_1853_1853, mdb__declarative_execution__V_892_892);
                          }
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_894_894 == (MR_Integer) 0);
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                          if (mdb__declarative_execution__succeeded)
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_894_894;
                          else
                            {
                              mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1852_1852, mdb__declarative_execution__V_893_893);
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Box mdb__declarative_execution__V_1833_1833 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
                MR_Box mdb__declarative_execution__V_1834_1834 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Box mdb__declarative_execution__V_986_986 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
                          MR_Box mdb__declarative_execution__V_987_987 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word mdb__declarative_execution__V_988_988;

                          {
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_988_988, mdb__declarative_execution__V_1834_1834, mdb__declarative_execution__V_986_986);
                          }
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_988_988 == (MR_Integer) 0);
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                          if (mdb__declarative_execution__succeeded)
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_988_988;
                          else
                            {
                              mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1833_1833, mdb__declarative_execution__V_987_987);
                            }
                        }
                        break;
                      case (MR_Integer) 4:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Box mdb__declarative_execution__V_1835_1835 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
                MR_Box mdb__declarative_execution__V_1836_1836 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
                MR_Box mdb__declarative_execution__V_1837_1837 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Box mdb__declarative_execution__V_1088_1088 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
                          MR_Box mdb__declarative_execution__V_1089_1089 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Box mdb__declarative_execution__V_1090_1090 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3));
                          MR_Word mdb__declarative_execution__V_1091_1091;

                          {
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1091_1091, mdb__declarative_execution__V_1837_1837, mdb__declarative_execution__V_1088_1088);
                          }
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1091_1091 == (MR_Integer) 0);
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                          if (mdb__declarative_execution__succeeded)
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1091_1091;
                          else
                            {
                              MR_Word mdb__declarative_execution__V_1092_1092;

                              {
                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_1092_1092, mdb__declarative_execution__V_1836_1836, mdb__declarative_execution__V_1089_1089);
                              }
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1092_1092 == (MR_Integer) 0);
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                              if (mdb__declarative_execution__succeeded)
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1092_1092;
                              else
                                {
                                  mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1835_1835, mdb__declarative_execution__V_1090_1090);
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 5:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word mdb__declarative_execution__V_1806_1806 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
                MR_Box mdb__declarative_execution__V_1807_1807 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
                MR_Box mdb__declarative_execution__V_1808_1808 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Box mdb__declarative_execution__V_1199_1199 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
                          MR_Box mdb__declarative_execution__V_1200_1200 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word mdb__declarative_execution__V_1201_1201 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word mdb__declarative_execution__V_1202_1202;

                          {
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1202_1202, mdb__declarative_execution__V_1808_1808, mdb__declarative_execution__V_1199_1199);
                          }
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1202_1202 == (MR_Integer) 0);
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                          if (mdb__declarative_execution__succeeded)
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1202_1202;
                          else
                            {
                              MR_Word mdb__declarative_execution__V_1203_1203;

                              {
                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_1203_1203, mdb__declarative_execution__V_1807_1807, mdb__declarative_execution__V_1200_1200);
                              }
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1203_1203 == (MR_Integer) 0);
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                              if (mdb__declarative_execution__succeeded)
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1203_1203;
                              else
                                {
                                  MR_Integer mdb__declarative_execution__V_1857_1857 = (MR_Integer) mdb__declarative_execution__V_1806_1806;
                                  MR_Integer mdb__declarative_execution__V_1858_1858 = (MR_Integer) mdb__declarative_execution__V_1201_1201;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1857_1857, mdb__declarative_execution__V_1858_1858);
                                  }
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 6:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Box mdb__declarative_execution__V_1854_1854 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
                MR_Box mdb__declarative_execution__V_1855_1855 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
                MR_Box mdb__declarative_execution__V_1856_1856 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Box mdb__declarative_execution__V_1310_1310 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
                          MR_Box mdb__declarative_execution__V_1311_1311 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
                          MR_Box mdb__declarative_execution__V_1312_1312 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word mdb__declarative_execution__V_1313_1313;

                          {
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1313_1313, mdb__declarative_execution__V_1856_1856, mdb__declarative_execution__V_1310_1310);
                          }
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1313_1313 == (MR_Integer) 0);
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                          if (mdb__declarative_execution__succeeded)
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1313_1313;
                          else
                            {
                              MR_Word mdb__declarative_execution__V_1314_1314;

                              {
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1314_1314, mdb__declarative_execution__V_1855_1855, mdb__declarative_execution__V_1311_1311);
                              }
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1314_1314 == (MR_Integer) 0);
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                              if (mdb__declarative_execution__succeeded)
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1314_1314;
                              else
                                {
                                  mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1854_1854, mdb__declarative_execution__V_1312_1312);
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 7:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Box mdb__declarative_execution__V_1809_1809 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
                MR_Box mdb__declarative_execution__V_1810_1810 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
                MR_Box mdb__declarative_execution__V_1811_1811 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 7:
                        {
                          MR_Box mdb__declarative_execution__V_1421_1421 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
                          MR_Box mdb__declarative_execution__V_1422_1422 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
                          MR_Box mdb__declarative_execution__V_1423_1423 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word mdb__declarative_execution__V_1424_1424;

                          {
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1424_1424, mdb__declarative_execution__V_1811_1811, mdb__declarative_execution__V_1421_1421);
                          }
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1424_1424 == (MR_Integer) 0);
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                          if (mdb__declarative_execution__succeeded)
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1424_1424;
                          else
                            {
                              MR_Word mdb__declarative_execution__V_1425_1425;

                              {
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1425_1425, mdb__declarative_execution__V_1810_1810, mdb__declarative_execution__V_1422_1422);
                              }
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1425_1425 == (MR_Integer) 0);
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                              if (mdb__declarative_execution__succeeded)
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1425_1425;
                              else
                                {
                                  mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1809_1809, mdb__declarative_execution__V_1423_1423);
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 8:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word mdb__declarative_execution__V_1838_1838 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
                MR_Box mdb__declarative_execution__V_1839_1839 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
                MR_Box mdb__declarative_execution__V_1840_1840 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 7:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Box mdb__declarative_execution__V_1532_1532 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
                          MR_Box mdb__declarative_execution__V_1533_1533 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word mdb__declarative_execution__V_1534_1534 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word mdb__declarative_execution__V_1535_1535;

                          {
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1535_1535, mdb__declarative_execution__V_1840_1840, mdb__declarative_execution__V_1532_1532);
                          }
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1535_1535 == (MR_Integer) 0);
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                          if (mdb__declarative_execution__succeeded)
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1535_1535;
                          else
                            {
                              MR_Word mdb__declarative_execution__V_1536_1536;

                              {
                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_1536_1536, mdb__declarative_execution__V_1839_1839, mdb__declarative_execution__V_1533_1533);
                              }
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1536_1536 == (MR_Integer) 0);
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                              if (mdb__declarative_execution__succeeded)
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1536_1536;
                              else
                                {
                                  MR_Integer mdb__declarative_execution__V_1859_1859 = (MR_Integer) mdb__declarative_execution__V_1838_1838;
                                  MR_Integer mdb__declarative_execution__V_1860_1860 = (MR_Integer) mdb__declarative_execution__V_1534_1534;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1859_1859, mdb__declarative_execution__V_1860_1860);
                                  }
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 9:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Box mdb__declarative_execution__V_1844_1844 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
                MR_Box mdb__declarative_execution__V_1845_1845 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
                MR_Box mdb__declarative_execution__V_1846_1846 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 7:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 8:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 9:
                        {
                          MR_Box mdb__declarative_execution__V_1643_1643 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
                          MR_Box mdb__declarative_execution__V_1644_1644 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
                          MR_Box mdb__declarative_execution__V_1645_1645 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word mdb__declarative_execution__V_1646_1646;

                          {
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1646_1646, mdb__declarative_execution__V_1846_1846, mdb__declarative_execution__V_1643_1643);
                          }
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1646_1646 == (MR_Integer) 0);
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                          if (mdb__declarative_execution__succeeded)
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1646_1646;
                          else
                            {
                              MR_Word mdb__declarative_execution__V_1647_1647;

                              {
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1647_1647, mdb__declarative_execution__V_1845_1845, mdb__declarative_execution__V_1644_1644);
                              }
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1647_1647 == (MR_Integer) 0);
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                              if (mdb__declarative_execution__succeeded)
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1647_1647;
                              else
                                {
                                  mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1844_1844, mdb__declarative_execution__V_1645_1645);
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 10:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Box mdb__declarative_execution__V_1841_1841 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
                MR_Box mdb__declarative_execution__V_1842_1842 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
                MR_Box mdb__declarative_execution__V_1843_1843 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 7:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 8:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 9:
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 10:
                        {
                          MR_Box mdb__declarative_execution__V_1754_1754 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
                          MR_Box mdb__declarative_execution__V_1755_1755 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
                          MR_Box mdb__declarative_execution__V_1756_1756 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word mdb__declarative_execution__V_1757_1757;

                          {
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1757_1757, mdb__declarative_execution__V_1843_1843, mdb__declarative_execution__V_1754_1754);
                          }
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1757_1757 == (MR_Integer) 0);
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                          if (mdb__declarative_execution__succeeded)
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1757_1757;
                          else
                            {
                              MR_Word mdb__declarative_execution__V_1758_1758;

                              {
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1758_1758, mdb__declarative_execution__V_1842_1842, mdb__declarative_execution__V_1755_1755);
                              }
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1758_1758 == (MR_Integer) 0);
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
                              if (mdb__declarative_execution__succeeded)
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1758_1758;
                              else
                                {
                                  mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1841_1841, mdb__declarative_execution__V_1756_1756);
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
mdb__declarative_execution____Unify____trace_node_1_0(
  MR_Word mdb__declarative_execution__TypeInfo_for_R_127,
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__CastX_125 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
    MR_Integer mdb__declarative_execution__CastY_126 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_125 == mdb__declarative_execution__CastY_126);
    if (mdb__declarative_execution__succeeded)
      mdb__declarative_execution__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mdb__declarative_execution__TypeInfo_128_128;
            MR_Word mdb__declarative_execution__TypeInfo_129_129;
            MR_Word mdb__declarative_execution__TypeInfo_130_130;
            MR_Box mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
            MR_Word mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer mdb__declarative_execution__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
            MR_Integer mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
            MR_Word mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
            MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
            MR_Box mdb__declarative_execution__V_10_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
            MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 8)));
            MR_Integer mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 9)));
            MR_Box mdb__declarative_execution__V_13_13;
            MR_Box mdb__declarative_execution__V_14_14;
            MR_Word mdb__declarative_execution__V_15_15;
            MR_Integer mdb__declarative_execution__V_16_16;
            MR_Integer mdb__declarative_execution__V_17_17;
            MR_Word mdb__declarative_execution__V_18_18;
            MR_Word mdb__declarative_execution__V_19_19;
            MR_Box mdb__declarative_execution__V_20_20;
            MR_Integer mdb__declarative_execution__V_21_21;
            MR_Integer mdb__declarative_execution__V_22_22;

            mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mdb__declarative_execution__succeeded)
              {
                mdb__declarative_execution__V_13_13 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));
                mdb__declarative_execution__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
                mdb__declarative_execution__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
                mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
                mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
                mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
                mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
                mdb__declarative_execution__V_20_20 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
                mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 8)));
                mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 9)));
                {
                  mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_3_3, mdb__declarative_execution__V_13_13);
                }
                if (mdb__declarative_execution__succeeded)
                  {
                    {
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_14_14);
                    }
                    if (mdb__declarative_execution__succeeded)
                      {
                        mdb__declarative_execution__TypeInfo_128_128 = (MR_Word) &mdb__declarative_execution_scalar_common_1[3];
                        {
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_128_128, ((MR_Box) (mdb__declarative_execution__V_5_5)), ((MR_Box) (mdb__declarative_execution__V_15_15)));
                        }
                        if (mdb__declarative_execution__succeeded)
                          {
                            mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_6_6 == mdb__declarative_execution__V_16_16);
                            if (mdb__declarative_execution__succeeded)
                              {
                                mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_7_7 == mdb__declarative_execution__V_17_17);
                                if (mdb__declarative_execution__succeeded)
                                  {
                                    mdb__declarative_execution__TypeInfo_129_129 = (MR_Word) &mdb__declarative_execution_scalar_common_1[1];
                                    {
                                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_129_129, ((MR_Box) (mdb__declarative_execution__V_8_8)), ((MR_Box) (mdb__declarative_execution__V_18_18)));
                                    }
                                    if (mdb__declarative_execution__succeeded)
                                      {
                                        mdb__declarative_execution__TypeInfo_130_130 = (MR_Word) &mdb__declarative_execution_scalar_common_1[5];
                                        {
                                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_130_130, ((MR_Box) (mdb__declarative_execution__V_9_9)), ((MR_Box) (mdb__declarative_execution__V_19_19)));
                                        }
                                        if (mdb__declarative_execution__succeeded)
                                          {
                                            {
                                              mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_10_10, mdb__declarative_execution__V_20_20);
                                            }
                                            if (mdb__declarative_execution__succeeded)
                                              {
                                                mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_11_11 == mdb__declarative_execution__V_21_21);
                                                if (mdb__declarative_execution__succeeded)
                                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_12_12 == mdb__declarative_execution__V_22_22);
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
            MR_Word mdb__declarative_execution__TypeInfo_132_132;
            MR_Box mdb__declarative_execution__V_23_23 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mdb__declarative_execution__V_24_24 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
            MR_Box mdb__declarative_execution__V_25_25 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
            MR_Word mdb__declarative_execution__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
            MR_Integer mdb__declarative_execution__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
            MR_Box mdb__declarative_execution__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
            MR_Integer mdb__declarative_execution__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
            MR_Integer mdb__declarative_execution__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
            MR_Box mdb__declarative_execution__V_31_31;
            MR_Box mdb__declarative_execution__V_32_32;
            MR_Box mdb__declarative_execution__V_33_33;
            MR_Word mdb__declarative_execution__V_34_34;
            MR_Integer mdb__declarative_execution__V_35_35;
            MR_Box mdb__declarative_execution__V_36_36;
            MR_Integer mdb__declarative_execution__V_37_37;
            MR_Integer mdb__declarative_execution__V_38_38;

            mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_execution__succeeded)
              {
                mdb__declarative_execution__V_31_31 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));
                mdb__declarative_execution__V_32_32 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
                mdb__declarative_execution__V_33_33 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
                mdb__declarative_execution__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
                mdb__declarative_execution__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
                mdb__declarative_execution__V_36_36 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
                mdb__declarative_execution__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
                mdb__declarative_execution__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
                {
                  mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_23_23, mdb__declarative_execution__V_31_31);
                }
                if (mdb__declarative_execution__succeeded)
                  {
                    {
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_24_24, mdb__declarative_execution__V_32_32);
                    }
                    if (mdb__declarative_execution__succeeded)
                      {
                        {
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_25_25, mdb__declarative_execution__V_33_33);
                        }
                        if (mdb__declarative_execution__succeeded)
                          {
                            mdb__declarative_execution__TypeInfo_132_132 = (MR_Word) &mdb__declarative_execution_scalar_common_1[3];
                            {
                              mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_132_132, ((MR_Box) (mdb__declarative_execution__V_26_26)), ((MR_Box) (mdb__declarative_execution__V_34_34)));
                            }
                            if (mdb__declarative_execution__succeeded)
                              {
                                mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_27_27 == mdb__declarative_execution__V_35_35);
                                if (mdb__declarative_execution__succeeded)
                                  {
                                    {
                                      mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_28_28, mdb__declarative_execution__V_36_36);
                                    }
                                    if (mdb__declarative_execution__succeeded)
                                      {
                                        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_29_29 == mdb__declarative_execution__V_37_37);
                                        if (mdb__declarative_execution__succeeded)
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_30_30 == mdb__declarative_execution__V_38_38);
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
            MR_Box mdb__declarative_execution__V_39_39 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mdb__declarative_execution__V_40_40 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
            MR_Integer mdb__declarative_execution__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
            MR_Box mdb__declarative_execution__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
            MR_Integer mdb__declarative_execution__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
            MR_Box mdb__declarative_execution__V_44_44;
            MR_Box mdb__declarative_execution__V_45_45;
            MR_Integer mdb__declarative_execution__V_46_46;
            MR_Box mdb__declarative_execution__V_47_47;
            MR_Integer mdb__declarative_execution__V_48_48;

            mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_execution__succeeded)
              {
                mdb__declarative_execution__V_44_44 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));
                mdb__declarative_execution__V_45_45 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
                mdb__declarative_execution__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
                mdb__declarative_execution__V_47_47 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
                mdb__declarative_execution__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
                {
                  mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_39_39, mdb__declarative_execution__V_44_44);
                }
                if (mdb__declarative_execution__succeeded)
                  {
                    {
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_40_40, mdb__declarative_execution__V_45_45);
                    }
                    if (mdb__declarative_execution__succeeded)
                      {
                        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_41_41 == mdb__declarative_execution__V_46_46);
                        if (mdb__declarative_execution__succeeded)
                          {
                            {
                              mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_42_42, mdb__declarative_execution__V_47_47);
                            }
                            if (mdb__declarative_execution__succeeded)
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_43_43 == mdb__declarative_execution__V_48_48);
                          }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mdb__declarative_execution__V_49_49 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__declarative_execution__V_50_50 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
                MR_Box mdb__declarative_execution__V_51_51 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3));
                MR_Integer mdb__declarative_execution__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
                MR_Box mdb__declarative_execution__V_53_53 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
                MR_Integer mdb__declarative_execution__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
                MR_Box mdb__declarative_execution__V_55_55;
                MR_Box mdb__declarative_execution__V_56_56;
                MR_Box mdb__declarative_execution__V_57_57;
                MR_Integer mdb__declarative_execution__V_58_58;
                MR_Box mdb__declarative_execution__V_59_59;
                MR_Integer mdb__declarative_execution__V_60_60;

                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mdb__declarative_execution__succeeded)
                  {
                    mdb__declarative_execution__V_55_55 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
                    mdb__declarative_execution__V_56_56 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
                    mdb__declarative_execution__V_57_57 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
                    mdb__declarative_execution__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
                    mdb__declarative_execution__V_59_59 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
                    mdb__declarative_execution__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
                    {
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_49_49, mdb__declarative_execution__V_55_55);
                    }
                    if (mdb__declarative_execution__succeeded)
                      {
                        {
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_50_50, mdb__declarative_execution__V_56_56);
                        }
                        if (mdb__declarative_execution__succeeded)
                          {
                            {
                              mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_51_51, mdb__declarative_execution__V_57_57);
                            }
                            if (mdb__declarative_execution__succeeded)
                              {
                                mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_52_52 == mdb__declarative_execution__V_58_58);
                                if (mdb__declarative_execution__succeeded)
                                  {
                                    {
                                      mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_53_53, mdb__declarative_execution__V_59_59);
                                    }
                                    if (mdb__declarative_execution__succeeded)
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_54_54 == mdb__declarative_execution__V_60_60);
                                  }
                              }
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mdb__declarative_execution__V_61_61 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__declarative_execution__V_62_62 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
                MR_Box mdb__declarative_execution__V_63_63 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3));
                MR_Word mdb__declarative_execution__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
                MR_Integer mdb__declarative_execution__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
                MR_Box mdb__declarative_execution__V_66_66 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
                MR_Integer mdb__declarative_execution__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
                MR_Box mdb__declarative_execution__V_68_68;
                MR_Box mdb__declarative_execution__V_69_69;
                MR_Box mdb__declarative_execution__V_70_70;
                MR_Word mdb__declarative_execution__V_71_71;
                MR_Integer mdb__declarative_execution__V_72_72;
                MR_Box mdb__declarative_execution__V_73_73;
                MR_Integer mdb__declarative_execution__V_74_74;

                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mdb__declarative_execution__succeeded)
                  {
                    mdb__declarative_execution__V_68_68 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
                    mdb__declarative_execution__V_69_69 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
                    mdb__declarative_execution__V_70_70 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
                    mdb__declarative_execution__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
                    mdb__declarative_execution__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
                    mdb__declarative_execution__V_73_73 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
                    mdb__declarative_execution__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
                    {
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_61_61, mdb__declarative_execution__V_68_68);
                    }
                    if (mdb__declarative_execution__succeeded)
                      {
                        {
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_62_62, mdb__declarative_execution__V_69_69);
                        }
                        if (mdb__declarative_execution__succeeded)
                          {
                            {
                              mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_63_63, mdb__declarative_execution__V_70_70);
                            }
                            if (mdb__declarative_execution__succeeded)
                              {
                                {
                                  mdb__declarative_execution__succeeded = mdb__term_rep____Unify____term_rep_0_0(mdb__declarative_execution__V_64_64, mdb__declarative_execution__V_71_71);
                                }
                                if (mdb__declarative_execution__succeeded)
                                  {
                                    mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_65_65 == mdb__declarative_execution__V_72_72);
                                    if (mdb__declarative_execution__succeeded)
                                      {
                                        {
                                          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_66_66, mdb__declarative_execution__V_73_73);
                                        }
                                        if (mdb__declarative_execution__succeeded)
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_67_67 == mdb__declarative_execution__V_74_74);
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
                MR_Box mdb__declarative_execution__V_75_75 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__declarative_execution__V_76_76 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
                MR_Box mdb__declarative_execution__V_77_77;
                MR_Box mdb__declarative_execution__V_78_78;

                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mdb__declarative_execution__succeeded)
                  {
                    mdb__declarative_execution__V_77_77 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
                    mdb__declarative_execution__V_78_78 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
                    {
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_75_75, mdb__declarative_execution__V_77_77);
                    }
                    if (mdb__declarative_execution__succeeded)
                      {
                        mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_76_76, mdb__declarative_execution__V_78_78);
                      }
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Box mdb__declarative_execution__V_79_79 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__declarative_execution__V_80_80 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
                MR_Box mdb__declarative_execution__V_81_81;
                MR_Box mdb__declarative_execution__V_82_82;

                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (mdb__declarative_execution__succeeded)
                  {
                    mdb__declarative_execution__V_81_81 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
                    mdb__declarative_execution__V_82_82 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
                    {
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_79_79, mdb__declarative_execution__V_81_81);
                    }
                    if (mdb__declarative_execution__succeeded)
                      {
                        mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_80_80, mdb__declarative_execution__V_82_82);
                      }
                  }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Box mdb__declarative_execution__V_83_83 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__declarative_execution__V_84_84 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
                MR_Box mdb__declarative_execution__V_85_85 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3));
                MR_Box mdb__declarative_execution__V_86_86;
                MR_Box mdb__declarative_execution__V_87_87;
                MR_Box mdb__declarative_execution__V_88_88;

                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (mdb__declarative_execution__succeeded)
                  {
                    mdb__declarative_execution__V_86_86 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
                    mdb__declarative_execution__V_87_87 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
                    mdb__declarative_execution__V_88_88 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
                    {
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_83_83, mdb__declarative_execution__V_86_86);
                    }
                    if (mdb__declarative_execution__succeeded)
                      {
                        {
                          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_84_84, mdb__declarative_execution__V_87_87);
                        }
                        if (mdb__declarative_execution__succeeded)
                          {
                            mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_85_85, mdb__declarative_execution__V_88_88);
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Box mdb__declarative_execution__V_89_89 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__declarative_execution__V_90_90 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word mdb__declarative_execution__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
                MR_Box mdb__declarative_execution__V_92_92;
                MR_Box mdb__declarative_execution__V_93_93;
                MR_Word mdb__declarative_execution__V_94_94;

                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (mdb__declarative_execution__succeeded)
                  {
                    mdb__declarative_execution__V_92_92 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
                    mdb__declarative_execution__V_93_93 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
                    mdb__declarative_execution__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_89_89, mdb__declarative_execution__V_92_92);
                    }
                    if (mdb__declarative_execution__succeeded)
                      {
                        {
                          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_90_90, mdb__declarative_execution__V_93_93);
                        }
                        if (mdb__declarative_execution__succeeded)
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_91_91 == mdb__declarative_execution__V_94_94);
                      }
                  }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Box mdb__declarative_execution__V_95_95 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__declarative_execution__V_96_96 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
                MR_Box mdb__declarative_execution__V_97_97 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
                MR_Box mdb__declarative_execution__V_98_98;
                MR_Box mdb__declarative_execution__V_99_99;
                MR_Box mdb__declarative_execution__V_100_100;

                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (mdb__declarative_execution__succeeded)
                  {
                    mdb__declarative_execution__V_98_98 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
                    mdb__declarative_execution__V_99_99 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
                    mdb__declarative_execution__V_100_100 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_95_95, mdb__declarative_execution__V_98_98);
                    }
                    if (mdb__declarative_execution__succeeded)
                      {
                        {
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_96_96, mdb__declarative_execution__V_99_99);
                        }
                        if (mdb__declarative_execution__succeeded)
                          {
                            mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_97_97, mdb__declarative_execution__V_100_100);
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Box mdb__declarative_execution__V_101_101 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__declarative_execution__V_102_102 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
                MR_Box mdb__declarative_execution__V_103_103 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
                MR_Box mdb__declarative_execution__V_104_104;
                MR_Box mdb__declarative_execution__V_105_105;
                MR_Box mdb__declarative_execution__V_106_106;

                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (mdb__declarative_execution__succeeded)
                  {
                    mdb__declarative_execution__V_104_104 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
                    mdb__declarative_execution__V_105_105 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
                    mdb__declarative_execution__V_106_106 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_101_101, mdb__declarative_execution__V_104_104);
                    }
                    if (mdb__declarative_execution__succeeded)
                      {
                        {
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_102_102, mdb__declarative_execution__V_105_105);
                        }
                        if (mdb__declarative_execution__succeeded)
                          {
                            mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_103_103, mdb__declarative_execution__V_106_106);
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Box mdb__declarative_execution__V_107_107 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__declarative_execution__V_108_108 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word mdb__declarative_execution__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
                MR_Box mdb__declarative_execution__V_110_110;
                MR_Box mdb__declarative_execution__V_111_111;
                MR_Word mdb__declarative_execution__V_112_112;

                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
                if (mdb__declarative_execution__succeeded)
                  {
                    mdb__declarative_execution__V_110_110 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
                    mdb__declarative_execution__V_111_111 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
                    mdb__declarative_execution__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_107_107, mdb__declarative_execution__V_110_110);
                    }
                    if (mdb__declarative_execution__succeeded)
                      {
                        {
                          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_108_108, mdb__declarative_execution__V_111_111);
                        }
                        if (mdb__declarative_execution__succeeded)
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_109_109 == mdb__declarative_execution__V_112_112);
                      }
                  }
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Box mdb__declarative_execution__V_113_113 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__declarative_execution__V_114_114 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
                MR_Box mdb__declarative_execution__V_115_115 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
                MR_Box mdb__declarative_execution__V_116_116;
                MR_Box mdb__declarative_execution__V_117_117;
                MR_Box mdb__declarative_execution__V_118_118;

                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
                if (mdb__declarative_execution__succeeded)
                  {
                    mdb__declarative_execution__V_116_116 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
                    mdb__declarative_execution__V_117_117 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
                    mdb__declarative_execution__V_118_118 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_113_113, mdb__declarative_execution__V_116_116);
                    }
                    if (mdb__declarative_execution__succeeded)
                      {
                        {
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_114_114, mdb__declarative_execution__V_117_117);
                        }
                        if (mdb__declarative_execution__succeeded)
                          {
                            mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_115_115, mdb__declarative_execution__V_118_118);
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Box mdb__declarative_execution__V_119_119 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__declarative_execution__V_120_120 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
                MR_Box mdb__declarative_execution__V_121_121 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
                MR_Box mdb__declarative_execution__V_122_122;
                MR_Box mdb__declarative_execution__V_123_123;
                MR_Box mdb__declarative_execution__V_124_124;

                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
                if (mdb__declarative_execution__succeeded)
                  {
                    mdb__declarative_execution__V_122_122 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
                    mdb__declarative_execution__V_123_123 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
                    mdb__declarative_execution__V_124_124 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_119_119, mdb__declarative_execution__V_122_122);
                    }
                    if (mdb__declarative_execution__succeeded)
                      {
                        {
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_120_120, mdb__declarative_execution__V_123_123);
                        }
                        if (mdb__declarative_execution__succeeded)
                          {
                            mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_121_121, mdb__declarative_execution__V_124_124);
                          }
                      }
                  }
              }
              break;
          }
          break;
      }
    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_arg_0_0(
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__CastX_12 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
    MR_Integer mdb__declarative_execution__CastY_13 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_12 == mdb__declarative_execution__CastY_13);
    if (mdb__declarative_execution__succeeded)
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdb__declarative_execution__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdb__declarative_execution__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__declarative_execution__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mdb__declarative_execution__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdb__declarative_execution__V_10_10;
        MR_Integer mdb__declarative_execution__V_17_17 = (MR_Integer) mdb__declarative_execution__V_4_4;
        MR_Integer mdb__declarative_execution__V_18_18 = (MR_Integer) mdb__declarative_execution__V_7_7;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_10_10, mdb__declarative_execution__V_17_17, mdb__declarative_execution__V_18_18);
        }
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_10_10 == (MR_Integer) 0);
        mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
        if (mdb__declarative_execution__succeeded)
          *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_10_10;
        else
          {
            MR_Word mdb__declarative_execution__V_11_11;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_11_11, mdb__declarative_execution__V_5_5, mdb__declarative_execution__V_8_8);
            }
            mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_11_11 == (MR_Integer) 0);
            mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
            if (mdb__declarative_execution__succeeded)
              *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[4], mdb__declarative_execution__HeadVar__1_1, ((MR_Box) (mdb__declarative_execution__V_6_6)), ((MR_Box) (mdb__declarative_execution__V_9_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_arg_0_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__CastX_9 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
    MR_Integer mdb__declarative_execution__CastY_10 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_9 == mdb__declarative_execution__CastY_10);
    if (mdb__declarative_execution__succeeded)
      mdb__declarative_execution__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__declarative_execution__TypeInfo_11_11;
        MR_Word mdb__declarative_execution__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mdb__declarative_execution__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mdb__declarative_execution__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));

        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_3_3 == mdb__declarative_execution__V_6_6);
        if (mdb__declarative_execution__succeeded)
          {
            mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_4_4 == mdb__declarative_execution__V_7_7);
            if (mdb__declarative_execution__succeeded)
              {
                mdb__declarative_execution__TypeInfo_11_11 = (MR_Word) &mdb__declarative_execution_scalar_common_1[4];
                {
                  mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_11_11, ((MR_Box) (mdb__declarative_execution__V_5_5)), ((MR_Box) (mdb__declarative_execution__V_8_8)));
                }
              }
          }
      }
    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_0_0(
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__CastX_9 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
    MR_Integer mdb__declarative_execution__CastY_10 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_9 == mdb__declarative_execution__CastY_10);
    if (mdb__declarative_execution__succeeded)
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box mdb__declarative_execution__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mdb__declarative_execution__V_6_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__declarative_execution__V_8_8;

        {
          mdbcomp__rtti_access____Compare____proc_layout_0_0(&mdb__declarative_execution__V_8_8, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_6_6);
        }
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_8_8 == (MR_Integer) 0);
        mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
        if (mdb__declarative_execution__succeeded)
          *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[3], mdb__declarative_execution__HeadVar__1_1, ((MR_Box) (mdb__declarative_execution__V_5_5)), ((MR_Box) (mdb__declarative_execution__V_7_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_0_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__CastX_7 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
    MR_Integer mdb__declarative_execution__CastY_8 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_7 == mdb__declarative_execution__CastY_8);
    if (mdb__declarative_execution__succeeded)
      mdb__declarative_execution__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__declarative_execution__TypeInfo_9_9;
        MR_Box mdb__declarative_execution__V_3_3 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__declarative_execution__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
        MR_Box mdb__declarative_execution__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_execution__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));

        {
          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____proc_layout_0_0(mdb__declarative_execution__V_3_3, mdb__declarative_execution__V_5_5);
        }
        if (mdb__declarative_execution__succeeded)
          {
            mdb__declarative_execution__TypeInfo_9_9 = (MR_Word) &mdb__declarative_execution_scalar_common_1[3];
            {
              mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_9_9, ((MR_Box) (mdb__declarative_execution__V_4_4)), ((MR_Box) (mdb__declarative_execution__V_6_6)));
            }
          }
      }
    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____suspicion_accumulator_0_0(
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
  MR_Integer mdb__declarative_execution__HeadVar__2_2,
  MR_Integer mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = mdb__declarative_execution__HeadVar__2_2;
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = mdb__declarative_execution__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____suspicion_accumulator_0_0(
  MR_Integer mdb__declarative_execution__HeadVar__1_1,
  MR_Integer mdb__declarative_execution__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_3 = mdb__declarative_execution__HeadVar__1_1;
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_4 = mdb__declarative_execution__HeadVar__2_2;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__Cast_HeadVar1_3 == mdb__declarative_execution__Cast_HeadVar2_4);
    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____sequence_number_0_0(
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
  MR_Integer mdb__declarative_execution__HeadVar__2_2,
  MR_Integer mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = mdb__declarative_execution__HeadVar__2_2;
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = mdb__declarative_execution__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____sequence_number_0_0(
  MR_Integer mdb__declarative_execution__HeadVar__1_1,
  MR_Integer mdb__declarative_execution__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_3 = mdb__declarative_execution__HeadVar__1_1;
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_4 = mdb__declarative_execution__HeadVar__2_2;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__Cast_HeadVar1_3 == mdb__declarative_execution__Cast_HeadVar2_4);
    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____implicit_tree_info_0_0(
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
    if (mdb__declarative_execution__succeeded)
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
        MR_Integer mdb__declarative_execution__V_5_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____implicit_tree_info_0_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
    if (mdb__declarative_execution__succeeded)
      mdb__declarative_execution__succeeded = MR_TRUE;
    else
      {
        MR_Integer mdb__declarative_execution__V_3_3 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_3_3 == mdb__declarative_execution__V_4_4);
      }
    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____goal_status_0_0(
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____goal_status_0_0(
  MR_Word mdb__declarative_execution__HeadVar__2_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded = (mdb__declarative_execution__HeadVar__2_1 == mdb__declarative_execution__HeadVar__2_2);

    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution____Compare____event_number_0_0(
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
  MR_Integer mdb__declarative_execution__HeadVar__2_2,
  MR_Integer mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = mdb__declarative_execution__HeadVar__2_2;
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = mdb__declarative_execution__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution____Unify____event_number_0_0(
  MR_Integer mdb__declarative_execution__HeadVar__1_1,
  MR_Integer mdb__declarative_execution__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_3 = mdb__declarative_execution__HeadVar__1_1;
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_4 = mdb__declarative_execution__HeadVar__2_2;

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__Cast_HeadVar1_3 == mdb__declarative_execution__Cast_HeadVar2_4);
    return mdb__declarative_execution__succeeded;
  }
}

MR_bool MR_CALL 
mdb__declarative_execution__trace_node_from_id_3_p_0(
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_4,
  MR_Box mdb__declarative_execution__HeadVar__1_1,
  MR_Box mdb__declarative_execution__HeadVar__2_2,
  MR_Word * mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box mdb__declarative_execution__conv1_HeadVar__3_3;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_4), mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__HeadVar__2_2, &mdb__declarative_execution__conv1_HeadVar__3_3);
    }
    if (mdb__declarative_execution__succeeded)
      {
        *mdb__declarative_execution__HeadVar__3_3 = ((MR_Word) mdb__declarative_execution__conv1_HeadVar__3_3);
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    return mdb__declarative_execution__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Integer mdb__declarative_execution__ArgNum_2,
  MR_Integer mdb__declarative_execution__CurArgNum_3,
  MR_Integer * mdb__declarative_execution__UserArgNum_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__declarative_execution__succeeded;

        if ((mdb__declarative_execution__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[33])));
              return;
            }
          }
        else
          {
            MR_Word mdb__declarative_execution__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_execution__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_execution__UserVis_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 0)));
            MR_Integer mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 1)));
            MR_Word mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 2)));

            switch (mdb__declarative_execution__UserVis_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer mdb__declarative_execution__V_23_23 = (mdb__declarative_execution__ArgNum_2 - (MR_Integer) 1);

                  /* direct tailcall eliminated */
                  {
                    MR_Word mdb__declarative_execution__HeadVar__1__tmp_copy_1 = mdb__declarative_execution__Args_12;
                    MR_Integer mdb__declarative_execution__ArgNum__tmp_copy_2 = mdb__declarative_execution__V_23_23;

                    mdb__declarative_execution__ArgNum_2 = mdb__declarative_execution__ArgNum__tmp_copy_2;
                    mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__ArgNum_2 == (MR_Integer) 1);
                  if (mdb__declarative_execution__succeeded)
                    *mdb__declarative_execution__UserArgNum_4 = mdb__declarative_execution__CurArgNum_3;
                  else
                    {
                      MR_Integer mdb__declarative_execution__V_19_19 = (mdb__declarative_execution__ArgNum_2 - (MR_Integer) 1);
                      MR_Integer mdb__declarative_execution__V_20_20 = (mdb__declarative_execution__CurArgNum_3 + (MR_Integer) 1);

                      /* direct tailcall eliminated */
                      {
                        MR_Word mdb__declarative_execution__HeadVar__1__tmp_copy_1 = mdb__declarative_execution__Args_12;
                        MR_Integer mdb__declarative_execution__ArgNum__tmp_copy_2 = mdb__declarative_execution__V_19_19;
                        MR_Integer mdb__declarative_execution__CurArgNum__tmp_copy_3 = mdb__declarative_execution__V_20_20;

                        mdb__declarative_execution__CurArgNum_3 = mdb__declarative_execution__CurArgNum__tmp_copy_3;
                        mdb__declarative_execution__ArgNum_2 = mdb__declarative_execution__ArgNum__tmp_copy_2;
                        mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__HeadVar__1__tmp_copy_1;
                      }
                      continue;
                    }
                }
                break;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
mdb__declarative_execution__head_var_num_to_arg_num_4_p_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Integer mdb__declarative_execution__SearchUserHeadVarNum_2,
  MR_Integer mdb__declarative_execution__CurArgNum_3,
  MR_Integer * mdb__declarative_execution__ArgNum_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__declarative_execution__succeeded;

        if ((mdb__declarative_execution__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[32])));
              return;
            }
          }
        else
          {
            MR_Word mdb__declarative_execution__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_execution__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_execution__UserVis_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 0)));
            MR_Integer mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 1)));
            MR_Word mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 2)));

            switch (mdb__declarative_execution__UserVis_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer mdb__declarative_execution__V_23_23 = (mdb__declarative_execution__CurArgNum_3 + (MR_Integer) 1);

                  /* direct tailcall eliminated */
                  {
                    MR_Word mdb__declarative_execution__HeadVar__1__tmp_copy_1 = mdb__declarative_execution__Args_12;
                    MR_Integer mdb__declarative_execution__CurArgNum__tmp_copy_3 = mdb__declarative_execution__V_23_23;

                    mdb__declarative_execution__CurArgNum_3 = mdb__declarative_execution__CurArgNum__tmp_copy_3;
                    mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__SearchUserHeadVarNum_2 == (MR_Integer) 1);
                  if (mdb__declarative_execution__succeeded)
                    *mdb__declarative_execution__ArgNum_4 = mdb__declarative_execution__CurArgNum_3;
                  else
                    {
                      MR_Integer mdb__declarative_execution__V_19_19 = (mdb__declarative_execution__SearchUserHeadVarNum_2 - (MR_Integer) 1);
                      MR_Integer mdb__declarative_execution__V_20_20 = (mdb__declarative_execution__CurArgNum_3 + (MR_Integer) 1);

                      /* direct tailcall eliminated */
                      {
                        MR_Word mdb__declarative_execution__HeadVar__1__tmp_copy_1 = mdb__declarative_execution__Args_12;
                        MR_Integer mdb__declarative_execution__SearchUserHeadVarNum__tmp_copy_2 = mdb__declarative_execution__V_19_19;
                        MR_Integer mdb__declarative_execution__CurArgNum__tmp_copy_3 = mdb__declarative_execution__V_20_20;

                        mdb__declarative_execution__CurArgNum_3 = mdb__declarative_execution__CurArgNum__tmp_copy_3;
                        mdb__declarative_execution__SearchUserHeadVarNum_2 = mdb__declarative_execution__SearchUserHeadVarNum__tmp_copy_2;
                        mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__HeadVar__1__tmp_copy_1;
                      }
                      continue;
                    }
                }
                break;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
mdb__declarative_execution__convert_node_2_p_0(
  MR_Word mdb__declarative_execution__N1_1,
  MR_Word * mdb__declarative_execution__N2_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

{
#define MR_PROC_LABEL mdb__declarative_execution__convert_node_2_p_0

	MR_Word N1;
	MR_Word N2;

	N1 =  mdb__declarative_execution__N1_1 ;
		{

    N2 = N1;


		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_execution__N2_2  = N2;
}
  }
}

static void MR_CALL 
mdb__declarative_execution__node_id_to_key_2_p_0(
  MR_Word mdb__declarative_execution__Id_1,
  MR_Word * mdb__declarative_execution__Key_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

{
#define MR_PROC_LABEL mdb__declarative_execution__node_id_to_key_2_p_0

	MR_Word Id;
	MR_Word Key;

	Id =  mdb__declarative_execution__Id_1 ;
		{

    Key = (MR_Integer) Id;


		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_execution__Key_2  = Key;
}
  }
}

static void MR_CALL 
mdb__declarative_execution__node_map_4_p_0(
  MR_Word mdb__declarative_execution__Store_5,
  MR_Word mdb__declarative_execution__NodeId_6,
  MR_Word mdb__declarative_execution__HeadVar__3_3,
  MR_Word * mdb__declarative_execution__Map_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__declarative_execution__succeeded;
        MR_Word mdb__declarative_execution__Map0_7 = (MR_Word) mdb__declarative_execution__HeadVar__3_3;
        MR_Word mdb__declarative_execution__Node1_9;

{
#define MR_PROC_LABEL mdb__declarative_execution__node_map_4_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id =  mdb__declarative_execution__NodeId_6 ;
		{

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mdb__declarative_execution__Node1_9  = Node;
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
        if (mdb__declarative_execution__succeeded)
          {
            MR_Word mdb__declarative_execution__Key_10;
            MR_Word mdb__declarative_execution__Node2_11;
            MR_Word mdb__declarative_execution__Map1_12;
            MR_Word mdb__declarative_execution__Next_13;
            MR_Word mdb__declarative_execution__V_14_14;

{
#define MR_PROC_LABEL mdb__declarative_execution__node_map_4_p_0

	MR_Word Id;
	MR_Word Key;

	Id =  mdb__declarative_execution__NodeId_6 ;
		{

    Key = (MR_Integer) Id;


		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__Key_10  = Key;
}
{
#define MR_PROC_LABEL mdb__declarative_execution__node_map_4_p_0

	MR_Word N1;
	MR_Word N2;

	N1 =  mdb__declarative_execution__Node1_9 ;
		{

    N2 = N1;


		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__Node2_11  = N2;
}
            {
              mercury__map__det_insert_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0, (MR_Word) &mdb__declarative_execution_scalar_common_1[0], ((MR_Box) (mdb__declarative_execution__Key_10)), ((MR_Box) (mdb__declarative_execution__Node2_11)), mdb__declarative_execution__Map0_7, &mdb__declarative_execution__Map1_12);
            }
            switch (MR_tag((MR_Word) mdb__declarative_execution__Node1_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mdb__declarative_execution__V_29_29;
                  MR_Word mdb__declarative_execution__V_30_30;
                  MR_Integer mdb__declarative_execution__V_31_31;
                  MR_Integer mdb__declarative_execution__V_32_32;
                  MR_Word mdb__declarative_execution__V_33_33;
                  MR_Word mdb__declarative_execution__V_34_34;
                  MR_Box mdb__declarative_execution__V_35_35;
                  MR_Integer mdb__declarative_execution__V_36_36;
                  MR_Integer mdb__declarative_execution__V_37_37;

                  mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 0)));
                  mdb__declarative_execution__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
                  mdb__declarative_execution__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
                  mdb__declarative_execution__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
                  mdb__declarative_execution__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
                  mdb__declarative_execution__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 5)));
                  mdb__declarative_execution__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 6)));
                  mdb__declarative_execution__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 7)));
                  mdb__declarative_execution__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 8)));
                  mdb__declarative_execution__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 9)));
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__declarative_execution__V_39_39;
                  MR_Word mdb__declarative_execution__V_40_40;
                  MR_Word mdb__declarative_execution__V_41_41;
                  MR_Integer mdb__declarative_execution__V_42_42;
                  MR_Box mdb__declarative_execution__V_43_43;
                  MR_Integer mdb__declarative_execution__V_44_44;
                  MR_Integer mdb__declarative_execution__V_45_45;

                  mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 0)));
                  mdb__declarative_execution__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
                  mdb__declarative_execution__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
                  mdb__declarative_execution__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
                  mdb__declarative_execution__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
                  mdb__declarative_execution__V_43_43 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 5)));
                  mdb__declarative_execution__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 6)));
                  mdb__declarative_execution__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 7)));
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mdb__declarative_execution__V_47_47;
                  MR_Integer mdb__declarative_execution__V_48_48;
                  MR_Box mdb__declarative_execution__V_49_49;
                  MR_Integer mdb__declarative_execution__V_50_50;

                  mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 0)));
                  mdb__declarative_execution__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
                  mdb__declarative_execution__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
                  mdb__declarative_execution__V_49_49 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
                  mdb__declarative_execution__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word mdb__declarative_execution__V_52_52;
                      MR_Word mdb__declarative_execution__V_53_53;
                      MR_Integer mdb__declarative_execution__V_54_54;
                      MR_Box mdb__declarative_execution__V_55_55;
                      MR_Integer mdb__declarative_execution__V_56_56;

                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
                      mdb__declarative_execution__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
                      mdb__declarative_execution__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
                      mdb__declarative_execution__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
                      mdb__declarative_execution__V_55_55 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 5)));
                      mdb__declarative_execution__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 6)));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word mdb__declarative_execution__V_58_58;
                      MR_Word mdb__declarative_execution__V_59_59;
                      MR_Word mdb__declarative_execution__V_60_60;
                      MR_Integer mdb__declarative_execution__V_61_61;
                      MR_Box mdb__declarative_execution__V_62_62;
                      MR_Integer mdb__declarative_execution__V_63_63;

                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
                      mdb__declarative_execution__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
                      mdb__declarative_execution__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
                      mdb__declarative_execution__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
                      mdb__declarative_execution__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 5)));
                      mdb__declarative_execution__V_62_62 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 6)));
                      mdb__declarative_execution__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 7)));
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Box mdb__declarative_execution__V_65_65;

                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
                      mdb__declarative_execution__V_65_65 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Box mdb__declarative_execution__V_67_67;

                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
                      mdb__declarative_execution__V_67_67 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Box mdb__declarative_execution__V_69_69;
                      MR_Word mdb__declarative_execution__V_70_70;

                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
                      mdb__declarative_execution__V_69_69 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
                      mdb__declarative_execution__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Box mdb__declarative_execution__V_72_72;
                      MR_Word mdb__declarative_execution__V_73_73;

                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
                      mdb__declarative_execution__V_72_72 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
                      mdb__declarative_execution__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word mdb__declarative_execution__V_75_75;
                      MR_Box mdb__declarative_execution__V_76_76;

                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
                      mdb__declarative_execution__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
                      mdb__declarative_execution__V_76_76 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word mdb__declarative_execution__V_78_78;
                      MR_Box mdb__declarative_execution__V_79_79;

                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
                      mdb__declarative_execution__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
                      mdb__declarative_execution__V_79_79 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Box mdb__declarative_execution__V_81_81;
                      MR_Word mdb__declarative_execution__V_82_82;

                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
                      mdb__declarative_execution__V_81_81 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
                      mdb__declarative_execution__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      MR_Word mdb__declarative_execution__V_84_84;
                      MR_Box mdb__declarative_execution__V_85_85;

                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
                      mdb__declarative_execution__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
                      mdb__declarative_execution__V_85_85 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
                    }
                    break;
                  case (MR_Integer) 10:
                    {
                      MR_Word mdb__declarative_execution__V_87_87;
                      MR_Box mdb__declarative_execution__V_88_88;

                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
                      mdb__declarative_execution__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
                      mdb__declarative_execution__V_88_88 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
                    }
                    break;
                }
                break;
            }
            mdb__declarative_execution__V_14_14 = (MR_Word) mdb__declarative_execution__Map1_12;
            /* direct tailcall eliminated */
            {
              MR_Word mdb__declarative_execution__NodeId__tmp_copy_6 = mdb__declarative_execution__Next_13;
              MR_Word mdb__declarative_execution__HeadVar__3__tmp_copy_3 = mdb__declarative_execution__V_14_14;

              mdb__declarative_execution__HeadVar__3_3 = mdb__declarative_execution__HeadVar__3__tmp_copy_3;
              mdb__declarative_execution__NodeId_6 = mdb__declarative_execution__NodeId__tmp_copy_6;
            }
            continue;
          }
        else
          *mdb__declarative_execution__Map_8 = mdb__declarative_execution__HeadVar__3_3;
      }
      break;
    }
}

static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0(
  MR_Integer mdb__declarative_execution__HldsNum_5,
  MR_Integer mdb__declarative_execution__ProgVis_6,
  MR_Word mdb__declarative_execution__Args_7,
  MR_Word * mdb__declarative_execution__HeadVar__4_4)
{
  {
    MR_bool mdb__declarative_execution__succeeded = (mdb__declarative_execution__ProgVis_6 == (MR_Integer) 0);
    MR_Word mdb__declarative_execution__Arg_8;
    MR_Word mdb__declarative_execution__V_9_9;

    if (mdb__declarative_execution__succeeded)
      mdb__declarative_execution__V_9_9 = (MR_Integer) 0;
    else
      mdb__declarative_execution__V_9_9 = (MR_Integer) 1;
    {
      mdb__declarative_execution__Arg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_8, 0) = ((MR_Box) (mdb__declarative_execution__V_9_9));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_8, 1) = ((MR_Box) (mdb__declarative_execution__HldsNum_5));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mdb__declarative_execution__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_execution__Arg_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_execution__Args_7));
    }
  }
}

static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_value_5_p_0(
  MR_Integer mdb__declarative_execution__HldsNum_6,
  MR_Integer mdb__declarative_execution__ProgVis_7,
  MR_Word mdb__declarative_execution__Val_8,
  MR_Word mdb__declarative_execution__Args_9,
  MR_Word * mdb__declarative_execution__HeadVar__5_5)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__Arg_10;
    MR_Word mdb__declarative_execution__Rep_11;
    MR_Word mdb__declarative_execution__V_12_12;
    MR_Word mdb__declarative_execution__V_13_13;

    {
      mdb__term_rep__univ_to_rep_2_p_0(mdb__declarative_execution__Val_8, &mdb__declarative_execution__Rep_11);
    }
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__ProgVis_7 == (MR_Integer) 0);
    if (mdb__declarative_execution__succeeded)
      mdb__declarative_execution__V_12_12 = (MR_Integer) 0;
    else
      mdb__declarative_execution__V_12_12 = (MR_Integer) 1;
    {
      mdb__declarative_execution__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_13_13, 0) = ((MR_Box) (mdb__declarative_execution__Rep_11));
    }
    {
      mdb__declarative_execution__Arg_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_10, 0) = ((MR_Box) (mdb__declarative_execution__V_12_12));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_10, 1) = ((MR_Box) (mdb__declarative_execution__HldsNum_6));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_10, 2) = ((MR_Box) (mdb__declarative_execution__V_13_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mdb__declarative_execution__HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_execution__Arg_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_execution__Args_9));
    }
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__init_trace_atom_args_0_f_0(void)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
mdb__declarative_execution__null_trace_node_id_1_p_0(
  MR_Word * mdb__declarative_execution__Id_1)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

{
#define MR_PROC_LABEL mdb__declarative_execution__null_trace_node_id_1_p_0

	MR_Word Id;

		{

    Id = (MR_Word) NULL;


		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_execution__Id_1  = Id;
}
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_fail_node_3_f_0(
  MR_Word mdb__declarative_execution__Preceding_5,
  MR_Word mdb__declarative_execution__Neg_6,
  MR_Box mdb__declarative_execution__Label_7)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__HeadVar__4_4;

    {
      mdb__declarative_execution__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_5));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 2) = ((MR_Box) (mdb__declarative_execution__Neg_6));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 3) = ((MR_Box) (mdb__declarative_execution__Label_7));
    }
    return mdb__declarative_execution__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_succ_node_3_f_0(
  MR_Word mdb__declarative_execution__Preceding_5,
  MR_Word mdb__declarative_execution__Neg_6,
  MR_Box mdb__declarative_execution__Label_7)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__HeadVar__4_4;

    {
      mdb__declarative_execution__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_5));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 2) = ((MR_Box) (mdb__declarative_execution__Neg_6));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 3) = ((MR_Box) (mdb__declarative_execution__Label_7));
    }
    return mdb__declarative_execution__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_node_2_f_0(
  MR_Word mdb__declarative_execution__Preceding_4,
  MR_Box mdb__declarative_execution__Label_5)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__HeadVar__3_3;

    {
      mdb__declarative_execution__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_4));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 2) = ((MR_Box) (mdb__declarative_execution__Label_5));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 3) = ((MR_Box) ((MR_Integer) 2));
    }
    return mdb__declarative_execution__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_else_node_3_f_0(
  MR_Word mdb__declarative_execution__Preceding_5,
  MR_Word mdb__declarative_execution__Cond_6,
  MR_Box mdb__declarative_execution__Label_7)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__HeadVar__4_4;

    {
      mdb__declarative_execution__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_5));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 2) = ((MR_Box) (mdb__declarative_execution__Cond_6));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 3) = ((MR_Box) (mdb__declarative_execution__Label_7));
    }
    return mdb__declarative_execution__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_then_node_3_f_0(
  MR_Word mdb__declarative_execution__Preceding_5,
  MR_Word mdb__declarative_execution__Cond_6,
  MR_Box mdb__declarative_execution__Label_7)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__HeadVar__4_4;

    {
      mdb__declarative_execution__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_5));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 2) = ((MR_Box) (mdb__declarative_execution__Cond_6));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 3) = ((MR_Box) (mdb__declarative_execution__Label_7));
    }
    return mdb__declarative_execution__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_cond_node_2_f_0(
  MR_Word mdb__declarative_execution__Preceding_4,
  MR_Box mdb__declarative_execution__Label_5)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__HeadVar__3_3;

    {
      mdb__declarative_execution__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_4));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 2) = ((MR_Box) (mdb__declarative_execution__Label_5));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 3) = ((MR_Box) ((MR_Integer) 2));
    }
    return mdb__declarative_execution__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_later_disj_node_4_f_0(
  MR_Word mdb__declarative_execution__Store_6,
  MR_Word mdb__declarative_execution__Preceding_7,
  MR_Box mdb__declarative_execution__Label_8,
  MR_Word mdb__declarative_execution__PrevDisj_9)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__HeadVar__5_5;
    MR_Word mdb__declarative_execution__FirstDisj_10;
    MR_Word mdb__declarative_execution__PrevDisjNode_11;

    {
      mdb__declarative_execution__disj_node_from_id_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[0], ((MR_Box) (mdb__declarative_execution__Store_6)), ((MR_Box) (mdb__declarative_execution__PrevDisj_9)), &mdb__declarative_execution__PrevDisjNode_11);
    }
    if (((((MR_tag((MR_Word) mdb__declarative_execution__PrevDisjNode_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__PrevDisjNode_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
      mdb__declarative_execution__FirstDisj_10 = mdb__declarative_execution__PrevDisj_9;
    else
      {
        MR_Word mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__PrevDisjNode_11, (MR_Integer) 1)));
        MR_Box mdb__declarative_execution__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__PrevDisjNode_11, (MR_Integer) 2)));

        mdb__declarative_execution__FirstDisj_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__PrevDisjNode_11, (MR_Integer) 3)));
      }
    {
      mdb__declarative_execution__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__5_5, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_7));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__5_5, 2) = ((MR_Box) (mdb__declarative_execution__Label_8));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__5_5, 3) = ((MR_Box) (mdb__declarative_execution__FirstDisj_10));
    }
    return mdb__declarative_execution__HeadVar__5_5;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_first_disj_node_2_f_0(
  MR_Word mdb__declarative_execution__Preceding_4,
  MR_Box mdb__declarative_execution__Label_5)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__HeadVar__3_3;

    {
      mdb__declarative_execution__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_4));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 2) = ((MR_Box) (mdb__declarative_execution__Label_5));
    }
    return mdb__declarative_execution__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_switch_node_2_f_0(
  MR_Word mdb__declarative_execution__Preceding_4,
  MR_Box mdb__declarative_execution__Label_5)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__HeadVar__3_3;

    {
      mdb__declarative_execution__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_4));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 2) = ((MR_Box) (mdb__declarative_execution__Label_5));
    }
    return mdb__declarative_execution__HeadVar__3_3;
  }
}

static void MR_CALL 
mdb__declarative_execution__construct_excp_node_8_p_0(
  MR_Word mdb__declarative_execution__Preceding_9,
  MR_Word mdb__declarative_execution__Call_10,
  MR_Word mdb__declarative_execution__MaybeRedo_11,
  MR_Word mdb__declarative_execution__Exception_12,
  MR_Integer mdb__declarative_execution__EventNo_13,
  MR_Box mdb__declarative_execution__Label_14,
  MR_Integer mdb__declarative_execution__Suspicion_15,
  MR_Word * mdb__declarative_execution__Excp_16)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__ExceptionRep_17;

    {
      mdb__term_rep__univ_to_rep_2_p_0(mdb__declarative_execution__Exception_12, &mdb__declarative_execution__ExceptionRep_17);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
      *mdb__declarative_execution__Excp_16 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_9));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_execution__Call_10));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mdb__declarative_execution__MaybeRedo_11));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (mdb__declarative_execution__ExceptionRep_17));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mdb__declarative_execution__EventNo_13));
      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mdb__declarative_execution__Label_14));
      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mdb__declarative_execution__Suspicion_15));
    }
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_fail_node_6_f_0(
  MR_Word mdb__declarative_execution__Preceding_8,
  MR_Word mdb__declarative_execution__Call_9,
  MR_Word mdb__declarative_execution__Redo_10,
  MR_Integer mdb__declarative_execution__EventNo_11,
  MR_Box mdb__declarative_execution__Label_12,
  MR_Integer mdb__declarative_execution__Suspicion_13)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__HeadVar__7_7;

    {
      mdb__declarative_execution__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_8));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 2) = ((MR_Box) (mdb__declarative_execution__Call_9));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 3) = ((MR_Box) (mdb__declarative_execution__Redo_10));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 4) = ((MR_Box) (mdb__declarative_execution__EventNo_11));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 5) = ((MR_Box) (mdb__declarative_execution__Label_12));
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 6) = ((MR_Box) (mdb__declarative_execution__Suspicion_13));
    }
    return mdb__declarative_execution__HeadVar__7_7;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_redo_node_5_f_0(
  MR_Word mdb__declarative_execution__Preceding_7,
  MR_Word mdb__declarative_execution__Exit_8,
  MR_Integer mdb__declarative_execution__Event_9,
  MR_Box mdb__declarative_execution__Label_10,
  MR_Integer mdb__declarative_execution__Suspicion_11)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__HeadVar__6_6;

    {
      mdb__declarative_execution__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 0) = ((MR_Box) (mdb__declarative_execution__Preceding_7));
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 1) = ((MR_Box) (mdb__declarative_execution__Exit_8));
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 2) = ((MR_Box) (mdb__declarative_execution__Event_9));
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 3) = ((MR_Box) (mdb__declarative_execution__Label_10));
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 4) = ((MR_Box) (mdb__declarative_execution__Suspicion_11));
    }
    return mdb__declarative_execution__HeadVar__6_6;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_exit_node_8_f_0(
  MR_Word mdb__declarative_execution__Preceding_10,
  MR_Word mdb__declarative_execution__Call_11,
  MR_Word mdb__declarative_execution__MaybeRedo_12,
  MR_Word mdb__declarative_execution__AtomArgs_13,
  MR_Integer mdb__declarative_execution__EventNo_14,
  MR_Box mdb__declarative_execution__Label_15,
  MR_Integer mdb__declarative_execution__IoSeqNum_16,
  MR_Integer mdb__declarative_execution__Suspicion_17)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__HeadVar__9_9;

    {
      mdb__declarative_execution__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 0) = ((MR_Box) (mdb__declarative_execution__Preceding_10));
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 1) = ((MR_Box) (mdb__declarative_execution__Call_11));
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 2) = ((MR_Box) (mdb__declarative_execution__MaybeRedo_12));
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 3) = ((MR_Box) (mdb__declarative_execution__AtomArgs_13));
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 4) = ((MR_Box) (mdb__declarative_execution__EventNo_14));
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 5) = ((MR_Box) (mdb__declarative_execution__Label_15));
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 6) = ((MR_Box) (mdb__declarative_execution__IoSeqNum_16));
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 7) = ((MR_Box) (mdb__declarative_execution__Suspicion_17));
    }
    return mdb__declarative_execution__HeadVar__9_9;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__make_no_maybe_label_0_f_0(void)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__make_yes_maybe_label_1_f_0(
  MR_Box mdb__declarative_execution__Label_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__HeadVar__2_2;

    {
      mdb__declarative_execution__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, 0) = ((MR_Box) (mdb__declarative_execution__Label_3));
    }
    return mdb__declarative_execution__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__construct_call_node_9_f_0(
  MR_Word mdb__declarative_execution__Preceding_11,
  MR_Word mdb__declarative_execution__AtomArgs_12,
  MR_Integer mdb__declarative_execution__SeqNo_13,
  MR_Integer mdb__declarative_execution__EventNo_14,
  MR_Word mdb__declarative_execution__AtMaxDepth_15,
  MR_Word mdb__declarative_execution__MaybeReturnLabel_16,
  MR_Box mdb__declarative_execution__Label_17,
  MR_Integer mdb__declarative_execution__IoSeqNum_18,
  MR_Integer mdb__declarative_execution__Suspicion_19)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__Call_20;
    MR_Word mdb__declarative_execution__MaybeImplicitTreeInfo_21;
    MR_Word mdb__declarative_execution__LastInterface_22;

    switch (mdb__declarative_execution__AtMaxDepth_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mdb__declarative_execution__MaybeImplicitTreeInfo_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          mdb__declarative_execution__MaybeImplicitTreeInfo_21 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_execution_scalar_common_4[0]);
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
	 mdb__declarative_execution__LastInterface_22  = Id;
}
    {
      mdb__declarative_execution__Call_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 0) = ((MR_Box) (mdb__declarative_execution__Preceding_11));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 1) = ((MR_Box) (mdb__declarative_execution__LastInterface_22));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 2) = ((MR_Box) (mdb__declarative_execution__AtomArgs_12));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 3) = ((MR_Box) (mdb__declarative_execution__SeqNo_13));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 4) = ((MR_Box) (mdb__declarative_execution__EventNo_14));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 5) = ((MR_Box) (mdb__declarative_execution__MaybeImplicitTreeInfo_21));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 6) = ((MR_Box) (mdb__declarative_execution__MaybeReturnLabel_16));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 7) = ((MR_Box) (mdb__declarative_execution__Label_17));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 8) = ((MR_Box) (mdb__declarative_execution__IoSeqNum_18));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 9) = ((MR_Box) (mdb__declarative_execution__Suspicion_19));
    }
    return mdb__declarative_execution__Call_20;
  }
}

static void MR_CALL 
mdb__declarative_execution__print_trace_node_4_p_0(
  MR_Word mdb__declarative_execution__OutStr_5,
  MR_Word mdb__declarative_execution__Node_6)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__CNode_8;

{
#define MR_PROC_LABEL mdb__declarative_execution__print_trace_node_4_p_0

	MR_Word N1;
	MR_Word N2;

	N1 =  mdb__declarative_execution__Node_6 ;
		{

    N2 = N1;


		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__CNode_8  = N2;
}
    {
      mercury__io__write_4_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[0], mdb__declarative_execution__OutStr_5, ((MR_Box) (mdb__declarative_execution__CNode_8)));
    }
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__find_prev_contour_store_2_f_0(
  MR_Word mdb__declarative_execution__Store_4,
  MR_Word mdb__declarative_execution__Id_5)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__Prev_6;
    MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9 = (MR_Word) &mdb__declarative_execution_scalar_common_2[0];
    MR_Word mdb__declarative_execution__Node_7;
    MR_Word mdb__declarative_execution__Prev0_8;

    {
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9, ((MR_Box) (mdb__declarative_execution__Store_4)), ((MR_Box) (mdb__declarative_execution__Id_5)), &mdb__declarative_execution__Node_7);
    }
    switch (MR_tag((MR_Word) mdb__declarative_execution__Node_7)) {
      default:
        mdb__declarative_execution__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[29])));
          }
          mdb__declarative_execution__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_execution__Exit_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 1)));
          MR_Word mdb__declarative_execution__ExitNode_25;
          MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 0)));
          MR_Integer mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 2)));
          MR_Box mdb__declarative_execution__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 3)));
          MR_Integer mdb__declarative_execution__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 4)));
          MR_Word mdb__declarative_execution__V_66_66;
          MR_Word mdb__declarative_execution__V_67_67;
          MR_Word mdb__declarative_execution__V_68_68;
          MR_Integer mdb__declarative_execution__V_69_69;
          MR_Box mdb__declarative_execution__V_70_70;
          MR_Integer mdb__declarative_execution__V_71_71;
          MR_Integer mdb__declarative_execution__V_72_72;

          {
            mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9, ((MR_Box) (mdb__declarative_execution__Store_4)), ((MR_Box) (mdb__declarative_execution__Exit_21)), &mdb__declarative_execution__ExitNode_25);
          }
          mdb__declarative_execution__Prev0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 0)));
          mdb__declarative_execution__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 1)));
          mdb__declarative_execution__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 2)));
          mdb__declarative_execution__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 3)));
          mdb__declarative_execution__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 4)));
          mdb__declarative_execution__V_70_70 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 5)));
          mdb__declarative_execution__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 6)));
          mdb__declarative_execution__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 7)));
          mdb__declarative_execution__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 0)))) {
          default:
            mdb__declarative_execution__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word mdb__declarative_execution__Call_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 2)));
              MR_Word mdb__declarative_execution__CallNode_19;
              MR_Word mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 1)));
              MR_Word mdb__declarative_execution__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 3)));
              MR_Integer mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 4)));
              MR_Box mdb__declarative_execution__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 5)));
              MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 6)));
              MR_Word mdb__declarative_execution__V_57_57;
              MR_Word mdb__declarative_execution__V_58_58;
              MR_Integer mdb__declarative_execution__V_59_59;
              MR_Integer mdb__declarative_execution__V_60_60;
              MR_Word mdb__declarative_execution__V_61_61;
              MR_Word mdb__declarative_execution__V_62_62;
              MR_Box mdb__declarative_execution__V_63_63;
              MR_Integer mdb__declarative_execution__V_64_64;
              MR_Integer mdb__declarative_execution__V_65_65;

              {
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9, ((MR_Box) (mdb__declarative_execution__Store_4)), ((MR_Box) (mdb__declarative_execution__Call_14)), &mdb__declarative_execution__CallNode_19);
              }
              mdb__declarative_execution__Prev0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 0)));
              mdb__declarative_execution__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 1)));
              mdb__declarative_execution__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 2)));
              mdb__declarative_execution__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 3)));
              mdb__declarative_execution__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 4)));
              mdb__declarative_execution__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 5)));
              mdb__declarative_execution__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 6)));
              mdb__declarative_execution__V_63_63 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 7)));
              mdb__declarative_execution__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 8)));
              mdb__declarative_execution__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 9)));
              mdb__declarative_execution__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[30])));
              }
              mdb__declarative_execution__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 8:
            {
              {
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[31])));
              }
              mdb__declarative_execution__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word mdb__declarative_execution__Neg_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 2)));
              MR_Word mdb__declarative_execution__V_56_56;
              MR_Word mdb__declarative_execution__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 1)));
              MR_Box mdb__declarative_execution__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 3)));
              MR_Box mdb__declarative_execution__V_29_29;
              MR_Word mdb__declarative_execution__V_30_30;

              {
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9, ((MR_Box) (mdb__declarative_execution__Store_4)), ((MR_Box) (mdb__declarative_execution__Neg_27)), &mdb__declarative_execution__V_56_56);
              }
              mdb__declarative_execution__Prev0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_56_56, (MR_Integer) 1)));
              mdb__declarative_execution__V_29_29 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_56_56, (MR_Integer) 2)));
              mdb__declarative_execution__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_56_56, (MR_Integer) 3)));
              mdb__declarative_execution__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (mdb__declarative_execution__succeeded)
      mdb__declarative_execution__Prev_6 = mdb__declarative_execution__Prev0_8;
    else
      mdb__declarative_execution__Prev_6 = mdb__declarative_execution__Id_5;
    return mdb__declarative_execution__Prev_6;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__step_left_in_contour_store_2_f_0(
  MR_Word mdb__declarative_execution__Store_4,
  MR_Word mdb__declarative_execution__Node_5)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__HeadVar__3_3;
    MR_Box mdb__declarative_execution__conv0_HeadVar__3_3;

    {
      mdb__declarative_execution__conv0_HeadVar__3_3 = mdb__declarative_execution__step_left_in_contour_2_f_0((MR_Word) &mdb__declarative_execution_scalar_common_2[0], ((MR_Box) (mdb__declarative_execution__Store_4)), mdb__declarative_execution__Node_5);
    }
    mdb__declarative_execution__HeadVar__3_3 = ((MR_Word) mdb__declarative_execution__conv0_HeadVar__3_3);
    return mdb__declarative_execution__HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_first_disj_2_p_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word * mdb__declarative_execution__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
      {
{
#define MR_PROC_LABEL mdb__declarative_execution__trace_node_first_disj_2_p_0

	MR_Word Id;

		{

    Id = (MR_Word) NULL;


		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_execution__HeadVar__2_2  = Id;
}
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    else
    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
      {
        MR_Word mdb__declarative_execution__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
        MR_Box mdb__declarative_execution__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));

        *mdb__declarative_execution__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    else
      mdb__declarative_execution__succeeded = MR_FALSE;
    return mdb__declarative_execution__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_call_3_p_0(
  MR_Word mdb__declarative_execution__S_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Word * mdb__declarative_execution__Call_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) {
      default:
        mdb__declarative_execution__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word mdb__declarative_execution__V_7_7;
          MR_Word mdb__declarative_execution__V_8_8;
          MR_Integer mdb__declarative_execution__V_9_9;
          MR_Box mdb__declarative_execution__V_10_10;
          MR_Integer mdb__declarative_execution__V_11_11;
          MR_Integer mdb__declarative_execution__V_12_12;

          *mdb__declarative_execution__Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
          mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
          mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
          mdb__declarative_execution__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
          mdb__declarative_execution__V_10_10 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
          mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
          mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
          mdb__declarative_execution__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_execution__Exit_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word mdb__declarative_execution__ExitNode_20;
          MR_Word mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
          MR_Integer mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
          MR_Box mdb__declarative_execution__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
          MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
          MR_Word mdb__declarative_execution__V_36_36;
          MR_Word mdb__declarative_execution__V_37_37;
          MR_Word mdb__declarative_execution__V_38_38;
          MR_Integer mdb__declarative_execution__V_39_39;
          MR_Box mdb__declarative_execution__V_40_40;
          MR_Integer mdb__declarative_execution__V_41_41;
          MR_Integer mdb__declarative_execution__V_42_42;

          {
            mdb__declarative_execution__exit_node_from_id_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[0], ((MR_Box) (mdb__declarative_execution__S_1)), ((MR_Box) (mdb__declarative_execution__Exit_15)), &mdb__declarative_execution__ExitNode_20);
          }
          mdb__declarative_execution__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 0)));
          *mdb__declarative_execution__Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 1)));
          mdb__declarative_execution__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 2)));
          mdb__declarative_execution__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 3)));
          mdb__declarative_execution__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 4)));
          mdb__declarative_execution__V_40_40 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 5)));
          mdb__declarative_execution__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 6)));
          mdb__declarative_execution__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 7)));
          mdb__declarative_execution__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) {
          default:
            mdb__declarative_execution__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word mdb__declarative_execution__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mdb__declarative_execution__V_24_24;
              MR_Integer mdb__declarative_execution__V_25_25;
              MR_Box mdb__declarative_execution__V_26_26;
              MR_Integer mdb__declarative_execution__V_27_27;

              *mdb__declarative_execution__Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
              mdb__declarative_execution__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
              mdb__declarative_execution__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
              mdb__declarative_execution__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
              mdb__declarative_execution__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
              mdb__declarative_execution__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdb__declarative_execution__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mdb__declarative_execution__V_31_31;
              MR_Word mdb__declarative_execution__V_32_32;
              MR_Integer mdb__declarative_execution__V_33_33;
              MR_Box mdb__declarative_execution__V_34_34;
              MR_Integer mdb__declarative_execution__V_35_35;

              *mdb__declarative_execution__Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
              mdb__declarative_execution__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
              mdb__declarative_execution__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
              mdb__declarative_execution__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
              mdb__declarative_execution__V_34_34 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
              mdb__declarative_execution__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
              mdb__declarative_execution__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return mdb__declarative_execution__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_seqno_3_p_0(
  MR_Word mdb__declarative_execution__S_4,
  MR_Word mdb__declarative_execution__Node_5,
  MR_Integer * mdb__declarative_execution__SeqNo_6)
{
  {
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Integer mdb__declarative_execution__SeqNo0_7;
    MR_Word mdb__declarative_execution__V_10_10;
    MR_Word mdb__declarative_execution__V_11_11;
    MR_Word mdb__declarative_execution__V_12_12;
    MR_Integer mdb__declarative_execution__V_13_13;
    MR_Word mdb__declarative_execution__V_14_14;
    MR_Word mdb__declarative_execution__V_15_15;
    MR_Box mdb__declarative_execution__V_16_16;
    MR_Integer mdb__declarative_execution__V_17_17;
    MR_Integer mdb__declarative_execution__V_18_18;

    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 0)));
        mdb__declarative_execution__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 1)));
        mdb__declarative_execution__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
        mdb__declarative_execution__SeqNo0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
        mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
        mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
        mdb__declarative_execution__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
        mdb__declarative_execution__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 7)));
        mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 8)));
        mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 9)));
        *mdb__declarative_execution__SeqNo_6 = mdb__declarative_execution__SeqNo0_7;
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_28;
        MR_Word mdb__declarative_execution__Call_8;
        MR_Word mdb__declarative_execution__CallNode_9;
        MR_Word mdb__declarative_execution__V_19_19;
        MR_Word mdb__declarative_execution__V_20_20;
        MR_Word mdb__declarative_execution__V_21_21;
        MR_Integer mdb__declarative_execution__V_22_22;
        MR_Word mdb__declarative_execution__V_23_23;
        MR_Word mdb__declarative_execution__V_24_24;
        MR_Box mdb__declarative_execution__V_25_25;
        MR_Integer mdb__declarative_execution__V_26_26;
        MR_Integer mdb__declarative_execution__V_27_27;

        {
          mdb__declarative_execution__succeeded = mdb__declarative_execution__trace_node_call_3_p_0(mdb__declarative_execution__S_4, mdb__declarative_execution__Node_5, &mdb__declarative_execution__Call_8);
        }
        if (mdb__declarative_execution__succeeded)
          {
            mdb__declarative_execution__TypeClassInfo_for_annotated_trace_28 = (MR_Word) &mdb__declarative_execution_scalar_common_2[0];
            {
              mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_28, ((MR_Box) (mdb__declarative_execution__S_4)), ((MR_Box) (mdb__declarative_execution__Call_8)), &mdb__declarative_execution__CallNode_9);
            }
            mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 0)));
            mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 1)));
            mdb__declarative_execution__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 2)));
            *mdb__declarative_execution__SeqNo_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 3)));
            mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 4)));
            mdb__declarative_execution__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 5)));
            mdb__declarative_execution__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 6)));
            mdb__declarative_execution__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 7)));
            mdb__declarative_execution__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 8)));
            mdb__declarative_execution__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 9)));
            mdb__declarative_execution__succeeded = MR_TRUE;
          }
      }
    return mdb__declarative_execution__succeeded;
  }
}

static MR_String MR_CALL 
mdb__declarative_execution__trace_node_path_1_f_0(
  MR_Word mdb__declarative_execution__Node_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_String mdb__declarative_execution__Path_4;
    MR_Box mdb__declarative_execution__Label_5;

    switch (MR_tag((MR_Word) mdb__declarative_execution__Node_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 0)));
          MR_Word mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
          MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
          MR_Integer mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
          MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
          MR_Word mdb__declarative_execution__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 5)));
          MR_Word mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 6)));
          MR_Integer mdb__declarative_execution__V_15_15;
          MR_Integer mdb__declarative_execution__V_16_16;

          mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 7)));
          mdb__declarative_execution__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 8)));
          mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 9)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_execution__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 0)));
          MR_Word mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
          MR_Word mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
          MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
          MR_Integer mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
          MR_Integer mdb__declarative_execution__V_23_23;
          MR_Integer mdb__declarative_execution__V_24_24;

          mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 5)));
          mdb__declarative_execution__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 6)));
          mdb__declarative_execution__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_execution__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 0)));
          MR_Word mdb__declarative_execution__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
          MR_Integer mdb__declarative_execution__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
          MR_Integer mdb__declarative_execution__V_29_29;

          mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
          mdb__declarative_execution__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mdb__declarative_execution__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
              MR_Word mdb__declarative_execution__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
              MR_Word mdb__declarative_execution__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
              MR_Integer mdb__declarative_execution__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
              MR_Integer mdb__declarative_execution__V_35_35;

              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 5)));
              mdb__declarative_execution__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 6)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdb__declarative_execution__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
              MR_Word mdb__declarative_execution__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
              MR_Word mdb__declarative_execution__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
              MR_Word mdb__declarative_execution__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
              MR_Integer mdb__declarative_execution__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 5)));
              MR_Integer mdb__declarative_execution__V_42_42;

              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 6)));
              mdb__declarative_execution__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 7)));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdb__declarative_execution__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));

              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word mdb__declarative_execution__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));

              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word mdb__declarative_execution__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
              MR_Word mdb__declarative_execution__V_49_49;

              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
              mdb__declarative_execution__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word mdb__declarative_execution__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
              MR_Word mdb__declarative_execution__V_52_52;

              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
              mdb__declarative_execution__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word mdb__declarative_execution__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
              MR_Word mdb__declarative_execution__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));

              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word mdb__declarative_execution__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
              MR_Word mdb__declarative_execution__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));

              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word mdb__declarative_execution__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
              MR_Word mdb__declarative_execution__V_61_61;

              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
              mdb__declarative_execution__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word mdb__declarative_execution__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
              MR_Word mdb__declarative_execution__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));

              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word mdb__declarative_execution__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
              MR_Word mdb__declarative_execution__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));

              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
            }
            break;
        }
        break;
    }
    {
      mdb__declarative_execution__Path_4 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_execution__Label_5);
    }
    return mdb__declarative_execution__Path_4;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__trace_node_port_1_f_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__HeadVar__2_2;

    switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 2;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 3;
            break;
          case (MR_Integer) 1:
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 5;
            break;
          case (MR_Integer) 2:
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 14;
            break;
          case (MR_Integer) 3:
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 12;
            break;
          case (MR_Integer) 4:
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 13;
            break;
          case (MR_Integer) 5:
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 6;
            break;
          case (MR_Integer) 6:
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 7;
            break;
          case (MR_Integer) 7:
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 8;
            break;
          case (MR_Integer) 8:
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 9;
            break;
          case (MR_Integer) 9:
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 10;
            break;
          case (MR_Integer) 10:
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 11;
            break;
        }
        break;
    }
    return mdb__declarative_execution__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__neg_node_set_status_2_f_0(
  MR_Word mdb__declarative_execution__Neg0_4,
  MR_Word mdb__declarative_execution__Status_5)
{
  {
    MR_bool mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Neg0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Neg0_4, (MR_Integer) 0)))) == (MR_Integer) 8)));
    MR_Word mdb__declarative_execution__Neg_6;
    MR_Word mdb__declarative_execution__TypeCtorInfo_16_16;
    MR_Word mdb__declarative_execution__TypeInfo_16_27;
    MR_Word mdb__declarative_execution__TypeInfo_18_29;
    MR_Word mdb__declarative_execution__TypeClassInfo_for_store_31;
    MR_Word mdb__declarative_execution__TypeInfo_21_32;
    MR_Word mdb__declarative_execution__Neg1_10;
    MR_Word mdb__declarative_execution__Ref_22;
    MR_Word mdb__declarative_execution__ArgRef_24;
    MR_Word mdb__declarative_execution__V_7_7;
    MR_Box mdb__declarative_execution__V_8_8;
    MR_Word mdb__declarative_execution__V_9_9;
    MR_Box mdb__declarative_execution__conv0_S1_23;
    MR_Box mdb__declarative_execution__conv1_S2_25;
    MR_Box mdb__declarative_execution__conv2_S_26;
    MR_Box mdb__declarative_execution__conv3_Neg_6;

    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Neg0_4, (MR_Integer) 1)));
        mdb__declarative_execution__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Neg0_4, (MR_Integer) 2)));
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Neg0_4, (MR_Integer) 3)));
        mdb__declarative_execution__Neg1_10 = mdb__declarative_execution__Neg0_4;
      }
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[28])));
        }
      }
    mdb__declarative_execution__TypeCtorInfo_16_16 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0;
    {
      mercury__store__init_1_p_0(&mdb__declarative_execution__TypeInfo_16_27);
    }
    {
      mdb__declarative_execution__TypeInfo_18_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_29, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_29, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_27));
    }
    {
      mdb__declarative_execution__TypeClassInfo_for_store_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_27));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 2) = ((MR_Box) (mdb__declarative_execution__TypeInfo_18_29));
    }
    mdb__declarative_execution__TypeInfo_21_32 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
    {
      mercury__store__new_ref_4_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeClassInfo_for_store_31, ((MR_Box) (mdb__declarative_execution__Neg1_10)), &mdb__declarative_execution__Ref_22, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv0_S1_23);
    }
    {
      mercury__store__arg_ref_5_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeCtorInfo_16_16, mdb__declarative_execution__TypeClassInfo_for_store_31, mdb__declarative_execution__Ref_22, (MR_Integer) 2, &mdb__declarative_execution__ArgRef_24, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv1_S2_25);
    }
    {
      mercury__store__set_ref_value_4_p_0(mdb__declarative_execution__TypeCtorInfo_16_16, mdb__declarative_execution__TypeClassInfo_for_store_31, mdb__declarative_execution__ArgRef_24, ((MR_Box) (mdb__declarative_execution__Status_5)), ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv2_S_26);
    }
    {
      mercury__store__extract_ref_value_3_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeClassInfo_for_store_31, ((MR_Box) ((MR_Integer) 0)), mdb__declarative_execution__Ref_22, &mdb__declarative_execution__conv3_Neg_6);
    }
    mdb__declarative_execution__Neg_6 = ((MR_Word) mdb__declarative_execution__conv3_Neg_6);
    return mdb__declarative_execution__Neg_6;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__cond_node_set_status_2_f_0(
  MR_Word mdb__declarative_execution__Cond0_4,
  MR_Word mdb__declarative_execution__Status_5)
{
  {
    MR_bool mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Cond0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Cond0_4, (MR_Integer) 0)))) == (MR_Integer) 5)));
    MR_Word mdb__declarative_execution__Cond_6;
    MR_Word mdb__declarative_execution__TypeCtorInfo_16_16;
    MR_Word mdb__declarative_execution__TypeInfo_16_27;
    MR_Word mdb__declarative_execution__TypeInfo_18_29;
    MR_Word mdb__declarative_execution__TypeClassInfo_for_store_31;
    MR_Word mdb__declarative_execution__TypeInfo_21_32;
    MR_Word mdb__declarative_execution__Cond1_10;
    MR_Word mdb__declarative_execution__Ref_22;
    MR_Word mdb__declarative_execution__ArgRef_24;
    MR_Word mdb__declarative_execution__V_7_7;
    MR_Box mdb__declarative_execution__V_8_8;
    MR_Word mdb__declarative_execution__V_9_9;
    MR_Box mdb__declarative_execution__conv0_S1_23;
    MR_Box mdb__declarative_execution__conv1_S2_25;
    MR_Box mdb__declarative_execution__conv2_S_26;
    MR_Box mdb__declarative_execution__conv3_Cond_6;

    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Cond0_4, (MR_Integer) 1)));
        mdb__declarative_execution__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Cond0_4, (MR_Integer) 2)));
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Cond0_4, (MR_Integer) 3)));
        mdb__declarative_execution__Cond1_10 = mdb__declarative_execution__Cond0_4;
      }
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[27])));
        }
      }
    mdb__declarative_execution__TypeCtorInfo_16_16 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0;
    {
      mercury__store__init_1_p_0(&mdb__declarative_execution__TypeInfo_16_27);
    }
    {
      mdb__declarative_execution__TypeInfo_18_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_29, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_29, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_27));
    }
    {
      mdb__declarative_execution__TypeClassInfo_for_store_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_27));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 2) = ((MR_Box) (mdb__declarative_execution__TypeInfo_18_29));
    }
    mdb__declarative_execution__TypeInfo_21_32 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
    {
      mercury__store__new_ref_4_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeClassInfo_for_store_31, ((MR_Box) (mdb__declarative_execution__Cond1_10)), &mdb__declarative_execution__Ref_22, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv0_S1_23);
    }
    {
      mercury__store__arg_ref_5_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeCtorInfo_16_16, mdb__declarative_execution__TypeClassInfo_for_store_31, mdb__declarative_execution__Ref_22, (MR_Integer) 2, &mdb__declarative_execution__ArgRef_24, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv1_S2_25);
    }
    {
      mercury__store__set_ref_value_4_p_0(mdb__declarative_execution__TypeCtorInfo_16_16, mdb__declarative_execution__TypeClassInfo_for_store_31, mdb__declarative_execution__ArgRef_24, ((MR_Box) (mdb__declarative_execution__Status_5)), ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv2_S_26);
    }
    {
      mercury__store__extract_ref_value_3_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeClassInfo_for_store_31, ((MR_Box) ((MR_Integer) 0)), mdb__declarative_execution__Ref_22, &mdb__declarative_execution__conv3_Cond_6);
    }
    mdb__declarative_execution__Cond_6 = ((MR_Word) mdb__declarative_execution__conv3_Cond_6);
    return mdb__declarative_execution__Cond_6;
  }
}

static MR_Integer MR_CALL 
mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0(
  MR_Word mdb__declarative_execution__Call_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Call_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Integer mdb__declarative_execution__IdealDepth_4;
    MR_Word mdb__declarative_execution__MaybeImplicitTreeInfo_5;
    MR_Word mdb__declarative_execution__V_13_13;
    MR_Word mdb__declarative_execution__V_14_14;
    MR_Word mdb__declarative_execution__V_15_15;
    MR_Integer mdb__declarative_execution__V_16_16;
    MR_Integer mdb__declarative_execution__V_17_17;
    MR_Word mdb__declarative_execution__V_18_18;
    MR_Box mdb__declarative_execution__V_19_19;
    MR_Integer mdb__declarative_execution__V_20_20;
    MR_Integer mdb__declarative_execution__V_21_21;

    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 0)));
        mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 1)));
        mdb__declarative_execution__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 2)));
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 3)));
        mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 4)));
        mdb__declarative_execution__MaybeImplicitTreeInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 5)));
        mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 6)));
        mdb__declarative_execution__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 7)));
        mdb__declarative_execution__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 8)));
        mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 9)));
        if ((mdb__declarative_execution__MaybeImplicitTreeInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[25])));
            }
          }
        else
          {
            MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__MaybeImplicitTreeInfo_5, (MR_Integer) 0)));

            mdb__declarative_execution__IdealDepth_4 = (MR_Integer) mdb__declarative_execution__V_9_9;
          }
      }
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[26])));
        }
      }
    return mdb__declarative_execution__IdealDepth_4;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0(
  MR_Word mdb__declarative_execution__Call0_4,
  MR_Integer mdb__declarative_execution__IdealDepth_5)
{
  {
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Call0_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word mdb__declarative_execution__Call_6;
    MR_Word mdb__declarative_execution__TypeInfo_25_25;
    MR_Word mdb__declarative_execution__TypeInfo_16_36;
    MR_Word mdb__declarative_execution__TypeInfo_18_38;
    MR_Word mdb__declarative_execution__TypeClassInfo_for_store_40;
    MR_Word mdb__declarative_execution__TypeInfo_21_41;
    MR_Word mdb__declarative_execution__Call1_17;
    MR_Word mdb__declarative_execution__V_22_22;
    MR_Word mdb__declarative_execution__V_23_23;
    MR_Word mdb__declarative_execution__Ref_31;
    MR_Word mdb__declarative_execution__ArgRef_33;
    MR_Word mdb__declarative_execution__V_7_7;
    MR_Word mdb__declarative_execution__V_8_8;
    MR_Word mdb__declarative_execution__V_9_9;
    MR_Integer mdb__declarative_execution__V_10_10;
    MR_Integer mdb__declarative_execution__V_11_11;
    MR_Word mdb__declarative_execution__V_12_12;
    MR_Word mdb__declarative_execution__V_13_13;
    MR_Box mdb__declarative_execution__V_14_14;
    MR_Integer mdb__declarative_execution__V_15_15;
    MR_Integer mdb__declarative_execution__V_16_16;
    MR_Box mdb__declarative_execution__conv0_S1_32;
    MR_Box mdb__declarative_execution__conv1_S2_34;
    MR_Box mdb__declarative_execution__conv2_S_35;
    MR_Box mdb__declarative_execution__conv3_Call_6;

    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 0)));
        mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 1)));
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 2)));
        mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 3)));
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 4)));
        mdb__declarative_execution__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 5)));
        mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 6)));
        mdb__declarative_execution__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 7)));
        mdb__declarative_execution__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 8)));
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 9)));
        mdb__declarative_execution__Call1_17 = mdb__declarative_execution__Call0_4;
      }
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[24])));
        }
      }
    mdb__declarative_execution__V_23_23 = (MR_Word) mdb__declarative_execution__IdealDepth_5;
    {
      mdb__declarative_execution__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_22_22, 0) = ((MR_Box) (mdb__declarative_execution__V_23_23));
    }
    mdb__declarative_execution__TypeInfo_25_25 = (MR_Word) &mdb__declarative_execution_scalar_common_1[1];
    {
      mercury__store__init_1_p_0(&mdb__declarative_execution__TypeInfo_16_36);
    }
    {
      mdb__declarative_execution__TypeInfo_18_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_38, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_38, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_36));
    }
    {
      mdb__declarative_execution__TypeClassInfo_for_store_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_40, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_40, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_36));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_40, 2) = ((MR_Box) (mdb__declarative_execution__TypeInfo_18_38));
    }
    mdb__declarative_execution__TypeInfo_21_41 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
    {
      mercury__store__new_ref_4_p_0(mdb__declarative_execution__TypeInfo_21_41, mdb__declarative_execution__TypeClassInfo_for_store_40, ((MR_Box) (mdb__declarative_execution__Call1_17)), &mdb__declarative_execution__Ref_31, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv0_S1_32);
    }
    {
      mercury__store__arg_ref_5_p_0(mdb__declarative_execution__TypeInfo_21_41, mdb__declarative_execution__TypeInfo_25_25, mdb__declarative_execution__TypeClassInfo_for_store_40, mdb__declarative_execution__Ref_31, (MR_Integer) 5, &mdb__declarative_execution__ArgRef_33, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv1_S2_34);
    }
    {
      mercury__store__set_ref_value_4_p_0(mdb__declarative_execution__TypeInfo_25_25, mdb__declarative_execution__TypeClassInfo_for_store_40, mdb__declarative_execution__ArgRef_33, ((MR_Box) (mdb__declarative_execution__V_22_22)), ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv2_S_35);
    }
    {
      mercury__store__extract_ref_value_3_p_0(mdb__declarative_execution__TypeInfo_21_41, mdb__declarative_execution__TypeClassInfo_for_store_40, ((MR_Box) ((MR_Integer) 0)), mdb__declarative_execution__Ref_31, &mdb__declarative_execution__conv3_Call_6);
    }
    mdb__declarative_execution__Call_6 = ((MR_Word) mdb__declarative_execution__conv3_Call_6);
    return mdb__declarative_execution__Call_6;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__call_node_set_last_interface_2_f_0(
  MR_Word mdb__declarative_execution__Call0_4,
  MR_Word mdb__declarative_execution__Last_5)
{
  {
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Call0_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word mdb__declarative_execution__Call_6;
    MR_Word mdb__declarative_execution__TypeCtorInfo_23_23;
    MR_Word mdb__declarative_execution__TypeInfo_16_34;
    MR_Word mdb__declarative_execution__TypeInfo_18_36;
    MR_Word mdb__declarative_execution__TypeClassInfo_for_store_38;
    MR_Word mdb__declarative_execution__TypeInfo_21_39;
    MR_Word mdb__declarative_execution__Call1_17;
    MR_Word mdb__declarative_execution__Ref_29;
    MR_Word mdb__declarative_execution__ArgRef_31;
    MR_Word mdb__declarative_execution__V_7_7;
    MR_Word mdb__declarative_execution__V_8_8;
    MR_Word mdb__declarative_execution__V_9_9;
    MR_Integer mdb__declarative_execution__V_10_10;
    MR_Integer mdb__declarative_execution__V_11_11;
    MR_Word mdb__declarative_execution__V_12_12;
    MR_Word mdb__declarative_execution__V_13_13;
    MR_Box mdb__declarative_execution__V_14_14;
    MR_Integer mdb__declarative_execution__V_15_15;
    MR_Integer mdb__declarative_execution__V_16_16;
    MR_Box mdb__declarative_execution__conv0_S1_30;
    MR_Box mdb__declarative_execution__conv1_S2_32;
    MR_Box mdb__declarative_execution__conv2_S_33;
    MR_Box mdb__declarative_execution__conv3_Call_6;

    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 0)));
        mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 1)));
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 2)));
        mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 3)));
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 4)));
        mdb__declarative_execution__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 5)));
        mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 6)));
        mdb__declarative_execution__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 7)));
        mdb__declarative_execution__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 8)));
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 9)));
        mdb__declarative_execution__Call1_17 = mdb__declarative_execution__Call0_4;
      }
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[23])));
        }
      }
    mdb__declarative_execution__TypeCtorInfo_23_23 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0;
    {
      mercury__store__init_1_p_0(&mdb__declarative_execution__TypeInfo_16_34);
    }
    {
      mdb__declarative_execution__TypeInfo_18_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_36, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_36, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_34));
    }
    {
      mdb__declarative_execution__TypeClassInfo_for_store_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_38, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_38, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_34));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_38, 2) = ((MR_Box) (mdb__declarative_execution__TypeInfo_18_36));
    }
    mdb__declarative_execution__TypeInfo_21_39 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
    {
      mercury__store__new_ref_4_p_0(mdb__declarative_execution__TypeInfo_21_39, mdb__declarative_execution__TypeClassInfo_for_store_38, ((MR_Box) (mdb__declarative_execution__Call1_17)), &mdb__declarative_execution__Ref_29, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv0_S1_30);
    }
    {
      mercury__store__arg_ref_5_p_0(mdb__declarative_execution__TypeInfo_21_39, mdb__declarative_execution__TypeCtorInfo_23_23, mdb__declarative_execution__TypeClassInfo_for_store_38, mdb__declarative_execution__Ref_29, (MR_Integer) 1, &mdb__declarative_execution__ArgRef_31, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv1_S2_32);
    }
    {
      mercury__store__set_ref_value_4_p_0(mdb__declarative_execution__TypeCtorInfo_23_23, mdb__declarative_execution__TypeClassInfo_for_store_38, mdb__declarative_execution__ArgRef_31, ((MR_Box) (mdb__declarative_execution__Last_5)), ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv2_S_33);
    }
    {
      mercury__store__extract_ref_value_3_p_0(mdb__declarative_execution__TypeInfo_21_39, mdb__declarative_execution__TypeClassInfo_for_store_38, ((MR_Box) ((MR_Integer) 0)), mdb__declarative_execution__Ref_29, &mdb__declarative_execution__conv3_Call_6);
    }
    mdb__declarative_execution__Call_6 = ((MR_Word) mdb__declarative_execution__conv3_Call_6);
    return mdb__declarative_execution__Call_6;
  }
}

static MR_Word MR_CALL 
mdb__declarative_execution__call_node_get_last_interface_1_f_0(
  MR_Word mdb__declarative_execution__Call_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Call_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word mdb__declarative_execution__Last_4;
    MR_Word mdb__declarative_execution__Last0_6;
    MR_Word mdb__declarative_execution__V_5_5;
    MR_Word mdb__declarative_execution__V_7_7;
    MR_Integer mdb__declarative_execution__V_8_8;
    MR_Integer mdb__declarative_execution__V_9_9;
    MR_Word mdb__declarative_execution__V_10_10;
    MR_Word mdb__declarative_execution__V_11_11;
    MR_Box mdb__declarative_execution__V_12_12;
    MR_Integer mdb__declarative_execution__V_13_13;
    MR_Integer mdb__declarative_execution__V_14_14;

    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 0)));
        mdb__declarative_execution__Last0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 1)));
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 2)));
        mdb__declarative_execution__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 3)));
        mdb__declarative_execution__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 4)));
        mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 5)));
        mdb__declarative_execution__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 6)));
        mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 7)));
        mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 8)));
        mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 9)));
        mdb__declarative_execution__Last_4 = mdb__declarative_execution__Last0_6;
      }
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[22])));
        }
      }
    return mdb__declarative_execution__Last_4;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__search_trace_node_store_3_p_0(
  MR_Word mdb__declarative_execution___Store_1,
  MR_Word mdb__declarative_execution__Id_2,
  MR_Word * mdb__declarative_execution__Node_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

{
#define MR_PROC_LABEL mdb__declarative_execution__search_trace_node_store_3_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id =  mdb__declarative_execution__Id_2 ;
		{

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mdb__declarative_execution__Node_3  = Node;
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
    return mdb__declarative_execution__succeeded;
  }
}

static MR_Box MR_CALL 
mdb__declarative_execution__step_over_redo_or_call_3_f_0(
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_24,
  MR_Box mdb__declarative_execution__Store_5,
  MR_Box mdb__declarative_execution__Call_6,
  MR_Box mdb__declarative_execution__MaybeRedo_7)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Box mdb__declarative_execution__Next_8;
    MR_Word mdb__declarative_execution__Redo_9;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_24, mdb__declarative_execution__Store_5, mdb__declarative_execution__MaybeRedo_7, &mdb__declarative_execution__Redo_9);
    }
    if (mdb__declarative_execution__succeeded)
      {
        MR_Box mdb__declarative_execution__V_10_10;
        MR_Integer mdb__declarative_execution__V_11_11;
        MR_Box mdb__declarative_execution__V_12_12;
        MR_Integer mdb__declarative_execution__V_13_13;

        mdb__declarative_execution__Next_8 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 0));
        mdb__declarative_execution__V_10_10 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 1));
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 2)));
        mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 3)));
        mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 4)));
      }
    else
      {
        MR_Word mdb__declarative_execution__CallNode_14;
        MR_Box mdb__declarative_execution__V_15_15;
        MR_Word mdb__declarative_execution__V_16_16;
        MR_Integer mdb__declarative_execution__V_17_17;
        MR_Integer mdb__declarative_execution__V_18_18;
        MR_Word mdb__declarative_execution__V_19_19;
        MR_Word mdb__declarative_execution__V_20_20;
        MR_Box mdb__declarative_execution__V_21_21;
        MR_Integer mdb__declarative_execution__V_22_22;
        MR_Integer mdb__declarative_execution__V_23_23;

        {
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_24, mdb__declarative_execution__Store_5, mdb__declarative_execution__Call_6, &mdb__declarative_execution__CallNode_14);
        }
        mdb__declarative_execution__Next_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 0));
        mdb__declarative_execution__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 1));
        mdb__declarative_execution__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 2)));
        mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 3)));
        mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 4)));
        mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 5)));
        mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 6)));
        mdb__declarative_execution__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 7)));
        mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 8)));
        mdb__declarative_execution__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 9)));
      }
    return mdb__declarative_execution__Next_8;
  }
}

static void MR_CALL 
mdb__declarative_execution__find_prev_contour_3_p_1(
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67,
  MR_Box mdb__declarative_execution__Store_4,
  MR_Word mdb__declarative_execution__Node_5,
  MR_Box * mdb__declarative_execution__OnContour_6)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    switch (MR_tag((MR_Word) mdb__declarative_execution__Node_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Box mdb__declarative_execution__Exit_15 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 1));
          MR_Word mdb__declarative_execution__ExitNode_19;
          MR_Box mdb__declarative_execution__V_14_14 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 0));
          MR_Integer mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
          MR_Box mdb__declarative_execution__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
          MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
          MR_Box mdb__declarative_execution__V_60_60;
          MR_Box mdb__declarative_execution__V_61_61;
          MR_Word mdb__declarative_execution__V_62_62;
          MR_Integer mdb__declarative_execution__V_63_63;
          MR_Box mdb__declarative_execution__V_64_64;
          MR_Integer mdb__declarative_execution__V_65_65;
          MR_Integer mdb__declarative_execution__V_66_66;

          {
            mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67, mdb__declarative_execution__Store_4, mdb__declarative_execution__Exit_15, &mdb__declarative_execution__ExitNode_19);
          }
          *mdb__declarative_execution__OnContour_6 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 0));
          mdb__declarative_execution__V_60_60 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 1));
          mdb__declarative_execution__V_61_61 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 2));
          mdb__declarative_execution__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 3)));
          mdb__declarative_execution__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 4)));
          mdb__declarative_execution__V_64_64 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 5)));
          mdb__declarative_execution__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 6)));
          mdb__declarative_execution__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mdb__declarative_execution__Call_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
              MR_Word mdb__declarative_execution__CallNode_13;
              MR_Box mdb__declarative_execution__V_7_7 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              MR_Box mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
              MR_Integer mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
              MR_Box mdb__declarative_execution__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
              MR_Integer mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
              MR_Box mdb__declarative_execution__V_51_51;
              MR_Word mdb__declarative_execution__V_52_52;
              MR_Integer mdb__declarative_execution__V_53_53;
              MR_Integer mdb__declarative_execution__V_54_54;
              MR_Word mdb__declarative_execution__V_55_55;
              MR_Word mdb__declarative_execution__V_56_56;
              MR_Box mdb__declarative_execution__V_57_57;
              MR_Integer mdb__declarative_execution__V_58_58;
              MR_Integer mdb__declarative_execution__V_59_59;

              {
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_8, &mdb__declarative_execution__CallNode_13);
              }
              *mdb__declarative_execution__OnContour_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 0));
              mdb__declarative_execution__V_51_51 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 1));
              mdb__declarative_execution__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 2)));
              mdb__declarative_execution__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 3)));
              mdb__declarative_execution__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 4)));
              mdb__declarative_execution__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 5)));
              mdb__declarative_execution__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 6)));
              mdb__declarative_execution__V_57_57 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 7)));
              mdb__declarative_execution__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 8)));
              mdb__declarative_execution__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 9)));
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Box mdb__declarative_execution__Neg_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
              MR_Word mdb__declarative_execution__V_50_50;
              MR_Box mdb__declarative_execution__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              MR_Box mdb__declarative_execution__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
              MR_Box mdb__declarative_execution__V_23_23;
              MR_Word mdb__declarative_execution__V_24_24;

              {
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_21, &mdb__declarative_execution__V_50_50);
              }
              *mdb__declarative_execution__OnContour_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_50_50, (MR_Integer) 1));
              mdb__declarative_execution__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_50_50, (MR_Integer) 2)));
              mdb__declarative_execution__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_50_50, (MR_Integer) 3)));
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__declarative_execution__cache_proc_defn_rep_2_p_0(
  MR_Box mdb__declarative_execution__ProcLayout_1,
  MR_Word mdb__declarative_execution__ProcDefnRep_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

{
#define MR_PROC_LABEL mdb__declarative_execution__cache_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;

	ProcLayout = (const MR_ProcLayout *) mdb__declarative_execution__ProcLayout_1 ;
	ProcDefnRep =  mdb__declarative_execution__ProcDefnRep_2 ;
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
  MR_Box mdb__declarative_execution__ProcLayout_1,
  MR_Word * mdb__declarative_execution__ProcDefnRep_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

{
#define MR_PROC_LABEL mdb__declarative_execution__have_cached_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;
	MR_bool SUCCESS_INDICATOR;

	ProcLayout = (const MR_ProcLayout *) mdb__declarative_execution__ProcLayout_1 ;
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
	 *mdb__declarative_execution__ProcDefnRep_2  = ProcDefnRep;
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
    return mdb__declarative_execution__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__call_node_bytecode_layout_2_p_0(
  MR_Box mdb__declarative_execution__CallLabelLayout_1,
  MR_Box * mdb__declarative_execution__ProcLayout_2)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_bytecode_layout_2_p_0

	const MR_LabelLayout * CallLabelLayout;
	const MR_ProcLayout * ProcLayout;
	MR_bool SUCCESS_INDICATOR;

	CallLabelLayout = (const MR_LabelLayout *) mdb__declarative_execution__CallLabelLayout_1 ;
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
	 *mdb__declarative_execution__ProcLayout_2  = (MR_Box) ProcLayout;
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution__user_arg_num_3_p_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Integer * mdb__declarative_execution__ArgNum_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mdb__declarative_execution__ArgNum_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
        break;
      case (MR_Integer) 1:
        {
          MR_Integer mdb__declarative_execution__AnyArgNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word mdb__declarative_execution__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mdb__declarative_execution__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));

          {
            mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(mdb__declarative_execution__Args_8, mdb__declarative_execution__AnyArgNum_6, (MR_Integer) 1, mdb__declarative_execution__ArgNum_3);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer mdb__declarative_execution__AnyArgNumFromBack_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word mdb__declarative_execution__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
          MR_Integer mdb__declarative_execution__V_15_15;
          MR_Integer mdb__declarative_execution__V_17_17;
          MR_Integer mdb__declarative_execution__V_18_18;
          MR_Box mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));

          {
            mdb__declarative_execution__V_18_18 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_execution__Args_13);
          }
          mdb__declarative_execution__V_17_17 = (mdb__declarative_execution__V_18_18 - mdb__declarative_execution__AnyArgNumFromBack_11);
          mdb__declarative_execution__V_15_15 = (mdb__declarative_execution__V_17_17 + (MR_Integer) 1);
          {
            mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(mdb__declarative_execution__Args_13, mdb__declarative_execution__V_15_15, (MR_Integer) 1, mdb__declarative_execution__ArgNum_3);
          }
        }
        break;
    }
  }
}

void MR_CALL 
mdb__declarative_execution__absolute_arg_num_3_p_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word mdb__declarative_execution__HeadVar__2_2,
  MR_Integer * mdb__declarative_execution__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer mdb__declarative_execution__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word mdb__declarative_execution__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mdb__declarative_execution__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));

          {
            mdb__declarative_execution__head_var_num_to_arg_num_4_p_0(mdb__declarative_execution__Args_8, mdb__declarative_execution__N_6, (MR_Integer) 1, mdb__declarative_execution__HeadVar__3_3);
          }
        }
        break;
      case (MR_Integer) 1:
        *mdb__declarative_execution__HeadVar__3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
        break;
      case (MR_Integer) 2:
        {
          MR_Integer mdb__declarative_execution__M_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word mdb__declarative_execution__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
          MR_Integer mdb__declarative_execution__V_14_14;
          MR_Integer mdb__declarative_execution__V_15_15;
          MR_Box mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));

          {
            mdb__declarative_execution__V_15_15 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_execution__Args_13);
          }
          mdb__declarative_execution__V_14_14 = (mdb__declarative_execution__V_15_15 - mdb__declarative_execution__M_11);
          *mdb__declarative_execution__HeadVar__3_3 = (mdb__declarative_execution__V_14_14 + (MR_Integer) 1);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__select_arg_at_pos_3_p_0_1(
  MR_Box mdb__declarative_execution__closure_arg,
  MR_Box mdb__declarative_execution__wrapper_arg_1)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Box mdb__declarative_execution__closure = mdb__declarative_execution__closure_arg;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution__is_user_visible_arg_1_p_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1));
    }
    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution__select_arg_at_pos_3_p_0(
  MR_Word mdb__declarative_execution__ArgPos_4,
  MR_Word mdb__declarative_execution__Args0_5,
  MR_Word * mdb__declarative_execution__Arg_6)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Integer mdb__declarative_execution__N_7;
    MR_Word mdb__declarative_execution__Args_10;
    MR_Box mdb__declarative_execution__conv0_Arg_6;

    switch (MR_tag((MR_Word) mdb__declarative_execution__ArgPos_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mdb__declarative_execution__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ArgPos_4, (MR_Integer) 0)));
          {
            mdb__declarative_execution__Args_10 = mercury__list__filter_2_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, (MR_Word) &mdb__declarative_execution_scalar_common_2[3], mdb__declarative_execution__Args0_5);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mdb__declarative_execution__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ArgPos_4, (MR_Integer) 0)));
          mdb__declarative_execution__Args_10 = mdb__declarative_execution__Args0_5;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer mdb__declarative_execution__M_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ArgPos_4, (MR_Integer) 0)));
          MR_Integer mdb__declarative_execution__V_11_11;
          MR_Integer mdb__declarative_execution__V_12_12;

          {
            mdb__declarative_execution__V_12_12 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_execution__Args0_5);
          }
          mdb__declarative_execution__V_11_11 = (mdb__declarative_execution__V_12_12 - mdb__declarative_execution__M_9);
          mdb__declarative_execution__N_7 = (mdb__declarative_execution__V_11_11 + (MR_Integer) 1);
          mdb__declarative_execution__Args_10 = mdb__declarative_execution__Args0_5;
        }
        break;
    }
    {
      mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_execution__Args_10, mdb__declarative_execution__N_7, &mdb__declarative_execution__conv0_Arg_6);
    }
    *mdb__declarative_execution__Arg_6 = ((MR_Word) mdb__declarative_execution__conv0_Arg_6);
  }
}

MR_bool MR_CALL 
mdb__declarative_execution__is_user_visible_arg_1_p_0(
  MR_Word mdb__declarative_execution__HeadVar__1_1)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mdb__declarative_execution__V_2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mdb__declarative_execution__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));

    mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_4_4 == (MR_Integer) 1);
    return mdb__declarative_execution__succeeded;
  }
}

MR_Word MR_CALL 
mdb__declarative_execution__chosen_head_vars_presentation_0_f_0(void)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    return (MR_Integer) 1;
  }
}

static MR_bool MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0_1(
  MR_Box mdb__declarative_execution__closure_arg,
  MR_Box mdb__declarative_execution__wrapper_arg_1)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Box mdb__declarative_execution__closure = mdb__declarative_execution__closure_arg;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution__is_user_visible_arg_1_p_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1));
    }
    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0(
  MR_Word mdb__declarative_execution__Which_4,
  MR_Word mdb__declarative_execution__Args0_5,
  MR_Word * mdb__declarative_execution__Args_6)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    switch (mdb__declarative_execution__Which_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mdb__declarative_execution__Args_6 = mdb__declarative_execution__Args0_5;
        break;
      case (MR_Integer) 1:
        {
          {
            *mdb__declarative_execution__Args_6 = mercury__list__filter_2_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, (MR_Word) &mdb__declarative_execution_scalar_common_2[2], mdb__declarative_execution__Args0_5);
          }
        }
        break;
    }
  }
}

void MR_CALL 
mdb__declarative_execution__save_trace_node_store_5_p_0(
  MR_Word mdb__declarative_execution__Stream_6,
  MR_Word mdb__declarative_execution__Store_7,
  MR_Word mdb__declarative_execution__NodeId_8)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__TypeCtorInfo_22_22 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0;
    MR_Word mdb__declarative_execution__Map0_10;
    MR_Word mdb__declarative_execution__Key_11;
    MR_Word mdb__declarative_execution__Map_12;
    MR_Word mdb__declarative_execution__V_15_15;

    {
      mercury__map__init_1_p_0(mdb__declarative_execution__TypeCtorInfo_22_22, (MR_Word) &mdb__declarative_execution_scalar_common_1[0], &mdb__declarative_execution__Map0_10);
    }
{
#define MR_PROC_LABEL mdb__declarative_execution__save_trace_node_store_5_p_0

	MR_Word Id;
	MR_Word Key;

	Id =  mdb__declarative_execution__NodeId_8 ;
		{

    Key = (MR_Integer) Id;


		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__Key_11  = Key;
}
    mdb__declarative_execution__V_15_15 = (MR_Word) mdb__declarative_execution__Map0_10;
    {
      mdb__declarative_execution__node_map_4_p_0(mdb__declarative_execution__Store_7, mdb__declarative_execution__NodeId_8, mdb__declarative_execution__V_15_15, &mdb__declarative_execution__Map_12);
    }
    {
      mercury__io__write_4_p_0(mdb__declarative_execution__TypeCtorInfo_22_22, mdb__declarative_execution__Stream_6, ((MR_Box) (mdb__declarative_execution__Key_11)));
    }
    {
      mercury__io__write_string_4_p_0(mdb__declarative_execution__Stream_6, (MR_String) ".\n");
    }
    {
      mercury__io__write_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0, mdb__declarative_execution__Stream_6, ((MR_Box) (mdb__declarative_execution__Map_12)));
    }
    {
      mercury__io__write_string_4_p_0(mdb__declarative_execution__Stream_6, (MR_String) ".\n");
    }
  }
}

void MR_CALL 
mdb__declarative_execution__load_trace_node_map_5_p_0(
  MR_Word mdb__declarative_execution__Stream_6,
  MR_Word * mdb__declarative_execution__Map_7,
  MR_Word * mdb__declarative_execution__Key_8)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__ResKey_10;
    MR_String mdb__declarative_execution__Msg_11;
    MR_Word mdb__declarative_execution__ResMap_13;

    {
      mercury__io__read_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0, mdb__declarative_execution__Stream_6, &mdb__declarative_execution__ResKey_10);
    }
    switch (MR_tag((MR_Word) mdb__declarative_execution__ResKey_10)) {
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
        *mdb__declarative_execution__Key_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ResKey_10, (MR_Integer) 0)));
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_execution__V_18_18;
          MR_Integer mdb__declarative_execution__V_12_12;

          mdb__declarative_execution__Msg_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ResKey_10, (MR_Integer) 0)));
          mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ResKey_10, (MR_Integer) 1)));
          {
            mdb__declarative_execution__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_18_18, 0) = ((MR_Box) ((MR_String) "load_trace_node_map"));
            MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_18_18, 1) = ((MR_Box) (mdb__declarative_execution__Msg_11));
          }
          {
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_execution__V_18_18)));
            return;
          }
        }
        break;
    }
    {
      mercury__io__read_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0, mdb__declarative_execution__Stream_6, &mdb__declarative_execution__ResMap_13);
    }
    switch (MR_tag((MR_Word) mdb__declarative_execution__ResMap_13)) {
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
        *mdb__declarative_execution__Map_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ResMap_13, (MR_Integer) 0)));
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_execution__V_24_24;
          MR_Integer mdb__declarative_execution__V_14_14;

          mdb__declarative_execution__Msg_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ResMap_13, (MR_Integer) 0)));
          mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ResMap_13, (MR_Integer) 1)));
          {
            mdb__declarative_execution__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_24_24, 0) = ((MR_Box) ((MR_String) "load_trace_node_map"));
            MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_24_24, 1) = ((MR_Box) (mdb__declarative_execution__Msg_11));
          }
          {
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_execution__V_24_24)));
            return;
          }
        }
        break;
    }
  }
}

void MR_CALL 
mdb__declarative_execution__disj_node_from_id_3_p_0(
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16,
  MR_Box mdb__declarative_execution__Store_4,
  MR_Box mdb__declarative_execution__NodeId_5,
  MR_Word * mdb__declarative_execution__Node_6)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__Node0_7;
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box mdb__declarative_execution__conv1_Node0_7;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    if (mdb__declarative_execution__succeeded)
      {
        if (((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
          mdb__declarative_execution__succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
          mdb__declarative_execution__succeeded = MR_TRUE;
        else
          mdb__declarative_execution__succeeded = MR_FALSE;
      }
    if (mdb__declarative_execution__succeeded)
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
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
mdb__declarative_execution__first_disj_node_from_id_3_p_0(
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_13,
  MR_Box mdb__declarative_execution__Store_4,
  MR_Box mdb__declarative_execution__NodeId_5,
  MR_Word * mdb__declarative_execution__Node_6)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__Node0_7;
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_13, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box mdb__declarative_execution__conv1_Node0_7;
    MR_Box mdb__declarative_execution__V_8_8;
    MR_Box mdb__declarative_execution__V_9_9;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_13), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (mdb__declarative_execution__succeeded)
          {
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
            mdb__declarative_execution__V_9_9 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
          }
      }
    if (mdb__declarative_execution__succeeded)
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[19])));
          return;
        }
      }
  }
}

void MR_CALL 
mdb__declarative_execution__neg_node_from_id_3_p_0(
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14,
  MR_Box mdb__declarative_execution__Store_4,
  MR_Box mdb__declarative_execution__NodeId_5,
  MR_Word * mdb__declarative_execution__Node_6)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__Node0_7;
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box mdb__declarative_execution__conv1_Node0_7;
    MR_Box mdb__declarative_execution__V_8_8;
    MR_Box mdb__declarative_execution__V_9_9;
    MR_Word mdb__declarative_execution__V_10_10;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 8)));
        if (mdb__declarative_execution__succeeded)
          {
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
            mdb__declarative_execution__V_9_9 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
            mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
          }
      }
    if (mdb__declarative_execution__succeeded)
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[18])));
          return;
        }
      }
  }
}

void MR_CALL 
mdb__declarative_execution__cond_node_from_id_3_p_0(
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14,
  MR_Box mdb__declarative_execution__Store_4,
  MR_Box mdb__declarative_execution__NodeId_5,
  MR_Word * mdb__declarative_execution__Node_6)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__Node0_7;
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box mdb__declarative_execution__conv1_Node0_7;
    MR_Box mdb__declarative_execution__V_8_8;
    MR_Box mdb__declarative_execution__V_9_9;
    MR_Word mdb__declarative_execution__V_10_10;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (mdb__declarative_execution__succeeded)
          {
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
            mdb__declarative_execution__V_9_9 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
            mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
          }
      }
    if (mdb__declarative_execution__succeeded)
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[17])));
          return;
        }
      }
  }
}

void MR_CALL 
mdb__declarative_execution__exit_node_from_id_3_p_0(
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_19,
  MR_Box mdb__declarative_execution__Store_4,
  MR_Box mdb__declarative_execution__NodeId_5,
  MR_Word * mdb__declarative_execution__Node_6)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__Node0_7;
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_19, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box mdb__declarative_execution__conv1_Node0_7;
    MR_Box mdb__declarative_execution__V_8_8;
    MR_Box mdb__declarative_execution__V_9_9;
    MR_Box mdb__declarative_execution__V_10_10;
    MR_Word mdb__declarative_execution__V_11_11;
    MR_Integer mdb__declarative_execution__V_12_12;
    MR_Box mdb__declarative_execution__V_13_13;
    MR_Integer mdb__declarative_execution__V_14_14;
    MR_Integer mdb__declarative_execution__V_15_15;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_19), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__declarative_execution__succeeded)
          {
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 0));
            mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
            mdb__declarative_execution__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 2));
            mdb__declarative_execution__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
            mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 4)));
            mdb__declarative_execution__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 5)));
            mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 6)));
            mdb__declarative_execution__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 7)));
          }
      }
    if (mdb__declarative_execution__succeeded)
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[16])));
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16,
  MR_Box mdb__declarative_execution__Store_4,
  MR_Box mdb__declarative_execution__NodeId_5,
  MR_Word * mdb__declarative_execution__Node_6)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__Node0_7;
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box mdb__declarative_execution__conv1_Node0_7;
    MR_Box mdb__declarative_execution__V_8_8;
    MR_Box mdb__declarative_execution__V_9_9;
    MR_Integer mdb__declarative_execution__V_10_10;
    MR_Box mdb__declarative_execution__V_11_11;
    MR_Integer mdb__declarative_execution__V_12_12;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 2)));
        if (mdb__declarative_execution__succeeded)
          {
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 0));
            mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
            mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
            mdb__declarative_execution__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
            mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 4)));
            *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
          }
        else
          {
            {
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[15])));
            }
          }
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    return mdb__declarative_execution__succeeded;
  }
}

void MR_CALL 
mdb__declarative_execution__call_node_from_id_3_p_0(
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_21,
  MR_Box mdb__declarative_execution__Store_4,
  MR_Box mdb__declarative_execution__NodeId_5,
  MR_Word * mdb__declarative_execution__Node_6)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__Node0_7;
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_21, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box mdb__declarative_execution__conv1_Node0_7;
    MR_Box mdb__declarative_execution__V_8_8;
    MR_Box mdb__declarative_execution__V_9_9;
    MR_Word mdb__declarative_execution__V_10_10;
    MR_Integer mdb__declarative_execution__V_11_11;
    MR_Integer mdb__declarative_execution__V_12_12;
    MR_Word mdb__declarative_execution__V_13_13;
    MR_Word mdb__declarative_execution__V_14_14;
    MR_Box mdb__declarative_execution__V_15_15;
    MR_Integer mdb__declarative_execution__V_16_16;
    MR_Integer mdb__declarative_execution__V_17_17;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_21), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 0)));
        if (mdb__declarative_execution__succeeded)
          {
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 0));
            mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
            mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
            mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
            mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 4)));
            mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 5)));
            mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 6)));
            mdb__declarative_execution__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 7)));
            mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 8)));
            mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 9)));
          }
      }
    if (mdb__declarative_execution__succeeded)
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[14])));
          return;
        }
      }
  }
}

void MR_CALL 
mdb__declarative_execution__det_trace_node_from_id_3_p_0(
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_11,
  MR_Box mdb__declarative_execution__Store_4,
  MR_Box mdb__declarative_execution__NodeId_5,
  MR_Word * mdb__declarative_execution__Node_6)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__Node0_7;
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_11, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box mdb__declarative_execution__conv1_Node0_7;

    {
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_11), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    if (mdb__declarative_execution__succeeded)
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[13])));
          return;
        }
      }
  }
}

MR_Box MR_CALL 
mdb__declarative_execution__step_in_stratum_2_f_0(
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90,
  MR_Box mdb__declarative_execution__Store_4,
  MR_Word mdb__declarative_execution__Node_5)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Box mdb__declarative_execution__Next_6;

    switch (MR_tag((MR_Word) mdb__declarative_execution__Node_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[10])));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mdb__declarative_execution__Call_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 1));
          MR_Box mdb__declarative_execution__MaybeRedo_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 2));
          MR_Box mdb__declarative_execution__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 0));
          MR_Word mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
          MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
          MR_Box mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
          MR_Integer mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
          MR_Integer mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 7)));

          {
            mdb__declarative_execution__Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_8, mdb__declarative_execution__MaybeRedo_9);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mdb__declarative_execution__Exit_25 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 1));
          MR_Word mdb__declarative_execution__ExitNode_29;
          MR_Box mdb__declarative_execution__V_24_24 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 0));
          MR_Integer mdb__declarative_execution__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
          MR_Box mdb__declarative_execution__V_27_27 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
          MR_Integer mdb__declarative_execution__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
          MR_Box mdb__declarative_execution__V_83_83;
          MR_Box mdb__declarative_execution__V_84_84;
          MR_Word mdb__declarative_execution__V_85_85;
          MR_Integer mdb__declarative_execution__V_86_86;
          MR_Box mdb__declarative_execution__V_87_87;
          MR_Integer mdb__declarative_execution__V_88_88;
          MR_Integer mdb__declarative_execution__V_89_89;

          {
            mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Exit_25, &mdb__declarative_execution__ExitNode_29);
          }
          mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 0));
          mdb__declarative_execution__V_83_83 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 1));
          mdb__declarative_execution__V_84_84 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 2));
          mdb__declarative_execution__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 3)));
          mdb__declarative_execution__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 4)));
          mdb__declarative_execution__V_87_87 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 5)));
          mdb__declarative_execution__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 6)));
          mdb__declarative_execution__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mdb__declarative_execution__Call_78 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
              MR_Box mdb__declarative_execution__MaybeRedo_79 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
              MR_Box mdb__declarative_execution__V_15_15 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              MR_Integer mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
              MR_Box mdb__declarative_execution__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
              MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));

              {
                mdb__declarative_execution__Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_78, mdb__declarative_execution__MaybeRedo_79);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mdb__declarative_execution__Call_80 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
              MR_Box mdb__declarative_execution__MaybeRedo_81 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
              MR_Box mdb__declarative_execution__V_19_19 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
              MR_Integer mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
              MR_Box mdb__declarative_execution__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
              MR_Integer mdb__declarative_execution__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 7)));

              {
                mdb__declarative_execution__Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_80, mdb__declarative_execution__MaybeRedo_81);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mdb__declarative_execution__V_30_30;

              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              mdb__declarative_execution__V_30_30 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box mdb__declarative_execution__V_31_31;

              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              mdb__declarative_execution__V_31_31 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Box mdb__declarative_execution__V_32_32;
              MR_Box mdb__declarative_execution__V_33_33;

              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              mdb__declarative_execution__V_32_32 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
              mdb__declarative_execution__V_33_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Box mdb__declarative_execution__Prec_34 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              MR_Word mdb__declarative_execution__Status_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
              MR_Box mdb__declarative_execution__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));

              switch (mdb__declarative_execution__Status_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[11])));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  mdb__declarative_execution__Next_6 = mdb__declarative_execution__Prec_34;
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Box mdb__declarative_execution__V_37_37;
              MR_Box mdb__declarative_execution__V_38_38;

              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              mdb__declarative_execution__V_37_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
              mdb__declarative_execution__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Box mdb__declarative_execution__Cond_40 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
              MR_Word mdb__declarative_execution__V_74_74;
              MR_Box mdb__declarative_execution__V_39_39 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              MR_Box mdb__declarative_execution__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
              MR_Box mdb__declarative_execution__V_42_42;
              MR_Word mdb__declarative_execution__V_43_43;

              {
                mdb__declarative_execution__cond_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Cond_40, &mdb__declarative_execution__V_74_74);
              }
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 1));
              mdb__declarative_execution__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 2)));
              mdb__declarative_execution__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 8:
            {
              {
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[12])));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Box mdb__declarative_execution__Neg_45 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
              MR_Word mdb__declarative_execution__V_73_73;
              MR_Box mdb__declarative_execution__V_44_44 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              MR_Box mdb__declarative_execution__V_46_46 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
              MR_Box mdb__declarative_execution__V_47_47;
              MR_Word mdb__declarative_execution__V_48_48;

              {
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_45, &mdb__declarative_execution__V_73_73);
              }
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 1));
              mdb__declarative_execution__V_47_47 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 2)));
              mdb__declarative_execution__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word mdb__declarative_execution__V_72_72;
              MR_Box mdb__declarative_execution__Neg_82 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
              MR_Box mdb__declarative_execution__V_49_49 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              MR_Box mdb__declarative_execution__V_50_50 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
              MR_Box mdb__declarative_execution__V_51_51;
              MR_Word mdb__declarative_execution__V_52_52;

              {
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_82, &mdb__declarative_execution__V_72_72);
              }
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_72_72, (MR_Integer) 1));
              mdb__declarative_execution__V_51_51 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_72_72, (MR_Integer) 2)));
              mdb__declarative_execution__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_72_72, (MR_Integer) 3)));
            }
            break;
        }
        break;
    }
    return mdb__declarative_execution__Next_6;
  }
}

MR_Box MR_CALL 
mdb__declarative_execution__step_left_in_contour_2_f_0(
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100,
  MR_Box mdb__declarative_execution__Store_4,
  MR_Word mdb__declarative_execution__Node_5)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Box mdb__declarative_execution__Prec_6;

    switch (MR_tag((MR_Word) mdb__declarative_execution__Node_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[7])));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mdb__declarative_execution__Call_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 1));
          MR_Word mdb__declarative_execution__CallNode_15;
          MR_Box mdb__declarative_execution__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 0));
          MR_Box mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 2));
          MR_Word mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
          MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
          MR_Box mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
          MR_Integer mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
          MR_Integer mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 7)));
          MR_Box mdb__declarative_execution__V_82_82;
          MR_Word mdb__declarative_execution__V_83_83;
          MR_Integer mdb__declarative_execution__V_84_84;
          MR_Integer mdb__declarative_execution__V_85_85;
          MR_Word mdb__declarative_execution__V_86_86;
          MR_Word mdb__declarative_execution__V_87_87;
          MR_Box mdb__declarative_execution__V_88_88;
          MR_Integer mdb__declarative_execution__V_89_89;
          MR_Integer mdb__declarative_execution__V_90_90;

          {
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_8, &mdb__declarative_execution__CallNode_15);
          }
          mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 0));
          mdb__declarative_execution__V_82_82 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 1));
          mdb__declarative_execution__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 2)));
          mdb__declarative_execution__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 3)));
          mdb__declarative_execution__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 4)));
          mdb__declarative_execution__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 5)));
          mdb__declarative_execution__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 6)));
          mdb__declarative_execution__V_88_88 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 7)));
          mdb__declarative_execution__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 8)));
          mdb__declarative_execution__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 9)));
        }
        break;
      case (MR_Integer) 2:
        {
          mdb__declarative_execution__find_prev_contour_3_p_1(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Node_5, &mdb__declarative_execution__Prec_6);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mdb__declarative_execution__Call_108 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
              MR_Word mdb__declarative_execution__CallNode_113;
              MR_Box mdb__declarative_execution__V_107_107 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              MR_Box mdb__declarative_execution__V_109_109 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
              MR_Integer mdb__declarative_execution__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
              MR_Box mdb__declarative_execution__V_111_111 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
              MR_Integer mdb__declarative_execution__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
              MR_Box mdb__declarative_execution__V_151_151;
              MR_Word mdb__declarative_execution__V_152_152;
              MR_Integer mdb__declarative_execution__V_153_153;
              MR_Integer mdb__declarative_execution__V_154_154;
              MR_Word mdb__declarative_execution__V_155_155;
              MR_Word mdb__declarative_execution__V_156_156;
              MR_Box mdb__declarative_execution__V_157_157;
              MR_Integer mdb__declarative_execution__V_158_158;
              MR_Integer mdb__declarative_execution__V_159_159;

              {
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_108, &mdb__declarative_execution__CallNode_113);
              }
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 0));
              mdb__declarative_execution__V_151_151 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 1));
              mdb__declarative_execution__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 2)));
              mdb__declarative_execution__V_153_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 3)));
              mdb__declarative_execution__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 4)));
              mdb__declarative_execution__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 5)));
              mdb__declarative_execution__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 6)));
              mdb__declarative_execution__V_157_157 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 7)));
              mdb__declarative_execution__V_158_158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 8)));
              mdb__declarative_execution__V_159_159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 9)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mdb__declarative_execution__Call_79 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
              MR_Word mdb__declarative_execution__CallNode_80;
              MR_Box mdb__declarative_execution__V_16_16 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              MR_Box mdb__declarative_execution__V_17_17 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
              MR_Word mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
              MR_Integer mdb__declarative_execution__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
              MR_Box mdb__declarative_execution__V_20_20 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
              MR_Integer mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 7)));
              MR_Box mdb__declarative_execution__V_91_91;
              MR_Word mdb__declarative_execution__V_92_92;
              MR_Integer mdb__declarative_execution__V_93_93;
              MR_Integer mdb__declarative_execution__V_94_94;
              MR_Word mdb__declarative_execution__V_95_95;
              MR_Word mdb__declarative_execution__V_96_96;
              MR_Box mdb__declarative_execution__V_97_97;
              MR_Integer mdb__declarative_execution__V_98_98;
              MR_Integer mdb__declarative_execution__V_99_99;

              {
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_79, &mdb__declarative_execution__CallNode_80);
              }
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 0));
              mdb__declarative_execution__V_91_91 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 1));
              mdb__declarative_execution__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 2)));
              mdb__declarative_execution__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 3)));
              mdb__declarative_execution__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 4)));
              mdb__declarative_execution__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 5)));
              mdb__declarative_execution__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 6)));
              mdb__declarative_execution__V_97_97 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 7)));
              mdb__declarative_execution__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 8)));
              mdb__declarative_execution__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 9)));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mdb__declarative_execution__V_22_22;

              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              mdb__declarative_execution__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box mdb__declarative_execution__V_23_23;

              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              mdb__declarative_execution__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Box mdb__declarative_execution__FirstDisj_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
              MR_Word mdb__declarative_execution__V_78_78;
              MR_Box mdb__declarative_execution__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              MR_Box mdb__declarative_execution__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
              MR_Box mdb__declarative_execution__V_27_27;

              {
                mdb__declarative_execution__first_disj_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__FirstDisj_26, &mdb__declarative_execution__V_78_78);
              }
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_78_78, (MR_Integer) 1));
              mdb__declarative_execution__V_27_27 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_78_78, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word mdb__declarative_execution__Status_29;
              MR_Box mdb__declarative_execution__V_28_28;

              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              mdb__declarative_execution__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
              mdb__declarative_execution__Status_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
              switch (mdb__declarative_execution__Status_29) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[8])));
                    }
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
              MR_Box mdb__declarative_execution__V_30_30;
              MR_Box mdb__declarative_execution__V_31_31;

              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              mdb__declarative_execution__V_30_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
              mdb__declarative_execution__V_31_31 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Box mdb__declarative_execution__Cond_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
              MR_Word mdb__declarative_execution__V_74_74;
              MR_Box mdb__declarative_execution__V_32_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              MR_Box mdb__declarative_execution__V_34_34 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
              MR_Box mdb__declarative_execution__V_35_35;
              MR_Word mdb__declarative_execution__V_36_36;

              {
                mdb__declarative_execution__cond_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Cond_33, &mdb__declarative_execution__V_74_74);
              }
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 1));
              mdb__declarative_execution__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 2)));
              mdb__declarative_execution__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word mdb__declarative_execution__Status_81;
              MR_Box mdb__declarative_execution__V_52_52;

              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              mdb__declarative_execution__V_52_52 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
              mdb__declarative_execution__Status_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
              switch (mdb__declarative_execution__Status_81) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                case (MR_Integer) 0:
                  {
                    {
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[9])));
                    }
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
              MR_Box mdb__declarative_execution__Neg_38 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
              MR_Word mdb__declarative_execution__V_73_73;
              MR_Box mdb__declarative_execution__V_37_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              MR_Box mdb__declarative_execution__V_39_39 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
              MR_Box mdb__declarative_execution__V_40_40;
              MR_Word mdb__declarative_execution__V_41_41;

              {
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_38, &mdb__declarative_execution__V_73_73);
              }
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 1));
              mdb__declarative_execution__V_40_40 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 2)));
              mdb__declarative_execution__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Box mdb__declarative_execution__Neg_187 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
              MR_Word mdb__declarative_execution__V_216_216;
              MR_Box mdb__declarative_execution__V_186_186 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
              MR_Box mdb__declarative_execution__V_188_188 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
              MR_Box mdb__declarative_execution__V_189_189;
              MR_Word mdb__declarative_execution__V_190_190;

              {
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_187, &mdb__declarative_execution__V_216_216);
              }
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_216_216, (MR_Integer) 1));
              mdb__declarative_execution__V_189_189 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_216_216, (MR_Integer) 2)));
              mdb__declarative_execution__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_216_216, (MR_Integer) 3)));
            }
            break;
        }
        break;
    }
    return mdb__declarative_execution__Prec_6;
  }
}

void MR_CALL 
mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0(
  MR_Word mdb__declarative_execution__TypeInfo_for_R_23,
  MR_Word mdb__declarative_execution__CallNode_3,
  MR_Word * mdb__declarative_execution__MaybeProcDefnRep_4)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Box mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 7)));
    MR_Box mdb__declarative_execution__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 0));
    MR_Box mdb__declarative_execution__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 1));
    MR_Word mdb__declarative_execution__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 2)));
    MR_Integer mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 3)));
    MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 4)));
    MR_Word mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 5)));
    MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 6)));
    MR_Integer mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 8)));
    MR_Integer mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 9)));
    MR_Box mdb__declarative_execution__ProcLayout_6;

{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0

	const MR_LabelLayout * CallLabelLayout;
	const MR_ProcLayout * ProcLayout;
	MR_bool SUCCESS_INDICATOR;

	CallLabelLayout = (const MR_LabelLayout *) mdb__declarative_execution__Label_5 ;
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
	 mdb__declarative_execution__ProcLayout_6  = (MR_Box) ProcLayout;
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
    if (mdb__declarative_execution__succeeded)
      {
        MR_Word mdb__declarative_execution__ProcDefnRep_7;

{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;
	MR_bool SUCCESS_INDICATOR;

	ProcLayout = (const MR_ProcLayout *) mdb__declarative_execution__ProcLayout_6 ;
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
	 mdb__declarative_execution__ProcDefnRep_7  = ProcDefnRep;
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
        if (mdb__declarative_execution__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdb__declarative_execution__MaybeProcDefnRep_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_execution__ProcDefnRep_7));
          }
        else
          {
            MR_Box mdb__declarative_execution__ByteCodeBytes_8;
            MR_Word mdb__declarative_execution__ProcDefnRep_12;

            {
              mdb__declarative_execution__ByteCodeBytes_8 = mdbcomp__rtti_access__proc_bytecode_bytes_1_f_0(mdb__declarative_execution__ProcLayout_6);
            }
            {
              mdb__declarative_execution__succeeded = mdbcomp__program_representation__trace_read_proc_defn_rep_3_p_0(mdb__declarative_execution__ByteCodeBytes_8, mdb__declarative_execution__Label_5, &mdb__declarative_execution__ProcDefnRep_12);
            }
            if (mdb__declarative_execution__succeeded)
              {
{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;

	ProcLayout = (const MR_ProcLayout *) mdb__declarative_execution__ProcLayout_6 ;
	ProcDefnRep =  mdb__declarative_execution__ProcDefnRep_12 ;
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
                  *mdb__declarative_execution__MaybeProcDefnRep_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_execution__ProcDefnRep_12));
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
      *mdb__declarative_execution__MaybeProcDefnRep_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void MR_CALL 
mdb__declarative_execution__get_pred_attributes_5_p_0(
  MR_Word mdb__declarative_execution__ProcId_6,
  MR_Word * mdb__declarative_execution__Module_7,
  MR_String * mdb__declarative_execution__Name_8,
  MR_Integer * mdb__declarative_execution__Arity_9,
  MR_Word * mdb__declarative_execution__PredOrFunc_10)
{
  {
    MR_bool mdb__declarative_execution__succeeded;

    if (((MR_tag((MR_Word) mdb__declarative_execution__ProcId_6)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdb__declarative_execution__V_11_11;
        MR_Integer mdb__declarative_execution__V_12_12;

        *mdb__declarative_execution__Module_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 0)));
        *mdb__declarative_execution__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 1)));
        mdb__declarative_execution__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 2)));
        *mdb__declarative_execution__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 3)));
        *mdb__declarative_execution__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 4)));
        mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 5)));
      }
    else
      {
        MR_Word mdb__declarative_execution__SpecialId_13;
        MR_Word mdb__declarative_execution__V_14_14;
        MR_String mdb__declarative_execution__V_15_15;
        MR_Integer mdb__declarative_execution__V_16_16;
        MR_Integer mdb__declarative_execution__V_17_17;

        *mdb__declarative_execution__Module_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 0)));
        mdb__declarative_execution__SpecialId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 1)));
        mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 2)));
        mdb__declarative_execution__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 3)));
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 4)));
        mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 5)));
        *mdb__declarative_execution__PredOrFunc_10 = (MR_Integer) 0;
        {
          *mdb__declarative_execution__Arity_9 = mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(mdb__declarative_execution__SpecialId_13);
        }
        {
          *mdb__declarative_execution__Name_8 = mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(mdb__declarative_execution__SpecialId_13);
        }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_execution__get_trace_call_atom_1_f_1(
  MR_Word mdb__declarative_execution__TypeInfo_for_R_15,
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word * mdb__declarative_execution__Atom_13)
{
  {
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
    MR_Word mdb__declarative_execution__AtomArgs_5;
    MR_Box mdb__declarative_execution__Label_10;
    MR_Box mdb__declarative_execution__ProcLayout_14;
    MR_Box mdb__declarative_execution__V_3_3;
    MR_Box mdb__declarative_execution__V_4_4;
    MR_Integer mdb__declarative_execution__V_6_6;
    MR_Integer mdb__declarative_execution__V_7_7;
    MR_Word mdb__declarative_execution__V_8_8;
    MR_Word mdb__declarative_execution__V_9_9;
    MR_Integer mdb__declarative_execution__V_11_11;
    MR_Integer mdb__declarative_execution__V_12_12;

    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
        mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
        mdb__declarative_execution__AtomArgs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
        mdb__declarative_execution__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
        mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
        mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
        mdb__declarative_execution__Label_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 8)));
        mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 9)));
        {
          mdb__declarative_execution__ProcLayout_14 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_execution__Label_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *mdb__declarative_execution__Atom_13 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_execution__ProcLayout_14));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_execution__AtomArgs_5));
        }
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    return mdb__declarative_execution__succeeded;
  }
}

MR_Word MR_CALL 
mdb__declarative_execution__get_trace_call_atom_1_f_0(
  MR_Word mdb__declarative_execution__TypeInfo_for_R_15,
  MR_Word mdb__declarative_execution__HeadVar__1_1)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__Atom_13;
    MR_Word mdb__declarative_execution__AtomArgs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
    MR_Box mdb__declarative_execution__Label_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
    MR_Box mdb__declarative_execution__ProcLayout_14;
    MR_Box mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
    MR_Box mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
    MR_Integer mdb__declarative_execution__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
    MR_Integer mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
    MR_Word mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
    MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
    MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 8)));
    MR_Integer mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 9)));

    {
      mdb__declarative_execution__ProcLayout_14 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_execution__Label_10);
    }
    {
      mdb__declarative_execution__Atom_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Atom_13, 0) = ((MR_Box) (mdb__declarative_execution__ProcLayout_14));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Atom_13, 1) = ((MR_Box) (mdb__declarative_execution__AtomArgs_5));
    }
    return mdb__declarative_execution__Atom_13;
  }
}

MR_bool MR_CALL 
mdb__declarative_execution__get_trace_exit_atom_1_f_1(
  MR_Word mdb__declarative_execution__TypeInfo_for_R_13,
  MR_Word mdb__declarative_execution__HeadVar__1_1,
  MR_Word * mdb__declarative_execution__Atom_11)
{
  {
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mdb__declarative_execution__AtomArgs_6;
    MR_Box mdb__declarative_execution__Label_8;
    MR_Box mdb__declarative_execution__ProcLayout_12;
    MR_Box mdb__declarative_execution__V_3_3;
    MR_Box mdb__declarative_execution__V_4_4;
    MR_Box mdb__declarative_execution__V_5_5;
    MR_Integer mdb__declarative_execution__V_7_7;
    MR_Integer mdb__declarative_execution__V_9_9;
    MR_Integer mdb__declarative_execution__V_10_10;

    if (mdb__declarative_execution__succeeded)
      {
        mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
        mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
        mdb__declarative_execution__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
        mdb__declarative_execution__AtomArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
        mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
        mdb__declarative_execution__Label_8 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
        mdb__declarative_execution__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
        mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
        {
          mdb__declarative_execution__ProcLayout_12 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_execution__Label_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *mdb__declarative_execution__Atom_11 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_execution__ProcLayout_12));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_execution__AtomArgs_6));
        }
        mdb__declarative_execution__succeeded = MR_TRUE;
      }
    return mdb__declarative_execution__succeeded;
  }
}

MR_Word MR_CALL 
mdb__declarative_execution__get_trace_exit_atom_1_f_0(
  MR_Word mdb__declarative_execution__TypeInfo_for_R_13,
  MR_Word mdb__declarative_execution__HeadVar__1_1)
{
  {
    MR_bool mdb__declarative_execution__succeeded;
    MR_Word mdb__declarative_execution__Atom_11;
    MR_Word mdb__declarative_execution__AtomArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
    MR_Box mdb__declarative_execution__Label_8 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
    MR_Box mdb__declarative_execution__ProcLayout_12;
    MR_Box mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
    MR_Box mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
    MR_Box mdb__declarative_execution__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
    MR_Integer mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
    MR_Integer mdb__declarative_execution__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
    MR_Integer mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));

    {
      mdb__declarative_execution__ProcLayout_12 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_execution__Label_8);
    }
    {
      mdb__declarative_execution__Atom_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Atom_11, 0) = ((MR_Box) (mdb__declarative_execution__ProcLayout_12));
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Atom_11, 1) = ((MR_Box) (mdb__declarative_execution__AtomArgs_6));
    }
    return mdb__declarative_execution__Atom_11;
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

/* :- end_module mdb.declarative_execution. */
