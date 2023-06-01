/*
** Automatically generated from `declarative_edt.m'
** by the Mercury compiler,
** version rotd-2023-06-01
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


// :- module mdb.declarative_edt.
// :- implementation.

/*
INIT mercury__mdb__declarative_edt__init
ENDINIT
*/

#include "mdb.declarative_edt.mih"


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
#include "exception.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
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
#include "io.stream_db.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.declarative_analyser.mih"
#include "mdb.declarative_debugger.mih"
#include "mdb.declarative_execution.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__list__pti_list_1__plain_mdb__declarative_edt__type_ctor_info_suspect_status_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_0;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_1[4];

static const MR_DuArgLocn mdb__declarative_edt__mdb__declarative_edt__field_locns_find_origin_response_0_1[4];

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_1;

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_2[5];

static const MR_DuArgLocn mdb__declarative_edt__mdb__declarative_edt__field_locns_find_origin_response_0_2[5];

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_2;

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_3;

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_4;

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_0[3];

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_2[1];

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_find_origin_response_0[3];

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_find_origin_response_0[5];

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_find_origin_response_0[5];

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_maybe_found_descendant_0_0[1];

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_0;

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_1;

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_maybe_found_descendant_0_2[1];

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_2;

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_2[1];

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_maybe_found_descendant_0[3];

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_maybe_found_descendant_0[3];

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_maybe_found_descendant_0[3];

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_0;

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_1;

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_2;

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_3;

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_ordinal_ordered_primitive_op_type_0[4];

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_primitive_op_type_0[4];

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_primitive_op_type_0[4];

static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_edt__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_mdb__declarative_edt__pti_suspect_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_edt__bimap__pti_bimap_2__pseudo_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__maybe__ti_maybe_1mdb__declarative_edt__type_ctor_info_weighting_heuristic_0;

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_search_space_1_0[7];

static const MR_ConstString mdb__declarative_edt__mdb__declarative_edt__field_names_search_space_1_0[7];

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_search_space_1_0;

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_search_space_1_0[1];

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_search_space_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_search_space_1[1];

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_search_space_1[1];

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_0;

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_1;

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_ordinal_ordered_subterm_mode_0[2];

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_subterm_mode_0[2];

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_subterm_mode_0[2];

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_0[3];

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_0;

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_1[2];

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_1;

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_2[3];

static const MR_DuArgLocn mdb__declarative_edt__mdb__declarative_edt__field_locns_subterm_origin_1_2[3];

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_2;

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_3;

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_4;

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_0[2];

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_2[1];

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_3[1];

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_subterm_origin_1[4];

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_subterm_origin_1[5];

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_subterm_origin_1[5];

static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_suspect_1_0[6];

static const MR_ConstString mdb__declarative_edt__mdb__declarative_edt__field_names_suspect_1_0[6];

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_1_0;

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_1_0[1];

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_suspect_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_suspect_1[1];

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_suspect_1[1];

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_0;

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_suspect_status_0_1[1];

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_1;

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_2;

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_3;

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_4;

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_5;

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_6;

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_7;

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_status_0_0[7];

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_status_0_1[1];

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_suspect_status_0[2];

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_suspect_status_0[8];

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_suspect_status_0[8];

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_0;

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_1;

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_ordinal_ordered_weighting_heuristic_0[2];

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_weighting_heuristic_0[2];

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_weighting_heuristic_0[2];

static const MR_ConstString mdb__declarative_edt__mdb__declarative_edt__type_class_id_var_names_mercury_edt_2[2];

static const MR_TypeClassMethod mdb__declarative_edt__mdb__declarative_edt__type_class_id_method_ids_mercury_edt_2[15];

static const MR_TypeClassId mdb__declarative_edt__mdb__declarative_edt__type_class_id_mercury_edt_2;

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1767__1_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_32,
  MR_Word STATE_VARIABLE_SearchSpace_0_25,
  MR_Integer HeadVar__3_37);

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1760__1_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_32,
  MR_Word STATE_VARIABLE_SearchSpace_0_25,
  MR_Integer HeadVar__3_33);

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__get_siblings__1517__1_2_p_0(
  MR_Integer SuspectId_5,
  MR_Integer HeadVar__2_46);

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_num_unexplored__1445__1_2_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word LambdaHeadVar__1_14);

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_num_unknown__1415__1_2_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word LambdaHeadVar__1_15);

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__recalc_weights_upto_ancestor__1375__1_2_p_0(
  MR_Integer Ancestor_7,
  MR_Integer HeadVar__2_28);

static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1297__1_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_57,
  MR_Word HeadVar__2_74,
  MR_Integer HeadVar__3_75,
  MR_Integer * HeadVar__4_76);

static MR_Box MR_CALL 
mdb__declarative_edt__IntroducedFrom__func__calc_suspect_weight__1292__1_2_f_0(
  MR_Word TypeClassInfo_for_mercury_edt_57,
  MR_Word LambdaHeadVar__1_29);

static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1290__1_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_57,
  MR_Word SearchSpace_12,
  MR_Integer HeadVar__3_58,
  MR_Word * HeadVar__4_59);

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__1932__1_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_45,
  MR_Word STATE_VARIABLE_SearchSpace_15_15,
  MR_Integer HeadVar__3_56);

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__revise_root__1898__1_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_81,
  MR_Word STATE_VARIABLE_SearchSpace_38_38,
  MR_Integer HeadVar__3_98);

static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__revise_root__1884__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__revise_root__1884__1_6_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_81,
  MR_Word HeadVar__2_23,
  MR_Word HeadVar__3_24,
  MR_Integer HeadVar__4_84,
  MR_Word HeadVar__5_85,
  MR_Word * HeadVar__6_86);

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_1_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_1_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_edt__find_first_implicit_root_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_33,
  MR_Box Store_5,
  MR_Word SearchSpace_6,
  MR_Word HeadVar__3_3,
  MR_Integer * ImplicitRoot_9);

static MR_bool MR_CALL 
mdb__declarative_edt__should_check_search_space_consistency_0_p_0(void);

static void MR_CALL 
mdb__declarative_edt__least_skipped_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word SearchSpace_6,
  MR_Integer SuspectId1_7,
  MR_Word Suspect1_8,
  MR_Integer SuspectId2_9,
  MR_Integer * LeastSkipped_10);

static MR_bool MR_CALL 
mdb__declarative_edt__calc_num_unexplored_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Integer MR_CALL 
mdb__declarative_edt__calc_num_unexplored_1_f_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word SearchSpace_3);

static MR_bool MR_CALL 
mdb__declarative_edt__calc_num_unknown_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Integer MR_CALL 
mdb__declarative_edt__calc_num_unknown_1_f_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word SearchSpace_3);

static void MR_CALL 
mdb__declarative_edt__add_original_weight_7_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_15,
  MR_Word Weighting_8,
  MR_Box Store_9,
  MR_Box Node_10,
  MR_Integer Prev_11,
  MR_Integer * HeadVar__5_5,
  MR_Integer PrevExcess_13,
  MR_Integer * HeadVar__7_7);

static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Status_6,
  MR_Word StopStatusSet_7,
  MR_Integer SuspectId_8,
  MR_Word STATE_VARIABLE_SearchSpace_0_11,
  MR_Word * STATE_VARIABLE_SearchSpace_12);

static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_7_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word Status_8,
  MR_Word StopStatusSet_9,
  MR_Integer SuspectId_10,
  MR_Word STATE_VARIABLE_StopSuspects_0_15,
  MR_Word * STATE_VARIABLE_StopSuspects_16,
  MR_Word STATE_VARIABLE_SearchSpace_0_17,
  MR_Word * STATE_VARIABLE_SearchSpace_18);

static MR_bool MR_CALL 
mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_63,
  MR_Box Store_5,
  MR_Word SearchSpace_6,
  MR_Integer SuspectId_7,
  MR_String * Message_8);

static MR_bool MR_CALL 
mdb__declarative_edt__update_weighting_heuristic_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdb__declarative_edt__revise_root_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__declarative_edt__revise_root_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_27,
  MR_Box Store_6,
  MR_Integer Ancestor_7,
  MR_Word SuspectIds_8,
  MR_Word STATE_VARIABLE_SearchSpace_0_17,
  MR_Word * STATE_VARIABLE_SearchSpace_18);

static void MR_CALL 
mdb__declarative_edt__recalc_weights_and_get_parents_6_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_63,
  MR_Box Store_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * Parents_4,
  MR_Word STATE_VARIABLE_SearchSpace_0_5,
  MR_Word * STATE_VARIABLE_SearchSpace_6);

static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_6_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word Status_7,
  MR_Word StopStatusSet_8,
  MR_Integer SuspectId_9,
  MR_Word * StopSuspects_10,
  MR_Word STATE_VARIABLE_SearchSpace_0_14,
  MR_Word * STATE_VARIABLE_SearchSpace_15);

static void MR_CALL 
mdb__declarative_edt__choose_skipped_suspect_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_32,
  MR_Box Store_7,
  MR_Word Oracle_8,
  MR_Word SuspectList_9,
  MR_Word STATE_VARIABLE_SearchSpace_0_25,
  MR_Word * STATE_VARIABLE_SearchSpace_26,
  MR_Word * MaybeFound_11);

static void MR_CALL 
mdb__declarative_edt__get_children_list_7_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_25,
  MR_Box Store_1,
  MR_Word Oracle_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_42,
  MR_Box Store_8,
  MR_Box Node_9,
  MR_Word OutputArgPos_10,
  MR_Word TermPath_11,
  MR_Word STATE_VARIABLE_TriedProcs_0_36,
  MR_Word * STATE_VARIABLE_TriedProcs_37,
  MR_Word * MaybeInitialVersionArgPos_13);

static void MR_CALL 
mdb__declarative_edt__resolve_origin_10_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_49,
  MR_Box Store_11,
  MR_Word Oracle_12,
  MR_Box Node_13,
  MR_Word ArgPos_14,
  MR_Word TermPath_15,
  MR_Integer SuspectId_16,
  MR_Word Output_17,
  MR_Word STATE_VARIABLE_SearchSpace_0_34,
  MR_Word * STATE_VARIABLE_SearchSpace_35,
  MR_Word * Response_19);

static MR_bool MR_CALL 
mdb__declarative_edt__find_edt_node_in_suspect_list_4_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word HeadVar__1_1,
  MR_Box Node_7,
  MR_Word SearchSpace_8,
  MR_Integer * FoundId_9);

static void MR_CALL 
mdb__declarative_edt__insert_new_topmost_node_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_154,
  MR_Box Store_6,
  MR_Word Oracle_7,
  MR_Box NewTopMostEDTNode_8,
  MR_Word STATE_VARIABLE_SearchSpace_0_32,
  MR_Word * STATE_VARIABLE_SearchSpace_33);

static MR_bool MR_CALL 
mdb__declarative_edt__find_node_in_list_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_12,
  MR_Box Store_5,
  MR_Word HeadVar__2_2,
  MR_Box NodeToMatch_8,
  MR_Integer * Pos_9);

static void MR_CALL 
mdb__declarative_edt__adjust_suspect_status_from_oracle_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_30,
  MR_Box Store_6,
  MR_Word Oracle_7,
  MR_Integer SuspectId_8,
  MR_Word STATE_VARIABLE_SearchSpace_0_16,
  MR_Word * STATE_VARIABLE_SearchSpace_17);

static MR_Word MR_CALL 
mdb__declarative_edt__new_parent_status_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
mdb__declarative_edt__new_child_status_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
mdb__declarative_edt__assert_suspect_is_valid_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__declarative_edt__assert_suspect_is_valid_4_p_0(
  MR_Word TypeInfo_for_T_87,
  MR_Word Status_5,
  MR_Integer SuspectId_6,
  MR_Word STATE_VARIABLE_SearchSpace_0_11,
  MR_Word * STATE_VARIABLE_SearchSpace_12);

static void MR_CALL 
mdb__declarative_edt__propagate_status_upwards_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_edt__propagate_status_upwards_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__declarative_edt__propagate_status_upwards_6_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_Word Status_7,
  MR_Word StopStatusSet_8,
  MR_Integer SuspectId_9,
  MR_Integer * Lowest_10,
  MR_Word STATE_VARIABLE_SearchSpace_0_16,
  MR_Word * STATE_VARIABLE_SearchSpace_17);

static MR_bool MR_CALL 
mdb__declarative_edt__get_path_5_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word SearchSpace_6,
  MR_Integer BottomId_7,
  MR_Integer TopId_8,
  MR_Word PathSoFar_9,
  MR_Word * Path_10);

static void MR_CALL 
mdb__declarative_edt__add_children_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__declarative_edt__add_children_8_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_88,
  MR_Box Store_9,
  MR_Word Oracle_10,
  MR_Word EDTChildren_11,
  MR_Integer SuspectId_12,
  MR_Word Status_13,
  MR_Word STATE_VARIABLE_SearchSpace_0_24,
  MR_Word * STATE_VARIABLE_SearchSpace_25,
  MR_Word * Children_15);

static void MR_CALL 
mdb__declarative_edt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_63,
  MR_Box Store_1,
  MR_Word HeadVar__3_3,
  MR_Integer ParentId_4,
  MR_Word Status_5,
  MR_Integer Depth_6,
  MR_Word STATE_VARIABLE_SearchSpace_0_7,
  MR_Word * STATE_VARIABLE_SearchSpace_8,
  MR_Word STATE_VARIABLE_Counter_0_9,
  MR_Word * STATE_VARIABLE_Counter_10,
  MR_Word * HeadVar__11_11);

static void MR_CALL 
mdb__declarative_edt__add_weight_to_ancestors_4_p_0(
  MR_Word TypeInfo_for_T_41,
  MR_Integer SuspectId_5,
  MR_Integer Weight_6,
  MR_Word STATE_VARIABLE_SearchSpace_0_12,
  MR_Word * STATE_VARIABLE_SearchSpace_13);

static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_57,
  MR_Box Store_8,
  MR_Box Node_9,
  MR_Word MaybeChildren_10,
  MR_Word Status_11,
  MR_Word SearchSpace_12,
  MR_Integer * Weight_13,
  MR_Integer * ExcessWeight_14);

static void MR_CALL 
mdb__declarative_edt__set_suspect_4_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Integer SuspectId_5,
  MR_Word Suspect_6,
  MR_Word STATE_VARIABLE_SearchSpace_0_10,
  MR_Word * STATE_VARIABLE_SearchSpace_11);

static void MR_CALL 
mdb__declarative_edt__lookup_suspect_3_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word SearchSpace_4,
  MR_Integer SuspectId_5,
  MR_Word * Suspect_6);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____find_origin_response_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_edt____Compare____find_origin_response_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____maybe_found_descendant_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_edt____Compare____maybe_found_descendant_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____primitive_op_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_edt____Compare____primitive_op_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____search_space_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_edt____Compare____search_space_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_edt____Compare____subterm_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_origin_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_edt____Compare____subterm_origin_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____weighting_heuristic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_edt____Compare____weighting_heuristic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__declarative_edt_scalar_common_1[18][2];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_2[1][1];

static /* final */ const MR_Integer mdb__declarative_edt_scalar_common_4[2][3];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_5[2][7];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_6[2][6];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_7[2][11];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_8[4][9];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_9[2][5];

static /* final */ const MR_Integer mdb__declarative_edt_scalar_common_10[1][2];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_11[1][8];


struct mdb__declarative_edt__vector_common_type_3_0_s {
  const MR_String mdb__declarative_edt__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct mdb__declarative_edt__vector_common_type_3_0_s mdb__declarative_edt_vector_common_3[4];



static /* final */ const MR_Box mdb__declarative_edt_scalar_common_1[18][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_edt_scalar_common_1[0]))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "topmost_det")),
    ((MR_Box) ((MR_String) "search space empty"))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(1, &mdb__declarative_edt_scalar_common_1[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &mdb__declarative_edt_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "incorporate_explicit_supertree")),
    ((MR_Box) ((MR_String) "no parent"))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "revise_root")),
    ((MR_Box) ((MR_String) "no root"))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "resolve_origin")),
    ((MR_Box) ((MR_String) "output origin for input subterm not in siblings"))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "lookup_suspect")),
    ((MR_Box) ((MR_String) "could not find suspect"))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "get_siblings")),
    ((MR_Box) ((MR_String) "parent\'s children unexplored"))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "get_siblings")),
    ((MR_Box) ((MR_String) "parent has no children"))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "insert_new_topmost_node")),
    ((MR_Box) ((MR_String) "invalid position"))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "insert_new_topmost_node")),
    ((MR_Box) ((MR_String) "couldn\'t find event number"))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "insert_new_topmost_node")),
    ((MR_Box) ((MR_String) "couldn\'t get new topmost node\'s children"))
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_2[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Integer mdb__declarative_edt_scalar_common_4[2][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 67663
  },
  /* row   1 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_5[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_2))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_7[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_10[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0)),
    ((MR_Box) (&mdb__declarative_edt__list__pti_list_1__plain_mdb__declarative_edt__type_ctor_info_suspect_status_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1))
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_8[4][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_10[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0)),
    ((MR_Box) (&mdb__declarative_edt__list__pti_list_1__plain_mdb__declarative_edt__type_ctor_info_suspect_status_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_10[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0)),
    ((MR_Box) (&mdb__declarative_edt__list__pti_list_1__plain_mdb__declarative_edt__type_ctor_info_suspect_status_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2))
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_9[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_10[0])),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_1))
  },
};

static /* final */ const MR_Integer mdb__declarative_edt_scalar_common_10[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_11[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct mdb__declarative_edt__vector_common_type_3_0_s mdb__declarative_edt_vector_common_3[4] = {
  /* row   0 */   { (MR_String) "foreign procedure call" },
  /* row   1 */   { (MR_String) "builtin operation" },
  /* row   2 */   { (MR_String) "untraced call" },
  /* row   3 */   { (MR_String) "unification" },
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
#include "mdb.declarative_edt.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_2 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__list__pti_list_1__plain_mdb__declarative_edt__type_ctor_info_suspect_status_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_0 = {
  (MR_String) "not_found",
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

static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_1[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_mode_0)
};

static const MR_DuArgLocn mdb__declarative_edt__mdb__declarative_edt__field_locns_find_origin_response_0_1[4] = {
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
  }
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_1 = {
  (MR_String) "origin",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_1,
  NULL,
  mdb__declarative_edt__mdb__declarative_edt__field_locns_find_origin_response_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_2[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_primitive_op_type_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_DuArgLocn mdb__declarative_edt__mdb__declarative_edt__field_locns_find_origin_response_0_2[5] = {
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
    (MR_Integer) 2
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_2 = {
  (MR_String) "primitive_op",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_2,
  NULL,
  mdb__declarative_edt__mdb__declarative_edt__field_locns_find_origin_response_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_3 = {
  (MR_String) "require_explicit_subtree",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_4 = {
  (MR_String) "require_explicit_supertree",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_0[3] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_3,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_4
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_1[1] = { &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_1 };

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_2[1] = { &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_2 };

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_find_origin_response_0[3] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_find_origin_response_0[5] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_1,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_2,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_3,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_4
};

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_find_origin_response_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_find_origin_response_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____find_origin_response_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____find_origin_response_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "find_origin_response",
  { mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_find_origin_response_0 },
  { mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_find_origin_response_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_find_origin_response_0,

};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_maybe_found_descendant_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_0 = {
  (MR_String) "found",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_edt__mdb__declarative_edt__field_types_maybe_found_descendant_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_1 = {
  (MR_String) "not_found",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_maybe_found_descendant_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_2 = {
  (MR_String) "require_explicit_subtree",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__declarative_edt__mdb__declarative_edt__field_types_maybe_found_descendant_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_0[1] = { &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_1 };

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_1[1] = { &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_0 };

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_2[1] = { &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_2 };

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_maybe_found_descendant_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_maybe_found_descendant_0[3] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_1,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_2
};

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_maybe_found_descendant_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_maybe_found_descendant_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____maybe_found_descendant_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____maybe_found_descendant_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "maybe_found_descendant",
  { mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_maybe_found_descendant_0 },
  { mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_maybe_found_descendant_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_maybe_found_descendant_0,

};

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_0 = {
  (MR_String) "primop_foreign_proc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_1 = {
  (MR_String) "primop_builtin_call",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_2 = {
  (MR_String) "primop_untraced_call",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_3 = {
  (MR_String) "primop_unification",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_ordinal_ordered_primitive_op_type_0[4] = {
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_1,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_2,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_3
};

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_primitive_op_type_0[4] = {
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_1,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_3,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_2
};

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_primitive_op_type_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_primitive_op_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_edt____Unify____primitive_op_type_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____primitive_op_type_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "primitive_op_type",
  { mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_primitive_op_type_0 },
  { mdb__declarative_edt__mdb__declarative_edt__enum_ordinal_ordered_primitive_op_type_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_primitive_op_type_0,

};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_edt__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_mdb__declarative_edt__pti_suspect_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_edt__bimap__pti_bimap_2__pseudo_1__pseudo_1 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__maybe__ti_maybe_1mdb__declarative_edt__type_ctor_info_weighting_heuristic_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0) }
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_search_space_1_0[7] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_mdb__declarative_edt__pti_suspect_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__bimap__pti_bimap_2__pseudo_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__maybe__ti_maybe_1mdb__declarative_edt__type_ctor_info_weighting_heuristic_0)
};

static const MR_ConstString mdb__declarative_edt__mdb__declarative_edt__field_names_search_space_1_0[7] = {
  (MR_String) "root",
  (MR_String) "topmost",
  (MR_String) "suspect_id_counter",
  (MR_String) "skip_counter",
  (MR_String) "store",
  (MR_String) "implicit_to_explicit_roots",
  (MR_String) "maybe_weighting_heuristic"
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_search_space_1_0 = {
  (MR_String) "search_space",
  INT16_C(7),
  UINT16_C(48),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_edt__mdb__declarative_edt__field_types_search_space_1_0,
  mdb__declarative_edt__mdb__declarative_edt__field_names_search_space_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_search_space_1_0[1] = { &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_search_space_1_0 };

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_search_space_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_search_space_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_search_space_1[1] = { &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_search_space_1_0 };

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_search_space_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____search_space_1_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____search_space_1_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "search_space",
  { mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_search_space_1 },
  { mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_search_space_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_search_space_1,

};

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_0 = {
  (MR_String) "subterm_in",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_1 = {
  (MR_String) "subterm_out",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_ordinal_ordered_subterm_mode_0[2] = {
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_1
};

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_subterm_mode_0[2] = {
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_1
};

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_subterm_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_edt____Unify____subterm_mode_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____subterm_mode_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "subterm_mode",
  { mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_subterm_mode_0 },
  { mdb__declarative_edt__mdb__declarative_edt__enum_ordinal_ordered_subterm_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_subterm_mode_0,

};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_0[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_0 = {
  (MR_String) "origin_output",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_1[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_1 = {
  (MR_String) "origin_input",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_2[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_primitive_op_type_0)
};

static const MR_DuArgLocn mdb__declarative_edt__mdb__declarative_edt__field_locns_subterm_origin_1_2[3] = {
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

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_2 = {
  (MR_String) "origin_primitive_op",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_2,
  NULL,
  mdb__declarative_edt__mdb__declarative_edt__field_locns_subterm_origin_1_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_3 = {
  (MR_String) "origin_not_found",
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

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_4 = {
  (MR_String) "origin_require_explicit_subtree",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_0[2] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_3,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_4
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_1[1] = { &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_0 };

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_2[1] = { &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_1 };

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_3[1] = { &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_2 };

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_subterm_origin_1[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_subterm_origin_1[5] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_1,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_3,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_0,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_2,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_4
};

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_subterm_origin_1[5] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____subterm_origin_1_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____subterm_origin_1_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "subterm_origin",
  { mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_subterm_origin_1 },
  { mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_subterm_origin_1 },
  (MR_Integer) 5,
  UINT16_C(12),
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_subterm_origin_1,

};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_suspect_1_0[6] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mdb__declarative_edt__mdb__declarative_edt__field_names_suspect_1_0[6] = {
  (MR_String) "parent",
  (MR_String) "edt_node",
  (MR_String) "status",
  (MR_String) "depth",
  (MR_String) "children",
  (MR_String) "weight"
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_1_0 = {
  (MR_String) "suspect",
  INT16_C(6),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_edt__mdb__declarative_edt__field_types_suspect_1_0,
  mdb__declarative_edt__mdb__declarative_edt__field_names_suspect_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_1_0[1] = { &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_1_0 };

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_suspect_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_suspect_1[1] = { &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_1_0 };

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_suspect_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____suspect_1_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____suspect_1_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "suspect",
  { mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_suspect_1 },
  { mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_suspect_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_suspect_1,

};

const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_edt____Unify____suspect_id_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____suspect_id_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "suspect_id",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_0 = {
  (MR_String) "suspect_ignored",
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

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_suspect_status_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_1 = {
  (MR_String) "suspect_skipped",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_edt__mdb__declarative_edt__field_types_suspect_status_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_2 = {
  (MR_String) "suspect_correct",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_3 = {
  (MR_String) "suspect_erroneous",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_4 = {
  (MR_String) "suspect_inadmissible",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_5 = {
  (MR_String) "suspect_pruned",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_6 = {
  (MR_String) "suspect_in_erroneous_subtree_complement",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_7 = {
  (MR_String) "suspect_unknown",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_status_0_0[7] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_2,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_3,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_4,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_5,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_6,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_7
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_status_0_1[1] = { &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_1 };

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_suspect_status_0[2] = {
  {
    UINT32_C(7),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_status_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_status_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_suspect_status_0[8] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_2,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_3,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_6,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_4,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_5,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_1,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_7
};

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_suspect_status_0[8] = {
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 7
};

const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____suspect_status_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____suspect_status_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "suspect_status",
  { mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_suspect_status_0 },
  { mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_suspect_status_0 },
  (MR_Integer) 8,
  UINT16_C(12),
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_suspect_status_0,

};

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_0 = {
  (MR_String) "number_of_events",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_1 = {
  (MR_String) "suspicion",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_ordinal_ordered_weighting_heuristic_0[2] = {
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_1
};

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_weighting_heuristic_0[2] = {
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_1
};

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_weighting_heuristic_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_edt____Unify____weighting_heuristic_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____weighting_heuristic_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "weighting_heuristic",
  { mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_weighting_heuristic_0 },
  { mdb__declarative_edt__mdb__declarative_edt__enum_ordinal_ordered_weighting_heuristic_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_weighting_heuristic_0,

};

static const MR_ConstString mdb__declarative_edt__mdb__declarative_edt__type_class_id_var_names_mercury_edt_2[2] = {
  (MR_String) "S",
  (MR_String) "T"
};

static const MR_TypeClassMethod mdb__declarative_edt__mdb__declarative_edt__type_class_id_method_ids_mercury_edt_2[15] = {
  {
    (MR_String) "edt_question",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "edt_get_e_bug",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "edt_get_i_bug",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "edt_children",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "edt_parent",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "edt_dependency",
    (MR_Integer) 6,
    MR_PREDICATE
  },
  {
    (MR_String) "edt_subterm_mode",
    (MR_Integer) 5,
    MR_PREDICATE
  },
  {
    (MR_String) "edt_is_implicit_root",
    (MR_Integer) 2,
    MR_PREDICATE
  },
  {
    (MR_String) "edt_same_nodes",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "edt_topmost_node",
    (MR_Integer) 2,
    MR_PREDICATE
  },
  {
    (MR_String) "edt_number_of_events",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "edt_subtree_suspicion",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "edt_context",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "edt_proc_label",
    (MR_Integer) 3,
    MR_FUNCTION
  },
  {
    (MR_String) "edt_arg_pos_to_user_arg_num",
    (MR_Integer) 4,
    MR_FUNCTION
  }
};

static const MR_TypeClassId mdb__declarative_edt__mdb__declarative_edt__type_class_id_mercury_edt_2 = {
  (MR_String) "mdb.declarative_edt",
  (MR_String) "mercury_edt",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 15,
  mdb__declarative_edt__mdb__declarative_edt__type_class_id_var_names_mercury_edt_2,
  mdb__declarative_edt__mdb__declarative_edt__type_class_id_method_ids_mercury_edt_2
};

const MR_TypeClassDeclStruct mdb__declarative_edt__mdb__declarative_edt__type_class_decl_mercury_edt_2 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_class_id_mercury_edt_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1767__1_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_32,
  MR_Word STATE_VARIABLE_SearchSpace_0_25,
  MR_Integer HeadVar__3_37)
{
  MR_bool succeeded;
  MR_Word TypeInfo_39_39;
  MR_Word Var_40;
  MR_Word Suspect_43;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_32, (MR_Integer) 2, &TypeInfo_39_39);
  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_39_39, STATE_VARIABLE_SearchSpace_0_25, HeadVar__3_37, &Suspect_43);
  Var_40 = ((MR_Word) ((MR_hl_field(0, Suspect_43, (MR_Integer) 2))));
  switch (MR_tag((MR_Word) Var_40)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Var_40)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 4:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 5:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 6:
          succeeded = MR_TRUE;
          break;
      }
      break;
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1760__1_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_32,
  MR_Word STATE_VARIABLE_SearchSpace_0_25,
  MR_Integer HeadVar__3_33)
{
  MR_bool succeeded;
  MR_Word TypeInfo_35_35;
  MR_Word Suspect_36;
  MR_Word Var_37;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_32, (MR_Integer) 2, &TypeInfo_35_35);
  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_35_35, STATE_VARIABLE_SearchSpace_0_25, HeadVar__3_33, &Suspect_36);
  Var_37 = ((MR_Word) ((MR_hl_field(0, Suspect_36, (MR_Integer) 2))));
  succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 24U));
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__get_siblings__1517__1_2_p_0(
  MR_Integer SuspectId_5,
  MR_Integer HeadVar__2_46)
{
  MR_bool succeeded = (SuspectId_5 == HeadVar__2_46);

  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_num_unexplored__1445__1_2_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word LambdaHeadVar__1_14)
{
  MR_bool succeeded;
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_14, (MR_Integer) 4))));
  MR_Word Var_16;
  MR_Word Status_23 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_14, (MR_Integer) 2))));

  succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_16 = (MR_Integer) 1;
    switch (MR_tag((MR_Word) Status_23)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Status_23)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = (Var_16 == (MR_Integer) 1);
            break;
          case (MR_Integer) 1:
            succeeded = (Var_16 == (MR_Integer) 0);
            break;
          case (MR_Integer) 2:
            succeeded = (Var_16 == (MR_Integer) 1);
            break;
          case (MR_Integer) 3:
            succeeded = (Var_16 == (MR_Integer) 0);
            break;
          case (MR_Integer) 4:
            succeeded = (Var_16 == (MR_Integer) 0);
            break;
          case (MR_Integer) 5:
            succeeded = (Var_16 == (MR_Integer) 0);
            break;
          case (MR_Integer) 6:
            succeeded = (Var_16 == (MR_Integer) 1);
            break;
        }
        break;
      case (MR_Integer) 1:
        succeeded = (Var_16 == (MR_Integer) 1);
        break;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_num_unknown__1415__1_2_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word LambdaHeadVar__1_15)
{
  MR_bool succeeded;
  MR_Word Status_24 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_15, (MR_Integer) 2))));

  switch (MR_tag((MR_Word) Status_24)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Status_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 1:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 2:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 3:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 4:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 5:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 6:
          succeeded = MR_TRUE;
          break;
      }
      break;
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__recalc_weights_upto_ancestor__1375__1_2_p_0(
  MR_Integer Ancestor_7,
  MR_Integer HeadVar__2_28)
{
  MR_bool succeeded = (Ancestor_7 == HeadVar__2_28);

  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1297__1_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_57,
  MR_Word HeadVar__2_74,
  MR_Integer HeadVar__3_75,
  MR_Integer * HeadVar__4_76)
{
  MR_Integer Var_79;
  MR_Word TypeInfo_78_78;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &TypeInfo_78_78);
  Var_79 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_74, (MR_Integer) 5))));
  *HeadVar__4_76 = (MR_Integer) ((MR_Unsigned) HeadVar__3_75 + (MR_Unsigned) Var_79);
}

static MR_Box MR_CALL 
mdb__declarative_edt__IntroducedFrom__func__calc_suspect_weight__1292__1_2_f_0(
  MR_Word TypeClassInfo_for_mercury_edt_57,
  MR_Word LambdaHeadVar__1_29)
{
  MR_Box LambdaHeadVar__2_30 = (MR_hl_field(0, LambdaHeadVar__1_29, (MR_Integer) 1));

  return LambdaHeadVar__2_30;
}

static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1290__1_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_57,
  MR_Word SearchSpace_12,
  MR_Integer HeadVar__3_58,
  MR_Word * HeadVar__4_59)
{
  MR_Word TypeInfo_61_61;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &TypeInfo_61_61);
  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_61_61, SearchSpace_12, HeadVar__3_58, HeadVar__4_59);
}

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__1932__1_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_45,
  MR_Word STATE_VARIABLE_SearchSpace_15_15,
  MR_Integer HeadVar__3_56)
{
  MR_bool succeeded;
  MR_Word TypeInfo_58_58;
  MR_Word Suspect_59;
  MR_Word Var_74;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_45, (MR_Integer) 2, &TypeInfo_58_58);
  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_58_58, STATE_VARIABLE_SearchSpace_15_15, HeadVar__3_56, &Suspect_59);
  Var_74 = ((MR_Word) ((MR_hl_field(0, Suspect_59, (MR_Integer) 4))));
  if ((Var_74 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 0))));

    succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__revise_root__1898__1_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_81,
  MR_Word STATE_VARIABLE_SearchSpace_38_38,
  MR_Integer HeadVar__3_98)
{
  MR_bool succeeded;
  MR_Word TypeInfo_100_100;
  MR_Word Suspect_101;
  MR_Word Var_116;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &TypeInfo_100_100);
  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_100_100, STATE_VARIABLE_SearchSpace_38_38, HeadVar__3_98, &Suspect_101);
  Var_116 = ((MR_Word) ((MR_hl_field(0, Suspect_101, (MR_Integer) 4))));
  if ((Var_116 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Word Var_104 = ((MR_Word) ((MR_hl_field(1, Var_116, (MR_Integer) 0))));

    succeeded = (Var_104 == (MR_Word) ((MR_Unsigned) 0U));
  }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__revise_root__1884__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_StopSuspects_16;
  MR_Word conv0_STATE_VARIABLE_SearchSpace_18;

  mdb__declarative_edt__propagate_status_downwards_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_StopSuspects_16, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_SearchSpace_18);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_StopSuspects_16));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_SearchSpace_18));
}

static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__revise_root__1884__1_6_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_81,
  MR_Word HeadVar__2_23,
  MR_Word HeadVar__3_24,
  MR_Integer HeadVar__4_84,
  MR_Word HeadVar__5_85,
  MR_Word * HeadVar__6_86)
{
  MR_Word TypeInfo_88_88;
  MR_Word TypeInfo_28_129;
  MR_Word Suspect_90;
  MR_Word Var_92;
  MR_Word STATE_VARIABLE_SearchSpace_17_93;
  MR_Word Var_107;
  MR_Word Store0_112;
  MR_Word Store_113;
  MR_Word Var_96;
  MR_Box Var_97;
  MR_Integer Var_99;
  MR_Word Var_100;
  MR_Integer Var_101;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word Var_125;
  MR_Word Var_126;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &TypeInfo_88_88);
  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_88_88, HeadVar__5_85, HeadVar__4_84, &Suspect_90);
  Var_96 = ((MR_Word) ((MR_hl_field(0, Suspect_90, (MR_Integer) 0))));
  Var_97 = (MR_hl_field(0, Suspect_90, (MR_Integer) 1));
  Var_99 = ((MR_Integer) ((MR_hl_field(0, Suspect_90, (MR_Integer) 3))));
  Var_100 = ((MR_Word) ((MR_hl_field(0, Suspect_90, (MR_Integer) 4))));
  Var_101 = ((MR_Integer) ((MR_hl_field(0, Suspect_90, (MR_Integer) 5))));
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_92, 0) = ((MR_Box) (Var_96));
    MR_hl_field(0, Var_92, 1) = Var_97;
    MR_hl_field(0, Var_92, 2) = ((MR_Box) (HeadVar__2_23));
    MR_hl_field(0, Var_92, 3) = ((MR_Box) (Var_99));
    MR_hl_field(0, Var_92, 4) = ((MR_Box) (Var_100));
    MR_hl_field(0, Var_92, 5) = ((MR_Box) (Var_101));
  }
  Store0_112 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_85, (MR_Integer) 4))));
  {
    TypeInfo_28_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_28_129, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
    MR_hl_field(0, TypeInfo_28_129, 1) = ((MR_Box) (TypeInfo_88_88));
  }
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_28_129, HeadVar__4_84, ((MR_Box) (Var_92)), Store0_112, &Store_113);
  Var_120 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_85, (MR_Integer) 0))));
  Var_121 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_85, (MR_Integer) 1))));
  Var_122 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_85, (MR_Integer) 2))));
  Var_123 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_85, (MR_Integer) 3))));
  Var_125 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_85, (MR_Integer) 5))));
  Var_126 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_85, (MR_Integer) 6))));
  {
    STATE_VARIABLE_SearchSpace_17_93 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_93, 0) = ((MR_Box) (Var_120));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_93, 1) = ((MR_Box) (Var_121));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_93, 2) = ((MR_Box) (Var_122));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_93, 3) = ((MR_Box) (Var_123));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_93, 4) = ((MR_Box) (Store_113));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_93, 5) = ((MR_Box) (Var_125));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_93, 6) = ((MR_Box) (Var_126));
  }
  Var_107 = ((MR_Word) ((MR_hl_field(0, Suspect_90, (MR_Integer) 4))));
  if ((Var_107 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__6_86 = STATE_VARIABLE_SearchSpace_17_93;
  else
  {
    MR_Word TypeInfo_48_105;
    MR_Word Children_91 = ((MR_Word) ((MR_hl_field(1, Var_107, (MR_Integer) 0))));
    MR_Word Var_94;
    MR_Box conv3_Var_130;
    MR_Box conv2_HeadVar__6_86;

    {
      Var_94 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_94, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_7[1]));
      MR_hl_field(0, Var_94, 1) = ((MR_Box) (mdb__declarative_edt__IntroducedFrom__pred__revise_root__1884__1_6_p_0_1));
      MR_hl_field(0, Var_94, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_94, 3) = ((MR_Box) (TypeInfo_88_88));
      MR_hl_field(0, Var_94, 4) = ((MR_Box) (HeadVar__2_23));
      MR_hl_field(0, Var_94, 5) = ((MR_Box) (HeadVar__3_24));
    }
    {
      TypeInfo_48_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_48_105, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
      MR_hl_field(0, TypeInfo_48_105, 1) = ((MR_Box) (TypeInfo_88_88));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__declarative_edt_scalar_common_1[0]), TypeInfo_48_105, Var_94, Children_91, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Var_130, ((MR_Box) (STATE_VARIABLE_SearchSpace_17_93)), &conv2_HeadVar__6_86);
    *HeadVar__6_86 = ((MR_Word) (conv2_HeadVar__6_86));
  }
}

void MR_CALL 
mdb__declarative_edt____Compare____weighting_heuristic_0_0(
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
mdb__declarative_edt____Unify____weighting_heuristic_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdb__declarative_edt____Compare____suspect_id_0_0(
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
mdb__declarative_edt____Unify____suspect_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_1_0(
  MR_Word TypeInfo_for_T_23,
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_edt_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_23, &SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mdb__declarative_edt____Compare____suspect_status_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
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

            mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_edt_scalar_common_1[3]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
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

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_20 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_21 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_20 == CastY_21);
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
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
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
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
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
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
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
                    *HeadVar__1_1 = (MR_Integer) 0;
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
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
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
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 5:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
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
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 6:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
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
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_23 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

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
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgY1_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_23 < ArgY1_7);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_23 > ArgY1_7);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_1_0(
  MR_Word TypeInfo_for_T_17,
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
    MR_Word TypeInfo_19_19;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_edt_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_17, ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mdb__declarative_edt____Unify____suspect_status_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) (&mdb__declarative_edt_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
              succeeded = (ArgX6_13 == ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_status_0_0(
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
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_14 == CastX_13);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_16 == CastX_15);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_18 == CastX_17);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mdb__declarative_edt____Compare____subterm_origin_1_0(
  MR_Word TypeInfo_for_T_91,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_89 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_90 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_89 == CastY_90);
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
                *HeadVar__1_1 = (MR_Integer) 2;
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
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_101 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_102 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_103 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));

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
                MR_Box ArgY1_5 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_6;

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_91, &SubResult1_6, Var_103, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                {
                  MR_Word SubResult2_9;

                  mdbcomp__program_representation____Compare____arg_pos_0_0(&SubResult2_9, Var_102, ArgY2_8);
                  succeeded = (SubResult2_9 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_9;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_edt_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_101)), ((MR_Box) (ArgY3_11)));
                }
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
          MR_Word Var_99 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_100 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_35 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_38 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_36;

                mdbcomp__program_representation____Compare____arg_pos_0_0(&SubResult1_36, Var_100, ArgY1_35);
                succeeded = (SubResult1_36 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_36;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_edt_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_99)), ((MR_Box) (ArgY2_38)));
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
          MR_Word Var_104 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
          MR_Integer Var_105 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_106 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));

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
              {
                MR_String ArgY1_60 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_63 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_66 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
                MR_Word SubResult1_61;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_61, Var_106, ArgY1_60);
                succeeded = (SubResult1_61 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_61;
                else
                {
                  MR_Word SubResult2_64;

                  succeeded = (Var_105 < ArgY2_63);
                  if (succeeded)
                  {
                    SubResult2_64 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_105 > ArgY2_63);
                    if (succeeded)
                    {
                      SubResult2_64 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_64 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_64;
                  else
                  {
                    MR_Integer Var_107 = (MR_Integer) (Var_104);
                    MR_Integer Var_108 = (MR_Integer) (ArgY3_66);

                    succeeded = (Var_107 < Var_108);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_107 > Var_108);
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

MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_origin_1_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
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
              MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_20 == CastX_19);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_22 == CastX_21);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_29_29;
          MR_Box ArgX1_3 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_25, ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(ArgX2_5, ArgY2_6);
              if (succeeded)
              {
                TypeInfo_29_29 = (MR_Word) (&mdb__declarative_edt_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_27_27;
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(ArgX1_9, ArgY1_10);
            if (succeeded)
            {
              TypeInfo_27_27 = (MR_Word) (&mdb__declarative_edt_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_14;
          MR_Integer ArgX2_15 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_16;
          MR_Word ArgX3_17 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
          MR_Word ArgY3_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_14 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_16 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_18 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
            succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
            if (succeeded)
            {
              succeeded = (ArgX2_15 == ArgY2_16);
              if (succeeded)
                succeeded = (ArgX3_17 == ArgY3_18);
            }
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mdb__declarative_edt____Compare____subterm_mode_0_0(
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
mdb__declarative_edt____Unify____subterm_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdb__declarative_edt____Compare____search_space_1_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_edt_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_edt_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__counter____Compare____counter_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__counter____Compare____counter_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Word TypeInfo_33_33;

            {
              TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_33_33, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
              MR_hl_field(0, TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_for_T_26));
            }
            mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_33_33, &SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__bimap____Compare____bimap_2_0(TypeInfo_for_T_26, TypeInfo_for_T_26, &SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_edt_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_edt____Unify____search_space_1_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_21_21;
    MR_Word TypeCtorInfo_24_24;
    MR_Word TypeCtorInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_31_31;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_edt_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_21_21 = (MR_Word) (&mdb__declarative_edt_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = mercury__counter____Unify____counter_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = mercury__counter____Unify____counter_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeCtorInfo_24_24 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
            TypeCtorInfo_25_25 = (MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1);
            {
              TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_26_26, 0) = ((MR_Box) (TypeCtorInfo_25_25));
              MR_hl_field(0, TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_T_19));
            }
            succeeded = mercury__tree234____Unify____tree234_2_0(TypeCtorInfo_24_24, TypeInfo_26_26, ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = mercury__bimap____Unify____bimap_2_0(TypeInfo_for_T_19, TypeInfo_for_T_19, ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                TypeInfo_31_31 = (MR_Word) (&mdb__declarative_edt_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_edt____Compare____primitive_op_type_0_0(
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
mdb__declarative_edt____Unify____primitive_op_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdb__declarative_edt____Compare____maybe_found_descendant_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_16 == CastY_17);
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
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_20 < ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_20 > ArgY1_5);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Integer ArgY1_15 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_21 < ArgY1_15);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_21 > ArgY1_15);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
mdb__declarative_edt____Unify____maybe_found_descendant_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mdb__declarative_edt____Compare____find_origin_response_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_101 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_102 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_101 == CastY_102);
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
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
                  case (MR_Integer) 2:
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
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
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
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_112 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word Var_113 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_114 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Integer Var_115 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

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
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgY1_18 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_27 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
                MR_Word SubResult1_19;

                succeeded = (Var_115 < ArgY1_18);
                if (succeeded)
                {
                  SubResult1_19 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_115 > ArgY1_18);
                  if (succeeded)
                  {
                    SubResult1_19 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_19 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_19;
                else
                {
                  MR_Word SubResult2_22;

                  mdbcomp__program_representation____Compare____arg_pos_0_0(&SubResult2_22, Var_114, ArgY2_21);
                  succeeded = (SubResult2_22 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_22;
                  else
                  {
                    MR_Word SubResult3_25;

                    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_edt_scalar_common_1[0]), &SubResult3_25, ((MR_Box) (Var_113)), ((MR_Box) (ArgY3_24)));
                    succeeded = (SubResult3_25 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_25;
                    else
                    {
                      MR_Integer Var_121 = (MR_Integer) (Var_112);
                      MR_Integer Var_122 = (MR_Integer) (ArgY4_27);

                      succeeded = (Var_121 < Var_122);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_121 > Var_122);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_116 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word Var_117 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 3);
          MR_Integer Var_118 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_String Var_119 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Integer Var_120 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ArgY1_60 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_String ArgY2_63 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_66 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_69 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 3))) >> 1)) & (MR_Integer) 3);
                MR_Word ArgY5_72 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
                MR_Word SubResult1_61;

                succeeded = (Var_120 < ArgY1_60);
                if (succeeded)
                {
                  SubResult1_61 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_120 > ArgY1_60);
                  if (succeeded)
                  {
                    SubResult1_61 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_61 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_61;
                else
                {
                  MR_Word SubResult2_64;

                  mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_64, Var_119, ArgY2_63);
                  succeeded = (SubResult2_64 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_64;
                  else
                  {
                    MR_Word SubResult3_67;

                    succeeded = (Var_118 < ArgY3_66);
                    if (succeeded)
                    {
                      SubResult3_67 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_118 > ArgY3_66);
                      if (succeeded)
                      {
                        SubResult3_67 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult3_67 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_67;
                    else
                    {
                      MR_Word SubResult4_70;
                      MR_Integer Var_123 = (MR_Integer) (Var_117);
                      MR_Integer Var_124 = (MR_Integer) (ArgY4_69);

                      succeeded = (Var_123 < Var_124);
                      if (succeeded)
                      {
                        SubResult4_70 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_123 > Var_124);
                        if (succeeded)
                        {
                          SubResult4_70 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult4_70 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult4_70;
                      else
                      {
                        MR_Integer Var_125 = (MR_Integer) (Var_116);
                        MR_Integer Var_126 = (MR_Integer) (ArgY5_72);

                        succeeded = (Var_125 < Var_126);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_125 > Var_126);
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
          }
        }
        break;
    }
}

MR_bool MR_CALL 
mdb__declarative_edt____Unify____find_origin_response_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_27 == CastY_28);
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
              MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_24 == CastX_23);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_26 == CastX_25);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_30_30;
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;
          MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_10;
          MR_Word ArgX4_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word ArgY4_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_12 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
            succeeded = (ArgX1_5 == ArgY1_6);
            if (succeeded)
            {
              succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(ArgX2_7, ArgY2_8);
              if (succeeded)
              {
                TypeInfo_30_30 = (MR_Word) (&mdb__declarative_edt_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
                if (succeeded)
                  succeeded = (ArgX4_11 == ArgY4_12);
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_13 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_14;
          MR_String ArgX2_15 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_String ArgY2_16;
          MR_Integer ArgX3_17 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_18;
          MR_Word ArgX4_19 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 3))) >> 1)) & (MR_Integer) 3);
          MR_Word ArgY4_20;
          MR_Word ArgX5_21 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word ArgY5_22;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_14 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_16 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_18 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_20 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 3);
            ArgY5_22 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
            succeeded = (ArgX1_13 == ArgY1_14);
            if (succeeded)
            {
              succeeded = (strcmp(ArgX2_15, ArgY2_16) == 0);
              if (succeeded)
              {
                succeeded = (ArgX3_17 == ArgY3_18);
                if (succeeded)
                {
                  succeeded = (ArgX4_19 == ArgY4_20);
                  if (succeeded)
                    succeeded = (ArgX5_21 == ArgY5_22);
                }
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

MR_Integer MR_CALL 
mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_f_0(
  MR_Word TypeClassInfo_for_mercury_edt_5,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Integer HeadVar__4_4;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_5, (MR_Integer) 0)), (MR_Integer) 19))));
  MR_Box conv1_HeadVar__4_4;

  conv1_HeadVar__4_4 = func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_5)), HeadVar__1_1, HeadVar__2_2, ((MR_Box) (HeadVar__3_3)));
  HeadVar__4_4 = ((MR_Integer) (conv1_HeadVar__4_4));
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mdb__declarative_edt__edt_proc_label_2_f_0(
  MR_Word TypeClassInfo_for_mercury_edt_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 18))));
  MR_Box conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_4)), HeadVar__1_1, HeadVar__2_2);
  HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
  return HeadVar__3_3;
}

MR_bool MR_CALL 
mdb__declarative_edt__edt_context_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_5,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_5, (MR_Integer) 0)), (MR_Integer) 17))));
  MR_Box conv2_HeadVar__3_3;
  MR_Box conv1_HeadVar__4_4;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_5)), HeadVar__1_1, HeadVar__2_2, &conv2_HeadVar__3_3, &conv1_HeadVar__4_4);
  if (succeeded)
  {
    *HeadVar__3_3 = ((MR_Word) (conv2_HeadVar__3_3));
    *HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_edt__edt_subtree_suspicion_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_5,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_5, (MR_Integer) 0)), (MR_Integer) 16))));
  MR_Box conv2_HeadVar__3_3;
  MR_Box conv1_HeadVar__4_4;

  func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_5)), HeadVar__1_1, HeadVar__2_2, &conv2_HeadVar__3_3, &conv1_HeadVar__4_4);
  *HeadVar__3_3 = ((MR_Integer) (conv2_HeadVar__3_3));
  *HeadVar__4_4 = ((MR_Integer) (conv1_HeadVar__4_4));
}

void MR_CALL 
mdb__declarative_edt__edt_number_of_events_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_5,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_5, (MR_Integer) 0)), (MR_Integer) 15))));
  MR_Box conv2_HeadVar__3_3;
  MR_Box conv1_HeadVar__4_4;

  func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_5)), HeadVar__1_1, HeadVar__2_2, &conv2_HeadVar__3_3, &conv1_HeadVar__4_4);
  *HeadVar__3_3 = ((MR_Integer) (conv2_HeadVar__3_3));
  *HeadVar__4_4 = ((MR_Integer) (conv1_HeadVar__4_4));
}

MR_bool MR_CALL 
mdb__declarative_edt__edt_topmost_node_2_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_3,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_3, (MR_Integer) 0)), (MR_Integer) 14))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_3)), HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

MR_bool MR_CALL 
mdb__declarative_edt__edt_same_nodes_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 13))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_4)), HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
  return succeeded;
}

MR_bool MR_CALL 
mdb__declarative_edt__edt_is_implicit_root_2_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_3,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_3, (MR_Integer) 0)), (MR_Integer) 12))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_3)), HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

void MR_CALL 
mdb__declarative_edt__edt_subterm_mode_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_6,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_6, (MR_Integer) 0)), (MR_Integer) 11))));
  MR_Box conv1_HeadVar__5_5;

  func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_6)), HeadVar__1_1, HeadVar__2_2, ((MR_Box) (HeadVar__3_3)), ((MR_Box) (HeadVar__4_4)), &conv1_HeadVar__5_5);
  *HeadVar__5_5 = ((MR_Word) (conv1_HeadVar__5_5));
}

void MR_CALL 
mdb__declarative_edt__edt_dependency_6_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_7,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_7, (MR_Integer) 0)), (MR_Integer) 10))));
  MR_Box conv2_HeadVar__5_5;
  MR_Box conv1_HeadVar__6_6;

  func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_7)), HeadVar__1_1, HeadVar__2_2, ((MR_Box) (HeadVar__3_3)), ((MR_Box) (HeadVar__4_4)), &conv2_HeadVar__5_5, &conv1_HeadVar__6_6);
  *HeadVar__5_5 = ((MR_Word) (conv2_HeadVar__5_5));
  *HeadVar__6_6 = ((MR_Word) (conv1_HeadVar__6_6));
}

MR_bool MR_CALL 
mdb__declarative_edt__edt_parent_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 9))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_4)), HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
  return succeeded;
}

void MR_CALL 
mdb__declarative_edt__edt_get_i_bug_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_5,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_5, (MR_Integer) 0)), (MR_Integer) 7))));
  MR_Box conv1_HeadVar__4_4;

  func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_5)), HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, &conv1_HeadVar__4_4);
  *HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
}

void MR_CALL 
mdb__declarative_edt__edt_get_e_bug_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_HeadVar__3_3;

  func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_4)), HeadVar__1_1, HeadVar__2_2, &conv1_HeadVar__3_3);
  *HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
}

void MR_CALL 
mdb__declarative_edt__edt_question_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_HeadVar__3_3;

  func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_4)), HeadVar__1_1, HeadVar__2_2, &conv1_HeadVar__3_3);
  *HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
}

static MR_bool MR_CALL 
mdb__declarative_edt__find_first_implicit_root_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_33,
  MR_Box Store_5,
  MR_Word SearchSpace_6,
  MR_Word HeadVar__3_3,
  MR_Integer * ImplicitRoot_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeInfo_35_35;
    MR_Integer SuspectId_7;
    MR_Word SuspectIds_8;
    MR_Word Suspect_10;
    MR_Word Status_11;
    MR_Integer PolyConst2_34;
    MR_Word Var_14;
    MR_Box Var_15;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      SuspectId_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      SuspectIds_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      PolyConst2_34 = (MR_Integer) 2;
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_33, PolyConst2_34, &TypeInfo_35_35);
      mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_35_35, SearchSpace_6, SuspectId_7, &Suspect_10);
      Status_11 = ((MR_Word) ((MR_hl_field(0, Suspect_10, (MR_Integer) 2))));
      Var_14 = (MR_Integer) 1;
      switch (MR_tag((MR_Word) Status_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Status_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              succeeded = (Var_14 == (MR_Integer) 1);
              break;
            case (MR_Integer) 1:
              succeeded = (Var_14 == (MR_Integer) 0);
              break;
            case (MR_Integer) 2:
              succeeded = (Var_14 == (MR_Integer) 1);
              break;
            case (MR_Integer) 3:
              succeeded = (Var_14 == (MR_Integer) 0);
              break;
            case (MR_Integer) 4:
              succeeded = (Var_14 == (MR_Integer) 0);
              break;
            case (MR_Integer) 5:
              succeeded = (Var_14 == (MR_Integer) 0);
              break;
            case (MR_Integer) 6:
              succeeded = (Var_14 == (MR_Integer) 1);
              break;
          }
          break;
        case (MR_Integer) 1:
          succeeded = (Var_14 == (MR_Integer) 1);
          break;
      }
      if (succeeded)
      {
        Var_15 = (MR_hl_field(0, Suspect_10, (MR_Integer) 1));
        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_33, (MR_Integer) 0)), (MR_Integer) 12))));
        succeeded = func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_33)), Store_5, Var_15);
      }
      if (succeeded)
      {
        *ImplicitRoot_9 = SuspectId_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer ImplicitRootInChildren_13;
        MR_Word Children_12;
        MR_Word Var_17;

        switch (MR_tag((MR_Word) Status_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Status_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                break;
              case (MR_Integer) 2:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 3:
                succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                break;
              case (MR_Integer) 4:
                succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                break;
              case (MR_Integer) 5:
                succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                break;
              case (MR_Integer) 6:
                succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
        if (succeeded)
        {
          Var_17 = ((MR_Word) ((MR_hl_field(0, Suspect_10, (MR_Integer) 4))));
          succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Children_12 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));
            succeeded = mdb__declarative_edt__find_first_implicit_root_4_p_0(TypeClassInfo_for_mercury_edt_33, Store_5, SearchSpace_6, Children_12, &ImplicitRootInChildren_13);
          }
        }
        if (succeeded)
        {
          *ImplicitRoot_9 = ImplicitRootInChildren_13;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word next_value_of_HeadVar__3_3 = SuspectIds_8;

          // direct tailcall eliminated
          ;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__should_check_search_space_consistency_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mdb__declarative_edt__should_check_search_space_consistency_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    #ifdef MR_DD_CHECK_SEARCH_SPACE
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt__least_skipped_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word SearchSpace_6,
  MR_Integer SuspectId1_7,
  MR_Word Suspect1_8,
  MR_Integer SuspectId2_9,
  MR_Integer * LeastSkipped_10)
{
  MR_bool succeeded;
  MR_Word Status1_11 = ((MR_Word) ((MR_hl_field(0, Suspect1_8, (MR_Integer) 2))));
  MR_Word Status2_12;
  MR_Word Suspect_22;
  MR_Integer N_13;
  MR_Integer M_14;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_21, SearchSpace_6, SuspectId2_9, &Suspect_22);
  Status2_12 = ((MR_Word) ((MR_hl_field(0, Suspect_22, (MR_Integer) 2))));
  succeeded = ((MR_tag((MR_Word) Status1_11)) == (MR_Integer) 1);
  if (succeeded)
  {
    N_13 = ((MR_Integer) ((MR_hl_field(1, Status1_11, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Status2_12)) == (MR_Integer) 1);
    if (succeeded)
      M_14 = ((MR_Integer) ((MR_hl_field(1, Status2_12, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    succeeded = (N_13 > M_14);
    if (succeeded)
      *LeastSkipped_10 = SuspectId2_9;
    else
      *LeastSkipped_10 = SuspectId1_7;
  }
  else
  {
    succeeded = ((MR_tag((MR_Word) Status1_11)) == (MR_Integer) 1);
    if (succeeded)
      *LeastSkipped_10 = SuspectId1_7;
    else
      *LeastSkipped_10 = SuspectId2_9;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__calc_num_unexplored_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdb__declarative_edt__IntroducedFrom__pred__calc_num_unexplored__1445__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Integer MR_CALL 
mdb__declarative_edt__calc_num_unexplored_1_f_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word SearchSpace_3)
{
  MR_bool succeeded;
  MR_Integer NumUnexplored_4;
  MR_Word TypeInfo_33_33;
  MR_Word Suspects_5;
  MR_Word SuspectIsBuggySubtree_6;
  MR_Word Unexplored_12;
  MR_Word Var_13;
  MR_Word conv0_Unexplored_12;

  {
    TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_33_33, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
    MR_hl_field(0, TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_for_T_30));
  }
  Var_13 = ((MR_Word) ((MR_hl_field(0, SearchSpace_3, (MR_Integer) 4))));
  Suspects_5 = mercury__map__values_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_33_33, Var_13);
  {
    SuspectIsBuggySubtree_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SuspectIsBuggySubtree_6, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_9[1]));
    MR_hl_field(0, SuspectIsBuggySubtree_6, 1) = ((MR_Box) (mdb__declarative_edt__calc_num_unexplored_1_f_0_1));
    MR_hl_field(0, SuspectIsBuggySubtree_6, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, SuspectIsBuggySubtree_6, 3) = ((MR_Box) (TypeInfo_for_T_30));
  }
  mercury__list__filter_3_p_0(TypeInfo_33_33, (MR_Word) (SuspectIsBuggySubtree_6), (MR_Word) (Suspects_5), &conv0_Unexplored_12);
  Unexplored_12 = (MR_Word) (conv0_Unexplored_12);
  NumUnexplored_4 = mercury__list__length_1_f_0(TypeInfo_33_33, (MR_Word) (Unexplored_12));
  return NumUnexplored_4;
}

static MR_bool MR_CALL 
mdb__declarative_edt__calc_num_unknown_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdb__declarative_edt__IntroducedFrom__pred__calc_num_unknown__1415__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Integer MR_CALL 
mdb__declarative_edt__calc_num_unknown_1_f_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word SearchSpace_3)
{
  MR_bool succeeded;
  MR_Integer NumUnknown_4;
  MR_Word TypeInfo_34_34;
  MR_Word Suspects_5;
  MR_Word SuspectIsQuestionable_6;
  MR_Word Questionable_13;
  MR_Word Var_14;
  MR_Word conv0_Questionable_13;

  {
    TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_34_34, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
    MR_hl_field(0, TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_for_T_31));
  }
  Var_14 = ((MR_Word) ((MR_hl_field(0, SearchSpace_3, (MR_Integer) 4))));
  Suspects_5 = mercury__map__values_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_34_34, Var_14);
  {
    SuspectIsQuestionable_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SuspectIsQuestionable_6, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_9[1]));
    MR_hl_field(0, SuspectIsQuestionable_6, 1) = ((MR_Box) (mdb__declarative_edt__calc_num_unknown_1_f_0_1));
    MR_hl_field(0, SuspectIsQuestionable_6, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, SuspectIsQuestionable_6, 3) = ((MR_Box) (TypeInfo_for_T_31));
  }
  mercury__list__filter_3_p_0(TypeInfo_34_34, (MR_Word) (SuspectIsQuestionable_6), (MR_Word) (Suspects_5), &conv0_Questionable_13);
  Questionable_13 = (MR_Word) (conv0_Questionable_13);
  NumUnknown_4 = mercury__list__length_1_f_0(TypeInfo_34_34, (MR_Word) (Questionable_13));
  return NumUnknown_4;
}

static void MR_CALL 
mdb__declarative_edt__add_original_weight_7_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_15,
  MR_Word Weighting_8,
  MR_Box Store_9,
  MR_Box Node_10,
  MR_Integer Prev_11,
  MR_Integer * HeadVar__5_5,
  MR_Integer PrevExcess_13,
  MR_Integer * HeadVar__7_7)
{
  MR_Integer Weight_12;
  MR_Integer Excess_14;

  switch (Weighting_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_15, (MR_Integer) 0)), (MR_Integer) 15))));
        MR_Box conv2_Weight_12;
        MR_Box conv1_Excess_14;

        func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_15)), Store_9, Node_10, &conv2_Weight_12, &conv1_Excess_14);
        Weight_12 = ((MR_Integer) (conv2_Weight_12));
        Excess_14 = ((MR_Integer) (conv1_Excess_14));
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_15, (MR_Integer) 0)), (MR_Integer) 16))));
        MR_Box conv5_Weight_12;
        MR_Box conv4_Excess_14;

        func_3(((MR_Box) (TypeClassInfo_for_mercury_edt_15)), Store_9, Node_10, &conv5_Weight_12, &conv4_Excess_14);
        Weight_12 = ((MR_Integer) (conv5_Weight_12));
        Excess_14 = ((MR_Integer) (conv4_Excess_14));
      }
      break;
  }
  *HeadVar__5_5 = (MR_Integer) ((MR_Unsigned) Prev_11 + (MR_Unsigned) Weight_12);
  *HeadVar__7_7 = (MR_Integer) ((MR_Unsigned) PrevExcess_13 + (MR_Unsigned) Excess_14);
}

static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Status_6,
  MR_Word StopStatusSet_7,
  MR_Integer SuspectId_8,
  MR_Word STATE_VARIABLE_SearchSpace_0_11,
  MR_Word * STATE_VARIABLE_SearchSpace_12)
{
  MR_Word Var_10;

  mdb__declarative_edt__propagate_status_downwards_7_p_0(TypeInfo_for_T_13, Status_6, StopStatusSet_7, SuspectId_8, (MR_Word) ((MR_Unsigned) 0U), &Var_10, STATE_VARIABLE_SearchSpace_0_11, STATE_VARIABLE_SearchSpace_12);
}

static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_StopSuspects_16;
  MR_Word conv1_STATE_VARIABLE_SearchSpace_18;

  mdb__declarative_edt__propagate_status_downwards_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_StopSuspects_16, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_SearchSpace_18);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_StopSuspects_16));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_SearchSpace_18));
}

static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_7_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word Status_8,
  MR_Word StopStatusSet_9,
  MR_Integer SuspectId_10,
  MR_Word STATE_VARIABLE_StopSuspects_0_15,
  MR_Word * STATE_VARIABLE_StopSuspects_16,
  MR_Word STATE_VARIABLE_SearchSpace_0_17,
  MR_Word * STATE_VARIABLE_SearchSpace_18)
{
  MR_bool succeeded;
  MR_Word Suspect_13;
  MR_Word Var_19;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_49, STATE_VARIABLE_SearchSpace_0_17, SuspectId_10, &Suspect_13);
  Var_19 = ((MR_Word) ((MR_hl_field(0, Suspect_13, (MR_Integer) 2))));
  succeeded = mercury__list__member_2_p_0((MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0), ((MR_Box) (Var_19)), StopStatusSet_9);
  if (succeeded)
  {
    mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (SuspectId_10)), STATE_VARIABLE_StopSuspects_0_15, STATE_VARIABLE_StopSuspects_16);
    *STATE_VARIABLE_SearchSpace_18 = STATE_VARIABLE_SearchSpace_0_17;
  }
  else
  {
    MR_Word TypeInfo_28_84;
    MR_Word Var_21;
    MR_Word STATE_VARIABLE_SearchSpace_22_22;
    MR_Word Var_62;
    MR_Word Store0_67;
    MR_Word Store_68;
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Suspect_13, (MR_Integer) 0))));
    MR_Box Var_34 = (MR_hl_field(0, Suspect_13, (MR_Integer) 1));
    MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(0, Suspect_13, (MR_Integer) 3))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Suspect_13, (MR_Integer) 4))));
    MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(0, Suspect_13, (MR_Integer) 5))));
    MR_Word conv0_Store_68;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_80;
    MR_Word Var_81;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (Var_33));
      MR_hl_field(0, Var_21, 1) = Var_34;
      MR_hl_field(0, Var_21, 2) = ((MR_Box) (Status_8));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (Var_36));
      MR_hl_field(0, Var_21, 4) = ((MR_Box) (Var_37));
      MR_hl_field(0, Var_21, 5) = ((MR_Box) (Var_38));
    }
    Store0_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 4))));
    {
      TypeInfo_28_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_28_84, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(0, TypeInfo_28_84, 1) = ((MR_Box) (TypeInfo_for_T_49));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_28_84, SuspectId_10, ((MR_Box) (Var_21)), (MR_Word) (Store0_67), &conv0_Store_68);
    Store_68 = (MR_Word) (conv0_Store_68);
    Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 0))));
    Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 1))));
    Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 2))));
    Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 3))));
    Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 5))));
    Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 6))));
    {
      STATE_VARIABLE_SearchSpace_22_22 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_22_22, 0) = ((MR_Box) (Var_75));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_22_22, 1) = ((MR_Box) (Var_76));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_22_22, 2) = ((MR_Box) (Var_77));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_22_22, 3) = ((MR_Box) (Var_78));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_22_22, 4) = ((MR_Box) (Store_68));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_22_22, 5) = ((MR_Box) (Var_80));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_22_22, 6) = ((MR_Box) (Var_81));
    }
    Var_62 = ((MR_Word) ((MR_hl_field(0, Suspect_13, (MR_Integer) 4))));
    if ((Var_62 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_StopSuspects_16 = STATE_VARIABLE_StopSuspects_0_15;
      *STATE_VARIABLE_SearchSpace_18 = STATE_VARIABLE_SearchSpace_22_22;
    }
    else
    {
      MR_Word TypeInfo_60_60;
      MR_Word Children_14 = ((MR_Word) ((MR_hl_field(1, Var_62, (MR_Integer) 0))));
      MR_Word Var_24;
      MR_Box conv4_STATE_VARIABLE_StopSuspects_16;
      MR_Box conv3_STATE_VARIABLE_SearchSpace_18;

      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_24, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_7[1]));
        MR_hl_field(0, Var_24, 1) = ((MR_Box) (mdb__declarative_edt__propagate_status_downwards_7_p_0_1));
        MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_24, 3) = ((MR_Box) (TypeInfo_for_T_49));
        MR_hl_field(0, Var_24, 4) = ((MR_Box) (Status_8));
        MR_hl_field(0, Var_24, 5) = ((MR_Box) (StopStatusSet_9));
      }
      {
        TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_60_60, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
        MR_hl_field(0, TypeInfo_60_60, 1) = ((MR_Box) (TypeInfo_for_T_49));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__declarative_edt_scalar_common_1[0]), TypeInfo_60_60, Var_24, Children_14, ((MR_Box) (STATE_VARIABLE_StopSuspects_0_15)), &conv4_STATE_VARIABLE_StopSuspects_16, ((MR_Box) (STATE_VARIABLE_SearchSpace_22_22)), &conv3_STATE_VARIABLE_SearchSpace_18);
      *STATE_VARIABLE_StopSuspects_16 = ((MR_Word) (conv4_STATE_VARIABLE_StopSuspects_16));
      *STATE_VARIABLE_SearchSpace_18 = ((MR_Word) (conv3_STATE_VARIABLE_SearchSpace_18));
    }
  }
}

void MR_CALL 
mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_7,
  MR_Box Store_4,
  MR_Word SearchSpace_5,
  MR_String Context_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    #ifdef MR_DD_CHECK_SEARCH_SPACE
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_String Message_9;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, SearchSpace_5, (MR_Integer) 6))));
    MR_Integer RootId_23;
    MR_Integer PolyConst2_25;
    MR_Word Var_29;
    MR_Word TypeInfo_11_26;

    succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PolyConst2_25 = (MR_Integer) 2;
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_7, PolyConst2_25, &TypeInfo_11_26);
      Var_29 = ((MR_Word) ((MR_hl_field(0, SearchSpace_5, (MR_Integer) 0))));
      succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        RootId_23 = ((MR_Integer) ((MR_hl_field(1, Var_29, (MR_Integer) 0))));
        succeeded = mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0(TypeClassInfo_for_mercury_edt_7, Store_4, SearchSpace_5, RootId_23, &Message_9);
      }
      else
      {
        MR_Integer TopMostId_24;
        MR_Word Var_60;
        MR_Word TypeInfo_13_28;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_7, (MR_Integer) 2, &TypeInfo_13_28);
        Var_60 = ((MR_Word) ((MR_hl_field(0, SearchSpace_5, (MR_Integer) 1))));
        if ((Var_60 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_edt_scalar_common_1[4])));
            return;
          }
        else
          TopMostId_24 = ((MR_Integer) ((MR_hl_field(1, Var_60, (MR_Integer) 0))));
        succeeded = mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0(TypeClassInfo_for_mercury_edt_7, Store_4, SearchSpace_5, TopMostId_24, &Message_9);
      }
    }
    if (succeeded)
    {
      MR_Word Var_11;
      MR_String Var_13;
      MR_String Var_14;

      Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "\n Context = ", Context_6);
      Var_13 = mercury__string__f_43_43_2_f_0(Message_9, Var_14);
      {
        Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_11, 0) = ((MR_Box) ((MR_String) "check_search_space_consistency"));
        MR_hl_field(0, Var_11, 1) = ((MR_Box) (Var_13));
      }
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (Var_11)));
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv0_Message_8;

  succeeded = mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), &conv0_Message_8);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_Message_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_63,
  MR_Box Store_5,
  MR_Word SearchSpace_6,
  MR_Integer SuspectId_7,
  MR_String * Message_8)
{
  MR_bool succeeded;
  MR_Word TypeInfo_65_65;
  MR_Word Suspect_9;
  MR_Integer Weight_10;
  MR_Box Var_15;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Integer Var_11;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Integer Var_18;
  MR_Integer Var_73;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_63, (MR_Integer) 2, &TypeInfo_65_65);
  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_65_65, SearchSpace_6, SuspectId_7, &Suspect_9);
  Var_15 = (MR_hl_field(0, Suspect_9, (MR_Integer) 1));
  Var_34 = ((MR_Word) ((MR_hl_field(0, Suspect_9, (MR_Integer) 2))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, Suspect_9, (MR_Integer) 4))));
  mdb__declarative_edt__calc_suspect_weight_7_p_0(TypeClassInfo_for_mercury_edt_63, Store_5, Var_15, Var_36, Var_34, SearchSpace_6, &Weight_10, &Var_11);
  Var_50 = ((MR_Word) ((MR_hl_field(0, Suspect_9, (MR_Integer) 2))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, Suspect_9, (MR_Integer) 4))));
  Var_73 = ((MR_Integer) ((MR_hl_field(0, Suspect_9, (MR_Integer) 5))));
  succeeded = (Weight_10 == Var_73);
  if (succeeded)
  {
    Var_18 = (MR_Integer) 0;
    succeeded = (Weight_10 >= Var_18);
  }
  if (succeeded)
  {
    MR_Word TypeCtorInfo_68_68;
    MR_Word TypeCtorInfo_69_69;
    MR_Word Children_12;
    MR_Word Messages_13;
    MR_Word Var_21;
    MR_Word Var_22;

    succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Children_12 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 0))));
      Var_21 = (MR_Integer) 1;
      switch (MR_tag((MR_Word) Var_50)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Var_50)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              succeeded = (Var_21 == (MR_Integer) 1);
              break;
            case (MR_Integer) 1:
              succeeded = (Var_21 == (MR_Integer) 0);
              break;
            case (MR_Integer) 2:
              succeeded = (Var_21 == (MR_Integer) 1);
              break;
            case (MR_Integer) 3:
              succeeded = (Var_21 == (MR_Integer) 0);
              break;
            case (MR_Integer) 4:
              succeeded = (Var_21 == (MR_Integer) 0);
              break;
            case (MR_Integer) 5:
              succeeded = (Var_21 == (MR_Integer) 0);
              break;
            case (MR_Integer) 6:
              succeeded = (Var_21 == (MR_Integer) 1);
              break;
          }
          break;
        case (MR_Integer) 1:
          succeeded = (Var_21 == (MR_Integer) 1);
          break;
      }
      if (succeeded)
      {
        TypeCtorInfo_68_68 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
        TypeCtorInfo_69_69 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_11[0]));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0_1));
          MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_22, 3) = ((MR_Box) (TypeClassInfo_for_mercury_edt_63));
          MR_hl_field(0, Var_22, 4) = Store_5;
          MR_hl_field(0, Var_22, 5) = ((MR_Box) (SearchSpace_6));
        }
        mercury__list__filter_map_3_p_0(TypeCtorInfo_68_68, TypeCtorInfo_69_69, Var_22, Children_12, &Messages_13);
        succeeded = (Messages_13 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          *Message_8 = ((MR_String) ((MR_hl_field(1, Messages_13, (MR_Integer) 0))));
      }
    }
  }
  else
  {
    MR_Word TypeInfo_70_70;
    MR_Word TypeInfo_72_72;
    MR_String Var_24;
    MR_String Var_25;
    MR_String Var_26;
    MR_String Var_28;
    MR_String Var_29;
    MR_String Var_30;
    MR_String Var_32;

    Var_25 = mercury__string__int_to_string_1_f_0(SuspectId_7);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_63, (MR_Integer) 2, &TypeInfo_70_70);
    {
      TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_72_72, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(0, TypeInfo_72_72, 1) = ((MR_Box) (TypeInfo_70_70));
    }
    Var_29 = mercury__string__string_1_f_0(TypeInfo_72_72, ((MR_Box) (Suspect_9)));
    Var_32 = mercury__string__int_to_string_1_f_0(Weight_10);
    Var_30 = mercury__string__f_43_43_2_f_0((MR_String) " Calculated weight = ", Var_32);
    Var_28 = mercury__string__f_43_43_2_f_0(Var_29, Var_30);
    Var_26 = mercury__string__f_43_43_2_f_0((MR_String) ", Suspect = ", Var_28);
    Var_24 = mercury__string__f_43_43_2_f_0(Var_25, Var_26);
    *Message_8 = mercury__string__f_43_43_2_f_0((MR_String) "Weights not consistent for suspect id ", Var_24);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
mdb__declarative_edt__get_current_maybe_weighting_1_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word SearchSpace_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, SearchSpace_3, (MR_Integer) 6))));

  return HeadVar__2_2;
}

static MR_bool MR_CALL 
mdb__declarative_edt__update_weighting_heuristic_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__1932__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
mdb__declarative_edt__update_weighting_heuristic_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_45,
  MR_Box Store_5,
  MR_Word Weighting_6,
  MR_Word STATE_VARIABLE_SearchSpace_0_13,
  MR_Word * STATE_VARIABLE_SearchSpace_14)
{
  MR_bool succeeded;
  MR_Word MaybePrevWeighting_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 6))));
  MR_Word PrevWeighting_9;

  succeeded = (MaybePrevWeighting_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    PrevWeighting_9 = ((MR_Word) ((MR_hl_field(1, MaybePrevWeighting_8, (MR_Integer) 0))));
    succeeded = (PrevWeighting_9 == Weighting_6);
  }
  if (succeeded)
    *STATE_VARIABLE_SearchSpace_14 = STATE_VARIABLE_SearchSpace_0_13;
  else
  {
    MR_Word STATE_VARIABLE_SearchSpace_15_15;
    MR_Word Var_16;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word TypeInfo_48_48;
    MR_Word TypeInfo_50_50;
    MR_Word Var_17;

    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (Weighting_6));
    }
    Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 1))));
    Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 2))));
    Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 3))));
    Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 4))));
    Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 5))));
    {
      STATE_VARIABLE_SearchSpace_15_15 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, 0) = ((MR_Box) (Var_26));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, 1) = ((MR_Box) (Var_27));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, 2) = ((MR_Box) (Var_28));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, 3) = ((MR_Box) (Var_29));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, 4) = ((MR_Box) (Var_30));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, 5) = ((MR_Box) (Var_31));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, 6) = ((MR_Box) (Var_16));
    }
    Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 4))));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_45, (MR_Integer) 2, &TypeInfo_48_48);
    {
      TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_50_50, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(0, TypeInfo_50_50, 1) = ((MR_Box) (TypeInfo_48_48));
    }
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_50_50, (MR_Word) (Var_17));
    if (succeeded)
      *STATE_VARIABLE_SearchSpace_14 = STATE_VARIABLE_SearchSpace_15_15;
    else
    {
      MR_Word TypeInfo_53_53;
      MR_Word TypeInfo_55_55;
      MR_Word AllSuspects_10;
      MR_Word Leaves_11;
      MR_Integer TopId_12;
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 4))));
      MR_Word Var_19;
      MR_Word Var_84;
      MR_Word TypeInfo_59_59;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_45, (MR_Integer) 2, &TypeInfo_53_53);
      {
        TypeInfo_55_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_55_55, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
        MR_hl_field(0, TypeInfo_55_55, 1) = ((MR_Box) (TypeInfo_53_53));
      }
      mercury__map__keys_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_55_55, (MR_Word) (Var_18), &AllSuspects_10);
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_6[1]));
        MR_hl_field(0, Var_19, 1) = ((MR_Box) (mdb__declarative_edt__update_weighting_heuristic_4_p_0_1));
        MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_19, 3) = ((MR_Box) (TypeClassInfo_for_mercury_edt_45));
        MR_hl_field(0, Var_19, 4) = ((MR_Box) (STATE_VARIABLE_SearchSpace_15_15));
      }
      mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_19, AllSuspects_10, &Leaves_11);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_45, (MR_Integer) 2, &TypeInfo_59_59);
      Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 1))));
      if ((Var_84 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_edt_scalar_common_1[4])));
          return;
        }
      else
        TopId_12 = ((MR_Integer) ((MR_hl_field(1, Var_84, (MR_Integer) 0))));
      mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0(TypeClassInfo_for_mercury_edt_45, Store_5, TopId_12, Leaves_11, STATE_VARIABLE_SearchSpace_15_15, STATE_VARIABLE_SearchSpace_14);
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__revise_root_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdb__declarative_edt__IntroducedFrom__pred__revise_root__1898__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt__revise_root_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__6_86;

  mdb__declarative_edt__IntroducedFrom__pred__revise_root__1884__1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__6_86);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_86));
}

void MR_CALL 
mdb__declarative_edt__revise_root_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_81,
  MR_Box Store_4,
  MR_Word STATE_VARIABLE_SearchSpace_0_11,
  MR_Word * STATE_VARIABLE_SearchSpace_12)
{
  MR_bool succeeded;
  MR_Word Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 0))));

  if ((Var_108 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_edt_scalar_common_1[9])));
      return;
    }
  else
  {
    MR_Word TypeInfo_83_83;
    MR_Word TypeInfo_90_90;
    MR_Word TypeInfo_92_92;
    MR_Word TypeInfo_93_93;
    MR_Word TypeInfo_95_95;
    MR_Word TypeInfo_97_97;
    MR_Integer RootId_6 = ((MR_Integer) ((MR_hl_field(1, Var_108, (MR_Integer) 0))));
    MR_Word StopSuspects_7;
    MR_Integer Lowest_8;
    MR_Word AllSuspects_9;
    MR_Word Leaves_10;
    MR_Word STATE_VARIABLE_SearchSpace_16_16;
    MR_Word Var_21;
    MR_Word STATE_VARIABLE_SearchSpace_22_22;
    MR_Word STATE_VARIABLE_SearchSpace_31_31;
    MR_Word STATE_VARIABLE_SearchSpace_38_38;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Box conv1_STATE_VARIABLE_SearchSpace_22_22;
    MR_Word TypeInfo_94_94;
    MR_Word Suspect_116;
    MR_Word Var_117;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &TypeInfo_83_83);
    mdb__declarative_edt__force_propagate_status_downwards_6_p_0(TypeInfo_83_83, (MR_Word) ((MR_Unsigned) 24U), (MR_Word) (MR_mkword(1, &mdb__declarative_edt_scalar_common_1[6])), RootId_6, &StopSuspects_7, STATE_VARIABLE_SearchSpace_0_11, &STATE_VARIABLE_SearchSpace_16_16);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_8[3]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (mdb__declarative_edt__revise_root_3_p_0_1));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (TypeClassInfo_for_mercury_edt_81));
      MR_hl_field(0, Var_21, 4) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Var_21, 5) = ((MR_Box) (MR_mkword(1, &mdb__declarative_edt_scalar_common_1[6])));
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &TypeInfo_90_90);
    {
      TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_92_92, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
      MR_hl_field(0, TypeInfo_92_92, 1) = ((MR_Box) (TypeInfo_90_90));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_92_92, (MR_Word) (Var_21), StopSuspects_7, ((MR_Box) (STATE_VARIABLE_SearchSpace_16_16)), &conv1_STATE_VARIABLE_SearchSpace_22_22);
    STATE_VARIABLE_SearchSpace_22_22 = ((MR_Word) (conv1_STATE_VARIABLE_SearchSpace_22_22));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &TypeInfo_93_93);
    mdb__declarative_edt__propagate_status_upwards_6_p_0(TypeInfo_93_93, (MR_Word) ((MR_Unsigned) 24U), (MR_Word) (MR_mkword(1, &mdb__declarative_edt_scalar_common_1[7])), RootId_6, &Lowest_8, STATE_VARIABLE_SearchSpace_22_22, &STATE_VARIABLE_SearchSpace_31_31);
    Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_31_31, (MR_Integer) 1))));
    Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_31_31, (MR_Integer) 2))));
    Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_31_31, (MR_Integer) 3))));
    Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_31_31, (MR_Integer) 4))));
    Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_31_31, (MR_Integer) 5))));
    Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_31_31, (MR_Integer) 6))));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &TypeInfo_94_94);
    mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_94_94, STATE_VARIABLE_SearchSpace_31_31, Lowest_8, &Suspect_116);
    Var_117 = ((MR_Word) ((MR_hl_field(0, Suspect_116, (MR_Integer) 2))));
    succeeded = (Var_117 == (MR_Word) ((MR_Unsigned) 8U));
    if (succeeded)
    {
      MR_Word Var_39;

      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (Lowest_8));
      }
      {
        STATE_VARIABLE_SearchSpace_38_38 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_38_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_38_38, 1) = ((MR_Box) (Var_114));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_38_38, 2) = ((MR_Box) (Var_113));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_38_38, 3) = ((MR_Box) (Var_112));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_38_38, 4) = ((MR_Box) (Var_111));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_38_38, 5) = ((MR_Box) (Var_110));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_38_38, 6) = ((MR_Box) (Var_109));
      }
    }
    else
      {
        STATE_VARIABLE_SearchSpace_38_38 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_38_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_38_38, 1) = ((MR_Box) (Var_114));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_38_38, 2) = ((MR_Box) (Var_113));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_38_38, 3) = ((MR_Box) (Var_112));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_38_38, 4) = ((MR_Box) (Var_111));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_38_38, 5) = ((MR_Box) (Var_110));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_38_38, 6) = ((MR_Box) (Var_109));
      }
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_38_38, (MR_Integer) 4))));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &TypeInfo_95_95);
    {
      TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_97_97, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(0, TypeInfo_97_97, 1) = ((MR_Box) (TypeInfo_95_95));
    }
    mercury__map__keys_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_97_97, (MR_Word) (Var_42), &AllSuspects_9);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_43, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_6[1]));
      MR_hl_field(0, Var_43, 1) = ((MR_Box) (mdb__declarative_edt__revise_root_3_p_0_2));
      MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_43, 3) = ((MR_Box) (TypeClassInfo_for_mercury_edt_81));
      MR_hl_field(0, Var_43, 4) = ((MR_Box) (STATE_VARIABLE_SearchSpace_38_38));
    }
    mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_43, AllSuspects_9, &Leaves_10);
    mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0(TypeClassInfo_for_mercury_edt_81, Store_4, Lowest_8, Leaves_10, STATE_VARIABLE_SearchSpace_38_38, STATE_VARIABLE_SearchSpace_12);
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdb__declarative_edt__IntroducedFrom__pred__recalc_weights_upto_ancestor__1375__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_27,
  MR_Box Store_6,
  MR_Integer Ancestor_7,
  MR_Word SuspectIds_8,
  MR_Word STATE_VARIABLE_SearchSpace_0_17,
  MR_Word * STATE_VARIABLE_SearchSpace_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Parents_10;
    MR_Word FilteredParents_12;
    MR_Word STATE_VARIABLE_SearchSpace_20_20;
    MR_Word Var_21;
    MR_Word Var_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    mdb__declarative_edt__recalc_weights_and_get_parents_6_p_0(TypeClassInfo_for_mercury_edt_27, Store_6, SuspectIds_8, (MR_Word) ((MR_Unsigned) 0U), &Parents_10, STATE_VARIABLE_SearchSpace_0_17, &STATE_VARIABLE_SearchSpace_20_20);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_9[0]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0_1));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (Ancestor_7));
    }
    mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_21, Parents_10, &Var_11, &FilteredParents_12);
    if ((FilteredParents_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_23;
      MR_Word Var_16;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = ((MR_Box) (Ancestor_7));
        MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mdb__declarative_edt__recalc_weights_and_get_parents_6_p_0(TypeClassInfo_for_mercury_edt_27, Store_6, Var_23, (MR_Word) ((MR_Unsigned) 0U), &Var_16, STATE_VARIABLE_SearchSpace_20_20, STATE_VARIABLE_SearchSpace_18);
    }
    else
    {
      MR_Word SortedParents_15;
      MR_Word next_value_of_SuspectIds_8;
      MR_Word next_value_of_STATE_VARIABLE_SearchSpace_0_17;

      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FilteredParents_12, &SortedParents_15);
      // direct tailcall eliminated
      ;
      next_value_of_SuspectIds_8 = SortedParents_15;
      next_value_of_STATE_VARIABLE_SearchSpace_0_17 = STATE_VARIABLE_SearchSpace_20_20;
      SuspectIds_8 = next_value_of_SuspectIds_8;
      STATE_VARIABLE_SearchSpace_0_17 = next_value_of_STATE_VARIABLE_SearchSpace_0_17;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_edt__recalc_weights_and_get_parents_6_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_63,
  MR_Box Store_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * Parents_4,
  MR_Word STATE_VARIABLE_SearchSpace_0_5,
  MR_Word * STATE_VARIABLE_SearchSpace_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Parents_4 = HeadVar__3_3;
      *STATE_VARIABLE_SearchSpace_6 = STATE_VARIABLE_SearchSpace_0_5;
    }
    else
    {
      MR_Word TypeInfo_65_65;
      MR_Word TypeInfo_66_66;
      MR_Word TypeInfo_28_90;
      MR_Integer SuspectId_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word SuspectIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Suspect_18;
      MR_Integer Weight_19;
      MR_Word NewPrevParents_22;
      MR_Box Var_25;
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_SearchSpace_29_29;
      MR_Word Var_33;
      MR_Word Var_35;
      MR_Word Var_72;
      MR_Word Store0_73;
      MR_Word Store_74;
      MR_Integer Var_20;
      MR_Word Var_47;
      MR_Box Var_48;
      MR_Word Var_49;
      MR_Integer Var_50;
      MR_Word Var_51;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_SearchSpace_0_5;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_63, (MR_Integer) 2, &TypeInfo_65_65);
      mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_65_65, STATE_VARIABLE_SearchSpace_0_5, SuspectId_13, &Suspect_18);
      Var_25 = (MR_hl_field(0, Suspect_18, (MR_Integer) 1));
      Var_33 = ((MR_Word) ((MR_hl_field(0, Suspect_18, (MR_Integer) 2))));
      Var_35 = ((MR_Word) ((MR_hl_field(0, Suspect_18, (MR_Integer) 4))));
      mdb__declarative_edt__calc_suspect_weight_7_p_0(TypeClassInfo_for_mercury_edt_63, Store_1, Var_25, Var_35, Var_33, STATE_VARIABLE_SearchSpace_0_5, &Weight_19, &Var_20);
      Var_47 = ((MR_Word) ((MR_hl_field(0, Suspect_18, (MR_Integer) 0))));
      Var_48 = (MR_hl_field(0, Suspect_18, (MR_Integer) 1));
      Var_49 = ((MR_Word) ((MR_hl_field(0, Suspect_18, (MR_Integer) 2))));
      Var_50 = ((MR_Integer) ((MR_hl_field(0, Suspect_18, (MR_Integer) 3))));
      Var_51 = ((MR_Word) ((MR_hl_field(0, Suspect_18, (MR_Integer) 4))));
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_28, 0) = ((MR_Box) (Var_47));
        MR_hl_field(0, Var_28, 1) = Var_48;
        MR_hl_field(0, Var_28, 2) = ((MR_Box) (Var_49));
        MR_hl_field(0, Var_28, 3) = ((MR_Box) (Var_50));
        MR_hl_field(0, Var_28, 4) = ((MR_Box) (Var_51));
        MR_hl_field(0, Var_28, 5) = ((MR_Box) (Weight_19));
      }
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_63, (MR_Integer) 2, &TypeInfo_66_66);
      Store0_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_5, (MR_Integer) 4))));
      {
        TypeInfo_28_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_28_90, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
        MR_hl_field(0, TypeInfo_28_90, 1) = ((MR_Box) (TypeInfo_66_66));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_28_90, SuspectId_13, ((MR_Box) (Var_28)), Store0_73, &Store_74);
      Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_5, (MR_Integer) 0))));
      Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_5, (MR_Integer) 1))));
      Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_5, (MR_Integer) 2))));
      Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_5, (MR_Integer) 3))));
      Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_5, (MR_Integer) 5))));
      Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_5, (MR_Integer) 6))));
      {
        STATE_VARIABLE_SearchSpace_29_29 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_29_29, 0) = ((MR_Box) (Var_81));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_29_29, 1) = ((MR_Box) (Var_82));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_29_29, 2) = ((MR_Box) (Var_83));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_29_29, 3) = ((MR_Box) (Var_84));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_29_29, 4) = ((MR_Box) (Store_74));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_29_29, 5) = ((MR_Box) (Var_86));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_29_29, 6) = ((MR_Box) (Var_87));
      }
      Var_72 = ((MR_Word) ((MR_hl_field(0, Suspect_18, (MR_Integer) 0))));
      if ((Var_72 == (MR_Word) ((MR_Unsigned) 0U)))
        NewPrevParents_22 = HeadVar__3_3;
      else
      {
        MR_Integer ParentId_21 = ((MR_Integer) ((MR_hl_field(1, Var_72, (MR_Integer) 0))));

        {
          NewPrevParents_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, NewPrevParents_22, 0) = ((MR_Box) (ParentId_21));
          MR_hl_field(1, NewPrevParents_22, 1) = ((MR_Box) (HeadVar__3_3));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = SuspectIds_14;
      next_value_of_HeadVar__3_3 = NewPrevParents_22;
      next_value_of_STATE_VARIABLE_SearchSpace_0_5 = STATE_VARIABLE_SearchSpace_29_29;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_SearchSpace_0_5 = next_value_of_STATE_VARIABLE_SearchSpace_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_StopSuspects_16;
  MR_Word conv1_STATE_VARIABLE_SearchSpace_18;

  mdb__declarative_edt__propagate_status_downwards_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_StopSuspects_16, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_SearchSpace_18);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_StopSuspects_16));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_SearchSpace_18));
}

static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_6_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word Status_7,
  MR_Word StopStatusSet_8,
  MR_Integer SuspectId_9,
  MR_Word * StopSuspects_10,
  MR_Word STATE_VARIABLE_SearchSpace_0_14,
  MR_Word * STATE_VARIABLE_SearchSpace_15)
{
  MR_Word TypeInfo_28_72;
  MR_Word Suspect_12;
  MR_Word Var_16;
  MR_Word STATE_VARIABLE_SearchSpace_17_17;
  MR_Word Var_50;
  MR_Word Store0_55;
  MR_Word Store_56;
  MR_Word Var_23;
  MR_Box Var_24;
  MR_Integer Var_26;
  MR_Word Var_27;
  MR_Integer Var_28;
  MR_Word conv0_Store_56;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_68;
  MR_Word Var_69;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_39, STATE_VARIABLE_SearchSpace_0_14, SuspectId_9, &Suspect_12);
  Var_23 = ((MR_Word) ((MR_hl_field(0, Suspect_12, (MR_Integer) 0))));
  Var_24 = (MR_hl_field(0, Suspect_12, (MR_Integer) 1));
  Var_26 = ((MR_Integer) ((MR_hl_field(0, Suspect_12, (MR_Integer) 3))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, Suspect_12, (MR_Integer) 4))));
  Var_28 = ((MR_Integer) ((MR_hl_field(0, Suspect_12, (MR_Integer) 5))));
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_16, 1) = Var_24;
    MR_hl_field(0, Var_16, 2) = ((MR_Box) (Status_7));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_16, 4) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_16, 5) = ((MR_Box) (Var_28));
  }
  Store0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 4))));
  {
    TypeInfo_28_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_28_72, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
    MR_hl_field(0, TypeInfo_28_72, 1) = ((MR_Box) (TypeInfo_for_T_39));
  }
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_28_72, SuspectId_9, ((MR_Box) (Var_16)), (MR_Word) (Store0_55), &conv0_Store_56);
  Store_56 = (MR_Word) (conv0_Store_56);
  Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 0))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 1))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 2))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 3))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 5))));
  Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 6))));
  {
    STATE_VARIABLE_SearchSpace_17_17 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_17, 0) = ((MR_Box) (Var_63));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_17, 1) = ((MR_Box) (Var_64));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_17, 2) = ((MR_Box) (Var_65));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_17, 3) = ((MR_Box) (Var_66));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_17, 4) = ((MR_Box) (Store_56));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_17, 5) = ((MR_Box) (Var_68));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_17, 6) = ((MR_Box) (Var_69));
  }
  Var_50 = ((MR_Word) ((MR_hl_field(0, Suspect_12, (MR_Integer) 4))));
  if ((Var_50 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *StopSuspects_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_SearchSpace_15 = STATE_VARIABLE_SearchSpace_17_17;
  }
  else
  {
    MR_Word TypeInfo_48_48;
    MR_Word Children_13 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 0))));
    MR_Word Var_19;
    MR_Box conv4_StopSuspects_10;
    MR_Box conv3_STATE_VARIABLE_SearchSpace_15;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_7[1]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (mdb__declarative_edt__force_propagate_status_downwards_6_p_0_1));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (TypeInfo_for_T_39));
      MR_hl_field(0, Var_19, 4) = ((MR_Box) (Status_7));
      MR_hl_field(0, Var_19, 5) = ((MR_Box) (StopStatusSet_8));
    }
    {
      TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_48_48, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
      MR_hl_field(0, TypeInfo_48_48, 1) = ((MR_Box) (TypeInfo_for_T_39));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__declarative_edt_scalar_common_1[0]), TypeInfo_48_48, Var_19, Children_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_StopSuspects_10, ((MR_Box) (STATE_VARIABLE_SearchSpace_17_17)), &conv3_STATE_VARIABLE_SearchSpace_15);
    *StopSuspects_10 = ((MR_Word) (conv4_StopSuspects_10));
    *STATE_VARIABLE_SearchSpace_15 = ((MR_Word) (conv3_STATE_VARIABLE_SearchSpace_15));
  }
}

static void MR_CALL 
mdb__declarative_edt__choose_skipped_suspect_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_LeastSkipped_10;

  mdb__declarative_edt__least_skipped_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv0_LeastSkipped_10);
  *wrapper_arg_4 = ((MR_Box) (conv0_LeastSkipped_10));
}

MR_bool MR_CALL 
mdb__declarative_edt__choose_skipped_suspect_2_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word SearchSpace_3,
  MR_Integer * Skipped_4)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_28_28;
  MR_Word TypeCtorInfo_29_29;
  MR_Word TypeInfo_30_30;
  MR_Integer TopMostId_5;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, SearchSpace_3, (MR_Integer) 1))));
  MR_Word Var_8;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, SearchSpace_3, (MR_Integer) 4))));
  MR_Box conv1_Skipped_4;
  MR_Word Var_31;
  MR_Word Suspect_32;

  succeeded = (Var_7 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TopMostId_5 = ((MR_Integer) ((MR_hl_field(1, Var_7, (MR_Integer) 0))));
    TypeCtorInfo_28_28 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
    TypeCtorInfo_29_29 = (MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1);
    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_8, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_8[2]));
      MR_hl_field(0, Var_8, 1) = ((MR_Box) (mdb__declarative_edt__choose_skipped_suspect_2_p_0_1));
      MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_8, 3) = ((MR_Box) (TypeInfo_for_T_23));
      MR_hl_field(0, Var_8, 4) = ((MR_Box) (SearchSpace_3));
    }
    {
      TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_30_30, 0) = ((MR_Box) (TypeCtorInfo_29_29));
      MR_hl_field(0, TypeInfo_30_30, 1) = ((MR_Box) (TypeInfo_for_T_23));
    }
    mercury__map__foldl_4_p_0(TypeCtorInfo_28_28, TypeInfo_30_30, TypeCtorInfo_28_28, Var_8, Var_14, ((MR_Box) (TopMostId_5)), &conv1_Skipped_4);
    *Skipped_4 = ((MR_Integer) (conv1_Skipped_4));
    succeeded = (TopMostId_5 == *Skipped_4);
    if (succeeded)
    {
      mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_23, SearchSpace_3, TopMostId_5, &Suspect_32);
      Var_31 = ((MR_Word) ((MR_hl_field(0, Suspect_32, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
      succeeded = !(succeeded);
    }
    succeeded = !(succeeded);
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_edt__first_unknown_descendant_6_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_17,
  MR_Box Store_7,
  MR_Word Oracle_8,
  MR_Integer SuspectId_9,
  MR_Word STATE_VARIABLE_SearchSpace_0_12,
  MR_Word * STATE_VARIABLE_SearchSpace_13,
  MR_Word * MaybeFound_11)
{
  MR_Word Var_14;

  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (SuspectId_9));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mdb__declarative_edt__first_unknown_descendant_list_6_p_0(TypeClassInfo_for_mercury_edt_17, Store_7, Oracle_8, Var_14, STATE_VARIABLE_SearchSpace_0_12, STATE_VARIABLE_SearchSpace_13, MaybeFound_11);
}

static MR_bool MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1767__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1760__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_32,
  MR_Box Store_7,
  MR_Word Oracle_8,
  MR_Word SuspectList_9,
  MR_Word STATE_VARIABLE_SearchSpace_0_25,
  MR_Word * STATE_VARIABLE_SearchSpace_26,
  MR_Word * MaybeFound_11)
{
  MR_bool succeeded;
  MR_Word UnknownList_12;
  MR_Word Others_13;
  MR_Word Var_27;

  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_6[1]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (mdb__declarative_edt__first_unknown_descendant_list_6_p_0_1));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (TypeClassInfo_for_mercury_edt_32));
    MR_hl_field(0, Var_27, 4) = ((MR_Box) (STATE_VARIABLE_SearchSpace_0_25));
  }
  mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_27, SuspectList_9, &UnknownList_12, &Others_13);
  if ((UnknownList_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word InBuggySubtree_16;
    MR_Word ExplicitRequired_17;
    MR_Word Children_18;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_SearchSpace_29_29;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_6[1]));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (mdb__declarative_edt__first_unknown_descendant_list_6_p_0_2));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (TypeClassInfo_for_mercury_edt_32));
      MR_hl_field(0, Var_28, 4) = ((MR_Box) (STATE_VARIABLE_SearchSpace_0_25));
    }
    mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_28, Others_13, &InBuggySubtree_16);
    mdb__declarative_edt__get_children_list_7_p_0(TypeClassInfo_for_mercury_edt_32, Store_7, Oracle_8, InBuggySubtree_16, STATE_VARIABLE_SearchSpace_0_25, &STATE_VARIABLE_SearchSpace_29_29, &ExplicitRequired_17, &Children_18);
    if ((Children_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((ExplicitRequired_17 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeFound_11 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer RequireExplicitId_19 = ((MR_Integer) ((MR_hl_field(1, ExplicitRequired_17, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeFound_11 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (RequireExplicitId_19));
        }
      }
      *STATE_VARIABLE_SearchSpace_26 = STATE_VARIABLE_SearchSpace_29_29;
    }
    else
    {
      MR_Word MaybeFound0_22;

      mdb__declarative_edt__first_unknown_descendant_list_6_p_0(TypeClassInfo_for_mercury_edt_32, Store_7, Oracle_8, Children_18, STATE_VARIABLE_SearchSpace_29_29, STATE_VARIABLE_SearchSpace_26, &MaybeFound0_22);
      switch (MR_tag((MR_Word) MaybeFound0_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((ExplicitRequired_17 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeFound_11 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Integer RequireExplicitId_31 = ((MR_Integer) ((MR_hl_field(1, ExplicitRequired_17, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeFound_11 = base;
              MR_hl_field(2, base, 0) = ((MR_Box) (RequireExplicitId_31));
            }
          }
          break;
        case (MR_Integer) 1:
          *MaybeFound_11 = MaybeFound0_22;
          break;
        case (MR_Integer) 2:
          *MaybeFound_11 = MaybeFound0_22;
          break;
      }
    }
  }
  else
  {
    MR_Integer Unknown_14 = ((MR_Integer) ((MR_hl_field(1, UnknownList_12, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeFound_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Unknown_14));
    }
    *STATE_VARIABLE_SearchSpace_26 = STATE_VARIABLE_SearchSpace_0_25;
  }
}

static void MR_CALL 
mdb__declarative_edt__get_children_list_7_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_25,
  MR_Box Store_1,
  MR_Word Oracle_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = HeadVar__4_4;
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Integer SuspectId_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word SuspectIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ExplicitRequired0_18;
    MR_Word ChildrenList0_19;
    MR_Word STATE_VARIABLE_SearchSpace_23_23;
    MR_Word Children_20;
    MR_Word STATE_VARIABLE_SearchSpace_24_24;

    mdb__declarative_edt__get_children_list_7_p_0(TypeClassInfo_for_mercury_edt_25, Store_1, Oracle_2, SuspectIds_14, HeadVar__4_4, &STATE_VARIABLE_SearchSpace_23_23, &ExplicitRequired0_18, &ChildrenList0_19);
    succeeded = mdb__declarative_edt__children_6_p_0(TypeClassInfo_for_mercury_edt_25, Store_1, Oracle_2, SuspectId_13, STATE_VARIABLE_SearchSpace_23_23, &STATE_VARIABLE_SearchSpace_24_24, &Children_20);
    if (succeeded)
    {
      *HeadVar__5_5 = STATE_VARIABLE_SearchSpace_24_24;
      mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Children_20, ChildrenList0_19, HeadVar__7_7);
      *HeadVar__6_6 = ExplicitRequired0_18;
    }
    else
    {
      *HeadVar__7_7 = ChildrenList0_19;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (SuspectId_13));
      }
      *HeadVar__5_5 = STATE_VARIABLE_SearchSpace_23_23;
    }
  }
}

void MR_CALL 
mdb__declarative_edt__incorporate_explicit_supertree_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_35,
  MR_Box Store_6,
  MR_Word Oracle_7,
  MR_Box Node_8,
  MR_Word STATE_VARIABLE_SearchSpace_0_13,
  MR_Word * STATE_VARIABLE_SearchSpace_14)
{
  MR_bool succeeded;
  MR_Integer OldTopMostId_10;
  MR_Word Var_66;
  MR_Word TypeInfo_37_37;
  MR_Box Parent_11;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_35, (MR_Integer) 2, &TypeInfo_37_37);
  Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 1))));
  if ((Var_66 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_edt_scalar_common_1[4])));
      return;
    }
  else
    OldTopMostId_10 = ((MR_Integer) ((MR_hl_field(1, Var_66, (MR_Integer) 0))));
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_35, (MR_Integer) 0)), (MR_Integer) 9))));
  succeeded = func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_35)), Store_6, Node_8, &Parent_11);
  if (succeeded)
  {
    MR_Word TypeInfo_38_38;
    MR_Word TypeInfo_39_39;
    MR_Word TypeInfo_40_40;
    MR_Word ImplicitToExplicit_12;
    MR_Word STATE_VARIABLE_SearchSpace_15_15;
    MR_Box Var_16;
    MR_Word Var_17;
    MR_Word Suspect_68;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;

    mdb__declarative_edt__insert_new_topmost_node_5_p_0(TypeClassInfo_for_mercury_edt_35, Store_6, Oracle_7, Parent_11, STATE_VARIABLE_SearchSpace_0_13, &STATE_VARIABLE_SearchSpace_15_15);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_35, (MR_Integer) 2, &TypeInfo_38_38);
    mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_38_38, STATE_VARIABLE_SearchSpace_15_15, OldTopMostId_10, &Suspect_68);
    Var_16 = (MR_hl_field(0, Suspect_68, (MR_Integer) 1));
    Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 5))));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_35, (MR_Integer) 2, &TypeInfo_39_39);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_35, (MR_Integer) 2, &TypeInfo_40_40);
    mercury__bimap__set_4_p_0(TypeInfo_39_39, TypeInfo_40_40, Node_8, Var_16, Var_17, &ImplicitToExplicit_12);
    Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 1))));
    Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 2))));
    Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 3))));
    Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 4))));
    Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_SearchSpace_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 5) = ((MR_Box) (ImplicitToExplicit_12));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_34));
    }
  }
  else
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_edt_scalar_common_1[8])));
      return;
    }
}

void MR_CALL 
mdb__declarative_edt__incorporate_explicit_subtree_4_p_0(
  MR_Word TypeInfo_for_T_40,
  MR_Integer SuspectId_5,
  MR_Box Node_6,
  MR_Word STATE_VARIABLE_SearchSpace_0_10,
  MR_Word * STATE_VARIABLE_SearchSpace_11)
{
  MR_Word TypeInfo_28_58;
  MR_Word Suspect_8;
  MR_Word ImplicitToExplicit_9;
  MR_Word Var_12;
  MR_Word STATE_VARIABLE_SearchSpace_13_13;
  MR_Box Var_14;
  MR_Word Store0_41;
  MR_Word Store_42;
  MR_Word Var_54;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Integer Var_19;
  MR_Word Var_20;
  MR_Integer Var_21;
  MR_Word conv0_Store_42;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_55;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_39;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_40, STATE_VARIABLE_SearchSpace_0_10, SuspectId_5, &Suspect_8);
  Var_16 = ((MR_Word) ((MR_hl_field(0, Suspect_8, (MR_Integer) 0))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, Suspect_8, (MR_Integer) 2))));
  Var_19 = ((MR_Integer) ((MR_hl_field(0, Suspect_8, (MR_Integer) 3))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, Suspect_8, (MR_Integer) 4))));
  Var_21 = ((MR_Integer) ((MR_hl_field(0, Suspect_8, (MR_Integer) 5))));
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_16));
    MR_hl_field(0, Var_12, 1) = Node_6;
    MR_hl_field(0, Var_12, 2) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_12, 5) = ((MR_Box) (Var_21));
  }
  Store0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 4))));
  {
    TypeInfo_28_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_28_58, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
    MR_hl_field(0, TypeInfo_28_58, 1) = ((MR_Box) (TypeInfo_for_T_40));
  }
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_28_58, SuspectId_5, ((MR_Box) (Var_12)), (MR_Word) (Store0_41), &conv0_Store_42);
  Store_42 = (MR_Word) (conv0_Store_42);
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 0))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 1))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 2))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 3))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 5))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 6))));
  {
    STATE_VARIABLE_SearchSpace_13_13 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_13_13, 0) = ((MR_Box) (Var_49));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_13_13, 1) = ((MR_Box) (Var_50));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_13_13, 2) = ((MR_Box) (Var_51));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_13_13, 3) = ((MR_Box) (Var_52));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_13_13, 4) = ((MR_Box) (Store_42));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_13_13, 5) = ((MR_Box) (Var_54));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_13_13, 6) = ((MR_Box) (Var_55));
  }
  Var_14 = (MR_hl_field(0, Suspect_8, (MR_Integer) 1));
  mercury__bimap__set_4_p_0(TypeInfo_for_T_40, TypeInfo_for_T_40, Var_14, Node_6, Var_54, &ImplicitToExplicit_9);
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 0))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 1))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 2))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 3))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 4))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_SearchSpace_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 5) = ((MR_Box) (ImplicitToExplicit_9));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_39));
  }
}

void MR_CALL 
mdb__declarative_edt__find_subterm_origin_11_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_54,
  MR_Box Store_12,
  MR_Word Oracle_13,
  MR_Integer SuspectId_14,
  MR_Word ArgPos_15,
  MR_Word TermPath_16,
  MR_Word HowTrack_17,
  MR_Word STATE_VARIABLE_TriedShortcutProcs_0_28,
  MR_Word * STATE_VARIABLE_TriedShortcutProcs_29,
  MR_Word STATE_VARIABLE_SearchSpace_0_30,
  MR_Word * STATE_VARIABLE_SearchSpace_31,
  MR_Word * Response_20)
{
  MR_bool succeeded;
  MR_Word TypeInfo_33_78;
  MR_Word Suspect_21;
  MR_Word Mode_22;
  MR_Box Node_23;
  MR_Box ExplicitNode_63;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_Mode_22;
  MR_Box ImplicitNode_65;
  MR_Word TypeInfo_34_79;
  MR_Word TypeInfo_35_80;
  MR_Word ImplicitToExplicit_64;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_54, (MR_Integer) 2, &TypeInfo_33_78);
  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_33_78, STATE_VARIABLE_SearchSpace_0_30, SuspectId_14, &Suspect_21);
  ExplicitNode_63 = (MR_hl_field(0, Suspect_21, (MR_Integer) 1));
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_54, (MR_Integer) 0)), (MR_Integer) 11))));
  func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_54)), Store_12, ExplicitNode_63, ((MR_Box) (ArgPos_15)), ((MR_Box) (TermPath_16)), &conv1_Mode_22);
  Mode_22 = ((MR_Word) (conv1_Mode_22));
  succeeded = (Mode_22 == (MR_Integer) 0);
  if (succeeded)
  {
    ImplicitToExplicit_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_30, (MR_Integer) 5))));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_54, (MR_Integer) 2, &TypeInfo_34_79);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_54, (MR_Integer) 2, &TypeInfo_35_80);
    succeeded = mercury__bimap__search_3_p_1(TypeInfo_34_79, TypeInfo_35_80, ImplicitToExplicit_64, &ImplicitNode_65, ExplicitNode_63);
  }
  if (succeeded)
    Node_23 = ImplicitNode_65;
  else
    Node_23 = ExplicitNode_63;
  switch (Mode_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Suspect_21, (MR_Integer) 0))));

        if ((Var_62 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word STATE_VARIABLE_SearchSpace_36_36;

          succeeded = mdb__declarative_edt__extend_search_space_upwards_4_p_0(TypeClassInfo_for_mercury_edt_54, Store_12, Oracle_13, STATE_VARIABLE_SearchSpace_0_30, &STATE_VARIABLE_SearchSpace_36_36);
          if (succeeded)
          {
            MR_Integer NewRootId_25;
            MR_Word Var_105;
            MR_Word TypeInfo_56_56;

            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_54, (MR_Integer) 2, &TypeInfo_56_56);
            Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_36_36, (MR_Integer) 1))));
            if ((Var_105 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_edt_scalar_common_1[4])));
                return;
              }
            else
              NewRootId_25 = ((MR_Integer) ((MR_hl_field(1, Var_105, (MR_Integer) 0))));
            mdb__declarative_edt__resolve_origin_10_p_0(TypeClassInfo_for_mercury_edt_54, Store_12, Oracle_13, Node_23, ArgPos_15, TermPath_16, NewRootId_25, (MR_Integer) 0, STATE_VARIABLE_SearchSpace_36_36, STATE_VARIABLE_SearchSpace_31, Response_20);
          }
          else
          {
            *Response_20 = (MR_Word) ((MR_Unsigned) 8U);
            *STATE_VARIABLE_SearchSpace_31 = STATE_VARIABLE_SearchSpace_0_30;
          }
        }
        else
        {
          MR_Integer ParentId_24 = ((MR_Integer) ((MR_hl_field(1, Var_62, (MR_Integer) 0))));

          mdb__declarative_edt__resolve_origin_10_p_0(TypeClassInfo_for_mercury_edt_54, Store_12, Oracle_13, Node_23, ArgPos_15, TermPath_16, ParentId_24, (MR_Integer) 0, STATE_VARIABLE_SearchSpace_0_30, STATE_VARIABLE_SearchSpace_31, Response_20);
        }
        *STATE_VARIABLE_TriedShortcutProcs_29 = STATE_VARIABLE_TriedShortcutProcs_0_28;
      }
      break;
    case (MR_Integer) 1:
      switch (HowTrack_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mdb__declarative_edt__resolve_origin_10_p_0(TypeClassInfo_for_mercury_edt_54, Store_12, Oracle_13, Node_23, ArgPos_15, TermPath_16, SuspectId_14, (MR_Integer) 1, STATE_VARIABLE_SearchSpace_0_30, STATE_VARIABLE_SearchSpace_31, Response_20);
            *STATE_VARIABLE_TriedShortcutProcs_29 = STATE_VARIABLE_TriedShortcutProcs_0_28;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MaybeInputArgPos_26;

            mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_p_0(TypeClassInfo_for_mercury_edt_54, Store_12, Node_23, ArgPos_15, TermPath_16, STATE_VARIABLE_TriedShortcutProcs_0_28, STATE_VARIABLE_TriedShortcutProcs_29, &MaybeInputArgPos_26);
            if ((MaybeInputArgPos_26 == (MR_Word) ((MR_Unsigned) 0U)))
              mdb__declarative_edt__resolve_origin_10_p_0(TypeClassInfo_for_mercury_edt_54, Store_12, Oracle_13, Node_23, ArgPos_15, TermPath_16, SuspectId_14, (MR_Integer) 1, STATE_VARIABLE_SearchSpace_0_30, STATE_VARIABLE_SearchSpace_31, Response_20);
            else
            {
              MR_Word InputArgPos_27 = ((MR_Word) ((MR_hl_field(1, MaybeInputArgPos_26, (MR_Integer) 0))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Response_20 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (SuspectId_14));
                MR_hl_field(1, base, 1) = ((MR_Box) (InputArgPos_27));
                MR_hl_field(1, base, 2) = ((MR_Box) (TermPath_16));
                MR_hl_field(1, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              *STATE_VARIABLE_SearchSpace_31 = STATE_VARIABLE_SearchSpace_0_30;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_42,
  MR_Box Store_8,
  MR_Box Node_9,
  MR_Word OutputArgPos_10,
  MR_Word TermPath_11,
  MR_Word STATE_VARIABLE_TriedProcs_0_36,
  MR_Word * STATE_VARIABLE_TriedProcs_37,
  MR_Word * MaybeInitialVersionArgPos_13)
{
  MR_bool succeeded;
  MR_Word Question_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_42, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_Question_14;
  MR_Word FinalAtom_18;
  MR_Box ProcLayout_20;
  MR_Word FinalArgs_21;
  MR_Word FinalDeclAtom_17;
  MR_Word TypeCtorInfo_43_43;
  MR_Word TypeCtorInfo_44_44;
  MR_Box conv2_Var_22;

  func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_42)), Store_8, Node_9, &conv1_Question_14);
  Question_14 = ((MR_Word) (conv1_Question_14));
  succeeded = ((MR_tag((MR_Word) Question_14)) == (MR_Integer) 0);
  if (succeeded)
  {
    FinalDeclAtom_17 = ((MR_Word) ((MR_hl_field(0, Question_14, (MR_Integer) 2))));
    FinalAtom_18 = ((MR_Word) ((MR_hl_field(0, FinalDeclAtom_17, (MR_Integer) 0))));
    ProcLayout_20 = ((MR_Box) ((MR_hl_field(0, FinalAtom_18, (MR_Integer) 0))));
    FinalArgs_21 = ((MR_Word) ((MR_hl_field(0, FinalAtom_18, (MR_Integer) 1))));
    TypeCtorInfo_43_43 = (MR_Word) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0);
    TypeCtorInfo_44_44 = (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_43_43, TypeCtorInfo_44_44, STATE_VARIABLE_TriedProcs_0_36, ((MR_Box) (ProcLayout_20)), &conv2_Var_22);
    if (succeeded)
      succeeded = MR_TRUE;
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word InitialVersionArgPos_30;
    MR_Integer OutputArgNum_23;
    MR_Word OutputArg_24;
    MR_Word OutputTermRep_27;
    MR_Integer InitialVersionArgNum_28;
    MR_Word OutputSubtermRep_29;
    MR_Word InitialVersionArg_31;
    MR_Word InitialVersionTermRep_34;
    MR_Word InitialVersionSubtermRep_35;
    MR_Word Var_40;
    MR_Word Var_41;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), ((MR_Box) (ProcLayout_20)), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_TriedProcs_0_36, STATE_VARIABLE_TriedProcs_37);
    mdb__declarative_execution__absolute_arg_num_3_p_0(OutputArgPos_10, FinalAtom_18, &OutputArgNum_23);
    mdb__declarative_execution__select_arg_at_pos_3_p_0(OutputArgPos_10, FinalArgs_21, &OutputArg_24);
    Var_40 = ((MR_Word) ((MR_hl_field(0, OutputArg_24, (MR_Integer) 2))));
    succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      OutputTermRep_27 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 0))));
      succeeded = mdbcomp__rtti_access__find_initial_version_arg_num_3_p_0(ProcLayout_20, OutputArgNum_23, &InitialVersionArgNum_28);
      if (succeeded)
      {
        succeeded = mdb__term_rep__deref_path_3_p_0(OutputTermRep_27, TermPath_11, &OutputSubtermRep_29);
        if (succeeded)
        {
          {
            InitialVersionArgPos_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, InitialVersionArgPos_30, 0) = ((MR_Box) (InitialVersionArgNum_28));
          }
          mdb__declarative_execution__select_arg_at_pos_3_p_0(InitialVersionArgPos_30, FinalArgs_21, &InitialVersionArg_31);
          Var_41 = ((MR_Word) ((MR_hl_field(0, InitialVersionArg_31, (MR_Integer) 2))));
          succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            InitialVersionTermRep_34 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
            succeeded = mdb__term_rep__deref_path_3_p_0(InitialVersionTermRep_34, TermPath_11, &InitialVersionSubtermRep_35);
            if (succeeded)
              succeeded = mdb__term_rep____Unify____term_rep_0_0(InitialVersionSubtermRep_35, OutputSubtermRep_29);
          }
        }
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeInitialVersionArgPos_13 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (InitialVersionArgPos_30));
      }
    else
      *MaybeInitialVersionArgPos_13 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    *MaybeInitialVersionArgPos_13 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TriedProcs_37 = STATE_VARIABLE_TriedProcs_0_36;
  }
}

static void MR_CALL 
mdb__declarative_edt__resolve_origin_10_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_49,
  MR_Box Store_11,
  MR_Word Oracle_12,
  MR_Box Node_13,
  MR_Word ArgPos_14,
  MR_Word TermPath_15,
  MR_Integer SuspectId_16,
  MR_Word Output_17,
  MR_Word STATE_VARIABLE_SearchSpace_0_34,
  MR_Word * STATE_VARIABLE_SearchSpace_35,
  MR_Word * Response_19)
{
  MR_bool succeeded;
  MR_Word Origin_21;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_49, (MR_Integer) 0)), (MR_Integer) 10))));
  MR_Box conv2_Var_20;
  MR_Box conv1_Origin_21;

  func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_49)), Store_11, Node_13, ((MR_Box) (ArgPos_14)), ((MR_Box) (TermPath_15)), &conv2_Var_20, &conv1_Origin_21);
  Origin_21 = ((MR_Word) (conv1_Origin_21));
  switch (MR_tag((MR_Word) Origin_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Origin_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Response_19 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_SearchSpace_35 = STATE_VARIABLE_SearchSpace_0_34;
          }
          break;
        case (MR_Integer) 1:
          {
            *Response_19 = (MR_Word) ((MR_Unsigned) 4U);
            *STATE_VARIABLE_SearchSpace_35 = STATE_VARIABLE_SearchSpace_0_34;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box OriginNode_27 = (MR_hl_field(1, Origin_21, (MR_Integer) 0));
        MR_Word OutputArgPos_28 = ((MR_Word) ((MR_hl_field(1, Origin_21, (MR_Integer) 1))));
        MR_Word OutputTermPath_29 = ((MR_Word) ((MR_hl_field(1, Origin_21, (MR_Integer) 2))));
        MR_Box ExplicitOrigin_31;
        MR_Box ExplicitNode_30;
        MR_Word TypeInfo_51_51;
        MR_Word TypeInfo_52_52;
        MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_34, (MR_Integer) 5))));
        MR_Word Children_32;
        MR_Word STATE_VARIABLE_SearchSpace_38_38;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_49, (MR_Integer) 2, &TypeInfo_51_51);
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_49, (MR_Integer) 2, &TypeInfo_52_52);
        succeeded = mercury__bimap__search_3_p_0(TypeInfo_51_51, TypeInfo_52_52, Var_37, OriginNode_27, &ExplicitNode_30);
        if (succeeded)
          ExplicitOrigin_31 = ExplicitNode_30;
        else
          ExplicitOrigin_31 = OriginNode_27;
        succeeded = mdb__declarative_edt__children_6_p_0(TypeClassInfo_for_mercury_edt_49, Store_11, Oracle_12, SuspectId_16, STATE_VARIABLE_SearchSpace_0_34, &STATE_VARIABLE_SearchSpace_38_38, &Children_32);
        if (succeeded)
        {
          MR_Integer OriginId_33;
          MR_Word TypeInfo_54_54;

          *STATE_VARIABLE_SearchSpace_35 = STATE_VARIABLE_SearchSpace_38_38;
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_49, (MR_Integer) 2, &TypeInfo_54_54);
          succeeded = mdb__declarative_edt__find_edt_node_in_suspect_list_4_p_0(TypeInfo_54_54, Children_32, ExplicitOrigin_31, STATE_VARIABLE_SearchSpace_38_38, &OriginId_33);
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Response_19 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (OriginId_33));
              MR_hl_field(1, base, 1) = ((MR_Box) (OutputArgPos_28));
              MR_hl_field(1, base, 2) = ((MR_Box) (OutputTermPath_29));
              MR_hl_field(1, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            }
          else
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_edt_scalar_common_1[11])));
              return;
            }
        }
        else
        {
          *Response_19 = (MR_Word) ((MR_Unsigned) 4U);
          *STATE_VARIABLE_SearchSpace_35 = STATE_VARIABLE_SearchSpace_0_34;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InputArgPos_25 = ((MR_Word) ((MR_hl_field(2, Origin_21, (MR_Integer) 0))));
        MR_Word InputTermPath_26 = ((MR_Word) ((MR_hl_field(2, Origin_21, (MR_Integer) 1))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Response_19 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SuspectId_16));
          MR_hl_field(1, base, 1) = ((MR_Box) (InputArgPos_25));
          MR_hl_field(1, base, 2) = ((MR_Box) (InputTermPath_26));
          MR_hl_field(1, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        *STATE_VARIABLE_SearchSpace_35 = STATE_VARIABLE_SearchSpace_0_34;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String FileName_22 = ((MR_String) ((MR_hl_field(3, Origin_21, (MR_Integer) 0))));
        MR_Integer LineNo_23 = ((MR_Integer) ((MR_hl_field(3, Origin_21, (MR_Integer) 1))));
        MR_Word PrimOpType_24 = ((MR_Unsigned) ((MR_hl_field(3, Origin_21, (MR_Integer) 2))) & (MR_Integer) 3);

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Response_19 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (SuspectId_16));
          MR_hl_field(2, base, 1) = ((MR_Box) (FileName_22));
          MR_hl_field(2, base, 2) = ((MR_Box) (LineNo_23));
          MR_hl_field(2, base, 3) = (MR_Box) (((((MR_Unsigned) (PrimOpType_24) << 1)) | (MR_Unsigned) (Output_17)));
        }
        *STATE_VARIABLE_SearchSpace_35 = STATE_VARIABLE_SearchSpace_0_34;
      }
      break;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__find_edt_node_in_suspect_list_4_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word HeadVar__1_1,
  MR_Box Node_7,
  MR_Word SearchSpace_8,
  MR_Integer * FoundId_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer SuspectId_5;
    MR_Word SuspectIds_6;
    MR_Word TypeCtorInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word Suspect_10;
    MR_Word Var_11;
    MR_Box Var_27;
    MR_Box conv0_Suspect_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      SuspectId_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      SuspectIds_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      Var_11 = ((MR_Word) ((MR_hl_field(0, SearchSpace_8, (MR_Integer) 4))));
      TypeCtorInfo_25_25 = (MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1);
      {
        TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_26_26, 0) = ((MR_Box) (TypeCtorInfo_25_25));
        MR_hl_field(0, TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_T_23));
      }
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_26_26, (MR_Word) (Var_11), SuspectId_5, &conv0_Suspect_10);
      if (succeeded)
      {
        Suspect_10 = ((MR_Word) (conv0_Suspect_10));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Var_27 = (MR_hl_field(0, Suspect_10, (MR_Integer) 1));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_23, Node_7, Var_27);
      }
      if (succeeded)
      {
        *FoundId_9 = SuspectId_5;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = SuspectIds_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__extend_search_space_upwards_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_13,
  MR_Box Store_5,
  MR_Word Oracle_6,
  MR_Word STATE_VARIABLE_SearchSpace_0_10,
  MR_Word * STATE_VARIABLE_SearchSpace_11)
{
  MR_bool succeeded;
  MR_Word TypeInfo_16_16;
  MR_Integer OldTopMostId_8;
  MR_Box NewTopMost_9;
  MR_Box Var_12;
  MR_Word Var_41;
  MR_Word Suspect_43;
  MR_Word TypeInfo_15_15;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_13, (MR_Integer) 2, &TypeInfo_15_15);
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 1))));
  if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_edt_scalar_common_1[4])));
  else
    OldTopMostId_8 = ((MR_Integer) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_13, (MR_Integer) 2, &TypeInfo_16_16);
  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_16_16, STATE_VARIABLE_SearchSpace_0_10, OldTopMostId_8, &Suspect_43);
  Var_12 = (MR_hl_field(0, Suspect_43, (MR_Integer) 1));
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_13, (MR_Integer) 0)), (MR_Integer) 9))));
  succeeded = func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_13)), Store_5, Var_12, &NewTopMost_9);
  if (succeeded)
  {
    mdb__declarative_edt__insert_new_topmost_node_5_p_0(TypeClassInfo_for_mercury_edt_13, Store_5, Oracle_6, NewTopMost_9, STATE_VARIABLE_SearchSpace_0_10, STATE_VARIABLE_SearchSpace_11);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt__insert_new_topmost_node_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_154,
  MR_Box Store_6,
  MR_Word Oracle_7,
  MR_Box NewTopMostEDTNode_8,
  MR_Word STATE_VARIABLE_SearchSpace_0_32,
  MR_Word * STATE_VARIABLE_SearchSpace_33)
{
  MR_bool succeeded;
  MR_Word EDTChildren_10;

  succeeded = mdb__declarative_edt__edt_children_3_p_0(TypeClassInfo_for_mercury_edt_154, Store_6, NewTopMostEDTNode_8, &EDTChildren_10);
  if (succeeded)
  {
    MR_Word TypeInfo_156_156;
    MR_Word TypeInfo_157_157;
    MR_Integer OldTopMostId_11;
    MR_Word OldTopMost_12;
    MR_Integer Pos_13;
    MR_Word LeftChildren_14;
    MR_Word RightChildren_16;
    MR_Word TypeInfo_158_158;
    MR_Box Var_34;
    MR_Integer Var_35;
    MR_Word Var_36;
    MR_Integer Var_37;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &TypeInfo_156_156);
    mdb__declarative_edt__topmost_det_2_p_0(TypeInfo_156_156, STATE_VARIABLE_SearchSpace_0_32, &OldTopMostId_11);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &TypeInfo_157_157);
    mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_157_157, STATE_VARIABLE_SearchSpace_0_32, OldTopMostId_11, &OldTopMost_12);
    Var_34 = (MR_hl_field(0, OldTopMost_12, (MR_Integer) 1));
    succeeded = mdb__declarative_edt__find_node_in_list_4_p_0(TypeClassInfo_for_mercury_edt_154, Store_6, EDTChildren_10, Var_34, &Pos_13);
    if (succeeded)
    {
      Var_37 = (MR_Integer) 1;
      Var_35 = (MR_Integer) ((MR_Unsigned) Pos_13 - (MR_Unsigned) Var_37);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &TypeInfo_158_158);
      succeeded = mercury__list__split_list_4_p_0(TypeInfo_158_158, Var_35, EDTChildren_10, &LeftChildren_14, &Var_36);
      if (succeeded)
      {
        succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          RightChildren_16 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_160_160;
      MR_Word TypeInfo_162_162;
      MR_Word TypeInfo_163_163;
      MR_Word TypeInfo_168_168;
      MR_Word TypeInfo_170_170;
      MR_Word NewTopMostStatus_17;
      MR_Integer NewTopMostDepth_18;
      MR_Word NewTopMost_19;
      MR_Integer NewTopMostId_22;
      MR_Word SiblingStatus_23;
      MR_Word ChildrenIds_24;
      MR_Word NewTopMostChildrenIds_27;
      MR_Integer Weight_28;
      MR_Word NewTopMostWithCorrectWeight_31;
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, OldTopMost_12, (MR_Integer) 2))));
      MR_Integer Var_39;
      MR_Word STATE_VARIABLE_Counter_44_44;
      MR_Word STATE_VARIABLE_Counter_45_45;
      MR_Word STATE_VARIABLE_SearchSpace_46_46;
      MR_Word STATE_VARIABLE_SuspectStore_47_47;
      MR_Word STATE_VARIABLE_SuspectStore_48_48;
      MR_Word STATE_VARIABLE_SearchSpace_49_49;
      MR_Word Var_50;
      MR_Word STATE_VARIABLE_SearchSpace_51_51;
      MR_Word Var_58;
      MR_Word STATE_VARIABLE_SuspectStore_59_59;
      MR_Word STATE_VARIABLE_SuspectStore_61_61;
      MR_Word Var_62;
      MR_Word STATE_VARIABLE_SuspectStore_63_63;
      MR_Word Var_64;
      MR_Word STATE_VARIABLE_SearchSpace_66_66;
      MR_Word Var_122;
      MR_Box Var_123;
      MR_Word Var_124;
      MR_Integer Var_125;
      MR_Word Var_140;
      MR_Word Var_142;
      MR_Word Var_143;
      MR_Word Var_145;
      MR_Word Var_146;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_99;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Word LeftChildrenIds_25;
      MR_Word RightChildrenIds_26;
      MR_Integer Var_52;
      MR_Integer Var_29;
      MR_Box Var_135;
      MR_Word Var_136;
      MR_Integer Var_137;
      MR_Word Var_138;
      MR_Integer Var_139;

      NewTopMostStatus_17 = mdb__declarative_edt__new_parent_status_1_f_0(Var_38);
      Var_39 = ((MR_Integer) ((MR_hl_field(0, OldTopMost_12, (MR_Integer) 3))));
      NewTopMostDepth_18 = (MR_Integer) ((MR_Unsigned) Var_39 - (MR_Unsigned) 1);
      {
        NewTopMost_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewTopMost_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, NewTopMost_19, 1) = NewTopMostEDTNode_8;
        MR_hl_field(0, NewTopMost_19, 2) = ((MR_Box) (NewTopMostStatus_17));
        MR_hl_field(0, NewTopMost_19, 3) = ((MR_Box) (NewTopMostDepth_18));
        MR_hl_field(0, NewTopMost_19, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, NewTopMost_19, 5) = ((MR_Box) ((MR_Integer) 0));
      }
      STATE_VARIABLE_Counter_44_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 2))));
      mercury__counter__allocate_3_p_0(&NewTopMostId_22, STATE_VARIABLE_Counter_44_44, &STATE_VARIABLE_Counter_45_45);
      Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 0))));
      Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 1))));
      Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 3))));
      STATE_VARIABLE_SuspectStore_47_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 4))));
      Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 5))));
      Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 6))));
      {
        STATE_VARIABLE_SearchSpace_46_46 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_46_46, 0) = ((MR_Box) (Var_96));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_46_46, 1) = ((MR_Box) (Var_97));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_46_46, 2) = ((MR_Box) (STATE_VARIABLE_Counter_45_45));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_46_46, 3) = ((MR_Box) (Var_99));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_46_46, 4) = ((MR_Box) (STATE_VARIABLE_SuspectStore_47_47));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_46_46, 5) = ((MR_Box) (Var_101));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_46_46, 6) = ((MR_Box) (Var_102));
      }
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &TypeInfo_160_160);
      {
        TypeInfo_162_162 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_162_162, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
        MR_hl_field(0, TypeInfo_162_162, 1) = ((MR_Box) (TypeInfo_160_160));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_162_162, NewTopMostId_22, ((MR_Box) (NewTopMost_19)), STATE_VARIABLE_SuspectStore_47_47, &STATE_VARIABLE_SuspectStore_48_48);
      Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 0))));
      Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 1))));
      Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 2))));
      Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 3))));
      Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 5))));
      Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 6))));
      {
        STATE_VARIABLE_SearchSpace_49_49 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_49_49, 0) = ((MR_Box) (Var_109));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_49_49, 1) = ((MR_Box) (Var_110));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_49_49, 2) = ((MR_Box) (Var_111));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_49_49, 3) = ((MR_Box) (Var_112));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_49_49, 4) = ((MR_Box) (STATE_VARIABLE_SuspectStore_48_48));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_49_49, 5) = ((MR_Box) (Var_114));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_49_49, 6) = ((MR_Box) (Var_115));
      }
      SiblingStatus_23 = mdb__declarative_edt__new_child_status_1_f_0(NewTopMostStatus_17);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &TypeInfo_163_163);
      Var_50 = mercury__list__append_2_f_0(TypeInfo_163_163, LeftChildren_14, RightChildren_16);
      mdb__declarative_edt__add_children_8_p_0(TypeClassInfo_for_mercury_edt_154, Store_6, Oracle_7, Var_50, NewTopMostId_22, SiblingStatus_23, STATE_VARIABLE_SearchSpace_49_49, &STATE_VARIABLE_SearchSpace_51_51, &ChildrenIds_24);
      Var_52 = (MR_Integer) ((MR_Unsigned) Pos_13 - (MR_Unsigned) 1);
      succeeded = mercury__list__split_list_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_52, ChildrenIds_24, &LeftChildrenIds_25, &RightChildrenIds_26);
      if (succeeded)
      {
        MR_Word Var_54;

        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (OldTopMostId_11));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) (RightChildrenIds_26));
        }
        mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LeftChildrenIds_25, Var_54, &NewTopMostChildrenIds_27);
      }
      else
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_edt_scalar_common_1[15])));
          return;
        }
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (NewTopMostChildrenIds_27));
      }
      mdb__declarative_edt__calc_suspect_weight_7_p_0(TypeClassInfo_for_mercury_edt_154, Store_6, NewTopMostEDTNode_8, Var_58, NewTopMostStatus_17, STATE_VARIABLE_SearchSpace_51_51, &Weight_28, &Var_29);
      STATE_VARIABLE_SuspectStore_59_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 4))));
      Var_122 = ((MR_Word) ((MR_hl_field(0, NewTopMost_19, (MR_Integer) 0))));
      Var_123 = (MR_hl_field(0, NewTopMost_19, (MR_Integer) 1));
      Var_124 = ((MR_Word) ((MR_hl_field(0, NewTopMost_19, (MR_Integer) 2))));
      Var_125 = ((MR_Integer) ((MR_hl_field(0, NewTopMost_19, (MR_Integer) 3))));
      {
        NewTopMostWithCorrectWeight_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewTopMostWithCorrectWeight_31, 0) = ((MR_Box) (Var_122));
        MR_hl_field(0, NewTopMostWithCorrectWeight_31, 1) = Var_123;
        MR_hl_field(0, NewTopMostWithCorrectWeight_31, 2) = ((MR_Box) (Var_124));
        MR_hl_field(0, NewTopMostWithCorrectWeight_31, 3) = ((MR_Box) (Var_125));
        MR_hl_field(0, NewTopMostWithCorrectWeight_31, 4) = ((MR_Box) (Var_58));
        MR_hl_field(0, NewTopMostWithCorrectWeight_31, 5) = ((MR_Box) (Weight_28));
      }
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &TypeInfo_168_168);
      {
        TypeInfo_170_170 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_170_170, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
        MR_hl_field(0, TypeInfo_170_170, 1) = ((MR_Box) (TypeInfo_168_168));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_170_170, NewTopMostId_22, ((MR_Box) (NewTopMostWithCorrectWeight_31)), STATE_VARIABLE_SuspectStore_59_59, &STATE_VARIABLE_SuspectStore_61_61);
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (NewTopMostId_22));
      }
      Var_135 = (MR_hl_field(0, OldTopMost_12, (MR_Integer) 1));
      Var_136 = ((MR_Word) ((MR_hl_field(0, OldTopMost_12, (MR_Integer) 2))));
      Var_137 = ((MR_Integer) ((MR_hl_field(0, OldTopMost_12, (MR_Integer) 3))));
      Var_138 = ((MR_Word) ((MR_hl_field(0, OldTopMost_12, (MR_Integer) 4))));
      Var_139 = ((MR_Integer) ((MR_hl_field(0, OldTopMost_12, (MR_Integer) 5))));
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_62, 0) = ((MR_Box) (Var_64));
        MR_hl_field(0, Var_62, 1) = Var_135;
        MR_hl_field(0, Var_62, 2) = ((MR_Box) (Var_136));
        MR_hl_field(0, Var_62, 3) = ((MR_Box) (Var_137));
        MR_hl_field(0, Var_62, 4) = ((MR_Box) (Var_138));
        MR_hl_field(0, Var_62, 5) = ((MR_Box) (Var_139));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_170_170, OldTopMostId_11, ((MR_Box) (Var_62)), STATE_VARIABLE_SuspectStore_61_61, &STATE_VARIABLE_SuspectStore_63_63);
      Var_140 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 0))));
      Var_142 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 2))));
      Var_143 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 3))));
      Var_145 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 5))));
      Var_146 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 6))));
      {
        STATE_VARIABLE_SearchSpace_66_66 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_66_66, 0) = ((MR_Box) (Var_140));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_66_66, 1) = ((MR_Box) (Var_64));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_66_66, 2) = ((MR_Box) (Var_142));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_66_66, 3) = ((MR_Box) (Var_143));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_66_66, 4) = ((MR_Box) (STATE_VARIABLE_SuspectStore_63_63));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_66_66, 5) = ((MR_Box) (Var_145));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_66_66, 6) = ((MR_Box) (Var_146));
      }
      mdb__declarative_edt__adjust_suspect_status_from_oracle_5_p_0(TypeClassInfo_for_mercury_edt_154, Store_6, Oracle_7, NewTopMostId_22, STATE_VARIABLE_SearchSpace_66_66, STATE_VARIABLE_SearchSpace_33);
    }
    else
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_edt_scalar_common_1[16])));
        return;
      }
  }
  else
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_edt_scalar_common_1[17])));
      return;
    }
}

MR_bool MR_CALL 
mdb__declarative_edt__edt_children_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 8))));
  MR_Box conv1_HeadVar__3_3;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_4)), HeadVar__1_1, HeadVar__2_2, &conv1_HeadVar__3_3);
  if (succeeded)
  {
    *HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_edt__find_node_in_list_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_12,
  MR_Box Store_5,
  MR_Word HeadVar__2_2,
  MR_Box NodeToMatch_8,
  MR_Integer * Pos_9)
{
  MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Box Node_6;
  MR_Word Nodes_7;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

  if (succeeded)
  {
    Node_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
    Nodes_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_12, (MR_Integer) 0)), (MR_Integer) 13))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_12)), Store_5, Node_6, NodeToMatch_8);
    if (succeeded)
    {
      *Pos_9 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer TailPos_10;
      MR_Integer Var_11;

      succeeded = mdb__declarative_edt__find_node_in_list_4_p_0(TypeClassInfo_for_mercury_edt_12, Store_5, Nodes_7, NodeToMatch_8, &TailPos_10);
      if (succeeded)
      {
        Var_11 = (MR_Integer) 1;
        *Pos_9 = (MR_Integer) ((MR_Unsigned) TailPos_10 + (MR_Unsigned) Var_11);
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt__adjust_suspect_status_from_oracle_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_30,
  MR_Box Store_6,
  MR_Word Oracle_7,
  MR_Integer SuspectId_8,
  MR_Word STATE_VARIABLE_SearchSpace_0_16,
  MR_Word * STATE_VARIABLE_SearchSpace_17)
{
  MR_bool succeeded;
  MR_Word TypeInfo_32_32;
  MR_Word Suspect_10;
  MR_Box Var_21;
  MR_Word Var_18;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_30, (MR_Integer) 2, &TypeInfo_32_32);
  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_32_32, STATE_VARIABLE_SearchSpace_0_16, SuspectId_8, &Suspect_10);
  Var_21 = (MR_hl_field(0, Suspect_10, (MR_Integer) 1));
  Var_18 = ((MR_Word) ((MR_hl_field(0, Suspect_10, (MR_Integer) 2))));
  succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 24U));
  if (succeeded)
  {
    MR_Word Question_11;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_30, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Question_11;
    MR_Word Answer_12;
    MR_Word TypeInfo_33_33;

    func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_30)), Store_6, Var_21, &conv1_Question_11);
    Question_11 = ((MR_Word) (conv1_Question_11));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_30, (MR_Integer) 2, &TypeInfo_33_33);
    succeeded = mdb__declarative_oracle__answer_known_3_p_0(TypeInfo_33_33, Oracle_7, Question_11, &Answer_12);
    if (succeeded)
      if (((MR_tag((MR_Word) Answer_12)) == (MR_Integer) 2))
        mdb__declarative_edt__ignore_suspect_4_p_0(TypeClassInfo_for_mercury_edt_30, Store_6, SuspectId_8, STATE_VARIABLE_SearchSpace_0_16, STATE_VARIABLE_SearchSpace_17);
      else
      {
        MR_Word Truth_15 = ((MR_Unsigned) ((MR_hl_field(0, Answer_12, (MR_Integer) 1))) & (MR_Integer) 3);

        switch (Truth_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_35_35;

              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_30, (MR_Integer) 2, &TypeInfo_35_35);
              mdb__declarative_edt__assert_suspect_is_valid_4_p_0(TypeInfo_35_35, (MR_Word) ((MR_Unsigned) 4U), SuspectId_8, STATE_VARIABLE_SearchSpace_0_16, STATE_VARIABLE_SearchSpace_17);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_34_34;

              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_30, (MR_Integer) 2, &TypeInfo_34_34);
              mdb__declarative_edt__assert_suspect_is_erroneous_3_p_0(TypeInfo_34_34, SuspectId_8, STATE_VARIABLE_SearchSpace_0_16, STATE_VARIABLE_SearchSpace_17);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_36_36;

              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_30, (MR_Integer) 2, &TypeInfo_36_36);
              mdb__declarative_edt__assert_suspect_is_valid_4_p_0(TypeInfo_36_36, (MR_Word) ((MR_Unsigned) 12U), SuspectId_8, STATE_VARIABLE_SearchSpace_0_16, STATE_VARIABLE_SearchSpace_17);
            }
            break;
        }
      }
    else
      *STATE_VARIABLE_SearchSpace_17 = STATE_VARIABLE_SearchSpace_0_16;
  }
  else
    *STATE_VARIABLE_SearchSpace_17 = STATE_VARIABLE_SearchSpace_0_16;
}

static MR_Word MR_CALL 
mdb__declarative_edt__new_parent_status_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 24U);
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 24U);
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 20U);
          break;
        case (MR_Integer) 3:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 24U);
          break;
        case (MR_Integer) 4:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 16U);
          break;
        case (MR_Integer) 5:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 20U);
          break;
        case (MR_Integer) 6:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 24U);
          break;
      }
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 24U);
      break;
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
mdb__declarative_edt__new_child_status_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 24U);
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 16U);
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 24U);
          break;
        case (MR_Integer) 3:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 16U);
          break;
        case (MR_Integer) 4:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 16U);
          break;
        case (MR_Integer) 5:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 20U);
          break;
        case (MR_Integer) 6:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 24U);
          break;
      }
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 24U);
      break;
  }
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mdb__declarative_edt__give_up_subterm_tracking_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word SearchSpace_4,
  MR_Integer SuspectId_5,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded = (HeadVar__3_3 == (MR_Integer) 0);
  MR_Word Status_6;
  MR_Word Var_7;
  MR_Word Suspect_10;

  if (succeeded)
  {
    mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_8, SearchSpace_4, SuspectId_5, &Suspect_10);
    Status_6 = ((MR_Word) ((MR_hl_field(0, Suspect_10, (MR_Integer) 2))));
    Var_7 = (MR_Integer) 1;
    switch (MR_tag((MR_Word) Status_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Status_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = (Var_7 == (MR_Integer) 0);
            break;
          case (MR_Integer) 1:
            succeeded = (Var_7 == (MR_Integer) 0);
            break;
          case (MR_Integer) 2:
            succeeded = (Var_7 == (MR_Integer) 1);
            break;
          case (MR_Integer) 3:
            succeeded = (Var_7 == (MR_Integer) 0);
            break;
          case (MR_Integer) 4:
            succeeded = (Var_7 == (MR_Integer) 0);
            break;
          case (MR_Integer) 5:
            succeeded = (Var_7 == (MR_Integer) 1);
            break;
          case (MR_Integer) 6:
            succeeded = (Var_7 == (MR_Integer) 0);
            break;
        }
        break;
      case (MR_Integer) 1:
        succeeded = (Var_7 == (MR_Integer) 0);
        break;
    }
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_edt__skip_suspect_3_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Integer SuspectId_4,
  MR_Word STATE_VARIABLE_SearchSpace_0_9,
  MR_Word * STATE_VARIABLE_SearchSpace_10)
{
  MR_Word TypeInfo_28_53;
  MR_Word Suspect_6;
  MR_Integer N_7;
  MR_Word SkipCounter_8;
  MR_Word Var_11;
  MR_Word STATE_VARIABLE_SearchSpace_12_12;
  MR_Word Var_13;
  MR_Word Var_15;
  MR_Word Store0_36;
  MR_Word Store_37;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Box Var_30;
  MR_Integer Var_32;
  MR_Word Var_33;
  MR_Integer Var_34;
  MR_Word conv0_Store_37;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_50;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_35, STATE_VARIABLE_SearchSpace_0_9, SuspectId_4, &Suspect_6);
  Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 3))));
  mercury__counter__allocate_3_p_0(&N_7, Var_11, &SkipCounter_8);
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 0))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 1))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 2))));
  Store0_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 4))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 5))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 6))));
  {
    STATE_VARIABLE_SearchSpace_12_12 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_12_12, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_12_12, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_12_12, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_12_12, 3) = ((MR_Box) (SkipCounter_8));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_12_12, 4) = ((MR_Box) (Store0_36));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_12_12, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_12_12, 6) = ((MR_Box) (Var_28));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (N_7));
  }
  Var_29 = ((MR_Word) ((MR_hl_field(0, Suspect_6, (MR_Integer) 0))));
  Var_30 = (MR_hl_field(0, Suspect_6, (MR_Integer) 1));
  Var_32 = ((MR_Integer) ((MR_hl_field(0, Suspect_6, (MR_Integer) 3))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, Suspect_6, (MR_Integer) 4))));
  Var_34 = ((MR_Integer) ((MR_hl_field(0, Suspect_6, (MR_Integer) 5))));
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_13, 1) = Var_30;
    MR_hl_field(0, Var_13, 2) = ((MR_Box) (Var_15));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_13, 5) = ((MR_Box) (Var_34));
  }
  {
    TypeInfo_28_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_28_53, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
    MR_hl_field(0, TypeInfo_28_53, 1) = ((MR_Box) (TypeInfo_for_T_35));
  }
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_28_53, SuspectId_4, ((MR_Box) (Var_13)), (MR_Word) (Store0_36), &conv0_Store_37);
  Store_37 = (MR_Word) (conv0_Store_37);
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 0))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 1))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 2))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 3))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 5))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_SearchSpace_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 4) = ((MR_Box) (Store_37));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_50));
  }
}

void MR_CALL 
mdb__declarative_edt__ignore_suspect_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_50,
  MR_Box Store_5,
  MR_Integer SuspectId_6,
  MR_Word STATE_VARIABLE_SearchSpace_0_11,
  MR_Word * STATE_VARIABLE_SearchSpace_12)
{
  MR_Word TypeInfo_52_52;
  MR_Word TypeInfo_53_53;
  MR_Word TypeInfo_54_54;
  MR_Word TypeInfo_28_72;
  MR_Word Suspect_8;
  MR_Integer Weight_9;
  MR_Box Var_13;
  MR_Word Var_16;
  MR_Word STATE_VARIABLE_SearchSpace_17_17;
  MR_Integer Var_20;
  MR_Integer Var_22;
  MR_Word Var_26;
  MR_Word Var_33;
  MR_Box Var_34;
  MR_Integer Var_36;
  MR_Word Var_37;
  MR_Word Store0_55;
  MR_Word Store_56;
  MR_Integer Var_10;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_68;
  MR_Word Var_69;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_50, (MR_Integer) 2, &TypeInfo_52_52);
  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_52_52, STATE_VARIABLE_SearchSpace_0_11, SuspectId_6, &Suspect_8);
  Var_13 = (MR_hl_field(0, Suspect_8, (MR_Integer) 1));
  Var_26 = ((MR_Word) ((MR_hl_field(0, Suspect_8, (MR_Integer) 4))));
  mdb__declarative_edt__calc_suspect_weight_7_p_0(TypeClassInfo_for_mercury_edt_50, Store_5, Var_13, Var_26, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_SearchSpace_0_11, &Weight_9, &Var_10);
  Var_33 = ((MR_Word) ((MR_hl_field(0, Suspect_8, (MR_Integer) 0))));
  Var_34 = (MR_hl_field(0, Suspect_8, (MR_Integer) 1));
  Var_36 = ((MR_Integer) ((MR_hl_field(0, Suspect_8, (MR_Integer) 3))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, Suspect_8, (MR_Integer) 4))));
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_16, 1) = Var_34;
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_16, 4) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_16, 5) = ((MR_Box) (Weight_9));
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_50, (MR_Integer) 2, &TypeInfo_53_53);
  Store0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 4))));
  {
    TypeInfo_28_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_28_72, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
    MR_hl_field(0, TypeInfo_28_72, 1) = ((MR_Box) (TypeInfo_53_53));
  }
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_28_72, SuspectId_6, ((MR_Box) (Var_16)), Store0_55, &Store_56);
  Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 0))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 1))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 2))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 3))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 5))));
  Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 6))));
  {
    STATE_VARIABLE_SearchSpace_17_17 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_17, 0) = ((MR_Box) (Var_63));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_17, 1) = ((MR_Box) (Var_64));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_17, 2) = ((MR_Box) (Var_65));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_17, 3) = ((MR_Box) (Var_66));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_17, 4) = ((MR_Box) (Store_56));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_17, 5) = ((MR_Box) (Var_68));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_17_17, 6) = ((MR_Box) (Var_69));
  }
  Var_22 = ((MR_Integer) ((MR_hl_field(0, Suspect_8, (MR_Integer) 5))));
  Var_20 = (MR_Integer) ((MR_Unsigned) Weight_9 - (MR_Unsigned) Var_22);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_50, (MR_Integer) 2, &TypeInfo_54_54);
  mdb__declarative_edt__add_weight_to_ancestors_4_p_0(TypeInfo_54_54, SuspectId_6, Var_20, STATE_VARIABLE_SearchSpace_17_17, STATE_VARIABLE_SearchSpace_12);
}

void MR_CALL 
mdb__declarative_edt__assert_suspect_is_inadmissible_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Integer SuspectId_4,
  MR_Word STATE_VARIABLE_SearchSpace_0_6,
  MR_Word * STATE_VARIABLE_SearchSpace_7)
{
  mdb__declarative_edt__assert_suspect_is_valid_4_p_0(TypeInfo_for_T_9, (MR_Word) ((MR_Unsigned) 12U), SuspectId_4, STATE_VARIABLE_SearchSpace_0_6, STATE_VARIABLE_SearchSpace_7);
}

void MR_CALL 
mdb__declarative_edt__assert_suspect_is_erroneous_3_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_Integer SuspectId_4,
  MR_Word STATE_VARIABLE_SearchSpace_0_8,
  MR_Word * STATE_VARIABLE_SearchSpace_9)
{
  MR_Word TypeInfo_28_55;
  MR_Word Suspect_6;
  MR_Word Var_10;
  MR_Word STATE_VARIABLE_SearchSpace_11_11;
  MR_Word STATE_VARIABLE_SearchSpace_15_15;
  MR_Word Var_23;
  MR_Word Store0_38;
  MR_Word Store_39;
  MR_Word Var_24;
  MR_Box Var_25;
  MR_Integer Var_27;
  MR_Word Var_28;
  MR_Integer Var_29;
  MR_Word conv0_Store_39;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Integer Var_7;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_37, STATE_VARIABLE_SearchSpace_0_8, SuspectId_4, &Suspect_6);
  Var_24 = ((MR_Word) ((MR_hl_field(0, Suspect_6, (MR_Integer) 0))));
  Var_25 = (MR_hl_field(0, Suspect_6, (MR_Integer) 1));
  Var_27 = ((MR_Integer) ((MR_hl_field(0, Suspect_6, (MR_Integer) 3))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, Suspect_6, (MR_Integer) 4))));
  Var_29 = ((MR_Integer) ((MR_hl_field(0, Suspect_6, (MR_Integer) 5))));
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 1) = Var_25;
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_29));
  }
  Store0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 4))));
  {
    TypeInfo_28_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_28_55, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
    MR_hl_field(0, TypeInfo_28_55, 1) = ((MR_Box) (TypeInfo_for_T_37));
  }
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_28_55, SuspectId_4, ((MR_Box) (Var_10)), (MR_Word) (Store0_38), &conv0_Store_39);
  Store_39 = (MR_Word) (conv0_Store_39);
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 0))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 1))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 2))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 3))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 5))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 6))));
  {
    STATE_VARIABLE_SearchSpace_11_11 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_11_11, 0) = ((MR_Box) (Var_46));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_11_11, 1) = ((MR_Box) (Var_47));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_11_11, 2) = ((MR_Box) (Var_48));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_11_11, 3) = ((MR_Box) (Var_49));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_11_11, 4) = ((MR_Box) (Store_39));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_11_11, 5) = ((MR_Box) (Var_51));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_11_11, 6) = ((MR_Box) (Var_52));
  }
  mdb__declarative_edt__propagate_status_upwards_6_p_0(TypeInfo_for_T_37, (MR_Word) ((MR_Unsigned) 20U), (MR_Word) (MR_mkword(1, &mdb__declarative_edt_scalar_common_1[7])), SuspectId_4, &Var_7, STATE_VARIABLE_SearchSpace_11_11, &STATE_VARIABLE_SearchSpace_15_15);
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (SuspectId_4));
  }
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 1))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 2))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 3))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 4))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 5))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_SearchSpace_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_36));
  }
}

void MR_CALL 
mdb__declarative_edt__assert_suspect_is_correct_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Integer SuspectId_4,
  MR_Word STATE_VARIABLE_SearchSpace_0_6,
  MR_Word * STATE_VARIABLE_SearchSpace_7)
{
  mdb__declarative_edt__assert_suspect_is_valid_4_p_0(TypeInfo_for_T_9, (MR_Word) ((MR_Unsigned) 4U), SuspectId_4, STATE_VARIABLE_SearchSpace_0_6, STATE_VARIABLE_SearchSpace_7);
}

static void MR_CALL 
mdb__declarative_edt__assert_suspect_is_valid_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_SearchSpace_12;

  mdb__declarative_edt__propagate_status_downwards_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_SearchSpace_12);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_SearchSpace_12));
}

static void MR_CALL 
mdb__declarative_edt__assert_suspect_is_valid_4_p_0(
  MR_Word TypeInfo_for_T_87,
  MR_Word Status_5,
  MR_Integer SuspectId_6,
  MR_Word STATE_VARIABLE_SearchSpace_0_11,
  MR_Word * STATE_VARIABLE_SearchSpace_12)
{
  MR_bool succeeded;
  MR_Word TypeInfo_28_125;
  MR_Word Suspect_8;
  MR_Word Var_13;
  MR_Word STATE_VARIABLE_SearchSpace_14_14;
  MR_Word STATE_VARIABLE_SearchSpace_19_19;
  MR_Integer Var_27;
  MR_Word STATE_VARIABLE_SearchSpace_28_28;
  MR_Word Var_41;
  MR_Box Var_42;
  MR_Integer Var_44;
  MR_Word Var_45;
  MR_Integer Var_95;
  MR_Word Var_96;
  MR_Word Store0_108;
  MR_Word Store_109;
  MR_Word conv0_Store_109;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_30;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_87, STATE_VARIABLE_SearchSpace_0_11, SuspectId_6, &Suspect_8);
  Var_41 = ((MR_Word) ((MR_hl_field(0, Suspect_8, (MR_Integer) 0))));
  Var_42 = (MR_hl_field(0, Suspect_8, (MR_Integer) 1));
  Var_44 = ((MR_Integer) ((MR_hl_field(0, Suspect_8, (MR_Integer) 3))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, Suspect_8, (MR_Integer) 4))));
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_13, 1) = Var_42;
    MR_hl_field(0, Var_13, 2) = ((MR_Box) (Status_5));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_13, 5) = ((MR_Box) ((MR_Integer) 0));
  }
  Store0_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 4))));
  {
    TypeInfo_28_125 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_28_125, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
    MR_hl_field(0, TypeInfo_28_125, 1) = ((MR_Box) (TypeInfo_for_T_87));
  }
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_28_125, SuspectId_6, ((MR_Box) (Var_13)), (MR_Word) (Store0_108), &conv0_Store_109);
  Store_109 = (MR_Word) (conv0_Store_109);
  Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 0))));
  Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 1))));
  Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 2))));
  Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 3))));
  Var_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 5))));
  Var_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 6))));
  {
    STATE_VARIABLE_SearchSpace_14_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_14_14, 0) = ((MR_Box) (Var_116));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_14_14, 1) = ((MR_Box) (Var_117));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_14_14, 2) = ((MR_Box) (Var_118));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_14_14, 3) = ((MR_Box) (Var_119));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_14_14, 4) = ((MR_Box) (Store_109));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_14_14, 5) = ((MR_Box) (Var_121));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_14_14, 6) = ((MR_Box) (Var_122));
  }
  Var_96 = ((MR_Word) ((MR_hl_field(0, Suspect_8, (MR_Integer) 4))));
  Var_95 = ((MR_Integer) ((MR_hl_field(0, Suspect_8, (MR_Integer) 5))));
  if ((Var_96 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_SearchSpace_19_19 = STATE_VARIABLE_SearchSpace_14_14;
  else
  {
    MR_Word TypeInfo_93_93;
    MR_Word Children_9 = ((MR_Word) ((MR_hl_field(1, Var_96, (MR_Integer) 0))));
    MR_Word Var_18;
    MR_Box conv2_STATE_VARIABLE_SearchSpace_19_19;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_8[1]));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (mdb__declarative_edt__assert_suspect_is_valid_4_p_0_1));
      MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_18, 3) = ((MR_Box) (TypeInfo_for_T_87));
      MR_hl_field(0, Var_18, 4) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(0, Var_18, 5) = ((MR_Box) (MR_mkword(1, &mdb__declarative_edt_scalar_common_1[6])));
    }
    {
      TypeInfo_93_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_93_93, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
      MR_hl_field(0, TypeInfo_93_93, 1) = ((MR_Box) (TypeInfo_for_T_87));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_93_93, Var_18, Children_9, ((MR_Box) (STATE_VARIABLE_SearchSpace_14_14)), &conv2_STATE_VARIABLE_SearchSpace_19_19);
    STATE_VARIABLE_SearchSpace_19_19 = ((MR_Word) (conv2_STATE_VARIABLE_SearchSpace_19_19));
  }
  Var_27 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Var_95);
  mdb__declarative_edt__add_weight_to_ancestors_4_p_0(TypeInfo_for_T_87, SuspectId_6, Var_27, STATE_VARIABLE_SearchSpace_19_19, &STATE_VARIABLE_SearchSpace_28_28);
  Var_30 = ((MR_Word) ((MR_hl_field(0, Suspect_8, (MR_Integer) 2))));
  switch (MR_tag((MR_Word) Var_30)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Var_30)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 1:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 4:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 5:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 6:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
      }
      break;
    case (MR_Integer) 1:
      succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
      break;
  }
  if (succeeded)
  {
    MR_Integer Lowest_10;
    MR_Word STATE_VARIABLE_SearchSpace_34_34;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Suspect_127;
    MR_Word Var_128;

    mdb__declarative_edt__propagate_status_upwards_6_p_0(TypeInfo_for_T_87, (MR_Word) ((MR_Unsigned) 24U), (MR_Word) (MR_mkword(1, &mdb__declarative_edt_scalar_common_1[10])), SuspectId_6, &Lowest_10, STATE_VARIABLE_SearchSpace_28_28, &STATE_VARIABLE_SearchSpace_34_34);
    Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 1))));
    Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 2))));
    Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 3))));
    Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 4))));
    Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 5))));
    Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 6))));
    mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_87, STATE_VARIABLE_SearchSpace_34_34, Lowest_10, &Suspect_127);
    Var_128 = ((MR_Word) ((MR_hl_field(0, Suspect_127, (MR_Integer) 2))));
    succeeded = (Var_128 == (MR_Word) ((MR_Unsigned) 8U));
    if (succeeded)
    {
      MR_Word Var_38;

      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (Lowest_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_SearchSpace_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_106));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_105));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_104));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_103));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_102));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_101));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_SearchSpace_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_106));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_105));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_104));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_103));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_102));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_101));
      }
  }
  else
    *STATE_VARIABLE_SearchSpace_12 = STATE_VARIABLE_SearchSpace_28_28;
}

static void MR_CALL 
mdb__declarative_edt__propagate_status_upwards_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_SearchSpace_12;

  mdb__declarative_edt__propagate_status_downwards_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_SearchSpace_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SearchSpace_12));
}

static MR_bool MR_CALL 
mdb__declarative_edt__propagate_status_upwards_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdb__declarative_edt__IntroducedFrom__pred__get_siblings__1517__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt__propagate_status_upwards_6_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_Word Status_7,
  MR_Word StopStatusSet_8,
  MR_Integer SuspectId_9,
  MR_Integer * Lowest_10,
  MR_Word STATE_VARIABLE_SearchSpace_0_16,
  MR_Word * STATE_VARIABLE_SearchSpace_17)
{
  MR_bool succeeded;
  MR_Word Suspect_12;
  MR_Word Var_60;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_47, STATE_VARIABLE_SearchSpace_0_16, SuspectId_9, &Suspect_12);
  Var_60 = ((MR_Word) ((MR_hl_field(0, Suspect_12, (MR_Integer) 0))));
  if ((Var_60 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Lowest_10 = SuspectId_9;
    *STATE_VARIABLE_SearchSpace_17 = STATE_VARIABLE_SearchSpace_0_16;
  }
  else
  {
    MR_Word TypeInfo_53_53;
    MR_Integer ParentId_13 = ((MR_Integer) ((MR_hl_field(1, Var_60, (MR_Integer) 0))));
    MR_Word Siblings_14;
    MR_Word Parent_15;
    MR_Word Var_19;
    MR_Word STATE_VARIABLE_SearchSpace_20_20;
    MR_Word Suspect_61;
    MR_Word Var_77;
    MR_Box conv1_STATE_VARIABLE_SearchSpace_20_20;
    MR_Word Var_21;

    mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_47, STATE_VARIABLE_SearchSpace_0_16, SuspectId_9, &Suspect_61);
    Var_77 = ((MR_Word) ((MR_hl_field(0, Suspect_61, (MR_Integer) 0))));
    if ((Var_77 == (MR_Word) ((MR_Unsigned) 0U)))
      Siblings_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer ParentId_62 = ((MR_Integer) ((MR_hl_field(1, Var_77, (MR_Integer) 0))));
      MR_Word Parent_63;
      MR_Word Var_79;

      mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_47, STATE_VARIABLE_SearchSpace_0_16, ParentId_62, &Parent_63);
      Var_79 = ((MR_Word) ((MR_hl_field(0, Parent_63, (MR_Integer) 4))));
      if ((Var_79 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_edt_scalar_common_1[13])));
          return;
        }
      else
      {
        MR_Word Children_64 = ((MR_Word) ((MR_hl_field(1, Var_79, (MR_Integer) 0))));

        if ((Children_64 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_edt_scalar_common_1[14])));
            return;
          }
        else
        {
          MR_Word Var_66;
          MR_Word Var_65;

          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_66, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_9[0]));
            MR_hl_field(0, Var_66, 1) = ((MR_Box) (mdb__declarative_edt__propagate_status_upwards_6_p_0_1));
            MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_66, 3) = ((MR_Box) (SuspectId_9));
          }
          mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_66, Children_64, &Var_65, &Siblings_14);
        }
      }
    }
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_8[1]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (mdb__declarative_edt__propagate_status_upwards_6_p_0_2));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (TypeInfo_for_T_47));
      MR_hl_field(0, Var_19, 4) = ((MR_Box) (Status_7));
      MR_hl_field(0, Var_19, 5) = ((MR_Box) (StopStatusSet_8));
    }
    {
      TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_53_53, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
      MR_hl_field(0, TypeInfo_53_53, 1) = ((MR_Box) (TypeInfo_for_T_47));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_53_53, Var_19, Siblings_14, ((MR_Box) (STATE_VARIABLE_SearchSpace_0_16)), &conv1_STATE_VARIABLE_SearchSpace_20_20);
    STATE_VARIABLE_SearchSpace_20_20 = ((MR_Word) (conv1_STATE_VARIABLE_SearchSpace_20_20));
    mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_47, STATE_VARIABLE_SearchSpace_20_20, ParentId_13, &Parent_15);
    Var_21 = ((MR_Word) ((MR_hl_field(0, Parent_15, (MR_Integer) 2))));
    succeeded = mercury__list__member_2_p_0((MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0), ((MR_Box) (Var_21)), StopStatusSet_8);
    if (succeeded)
    {
      *Lowest_10 = ParentId_13;
      *STATE_VARIABLE_SearchSpace_17 = STATE_VARIABLE_SearchSpace_20_20;
    }
    else
    {
      MR_Word TypeInfo_28_101;
      MR_Word STATE_VARIABLE_SearchSpace_22_22;
      MR_Word Var_23;
      MR_Word Store0_84;
      MR_Word Store_85;
      MR_Word Var_36;
      MR_Box Var_37;
      MR_Integer Var_39;
      MR_Word Var_40;
      MR_Integer Var_41;
      MR_Word conv2_Store_85;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_97;
      MR_Word Var_98;

      mdb__declarative_edt__propagate_status_upwards_6_p_0(TypeInfo_for_T_47, Status_7, StopStatusSet_8, ParentId_13, Lowest_10, STATE_VARIABLE_SearchSpace_20_20, &STATE_VARIABLE_SearchSpace_22_22);
      Var_36 = ((MR_Word) ((MR_hl_field(0, Parent_15, (MR_Integer) 0))));
      Var_37 = (MR_hl_field(0, Parent_15, (MR_Integer) 1));
      Var_39 = ((MR_Integer) ((MR_hl_field(0, Parent_15, (MR_Integer) 3))));
      Var_40 = ((MR_Word) ((MR_hl_field(0, Parent_15, (MR_Integer) 4))));
      Var_41 = ((MR_Integer) ((MR_hl_field(0, Parent_15, (MR_Integer) 5))));
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_23, 0) = ((MR_Box) (Var_36));
        MR_hl_field(0, Var_23, 1) = Var_37;
        MR_hl_field(0, Var_23, 2) = ((MR_Box) (Status_7));
        MR_hl_field(0, Var_23, 3) = ((MR_Box) (Var_39));
        MR_hl_field(0, Var_23, 4) = ((MR_Box) (Var_40));
        MR_hl_field(0, Var_23, 5) = ((MR_Box) (Var_41));
      }
      Store0_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_22_22, (MR_Integer) 4))));
      {
        TypeInfo_28_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_28_101, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
        MR_hl_field(0, TypeInfo_28_101, 1) = ((MR_Box) (TypeInfo_for_T_47));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_28_101, ParentId_13, ((MR_Box) (Var_23)), (MR_Word) (Store0_84), &conv2_Store_85);
      Store_85 = (MR_Word) (conv2_Store_85);
      Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_22_22, (MR_Integer) 0))));
      Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_22_22, (MR_Integer) 1))));
      Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_22_22, (MR_Integer) 2))));
      Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_22_22, (MR_Integer) 3))));
      Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_22_22, (MR_Integer) 5))));
      Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_22_22, (MR_Integer) 6))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_SearchSpace_17 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_92));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_93));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_94));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_95));
        MR_hl_field(0, base, 4) = ((MR_Box) (Store_85));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_97));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_98));
      }
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__get_path_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word SearchSpace_5,
  MR_Integer BottomId_6,
  MR_Integer TopId_7,
  MR_Word * Path_8)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_edt__get_path_5_p_0(TypeInfo_for_T_10, SearchSpace_5, BottomId_6, TopId_7, (MR_Word) ((MR_Unsigned) 0U), Path_8);
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_edt__get_path_5_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word SearchSpace_6,
  MR_Integer BottomId_7,
  MR_Integer TopId_8,
  MR_Word PathSoFar_9,
  MR_Word * Path_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (BottomId_7 == TopId_8);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Path_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (BottomId_7));
        MR_hl_field(1, base, 1) = ((MR_Box) (PathSoFar_9));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Bottom_11;
      MR_Integer ParentId_12;
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Integer next_value_of_BottomId_7;
      MR_Word next_value_of_PathSoFar_9;

      mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_20, SearchSpace_6, BottomId_7, &Bottom_11);
      Var_13 = ((MR_Word) ((MR_hl_field(0, Bottom_11, (MR_Integer) 0))));
      succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ParentId_12 = ((MR_Integer) ((MR_hl_field(1, Var_13, (MR_Integer) 0))));
        {
          Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_14, 0) = ((MR_Box) (BottomId_7));
          MR_hl_field(1, Var_14, 1) = ((MR_Box) (PathSoFar_9));
        }
        // direct tailcall eliminated
        ;
        next_value_of_BottomId_7 = ParentId_12;
        next_value_of_PathSoFar_9 = Var_14;
        BottomId_7 = next_value_of_BottomId_7;
        PathSoFar_9 = next_value_of_PathSoFar_9;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mdb__declarative_edt__travel_up_4_p_0(
  MR_Word TypeInfo_20_20,
  MR_Word SearchSpace_5,
  MR_Integer StartId_6,
  MR_Integer Distance_7,
  MR_Integer * FinishId_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Distance_7 > (MR_Integer) 0);
    MR_Integer ParentId_10;
    MR_Word Suspect_9;
    MR_Word Var_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_20_20, SearchSpace_5, StartId_6, &Suspect_9);
      Var_12 = ((MR_Word) ((MR_hl_field(0, Suspect_9, (MR_Integer) 0))));
      succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        ParentId_10 = ((MR_Integer) ((MR_hl_field(1, Var_12, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) Distance_7 - (MR_Unsigned) 1);
      MR_Integer next_value_of_StartId_6 = ParentId_10;
      MR_Integer next_value_of_Distance_7 = Var_13;

      // direct tailcall eliminated
      ;
      StartId_6 = next_value_of_StartId_6;
      Distance_7 = next_value_of_Distance_7;
      continue;
    }
    else
      *FinishId_8 = StartId_6;
    break;
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__suspect_in_excluded_complement_2_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word SearchSpace_3,
  MR_Integer SuspectId_4)
{
  MR_bool succeeded;
  MR_Word Suspect_5;
  MR_Word Var_6;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_13, SearchSpace_3, SuspectId_4, &Suspect_5);
  Var_6 = ((MR_Word) ((MR_hl_field(0, Suspect_5, (MR_Integer) 2))));
  switch (MR_tag((MR_Word) Var_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Var_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 1:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 4:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 5:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 6:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
      }
      break;
    case (MR_Integer) 1:
      succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mdb__declarative_edt__suspect_in_excluded_subtree_2_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word SearchSpace_3,
  MR_Integer SuspectId_4)
{
  MR_bool succeeded;
  MR_Word Suspect_5;
  MR_Word Var_6;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_13, SearchSpace_3, SuspectId_4, &Suspect_5);
  Var_6 = ((MR_Word) ((MR_hl_field(0, Suspect_5, (MR_Integer) 2))));
  switch (MR_tag((MR_Word) Var_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Var_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 2:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 3:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 4:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 5:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 6:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
      }
      break;
    case (MR_Integer) 1:
      succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mdb__declarative_edt__suspect_ignored_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word SearchSpace_3,
  MR_Integer SuspectId_4)
{
  MR_bool succeeded;
  MR_Word Suspect_5;
  MR_Word Var_6;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_12, SearchSpace_3, SuspectId_4, &Suspect_5);
  Var_6 = ((MR_Word) ((MR_hl_field(0, Suspect_5, (MR_Integer) 2))));
  succeeded = (Var_6 == (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
}

MR_bool MR_CALL 
mdb__declarative_edt__suspect_skipped_2_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word SearchSpace_3,
  MR_Integer SuspectId_4)
{
  MR_bool succeeded;
  MR_Word Suspect_5;
  MR_Word Var_7;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_13, SearchSpace_3, SuspectId_4, &Suspect_5);
  Var_7 = ((MR_Word) ((MR_hl_field(0, Suspect_5, (MR_Integer) 2))));
  succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 1);
  if (succeeded)
  {
  }
  return succeeded;
}

MR_bool MR_CALL 
mdb__declarative_edt__suspect_erroneous_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word SearchSpace_3,
  MR_Integer SuspectId_4)
{
  MR_bool succeeded;
  MR_Word Suspect_5;
  MR_Word Var_6;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_12, SearchSpace_3, SuspectId_4, &Suspect_5);
  Var_6 = ((MR_Word) ((MR_hl_field(0, Suspect_5, (MR_Integer) 2))));
  succeeded = (Var_6 == (MR_Word) ((MR_Unsigned) 8U));
  return succeeded;
}

MR_bool MR_CALL 
mdb__declarative_edt__suspect_inadmissible_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word SearchSpace_3,
  MR_Integer SuspectId_4)
{
  MR_bool succeeded;
  MR_Word Suspect_5;
  MR_Word Var_6;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_12, SearchSpace_3, SuspectId_4, &Suspect_5);
  Var_6 = ((MR_Word) ((MR_hl_field(0, Suspect_5, (MR_Integer) 2))));
  succeeded = (Var_6 == (MR_Word) ((MR_Unsigned) 12U));
  return succeeded;
}

MR_bool MR_CALL 
mdb__declarative_edt__suspect_correct_or_inadmissible_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word SearchSpace_3,
  MR_Integer SuspectId_4)
{
  MR_bool succeeded;
  MR_Word Suspect_5;
  MR_Word Status_6;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_12, SearchSpace_3, SuspectId_4, &Suspect_5);
  Status_6 = ((MR_Word) ((MR_hl_field(0, Suspect_5, (MR_Integer) 2))));
  if ((Status_6 == (MR_Word) ((MR_Unsigned) 4U)))
    succeeded = MR_TRUE;
  else
  if ((Status_6 == (MR_Word) ((MR_Unsigned) 12U)))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
mdb__declarative_edt__suspect_unknown_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word SearchSpace_3,
  MR_Integer SuspectId_4)
{
  MR_bool succeeded;
  MR_Word Suspect_5;
  MR_Word Var_6;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_12, SearchSpace_3, SuspectId_4, &Suspect_5);
  Var_6 = ((MR_Word) ((MR_hl_field(0, Suspect_5, (MR_Integer) 2))));
  succeeded = (Var_6 == (MR_Word) ((MR_Unsigned) 24U));
  return succeeded;
}

MR_Integer MR_CALL 
mdb__declarative_edt__suspect_depth_2_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word SearchSpace_4,
  MR_Integer SuspectId_5)
{
  MR_Integer HeadVar__3_3;
  MR_Word Suspect_6;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_12, SearchSpace_4, SuspectId_5, &Suspect_6);
  HeadVar__3_3 = ((MR_Integer) ((MR_hl_field(0, Suspect_6, (MR_Integer) 3))));
  return HeadVar__3_3;
}

MR_Integer MR_CALL 
mdb__declarative_edt__get_weight_2_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word SearchSpace_4,
  MR_Integer SuspectId_5)
{
  MR_Integer Weight_6;
  MR_Word Suspect_7;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_13, SearchSpace_4, SuspectId_5, &Suspect_7);
  Weight_6 = ((MR_Integer) ((MR_hl_field(0, Suspect_7, (MR_Integer) 5))));
  return Weight_6;
}

MR_Box MR_CALL 
mdb__declarative_edt__get_edt_node_2_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word SearchSpace_4,
  MR_Integer SuspectId_5)
{
  MR_Box Node_6;
  MR_Word Suspect_7;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_13, SearchSpace_4, SuspectId_5, &Suspect_7);
  Node_6 = (MR_hl_field(0, Suspect_7, (MR_Integer) 1));
  return Node_6;
}

MR_Word MR_CALL 
mdb__declarative_edt__get_proc_label_for_suspect_3_f_0(
  MR_Word TypeClassInfo_for_mercury_edt_9,
  MR_Box Store_5,
  MR_Word SearchSpace_6,
  MR_Integer SuspectId_7)
{
  MR_Word HeadVar__4_4;
  MR_Word TypeInfo_11_11;
  MR_Box Var_8;
  MR_Word Suspect_12;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_HeadVar__4_4;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_9, (MR_Integer) 2, &TypeInfo_11_11);
  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_11_11, SearchSpace_6, SuspectId_7, &Suspect_12);
  Var_8 = (MR_hl_field(0, Suspect_12, (MR_Integer) 1));
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_9, (MR_Integer) 0)), (MR_Integer) 18))));
  conv1_HeadVar__4_4 = func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_9)), Store_5, Var_8);
  HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
  return HeadVar__4_4;
}

MR_bool MR_CALL 
mdb__declarative_edt__non_ignored_descendants_6_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_33,
  MR_Box Store_1,
  MR_Word Oracle_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_SearchSpace_0_4,
  MR_Word * STATE_VARIABLE_SearchSpace_5,
  MR_Word * HeadVar__6_6)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_SearchSpace_5 = STATE_VARIABLE_SearchSpace_0_4;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeInfo_35_35;
    MR_Word TypeCtorInfo_36_36;
    MR_Integer SuspectId_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word SuspectIds_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Suspect_18;
    MR_Word Descendants1_20;
    MR_Word Descendants2_21;
    MR_Word STATE_VARIABLE_SearchSpace_26_26;
    MR_Word Var_24;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_33, (MR_Integer) 2, &TypeInfo_35_35);
    mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_35_35, STATE_VARIABLE_SearchSpace_0_4, SuspectId_14, &Suspect_18);
    Var_24 = ((MR_Word) ((MR_hl_field(0, Suspect_18, (MR_Integer) 2))));
    succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word Children_19;
      MR_Word STATE_VARIABLE_SearchSpace_25_25;

      succeeded = mdb__declarative_edt__children_6_p_0(TypeClassInfo_for_mercury_edt_33, Store_1, Oracle_2, SuspectId_14, STATE_VARIABLE_SearchSpace_0_4, &STATE_VARIABLE_SearchSpace_25_25, &Children_19);
      if (succeeded)
        succeeded = mdb__declarative_edt__non_ignored_descendants_6_p_0(TypeClassInfo_for_mercury_edt_33, Store_1, Oracle_2, Children_19, STATE_VARIABLE_SearchSpace_25_25, &STATE_VARIABLE_SearchSpace_26_26, &Descendants1_20);
    }
    else
    {
      {
        Descendants1_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Descendants1_20, 0) = ((MR_Box) (SuspectId_14));
        MR_hl_field(1, Descendants1_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      STATE_VARIABLE_SearchSpace_26_26 = STATE_VARIABLE_SearchSpace_0_4;
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = mdb__declarative_edt__non_ignored_descendants_6_p_0(TypeClassInfo_for_mercury_edt_33, Store_1, Oracle_2, SuspectIds_15, STATE_VARIABLE_SearchSpace_26_26, STATE_VARIABLE_SearchSpace_5, &Descendants2_21);
      if (succeeded)
      {
        TypeCtorInfo_36_36 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
        *HeadVar__6_6 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_36_36, Descendants1_20, Descendants2_21);
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mdb__declarative_edt__children_6_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_41,
  MR_Box Store_7,
  MR_Word Oracle_8,
  MR_Integer SuspectId_9,
  MR_Word STATE_VARIABLE_SearchSpace_0_15,
  MR_Word * STATE_VARIABLE_SearchSpace_16,
  MR_Word * Children_11)
{
  MR_bool succeeded;
  MR_Word TypeInfo_43_43;
  MR_Word Suspect_12;
  MR_Word Var_45;
  MR_Box Var_48;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_41, (MR_Integer) 2, &TypeInfo_43_43);
  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_43_43, STATE_VARIABLE_SearchSpace_0_15, SuspectId_9, &Suspect_12);
  Var_48 = (MR_hl_field(0, Suspect_12, (MR_Integer) 1));
  Var_45 = ((MR_Word) ((MR_hl_field(0, Suspect_12, (MR_Integer) 4))));
  if ((Var_45 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word EDTChildren_13;
    MR_Word NewStatus_14;
    MR_Word Var_20;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_41, (MR_Integer) 0)), (MR_Integer) 8))));
    MR_Box conv1_EDTChildren_13;

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_41)), Store_7, Var_48, &conv1_EDTChildren_13);
    if (succeeded)
    {
      EDTChildren_13 = ((MR_Word) (conv1_EDTChildren_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Var_20 = ((MR_Word) ((MR_hl_field(0, Suspect_12, (MR_Integer) 2))));
      switch (MR_tag((MR_Word) Var_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Var_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              NewStatus_14 = (MR_Word) ((MR_Unsigned) 24U);
              break;
            case (MR_Integer) 1:
              NewStatus_14 = (MR_Word) ((MR_Unsigned) 16U);
              break;
            case (MR_Integer) 2:
              NewStatus_14 = (MR_Word) ((MR_Unsigned) 24U);
              break;
            case (MR_Integer) 3:
              NewStatus_14 = (MR_Word) ((MR_Unsigned) 16U);
              break;
            case (MR_Integer) 4:
              NewStatus_14 = (MR_Word) ((MR_Unsigned) 16U);
              break;
            case (MR_Integer) 5:
              NewStatus_14 = (MR_Word) ((MR_Unsigned) 20U);
              break;
            case (MR_Integer) 6:
              NewStatus_14 = (MR_Word) ((MR_Unsigned) 24U);
              break;
          }
          break;
        case (MR_Integer) 1:
          NewStatus_14 = (MR_Word) ((MR_Unsigned) 24U);
          break;
      }
      mdb__declarative_edt__add_children_8_p_0(TypeClassInfo_for_mercury_edt_41, Store_7, Oracle_8, EDTChildren_13, SuspectId_9, NewStatus_14, STATE_VARIABLE_SearchSpace_0_15, STATE_VARIABLE_SearchSpace_16, Children_11);
      succeeded = MR_TRUE;
    }
  }
  else
  {
    *Children_11 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 0))));
    *STATE_VARIABLE_SearchSpace_16 = STATE_VARIABLE_SearchSpace_0_15;
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt__add_children_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_SearchSpace_17;

  mdb__declarative_edt__adjust_suspect_status_from_oracle_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_SearchSpace_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SearchSpace_17));
}

static void MR_CALL 
mdb__declarative_edt__add_children_8_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_88,
  MR_Box Store_9,
  MR_Word Oracle_10,
  MR_Word EDTChildren_11,
  MR_Integer SuspectId_12,
  MR_Word Status_13,
  MR_Word STATE_VARIABLE_SearchSpace_0_24,
  MR_Word * STATE_VARIABLE_SearchSpace_25,
  MR_Word * Children_15)
{
  MR_bool succeeded;
  MR_Word TypeInfo_90_90;
  MR_Word TypeInfo_91_91;
  MR_Word TypeInfo_92_92;
  MR_Word TypeInfo_97_97;
  MR_Word TypeInfo_99_99;
  MR_Word Counter0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_24, (MR_Integer) 2))));
  MR_Word Suspect0_17;
  MR_Integer Depth_18;
  MR_Word Counter_19;
  MR_Word Suspect_20;
  MR_Word SuspectWithChildren_21;
  MR_Integer Var_26;
  MR_Word STATE_VARIABLE_SearchSpace_28_28;
  MR_Word STATE_VARIABLE_SearchSpace_29_29;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_SearchSpace_31_31;
  MR_Word Var_32;
  MR_Word STATE_VARIABLE_SearchSpace_33_33;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Box Var_62;
  MR_Word Var_63;
  MR_Integer Var_64;
  MR_Integer Var_66;
  MR_Box conv1_STATE_VARIABLE_SearchSpace_33_33;
  MR_Box Var_68;
  MR_Word Var_34;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &TypeInfo_90_90);
  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_90_90, STATE_VARIABLE_SearchSpace_0_24, SuspectId_12, &Suspect0_17);
  Var_26 = ((MR_Integer) ((MR_hl_field(0, Suspect0_17, (MR_Integer) 3))));
  Depth_18 = (MR_Integer) ((MR_Unsigned) Var_26 + (MR_Unsigned) 1);
  mdb__declarative_edt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_p_0(TypeClassInfo_for_mercury_edt_88, Store_9, EDTChildren_11, SuspectId_12, Status_13, Depth_18, STATE_VARIABLE_SearchSpace_0_24, &STATE_VARIABLE_SearchSpace_28_28, Counter0_16, &Counter_19, Children_15);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &TypeInfo_91_91);
  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_91_91, STATE_VARIABLE_SearchSpace_28_28, SuspectId_12, &Suspect_20);
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 0))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 1))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 3))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 4))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 5))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 6))));
  {
    STATE_VARIABLE_SearchSpace_29_29 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_29_29, 0) = ((MR_Box) (Var_54));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_29_29, 1) = ((MR_Box) (Var_55));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_29_29, 2) = ((MR_Box) (Counter_19));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_29_29, 3) = ((MR_Box) (Var_57));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_29_29, 4) = ((MR_Box) (Var_58));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_29_29, 5) = ((MR_Box) (Var_59));
    MR_hl_field(0, STATE_VARIABLE_SearchSpace_29_29, 6) = ((MR_Box) (Var_60));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (*Children_15));
  }
  Var_61 = ((MR_Word) ((MR_hl_field(0, Suspect_20, (MR_Integer) 0))));
  Var_62 = (MR_hl_field(0, Suspect_20, (MR_Integer) 1));
  Var_63 = ((MR_Word) ((MR_hl_field(0, Suspect_20, (MR_Integer) 2))));
  Var_64 = ((MR_Integer) ((MR_hl_field(0, Suspect_20, (MR_Integer) 3))));
  Var_66 = ((MR_Integer) ((MR_hl_field(0, Suspect_20, (MR_Integer) 5))));
  {
    SuspectWithChildren_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SuspectWithChildren_21, 0) = ((MR_Box) (Var_61));
    MR_hl_field(0, SuspectWithChildren_21, 1) = Var_62;
    MR_hl_field(0, SuspectWithChildren_21, 2) = ((MR_Box) (Var_63));
    MR_hl_field(0, SuspectWithChildren_21, 3) = ((MR_Box) (Var_64));
    MR_hl_field(0, SuspectWithChildren_21, 4) = ((MR_Box) (Var_30));
    MR_hl_field(0, SuspectWithChildren_21, 5) = ((MR_Box) (Var_66));
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &TypeInfo_92_92);
  mdb__declarative_edt__set_suspect_4_p_0(TypeInfo_92_92, SuspectId_12, SuspectWithChildren_21, STATE_VARIABLE_SearchSpace_29_29, &STATE_VARIABLE_SearchSpace_31_31);
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_8[0]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (mdb__declarative_edt__add_children_8_p_0_1));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (TypeClassInfo_for_mercury_edt_88));
    MR_hl_field(0, Var_32, 4) = Store_9;
    MR_hl_field(0, Var_32, 5) = ((MR_Box) (Oracle_10));
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &TypeInfo_97_97);
  {
    TypeInfo_99_99 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_99_99, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
    MR_hl_field(0, TypeInfo_99_99, 1) = ((MR_Box) (TypeInfo_97_97));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_99_99, (MR_Word) (Var_32), *Children_15, ((MR_Box) (STATE_VARIABLE_SearchSpace_31_31)), &conv1_STATE_VARIABLE_SearchSpace_33_33);
  STATE_VARIABLE_SearchSpace_33_33 = ((MR_Word) (conv1_STATE_VARIABLE_SearchSpace_33_33));
  Var_68 = (MR_hl_field(0, Suspect_20, (MR_Integer) 1));
  Var_34 = ((MR_Word) ((MR_hl_field(0, Suspect_20, (MR_Integer) 2))));
  succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word TypeInfo_100_100;
    MR_Word TypeInfo_101_101;
    MR_Integer Weight_22;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_SearchSpace_39_39;
    MR_Integer Var_40;
    MR_Integer Var_42;
    MR_Integer Var_23;
    MR_Word Var_77;
    MR_Box Var_78;
    MR_Word Var_79;
    MR_Integer Var_80;
    MR_Word Var_81;

    mdb__declarative_edt__calc_suspect_weight_7_p_0(TypeClassInfo_for_mercury_edt_88, Store_9, Var_68, Var_30, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_SearchSpace_33_33, &Weight_22, &Var_23);
    Var_77 = ((MR_Word) ((MR_hl_field(0, SuspectWithChildren_21, (MR_Integer) 0))));
    Var_78 = (MR_hl_field(0, SuspectWithChildren_21, (MR_Integer) 1));
    Var_79 = ((MR_Word) ((MR_hl_field(0, SuspectWithChildren_21, (MR_Integer) 2))));
    Var_80 = ((MR_Integer) ((MR_hl_field(0, SuspectWithChildren_21, (MR_Integer) 3))));
    Var_81 = ((MR_Word) ((MR_hl_field(0, SuspectWithChildren_21, (MR_Integer) 4))));
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (Var_77));
      MR_hl_field(0, Var_38, 1) = Var_78;
      MR_hl_field(0, Var_38, 2) = ((MR_Box) (Var_79));
      MR_hl_field(0, Var_38, 3) = ((MR_Box) (Var_80));
      MR_hl_field(0, Var_38, 4) = ((MR_Box) (Var_81));
      MR_hl_field(0, Var_38, 5) = ((MR_Box) (Weight_22));
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &TypeInfo_100_100);
    mdb__declarative_edt__set_suspect_4_p_0(TypeInfo_100_100, SuspectId_12, Var_38, STATE_VARIABLE_SearchSpace_33_33, &STATE_VARIABLE_SearchSpace_39_39);
    Var_42 = ((MR_Integer) ((MR_hl_field(0, Suspect_20, (MR_Integer) 5))));
    Var_40 = (MR_Integer) ((MR_Unsigned) Weight_22 - (MR_Unsigned) Var_42);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &TypeInfo_101_101);
    mdb__declarative_edt__add_weight_to_ancestors_4_p_0(TypeInfo_101_101, SuspectId_12, Var_40, STATE_VARIABLE_SearchSpace_39_39, STATE_VARIABLE_SearchSpace_25);
  }
  else
    *STATE_VARIABLE_SearchSpace_25 = STATE_VARIABLE_SearchSpace_33_33;
}

static void MR_CALL 
mdb__declarative_edt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_63,
  MR_Box Store_1,
  MR_Word HeadVar__3_3,
  MR_Integer ParentId_4,
  MR_Word Status_5,
  MR_Integer Depth_6,
  MR_Word STATE_VARIABLE_SearchSpace_0_7,
  MR_Word * STATE_VARIABLE_SearchSpace_8,
  MR_Word STATE_VARIABLE_Counter_0_9,
  MR_Word * STATE_VARIABLE_Counter_10,
  MR_Word * HeadVar__11_11)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Counter_10 = STATE_VARIABLE_Counter_0_9;
    *STATE_VARIABLE_SearchSpace_8 = STATE_VARIABLE_SearchSpace_0_7;
  }
  else
  {
    MR_Word TypeInfo_66_66;
    MR_Word TypeInfo_68_68;
    MR_Word TypeInfo_69_69;
    MR_Box EDTChild_25 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
    MR_Word EDTChildren_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer NextId_33;
    MR_Integer Weight_34;
    MR_Integer ExcessWeight_35;
    MR_Word SuspectStore_36;
    MR_Word OtherChildren_37;
    MR_Word STATE_VARIABLE_Counter_42_42;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word STATE_VARIABLE_SearchSpace_48_48;
    MR_Word STATE_VARIABLE_SearchSpace_49_49;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_62;

    mercury__counter__allocate_3_p_0(&NextId_33, STATE_VARIABLE_Counter_0_9, &STATE_VARIABLE_Counter_42_42);
    mdb__declarative_edt__calc_suspect_weight_7_p_0(TypeClassInfo_for_mercury_edt_63, Store_1, EDTChild_25, (MR_Word) ((MR_Unsigned) 0U), Status_5, STATE_VARIABLE_SearchSpace_0_7, &Weight_34, &ExcessWeight_35);
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (ParentId_4));
    }
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) (Var_46));
      MR_hl_field(0, Var_44, 1) = EDTChild_25;
      MR_hl_field(0, Var_44, 2) = ((MR_Box) (Status_5));
      MR_hl_field(0, Var_44, 3) = ((MR_Box) (Depth_6));
      MR_hl_field(0, Var_44, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_44, 5) = ((MR_Box) (Weight_34));
    }
    Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 4))));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_63, (MR_Integer) 2, &TypeInfo_66_66);
    {
      TypeInfo_68_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_68_68, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(0, TypeInfo_68_68, 1) = ((MR_Box) (TypeInfo_66_66));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_68_68, NextId_33, ((MR_Box) (Var_44)), Var_45, &SuspectStore_36);
    Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 0))));
    Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 1))));
    Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 2))));
    Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 3))));
    Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 5))));
    Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 6))));
    {
      STATE_VARIABLE_SearchSpace_48_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_48_48, 0) = ((MR_Box) (Var_56));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_48_48, 1) = ((MR_Box) (Var_57));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_48_48, 2) = ((MR_Box) (Var_58));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_48_48, 3) = ((MR_Box) (Var_59));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_48_48, 4) = ((MR_Box) (SuspectStore_36));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_48_48, 5) = ((MR_Box) (Var_61));
      MR_hl_field(0, STATE_VARIABLE_SearchSpace_48_48, 6) = ((MR_Box) (Var_62));
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_63, (MR_Integer) 2, &TypeInfo_69_69);
    mdb__declarative_edt__add_weight_to_ancestors_4_p_0(TypeInfo_69_69, NextId_33, ExcessWeight_35, STATE_VARIABLE_SearchSpace_48_48, &STATE_VARIABLE_SearchSpace_49_49);
    mdb__declarative_edt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_p_0(TypeClassInfo_for_mercury_edt_63, Store_1, EDTChildren_26, ParentId_4, Status_5, Depth_6, STATE_VARIABLE_SearchSpace_49_49, STATE_VARIABLE_SearchSpace_8, STATE_VARIABLE_Counter_42_42, STATE_VARIABLE_Counter_10, &OtherChildren_37);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__11_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (NextId_33));
      MR_hl_field(1, base, 1) = ((MR_Box) (OtherChildren_37));
    }
  }
}

static void MR_CALL 
mdb__declarative_edt__add_weight_to_ancestors_4_p_0(
  MR_Word TypeInfo_for_T_41,
  MR_Integer SuspectId_5,
  MR_Integer Weight_6,
  MR_Word STATE_VARIABLE_SearchSpace_0_12,
  MR_Word * STATE_VARIABLE_SearchSpace_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Weight_6 != (MR_Integer) 0);
    MR_Integer ParentId_9;
    MR_Word Suspect_8;
    MR_Word Var_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_41, STATE_VARIABLE_SearchSpace_0_12, SuspectId_5, &Suspect_8);
      Var_14 = ((MR_Word) ((MR_hl_field(0, Suspect_8, (MR_Integer) 0))));
      succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        ParentId_9 = ((MR_Integer) ((MR_hl_field(1, Var_14, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word TypeInfo_28_59;
      MR_Word Parent_10;
      MR_Word Var_15;
      MR_Word STATE_VARIABLE_SearchSpace_16_16;
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Word Var_19;
      MR_Word Var_25;
      MR_Box Var_26;
      MR_Word Var_27;
      MR_Integer Var_28;
      MR_Word Var_29;
      MR_Word Store0_42;
      MR_Word Store_43;
      MR_Word conv0_Store_43;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_55;
      MR_Word Var_56;

      mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_41, STATE_VARIABLE_SearchSpace_0_12, ParentId_9, &Parent_10);
      Var_25 = ((MR_Word) ((MR_hl_field(0, Parent_10, (MR_Integer) 0))));
      Var_26 = (MR_hl_field(0, Parent_10, (MR_Integer) 1));
      Var_27 = ((MR_Word) ((MR_hl_field(0, Parent_10, (MR_Integer) 2))));
      Var_28 = ((MR_Integer) ((MR_hl_field(0, Parent_10, (MR_Integer) 3))));
      Var_29 = ((MR_Word) ((MR_hl_field(0, Parent_10, (MR_Integer) 4))));
      Var_18 = ((MR_Integer) ((MR_hl_field(0, Parent_10, (MR_Integer) 5))));
      Var_17 = (MR_Integer) ((MR_Unsigned) Var_18 + (MR_Unsigned) Weight_6);
      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_15, 0) = ((MR_Box) (Var_25));
        MR_hl_field(0, Var_15, 1) = Var_26;
        MR_hl_field(0, Var_15, 2) = ((MR_Box) (Var_27));
        MR_hl_field(0, Var_15, 3) = ((MR_Box) (Var_28));
        MR_hl_field(0, Var_15, 4) = ((MR_Box) (Var_29));
        MR_hl_field(0, Var_15, 5) = ((MR_Box) (Var_17));
      }
      Store0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 4))));
      {
        TypeInfo_28_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_28_59, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
        MR_hl_field(0, TypeInfo_28_59, 1) = ((MR_Box) (TypeInfo_for_T_41));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_28_59, ParentId_9, ((MR_Box) (Var_15)), (MR_Word) (Store0_42), &conv0_Store_43);
      Store_43 = (MR_Word) (conv0_Store_43);
      Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 0))));
      Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 1))));
      Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 2))));
      Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 3))));
      Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 5))));
      Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 6))));
      {
        STATE_VARIABLE_SearchSpace_16_16 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_16_16, 0) = ((MR_Box) (Var_50));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_16_16, 1) = ((MR_Box) (Var_51));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_16_16, 2) = ((MR_Box) (Var_52));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_16_16, 3) = ((MR_Box) (Var_53));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_16_16, 4) = ((MR_Box) (Store_43));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_16_16, 5) = ((MR_Box) (Var_55));
        MR_hl_field(0, STATE_VARIABLE_SearchSpace_16_16, 6) = ((MR_Box) (Var_56));
      }
      Var_19 = ((MR_Word) ((MR_hl_field(0, Parent_10, (MR_Integer) 2))));
      switch (MR_tag((MR_Word) Var_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Var_19)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer next_value_of_SuspectId_5 = ParentId_9;
                MR_Word next_value_of_STATE_VARIABLE_SearchSpace_0_12 = STATE_VARIABLE_SearchSpace_16_16;

                // direct tailcall eliminated
                ;
                SuspectId_5 = next_value_of_SuspectId_5;
                STATE_VARIABLE_SearchSpace_0_12 = next_value_of_STATE_VARIABLE_SearchSpace_0_12;
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer next_value_of_SuspectId_5 = ParentId_9;
                MR_Word next_value_of_STATE_VARIABLE_SearchSpace_0_12 = STATE_VARIABLE_SearchSpace_16_16;

                // direct tailcall eliminated
                ;
                SuspectId_5 = next_value_of_SuspectId_5;
                STATE_VARIABLE_SearchSpace_0_12 = next_value_of_STATE_VARIABLE_SearchSpace_0_12;
                continue;
              }
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_SearchSpace_13 = STATE_VARIABLE_SearchSpace_16_16;
              break;
            case (MR_Integer) 3:
              {
                MR_Integer next_value_of_SuspectId_5 = ParentId_9;
                MR_Word next_value_of_STATE_VARIABLE_SearchSpace_0_12 = STATE_VARIABLE_SearchSpace_16_16;

                // direct tailcall eliminated
                ;
                SuspectId_5 = next_value_of_SuspectId_5;
                STATE_VARIABLE_SearchSpace_0_12 = next_value_of_STATE_VARIABLE_SearchSpace_0_12;
                continue;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer next_value_of_SuspectId_5 = ParentId_9;
                MR_Word next_value_of_STATE_VARIABLE_SearchSpace_0_12 = STATE_VARIABLE_SearchSpace_16_16;

                // direct tailcall eliminated
                ;
                SuspectId_5 = next_value_of_SuspectId_5;
                STATE_VARIABLE_SearchSpace_0_12 = next_value_of_STATE_VARIABLE_SearchSpace_0_12;
                continue;
              }
              break;
            case (MR_Integer) 5:
              *STATE_VARIABLE_SearchSpace_13 = STATE_VARIABLE_SearchSpace_16_16;
              break;
            case (MR_Integer) 6:
              {
                MR_Integer next_value_of_SuspectId_5 = ParentId_9;
                MR_Word next_value_of_STATE_VARIABLE_SearchSpace_0_12 = STATE_VARIABLE_SearchSpace_16_16;

                // direct tailcall eliminated
                ;
                SuspectId_5 = next_value_of_SuspectId_5;
                STATE_VARIABLE_SearchSpace_0_12 = next_value_of_STATE_VARIABLE_SearchSpace_0_12;
                continue;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer next_value_of_SuspectId_5 = ParentId_9;
            MR_Word next_value_of_STATE_VARIABLE_SearchSpace_0_12 = STATE_VARIABLE_SearchSpace_16_16;

            // direct tailcall eliminated
            ;
            SuspectId_5 = next_value_of_SuspectId_5;
            STATE_VARIABLE_SearchSpace_0_12 = next_value_of_STATE_VARIABLE_SearchSpace_0_12;
            continue;
          }
          break;
      }
    }
    else
      *STATE_VARIABLE_SearchSpace_13 = STATE_VARIABLE_SearchSpace_0_12;
    break;
  }
}

static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Integer conv12_HeadVar__4_76;

  mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1297__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv12_HeadVar__4_76);
  *wrapper_arg_3 = ((MR_Box) (conv12_HeadVar__4_76));
}

static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv9_HeadVar__5_5;
  MR_Integer conv8_HeadVar__7_7;

  mdb__declarative_edt__add_original_weight_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), (MR_hl_field(0, closure, (MR_Integer) 5)), wrapper_arg_1, ((MR_Integer) (wrapper_arg_2)), &conv9_HeadVar__5_5, ((MR_Integer) (wrapper_arg_4)), &conv8_HeadVar__7_7);
  *wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__5_5));
  *wrapper_arg_5 = ((MR_Box) (conv8_HeadVar__7_7));
}

static MR_Box MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;

  wrapper_arg_2 = mdb__declarative_edt__IntroducedFrom__func__calc_suspect_weight__1292__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return wrapper_arg_2;
}

static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__4_59;

  mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1290__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), &conv6_HeadVar__4_59);
  *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__4_59));
}

static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_57,
  MR_Box Store_8,
  MR_Box Node_9,
  MR_Word MaybeChildren_10,
  MR_Word Status_11,
  MR_Word SearchSpace_12,
  MR_Integer * Weight_13,
  MR_Integer * ExcessWeight_14)
{
  MR_bool succeeded;
  MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, SearchSpace_12, (MR_Integer) 6))));

  if ((Var_79 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Weight_13 = (MR_Integer) 0;
    *ExcessWeight_14 = (MR_Integer) 0;
  }
  else
  {
    MR_Word Weighting_15 = ((MR_Word) ((MR_hl_field(1, Var_79, (MR_Integer) 0))));

    if ((Status_11 == (MR_Word) ((MR_Unsigned) 4U)))
      succeeded = MR_TRUE;
    else
    if ((Status_11 == (MR_Word) ((MR_Unsigned) 12U)))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      *Weight_13 = (MR_Integer) 0;
      *ExcessWeight_14 = (MR_Integer) 0;
    }
    else
    {
      MR_Integer OriginalWeight_16;

      switch (Weighting_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_57, (MR_Integer) 0)), (MR_Integer) 15))));
            MR_Box conv2_OriginalWeight_16;
            MR_Box conv1_ExcessWeight_14;

            func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_57)), Store_8, Node_9, &conv2_OriginalWeight_16, &conv1_ExcessWeight_14);
            OriginalWeight_16 = ((MR_Integer) (conv2_OriginalWeight_16));
            *ExcessWeight_14 = ((MR_Integer) (conv1_ExcessWeight_14));
          }
          break;
        case (MR_Integer) 1:
          {
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_57, (MR_Integer) 0)), (MR_Integer) 16))));
            MR_Box conv5_OriginalWeight_16;
            MR_Box conv4_ExcessWeight_14;

            func_3(((MR_Box) (TypeClassInfo_for_mercury_edt_57)), Store_8, Node_9, &conv5_OriginalWeight_16, &conv4_ExcessWeight_14);
            OriginalWeight_16 = ((MR_Integer) (conv5_OriginalWeight_16));
            *ExcessWeight_14 = ((MR_Integer) (conv4_ExcessWeight_14));
          }
          break;
      }
      if ((MaybeChildren_10 == (MR_Word) ((MR_Unsigned) 0U)))
        *Weight_13 = OriginalWeight_16;
      else
      {
        MR_Word TypeInfo_64_64;
        MR_Word TypeInfo_66_66;
        MR_Word TypeInfo_67_67;
        MR_Word TypeInfo_73_73;
        MR_Word Children_17 = ((MR_Word) ((MR_hl_field(1, MaybeChildren_10, (MR_Integer) 0))));
        MR_Word ChildrenSuspects_18;
        MR_Word ChildrenNodes_19;
        MR_Integer ChildrenOriginalWeight_22;
        MR_Integer ChildrenExcess_23;
        MR_Integer ChildrenWeight_24;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_31;
        MR_Word Var_34;
        MR_Word conv7_ChildrenSuspects_18;
        MR_Box conv11_ChildrenOriginalWeight_22;
        MR_Box conv10_ChildrenExcess_23;
        MR_Box conv13_ChildrenWeight_24;

        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_27, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_5[0]));
          MR_hl_field(0, Var_27, 1) = ((MR_Box) (mdb__declarative_edt__calc_suspect_weight_7_p_0_1));
          MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_27, 3) = ((MR_Box) (TypeClassInfo_for_mercury_edt_57));
          MR_hl_field(0, Var_27, 4) = ((MR_Box) (SearchSpace_12));
        }
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &TypeInfo_64_64);
        {
          TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_66_66, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
          MR_hl_field(0, TypeInfo_66_66, 1) = ((MR_Box) (TypeInfo_64_64));
        }
        mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_66_66, (MR_Word) (Var_27), Children_17, &conv7_ChildrenSuspects_18);
        ChildrenSuspects_18 = (MR_Word) (conv7_ChildrenSuspects_18);
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &TypeInfo_67_67);
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_6[0]));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (mdb__declarative_edt__calc_suspect_weight_7_p_0_2));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_28, 3) = ((MR_Box) (TypeClassInfo_for_mercury_edt_57));
        }
        ChildrenNodes_19 = mercury__list__map_2_f_0(TypeInfo_66_66, TypeInfo_67_67, Var_28, ChildrenSuspects_18);
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_7[0]));
          MR_hl_field(0, Var_31, 1) = ((MR_Box) (mdb__declarative_edt__calc_suspect_weight_7_p_0_3));
          MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_31, 3) = ((MR_Box) (TypeClassInfo_for_mercury_edt_57));
          MR_hl_field(0, Var_31, 4) = ((MR_Box) (Weighting_15));
          MR_hl_field(0, Var_31, 5) = Store_8;
        }
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &TypeInfo_73_73);
        mercury__list__foldl2_6_p_0(TypeInfo_73_73, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_31, ChildrenNodes_19, ((MR_Box) ((MR_Integer) 0)), &conv11_ChildrenOriginalWeight_22, ((MR_Box) ((MR_Integer) 0)), &conv10_ChildrenExcess_23);
        ChildrenOriginalWeight_22 = ((MR_Integer) (conv11_ChildrenOriginalWeight_22));
        ChildrenExcess_23 = ((MR_Integer) (conv10_ChildrenExcess_23));
        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_34, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_5[1]));
          MR_hl_field(0, Var_34, 1) = ((MR_Box) (mdb__declarative_edt__calc_suspect_weight_7_p_0_4));
          MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_34, 3) = ((MR_Box) (TypeClassInfo_for_mercury_edt_57));
        }
        mercury__list__foldl_4_p_0(TypeInfo_66_66, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_34, ChildrenSuspects_18, ((MR_Box) ((MR_Integer) 0)), &conv13_ChildrenWeight_24);
        ChildrenWeight_24 = ((MR_Integer) (conv13_ChildrenWeight_24));
        switch (MR_tag((MR_Word) Status_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Status_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Weight_13 = (MR_Integer) ((MR_Unsigned) ChildrenWeight_24 + (MR_Unsigned) ChildrenExcess_23);
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
                {
                  MR_Integer Var_36;
                  MR_Integer Var_37 = (MR_Integer) ((MR_Unsigned) OriginalWeight_16 - (MR_Unsigned) ChildrenOriginalWeight_22);

                  Var_36 = (MR_Integer) ((MR_Unsigned) Var_37 + (MR_Unsigned) ChildrenWeight_24);
                  *Weight_13 = (MR_Integer) ((MR_Unsigned) Var_36 + (MR_Unsigned) ChildrenExcess_23);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Var_36;
              MR_Integer Var_37 = (MR_Integer) ((MR_Unsigned) OriginalWeight_16 - (MR_Unsigned) ChildrenOriginalWeight_22);

              Var_36 = (MR_Integer) ((MR_Unsigned) Var_37 + (MR_Unsigned) ChildrenWeight_24);
              *Weight_13 = (MR_Integer) ((MR_Unsigned) Var_36 + (MR_Unsigned) ChildrenExcess_23);
            }
            break;
        }
      }
    }
  }
}

static void MR_CALL 
mdb__declarative_edt__set_suspect_4_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Integer SuspectId_5,
  MR_Word Suspect_6,
  MR_Word STATE_VARIABLE_SearchSpace_0_10,
  MR_Word * STATE_VARIABLE_SearchSpace_11)
{
  MR_Word TypeInfo_28_28;
  MR_Word Store0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 4))));
  MR_Word Store_9;
  MR_Word conv0_Store_9;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_24;

  {
    TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_28_28, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
    MR_hl_field(0, TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_for_T_25));
  }
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_28_28, SuspectId_5, ((MR_Box) (Suspect_6)), (MR_Word) (Store0_8), &conv0_Store_9);
  Store_9 = (MR_Word) (conv0_Store_9);
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 0))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 1))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 2))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 3))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 5))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_SearchSpace_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 4) = ((MR_Box) (Store_9));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_24));
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__parent_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word SearchSpace_4,
  MR_Integer SuspectId_5,
  MR_Integer * ParentId_6)
{
  MR_bool succeeded;
  MR_Word Parent_7;
  MR_Word Var_8;

  mdb__declarative_edt__lookup_suspect_3_p_0(TypeInfo_for_T_14, SearchSpace_4, SuspectId_5, &Parent_7);
  Var_8 = ((MR_Word) ((MR_hl_field(0, Parent_7, (MR_Integer) 0))));
  succeeded = (Var_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *ParentId_6 = ((MR_Integer) ((MR_hl_field(1, Var_8, (MR_Integer) 0))));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt__lookup_suspect_3_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word SearchSpace_4,
  MR_Integer SuspectId_5,
  MR_Word * Suspect_6)
{
  MR_bool succeeded;
  MR_Word FoundSuspect_7;
  MR_Word TypeInfo_21_21;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, SearchSpace_4, (MR_Integer) 4))));
  MR_Box conv0_FoundSuspect_7;

  {
    TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
    MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_21_21, (MR_Word) (Var_8), SuspectId_5, &conv0_FoundSuspect_7);
  if (succeeded)
  {
    FoundSuspect_7 = ((MR_Word) (conv0_FoundSuspect_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *Suspect_6 = FoundSuspect_7;
  else
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_edt_scalar_common_1[12])));
      return;
    }
}

void MR_CALL 
mdb__declarative_edt__topmost_det_2_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word SearchSpace_3,
  MR_Integer * TopMostId_4)
{
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, SearchSpace_3, (MR_Integer) 1))));

  if ((Var_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_edt_scalar_common_1[4])));
      return;
    }
  else
    *TopMostId_4 = ((MR_Integer) ((MR_hl_field(1, Var_30, (MR_Integer) 0))));
}

MR_bool MR_CALL 
mdb__declarative_edt__root_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word SearchSpace_3,
  MR_Integer * RootId_4)
{
  MR_bool succeeded;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, SearchSpace_3, (MR_Integer) 0))));

  succeeded = (Var_5 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *RootId_4 = ((MR_Integer) ((MR_hl_field(1, Var_5, (MR_Integer) 0))));
  return succeeded;
}

void MR_CALL 
mdb__declarative_edt__initialise_search_space_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_27,
  MR_Box Store_5,
  MR_Word MaybeWeighting_6,
  MR_Box Node_7,
  MR_Word * SearchSpace_8)
{
  MR_Word TypeInfo_30_30;
  MR_Word TypeInfo_32_32;
  MR_Word TypeInfo_33_33;
  MR_Word TypeInfo_34_34;
  MR_Integer Weight_10;
  MR_Word Suspect_12;
  MR_Word SuspectStore_13;
  MR_Word Var_22;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word conv6_SuspectStore_13;

  if ((MaybeWeighting_6 == (MR_Word) ((MR_Unsigned) 0U)))
    Weight_10 = (MR_Integer) 0;
  else
  {
    MR_Word Weighting_9 = ((MR_Word) ((MR_hl_field(1, MaybeWeighting_6, (MR_Integer) 0))));

    switch (Weighting_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_27, (MR_Integer) 0)), (MR_Integer) 15))));
          MR_Box conv2_Weight_10;
          MR_Box conv1_Var_11;

          func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_27)), Store_5, Node_7, &conv2_Weight_10, &conv1_Var_11);
          Weight_10 = ((MR_Integer) (conv2_Weight_10));
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_27, (MR_Integer) 0)), (MR_Integer) 16))));
          MR_Box conv5_Weight_10;
          MR_Box conv4_Var_43;

          func_3(((MR_Box) (TypeClassInfo_for_mercury_edt_27)), Store_5, Node_7, &conv5_Weight_10, &conv4_Var_43);
          Weight_10 = ((MR_Integer) (conv5_Weight_10));
        }
        break;
    }
  }
  {
    Suspect_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Suspect_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Suspect_12, 1) = Node_7;
    MR_hl_field(0, Suspect_12, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Suspect_12, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Suspect_12, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Suspect_12, 5) = ((MR_Box) (Weight_10));
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_27, (MR_Integer) 2, &TypeInfo_30_30);
  {
    TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_32_32, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
    MR_hl_field(0, TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_30_30));
  }
  conv6_SuspectStore_13 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_32_32, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Suspect_12)));
  SuspectStore_13 = (MR_Word) (conv6_SuspectStore_13);
  Var_22 = mercury__counter__init_1_f_0((MR_Integer) 1);
  Var_24 = mercury__counter__init_1_f_0((MR_Integer) 0);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_27, (MR_Integer) 2, &TypeInfo_33_33);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_27, (MR_Integer) 2, &TypeInfo_34_34);
  Var_26 = mercury__bimap__init_0_f_0(TypeInfo_33_33, TypeInfo_34_34);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *SearchSpace_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 1) = ((MR_Box) (MR_mkword(1, &mdb__declarative_edt_scalar_common_2[0])));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 4) = ((MR_Box) (SuspectStore_13));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 6) = ((MR_Box) (MaybeWeighting_6));
  }
}

MR_Word MR_CALL 
mdb__declarative_edt__empty_search_space_0_f_0(
  MR_Word TypeInfo_for_T_11)
{
  MR_Word HeadVar__1_1;
  MR_Word TypeInfo_14_14;
  MR_Word Var_4;
  MR_Word Var_6;
  MR_Word Var_8;
  MR_Word Var_9;

  Var_4 = mercury__counter__init_1_f_0((MR_Integer) 0);
  Var_6 = mercury__counter__init_1_f_0((MR_Integer) 0);
  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
    MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_11));
  }
  Var_8 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_14_14);
  Var_9 = mercury__bimap__init_0_f_0(TypeInfo_for_T_11, TypeInfo_for_T_11);
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__1_1, 3) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__1_1, 4) = ((MR_Box) (Var_8));
    MR_hl_field(0, HeadVar__1_1, 5) = ((MR_Box) (Var_9));
    MR_hl_field(0, HeadVar__1_1, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__1_1;
}

MR_String MR_CALL 
mdb__declarative_edt__primitive_op_type_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&mdb__declarative_edt_vector_common_3[0 + HeadVar__1_1]))->mdb__declarative_edt__vector_common_type_3_0__vct_3_f_0;

  return HeadVar__2_2;
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____find_origin_response_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_edt____Unify____find_origin_response_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt____Compare____find_origin_response_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_edt____Compare____find_origin_response_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____maybe_found_descendant_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_edt____Unify____maybe_found_descendant_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt____Compare____maybe_found_descendant_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_edt____Compare____maybe_found_descendant_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____primitive_op_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_edt____Unify____primitive_op_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt____Compare____primitive_op_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_edt____Compare____primitive_op_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____search_space_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_edt____Unify____search_space_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt____Compare____search_space_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_edt____Compare____search_space_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_edt____Unify____subterm_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt____Compare____subterm_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_edt____Compare____subterm_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_origin_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_edt____Unify____subterm_origin_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt____Compare____subterm_origin_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_edt____Compare____subterm_origin_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_edt____Unify____suspect_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_edt____Compare____suspect_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_edt____Unify____suspect_id_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_edt____Compare____suspect_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_edt____Unify____suspect_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_edt____Compare____suspect_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____weighting_heuristic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_edt____Unify____weighting_heuristic_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_edt____Compare____weighting_heuristic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_edt____Compare____weighting_heuristic_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdb__declarative_edt__init(void)
{
}

void mercury__mdb__declarative_edt__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_find_origin_response_0);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_maybe_found_descendant_0);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_primitive_op_type_0);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_mode_0);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0);
}

void mercury__mdb__declarative_edt__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__declarative_edt__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.declarative_edt.
