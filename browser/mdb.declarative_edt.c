/*
** Automatically generated from `declarative_edt.m'
** by the Mercury compiler,
** version rotd-2017-07-18
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


/* :- module mdb.declarative_edt. */
/* :- implementation. */

/*
INIT mercury__mdb__declarative_edt__init
ENDINIT
*/

#include "mdb.declarative_edt.mih"


#include "mdb.mih"
#include "mdbcomp.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__list__pti_list_1__plain_mdb__declarative_edt__type_ctor_info_suspect_status_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_0;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_1[4];

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

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_primitive_op_type_0[4];

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

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_subterm_mode_0[2];

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_subterm_mode_0[2];

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_subterm_mode_0[2];

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_0[3];

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_0;

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_1[2];

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_1;

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_2[3];

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

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_weighting_heuristic_0[2];

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_weighting_heuristic_0[2];

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_weighting_heuristic_0[2];

static const MR_ConstString mdb__declarative_edt__mdb__declarative_edt__type_class_id_var_names_mercury_edt_2[2];

static const MR_TypeClassMethod mdb__declarative_edt__mdb__declarative_edt__type_class_id_method_ids_mercury_edt_2[15];

static const MR_TypeClassId mdb__declarative_edt__mdb__declarative_edt__type_class_id_mercury_edt_2;

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____find_origin_response_0_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_edt____Compare____find_origin_response_0_0_10001(
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____maybe_found_descendant_0_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_edt____Compare____maybe_found_descendant_0_0_10001(
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____primitive_op_type_0_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_edt____Compare____primitive_op_type_0_0_10001(
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____search_space_1_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_edt____Compare____search_space_1_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box * mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3,
  MR_Box mdb__declarative_edt__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_mode_0_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_edt____Compare____subterm_mode_0_0_10001(
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_origin_1_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_edt____Compare____subterm_origin_1_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box * mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3,
  MR_Box mdb__declarative_edt__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_1_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_1_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box * mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3,
  MR_Box mdb__declarative_edt__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_id_0_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_id_0_0_10001(
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_status_0_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_status_0_0_10001(
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____weighting_heuristic_0_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_edt____Compare____weighting_heuristic_0_0_10001(
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1766__1_3_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25,
  MR_Integer mdb__declarative_edt__HeadVar__3_41);

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1759__1_3_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25,
  MR_Integer mdb__declarative_edt__HeadVar__3_37);

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__get_siblings__1516__1_2_p_0(
  MR_Integer mdb__declarative_edt__SuspectId_5,
  MR_Integer mdb__declarative_edt__HeadVar__2_46);

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_num_unexplored__1444__1_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_32,
  MR_Word mdb__declarative_edt__LambdaHeadVar__1_14);

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_num_unknown__1414__1_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_34,
  MR_Word mdb__declarative_edt__LambdaHeadVar__1_15);

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__recalc_weights_upto_ancestor__1374__1_2_p_0(
  MR_Integer mdb__declarative_edt__Ancestor_7,
  MR_Integer mdb__declarative_edt__HeadVar__2_28);

static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1296__1_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57,
  MR_Word mdb__declarative_edt__HeadVar__2_74,
  MR_Integer mdb__declarative_edt__HeadVar__3_75,
  MR_Integer * mdb__declarative_edt__HeadVar__4_76);

static MR_Box MR_CALL 
mdb__declarative_edt__IntroducedFrom__func__calc_suspect_weight__1291__1_2_f_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57,
  MR_Word mdb__declarative_edt__LambdaHeadVar__1_30);

static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1289__1_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57,
  MR_Word mdb__declarative_edt__SearchSpace_12,
  MR_Integer mdb__declarative_edt__HeadVar__3_58,
  MR_Word * mdb__declarative_edt__HeadVar__4_59);

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__1931__1_3_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15,
  MR_Integer mdb__declarative_edt__HeadVar__3_57);

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__revise_root__1897__1_3_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42,
  MR_Integer mdb__declarative_edt__HeadVar__3_98);

static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__revise_root__1883__1_6_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81,
  MR_Word mdb__declarative_edt__HeadVar__2_27,
  MR_Word mdb__declarative_edt__HeadVar__3_28,
  MR_Integer mdb__declarative_edt__HeadVar__4_84,
  MR_Word mdb__declarative_edt__HeadVar__5_85,
  MR_Word * mdb__declarative_edt__HeadVar__6_86);

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_1_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_23,
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3);

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_status_0_0(
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_1_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_17,
  MR_Word mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_status_0_0(
  MR_Word mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_edt__find_first_implicit_root_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_33,
  MR_Box mdb__declarative_edt__Store_5,
  MR_Word mdb__declarative_edt__SearchSpace_6,
  MR_Word mdb__declarative_edt__HeadVar__3_3,
  MR_Integer * mdb__declarative_edt__ImplicitRoot_9);

static MR_bool MR_CALL 
mdb__declarative_edt__should_check_search_space_consistency_0_p_0(void);

static MR_bool MR_CALL 
mdb__declarative_edt__suspect_is_leaf_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_19,
  MR_Word mdb__declarative_edt__SearchSpace_3,
  MR_Integer mdb__declarative_edt__SuspectId_4);

static void MR_CALL 
mdb__declarative_edt__least_skipped_5_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_21,
  MR_Word mdb__declarative_edt__SearchSpace_6,
  MR_Integer mdb__declarative_edt__SuspectId1_7,
  MR_Word mdb__declarative_edt__Suspect1_8,
  MR_Integer mdb__declarative_edt__SuspectId2_9,
  MR_Integer * mdb__declarative_edt__LeastSkipped_10);

static MR_bool MR_CALL 
mdb__declarative_edt__calc_num_unexplored_1_f_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1);

static MR_Integer MR_CALL 
mdb__declarative_edt__calc_num_unexplored_1_f_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_32,
  MR_Word mdb__declarative_edt__SearchSpace_3);

static MR_bool MR_CALL 
mdb__declarative_edt__calc_num_unknown_1_f_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1);

static MR_Integer MR_CALL 
mdb__declarative_edt__calc_num_unknown_1_f_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_34,
  MR_Word mdb__declarative_edt__SearchSpace_3);

static void MR_CALL 
mdb__declarative_edt__add_original_weight_7_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_15,
  MR_Word mdb__declarative_edt__Weighting_8,
  MR_Box mdb__declarative_edt__Store_9,
  MR_Box mdb__declarative_edt__Node_10,
  MR_Integer mdb__declarative_edt__Prev_11,
  MR_Integer * mdb__declarative_edt__HeadVar__5_5,
  MR_Integer mdb__declarative_edt__PrevExcess_13,
  MR_Integer * mdb__declarative_edt__HeadVar__7_7);

static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_5_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3,
  MR_Box mdb__declarative_edt__wrapper_arg_4,
  MR_Box * mdb__declarative_edt__wrapper_arg_5);

static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_5_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_14,
  MR_Word mdb__declarative_edt__Status_6,
  MR_Word mdb__declarative_edt__StopStatusSet_7,
  MR_Integer mdb__declarative_edt__SuspectId_8,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12);

static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_5_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_14,
  MR_Word mdb__declarative_edt__Status_6,
  MR_Word mdb__declarative_edt__StopStatusSet_7,
  MR_Integer mdb__declarative_edt__SuspectId_8,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12);

static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_7_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3,
  MR_Box mdb__declarative_edt__wrapper_arg_4,
  MR_Box * mdb__declarative_edt__wrapper_arg_5);

static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_7_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_49,
  MR_Word mdb__declarative_edt__Status_8,
  MR_Word mdb__declarative_edt__StopStatusSet_9,
  MR_Integer mdb__declarative_edt__SuspectId_10,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_StopSuspects_0_15,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_StopSuspects_16,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_18);

static MR_bool MR_CALL 
mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box * mdb__declarative_edt__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_63,
  MR_Box mdb__declarative_edt__Store_5,
  MR_Word mdb__declarative_edt__SearchSpace_6,
  MR_Integer mdb__declarative_edt__SuspectId_7,
  MR_String * mdb__declarative_edt__Message_8);

static MR_bool MR_CALL 
mdb__declarative_edt__update_weighting_heuristic_4_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1);

static MR_bool MR_CALL 
mdb__declarative_edt__revise_root_3_p_0_2(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1);

static void MR_CALL 
mdb__declarative_edt__revise_root_3_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1);

static void MR_CALL 
mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_27,
  MR_Box mdb__declarative_edt__Store_6,
  MR_Integer mdb__declarative_edt__Ancestor_7,
  MR_Word mdb__declarative_edt__SuspectIds_8,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_18);

static void MR_CALL 
mdb__declarative_edt__recalc_weights_and_get_parents_6_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_64,
  MR_Box mdb__declarative_edt__Store_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3,
  MR_Word * mdb__declarative_edt__Parents_4,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_5,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_6);

static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_6_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3,
  MR_Box mdb__declarative_edt__wrapper_arg_4,
  MR_Box * mdb__declarative_edt__wrapper_arg_5);

static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_6_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_39,
  MR_Word mdb__declarative_edt__Status_7,
  MR_Word mdb__declarative_edt__StopStatusSet_8,
  MR_Integer mdb__declarative_edt__SuspectId_9,
  MR_Word * mdb__declarative_edt__StopSuspects_10,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15);

static void MR_CALL 
mdb__declarative_edt__choose_skipped_suspect_2_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3,
  MR_Box * mdb__declarative_edt__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0_2(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1);

static MR_bool MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1);

static void MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36,
  MR_Box mdb__declarative_edt__Store_7,
  MR_Word mdb__declarative_edt__Oracle_8,
  MR_Word mdb__declarative_edt__SuspectList_9,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26,
  MR_Word * mdb__declarative_edt__MaybeFound_11);

static void MR_CALL 
mdb__declarative_edt__get_children_list_7_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_26,
  MR_Box mdb__declarative_edt__Store_1,
  MR_Word mdb__declarative_edt__Oracle_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3,
  MR_Word mdb__declarative_edt__HeadVar__4_4,
  MR_Word * mdb__declarative_edt__HeadVar__5_5,
  MR_Word * mdb__declarative_edt__HeadVar__6_6,
  MR_Word * mdb__declarative_edt__HeadVar__7_7);

static void MR_CALL 
mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42,
  MR_Box mdb__declarative_edt__Store_8,
  MR_Box mdb__declarative_edt__Node_9,
  MR_Word mdb__declarative_edt__OutputArgPos_10,
  MR_Word mdb__declarative_edt__TermPath_11,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_TriedProcs_0_36,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_TriedProcs_37,
  MR_Word * mdb__declarative_edt__MaybeInitialVersionArgPos_13);

static void MR_CALL 
mdb__declarative_edt__resolve_origin_10_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50,
  MR_Box mdb__declarative_edt__Store_11,
  MR_Word mdb__declarative_edt__Oracle_12,
  MR_Box mdb__declarative_edt__Node_13,
  MR_Word mdb__declarative_edt__ArgPos_14,
  MR_Word mdb__declarative_edt__TermPath_15,
  MR_Integer mdb__declarative_edt__SuspectId_16,
  MR_Word mdb__declarative_edt__Output_17,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35,
  MR_Word * mdb__declarative_edt__Response_19);

static MR_bool MR_CALL 
mdb__declarative_edt__find_edt_node_in_suspect_list_4_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_23,
  MR_Word mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__Node_7,
  MR_Word mdb__declarative_edt__SearchSpace_8,
  MR_Integer * mdb__declarative_edt__FoundId_9);

static void MR_CALL 
mdb__declarative_edt__insert_new_topmost_node_5_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154,
  MR_Box mdb__declarative_edt__Store_6,
  MR_Word mdb__declarative_edt__Oracle_7,
  MR_Box mdb__declarative_edt__NewTopMostEDTNode_8,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_33);

static MR_bool MR_CALL 
mdb__declarative_edt__find_node_in_list_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_12,
  MR_Box mdb__declarative_edt__Store_5,
  MR_Word mdb__declarative_edt__HeadVar__2_2,
  MR_Box mdb__declarative_edt__NodeToMatch_8,
  MR_Integer * mdb__declarative_edt__Pos_9);

static void MR_CALL 
mdb__declarative_edt__adjust_suspect_status_from_oracle_5_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34,
  MR_Box mdb__declarative_edt__Store_6,
  MR_Word mdb__declarative_edt__Oracle_7,
  MR_Integer mdb__declarative_edt__SuspectId_8,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17);

static MR_Word MR_CALL 
mdb__declarative_edt__new_parent_status_1_f_0(
  MR_Word mdb__declarative_edt__HeadVar__1_1);

static MR_Word MR_CALL 
mdb__declarative_edt__new_child_status_1_f_0(
  MR_Word mdb__declarative_edt__HeadVar__1_1);

static void MR_CALL 
mdb__declarative_edt__assert_suspect_is_valid_4_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_edt__assert_suspect_is_valid_4_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_87,
  MR_Word mdb__declarative_edt__Status_5,
  MR_Integer mdb__declarative_edt__SuspectId_6,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12);

static void MR_CALL 
mdb__declarative_edt__propagate_status_upwards_6_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_edt__propagate_status_upwards_6_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_47,
  MR_Word mdb__declarative_edt__Status_7,
  MR_Word mdb__declarative_edt__StopStatusSet_8,
  MR_Integer mdb__declarative_edt__SuspectId_9,
  MR_Integer * mdb__declarative_edt__Lowest_10,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17);

static MR_bool MR_CALL 
mdb__declarative_edt__get_siblings_3_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1);

static void MR_CALL 
mdb__declarative_edt__get_siblings_3_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_45,
  MR_Word mdb__declarative_edt__SearchSpace_4,
  MR_Integer mdb__declarative_edt__SuspectId_5,
  MR_Word * mdb__declarative_edt__Siblings_6);

static void MR_CALL 
mdb__declarative_edt__excluded_complement_2_p_0(
  MR_Word mdb__declarative_edt__HeadVar__1_1,
  MR_Word * mdb__declarative_edt__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_edt__get_path_5_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_20,
  MR_Word mdb__declarative_edt__SearchSpace_6,
  MR_Integer mdb__declarative_edt__BottomId_7,
  MR_Integer mdb__declarative_edt__TopId_8,
  MR_Word mdb__declarative_edt__PathSoFar_9,
  MR_Word * mdb__declarative_edt__Path_10);

static void MR_CALL 
mdb__declarative_edt__add_children_8_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_edt__add_children_8_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88,
  MR_Box mdb__declarative_edt__Store_9,
  MR_Word mdb__declarative_edt__Oracle_10,
  MR_Word mdb__declarative_edt__EDTChildren_11,
  MR_Integer mdb__declarative_edt__SuspectId_12,
  MR_Word mdb__declarative_edt__Status_13,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_25,
  MR_Word * mdb__declarative_edt__Children_15);

static void MR_CALL 
mdb__declarative_edt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_65,
  MR_Box mdb__declarative_edt__Store_1,
  MR_Word mdb__declarative_edt__HeadVar__3_3,
  MR_Integer mdb__declarative_edt__ParentId_4,
  MR_Word mdb__declarative_edt__Status_5,
  MR_Integer mdb__declarative_edt__Depth_6,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_8,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_Counter_0_9,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_Counter_10,
  MR_Word * mdb__declarative_edt__HeadVar__11_11);

static void MR_CALL 
mdb__declarative_edt__add_weight_to_ancestors_4_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_42,
  MR_Integer mdb__declarative_edt__SuspectId_5,
  MR_Integer mdb__declarative_edt__Weight_6,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13);

static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_4(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_3(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3,
  MR_Box mdb__declarative_edt__wrapper_arg_4,
  MR_Box * mdb__declarative_edt__wrapper_arg_5);

static MR_Box MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_2(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1);

static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box * mdb__declarative_edt__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57,
  MR_Box mdb__declarative_edt__Store_8,
  MR_Box mdb__declarative_edt__Node_9,
  MR_Word mdb__declarative_edt__MaybeChildren_10,
  MR_Word mdb__declarative_edt__Status_11,
  MR_Word mdb__declarative_edt__SearchSpace_12,
  MR_Integer * mdb__declarative_edt__Weight_13,
  MR_Integer * mdb__declarative_edt__ExcessWeight_14);

static void MR_CALL 
mdb__declarative_edt__set_suspect_4_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_26,
  MR_Integer mdb__declarative_edt__SuspectId_5,
  MR_Word mdb__declarative_edt__Suspect_6,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11);

static void MR_CALL 
mdb__declarative_edt__lookup_suspect_3_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_18,
  MR_Word mdb__declarative_edt__SearchSpace_4,
  MR_Integer mdb__declarative_edt__SuspectId_5,
  MR_Word * mdb__declarative_edt__Suspect_6);


static /* final */ const MR_Box mdb__declarative_edt_scalar_common_1[18][2];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_3[1][1];

static /* final */ const MR_Integer mdb__declarative_edt_scalar_common_4[2][3];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_5[2][7];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_6[2][6];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_7[2][11];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_8[4][9];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_9[2][5];

static /* final */ const MR_Integer mdb__declarative_edt_scalar_common_10[1][2];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_11[1][8];


/* sealed */ struct mdb__declarative_edt__vector_common_type_2_0_s {
  const MR_String mdb__declarative_edt__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct mdb__declarative_edt__vector_common_type_2_0_s mdb__declarative_edt_vector_common_2[4];



static /* final */ const MR_Box mdb__declarative_edt_scalar_common_1[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_edt_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "topmost_det")),
    ((MR_Box) ((MR_String) "search space empty"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "lookup_suspect")),
    ((MR_Box) ((MR_String) "couldn\'t find suspect"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "get_siblings")),
    ((MR_Box) ((MR_String) "parent\'s children unexplored"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "get_siblings")),
    ((MR_Box) ((MR_String) "parent has no children"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "insert_new_topmost_node")),
    ((MR_Box) ((MR_String) "invalid position"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "insert_new_topmost_node")),
    ((MR_Box) ((MR_String) "couldn\'t find event number"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "insert_new_topmost_node")),
    ((MR_Box) ((MR_String) "couldn\'t get new topmost node\'s children"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "resolve_origin")),
    ((MR_Box) ((MR_String) "output origin for input subterm not in siblings"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "incorporate_explicit_supertree")),
    ((MR_Box) ((MR_String) "no parent"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "revise_root")),
    ((MR_Box) ((MR_String) "no root"))
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer mdb__declarative_edt_scalar_common_4[2][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 67663
  },
  /* row 1 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_2))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_6[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_7[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_4[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_10[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_4[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_10[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0)),
    ((MR_Box) (&mdb__declarative_edt__list__pti_list_1__plain_mdb__declarative_edt__type_ctor_info_suspect_status_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_10[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0)),
    ((MR_Box) (&mdb__declarative_edt__list__pti_list_1__plain_mdb__declarative_edt__type_ctor_info_suspect_status_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2))
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_9[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_10[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_1))
  },
};

static /* final */ const MR_Integer mdb__declarative_edt_scalar_common_10[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_11[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_4[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct mdb__declarative_edt__vector_common_type_2_0_s mdb__declarative_edt_vector_common_2[4] = {
  /* row 0 */   {     (MR_String) "foreign procedure call" },
  /* row 1 */   {     (MR_String) "builtin operation" },
  /* row 2 */   {     (MR_String) "untraced call" },
  /* row 3 */   {     (MR_String) "unification" },
};


#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.declarative_edt.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_2 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__list__pti_list_1__plain_mdb__declarative_edt__type_ctor_info_suspect_status_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_0 = {
  (MR_String) "not_found",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_1[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_mode_0
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_1 = {
  (MR_String) "origin",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_2[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_primitive_op_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
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
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 2,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_2 = {
  (MR_String) "primitive_op",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_2,
  NULL,
  mdb__declarative_edt__mdb__declarative_edt__field_locns_find_origin_response_0_2,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_3 = {
  (MR_String) "require_explicit_subtree",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_4 = {
  (MR_String) "require_explicit_supertree",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_0[3] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_3,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_4
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_1[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_1
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_2[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_2
};

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_find_origin_response_0[3] = {
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____find_origin_response_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____find_origin_response_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "find_origin_response",
  {     mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_find_origin_response_0 },
  {     mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_find_origin_response_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_find_origin_response_0
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_maybe_found_descendant_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_0 = {
  (MR_String) "found",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_edt__mdb__declarative_edt__field_types_maybe_found_descendant_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_1 = {
  (MR_String) "not_found",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_maybe_found_descendant_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_2 = {
  (MR_String) "require_explicit_subtree",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_edt__mdb__declarative_edt__field_types_maybe_found_descendant_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_0[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_1
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_1[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_0
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_2[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_2
};

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_maybe_found_descendant_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____maybe_found_descendant_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____maybe_found_descendant_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "maybe_found_descendant",
  {     mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_maybe_found_descendant_0 },
  {     mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_maybe_found_descendant_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_maybe_found_descendant_0
};

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_0 = {
  (MR_String) "primop_foreign_proc",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_1 = {
  (MR_String) "primop_builtin_call",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_2 = {
  (MR_String) "primop_untraced_call",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_3 = {
  (MR_String) "primop_unification",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_primitive_op_type_0[4] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_edt____Unify____primitive_op_type_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____primitive_op_type_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "primitive_op_type",
  {     mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_primitive_op_type_0 },
  {     mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_primitive_op_type_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_primitive_op_type_0
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_edt__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_mdb__declarative_edt__pti_suspect_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_edt__bimap__pti_bimap_2__pseudo_1__pseudo_1 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__maybe__ti_maybe_1mdb__declarative_edt__type_ctor_info_weighting_heuristic_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_search_space_1_0[7] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_mdb__declarative_edt__pti_suspect_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__bimap__pti_bimap_2__pseudo_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__maybe__ti_maybe_1mdb__declarative_edt__type_ctor_info_weighting_heuristic_0
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
  (MR_Integer) 7,
  (MR_Integer) 48,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_edt__mdb__declarative_edt__field_types_search_space_1_0,
  mdb__declarative_edt__mdb__declarative_edt__field_names_search_space_1_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_search_space_1_0[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_search_space_1_0
};

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_search_space_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_search_space_1_0
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_search_space_1[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_search_space_1_0
};

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_search_space_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____search_space_1_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____search_space_1_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "search_space",
  {     mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_search_space_1 },
  {     mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_search_space_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_search_space_1
};

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_0 = {
  (MR_String) "subterm_in",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_1 = {
  (MR_String) "subterm_out",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_subterm_mode_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_edt____Unify____subterm_mode_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____subterm_mode_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "subterm_mode",
  {     mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_subterm_mode_0 },
  {     mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_subterm_mode_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_subterm_mode_0
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_0 = {
  (MR_String) "origin_output",
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_1 = {
  (MR_String) "origin_input",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_2[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_primitive_op_type_0
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_2 = {
  (MR_String) "origin_primitive_op",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_3 = {
  (MR_String) "origin_not_found",
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

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_4 = {
  (MR_String) "origin_require_explicit_subtree",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_0[2] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_3,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_4
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_1[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_0
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_2[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_1
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_3[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_2
};

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_subterm_origin_1[4] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____subterm_origin_1_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____subterm_origin_1_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "subterm_origin",
  {     mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_subterm_origin_1 },
  {     mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_subterm_origin_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_subterm_origin_1
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_suspect_1_0[6] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
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
  (MR_Integer) 6,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_edt__mdb__declarative_edt__field_types_suspect_1_0,
  mdb__declarative_edt__mdb__declarative_edt__field_names_suspect_1_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_1_0[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_1_0
};

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_suspect_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_1_0
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_suspect_1[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_1_0
};

static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_suspect_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____suspect_1_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____suspect_1_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "suspect",
  {     mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_suspect_1 },
  {     mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_suspect_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_suspect_1
};

const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_edt____Unify____suspect_id_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____suspect_id_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "suspect_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_0 = {
  (MR_String) "suspect_ignored",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_suspect_status_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_1 = {
  (MR_String) "suspect_skipped",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_edt__mdb__declarative_edt__field_types_suspect_status_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_2 = {
  (MR_String) "suspect_correct",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_3 = {
  (MR_String) "suspect_erroneous",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_4 = {
  (MR_String) "suspect_inadmissible",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_5 = {
  (MR_String) "suspect_pruned",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_6 = {
  (MR_String) "suspect_in_erroneous_subtree_complement",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_7 = {
  (MR_String) "suspect_unknown",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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

static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_status_0_1[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_1
};

static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_suspect_status_0[2] = {
  {
    (MR_Integer) 7,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_status_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_status_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____suspect_status_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____suspect_status_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "suspect_status",
  {     mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_suspect_status_0 },
  {     mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_suspect_status_0 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_suspect_status_0
};

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_0 = {
  (MR_String) "number_of_events",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_1 = {
  (MR_String) "suspicion",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_weighting_heuristic_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_edt____Unify____weighting_heuristic_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____weighting_heuristic_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "weighting_heuristic",
  {     mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_weighting_heuristic_0 },
  {     mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_weighting_heuristic_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_weighting_heuristic_0
};

static const MR_ConstString mdb__declarative_edt__mdb__declarative_edt__type_class_id_var_names_mercury_edt_2[2] = {
  (MR_String) "S",
  (MR_String) "T"
};

static const MR_TypeClassMethod mdb__declarative_edt__mdb__declarative_edt__type_class_id_method_ids_mercury_edt_2[15] = {
  {
    (MR_String) "edt_question",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_get_e_bug",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_get_i_bug",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_children",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_parent",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_dependency",
    (MR_Integer) 6,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_subterm_mode",
    (MR_Integer) 5,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_is_implicit_root",
    (MR_Integer) 2,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_same_nodes",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_topmost_node",
    (MR_Integer) 2,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_number_of_events",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_subtree_suspicion",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_context",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_proc_label",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "edt_arg_pos_to_user_arg_num",
    (MR_Integer) 4,
    mercury__private_builtin__MR_FUNCTION
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
mdb__declarative_edt____Unify____find_origin_response_0_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____find_origin_response_0_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt____Compare____find_origin_response_0_0_10001(
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

    {
      mdb__declarative_edt____Compare____find_origin_response_0_0(&mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
    *mdb__declarative_edt__wrapper_arg_1 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____maybe_found_descendant_0_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____maybe_found_descendant_0_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt____Compare____maybe_found_descendant_0_0_10001(
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

    {
      mdb__declarative_edt____Compare____maybe_found_descendant_0_0(&mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
    *mdb__declarative_edt__wrapper_arg_1 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____primitive_op_type_0_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____primitive_op_type_0_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt____Compare____primitive_op_type_0_0_10001(
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

    {
      mdb__declarative_edt____Compare____primitive_op_type_0_0(&mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
    *mdb__declarative_edt__wrapper_arg_1 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____search_space_1_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____search_space_1_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt____Compare____search_space_1_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box * mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3,
  MR_Box mdb__declarative_edt__wrapper_arg_4)
{
  {
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

    {
      mdb__declarative_edt____Compare____search_space_1_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), &mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_3), ((MR_Word) mdb__declarative_edt__wrapper_arg_4));
    }
    *mdb__declarative_edt__wrapper_arg_2 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_mode_0_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____subterm_mode_0_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt____Compare____subterm_mode_0_0_10001(
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

    {
      mdb__declarative_edt____Compare____subterm_mode_0_0(&mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
    *mdb__declarative_edt__wrapper_arg_1 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_origin_1_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____subterm_origin_1_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt____Compare____subterm_origin_1_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box * mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3,
  MR_Box mdb__declarative_edt__wrapper_arg_4)
{
  {
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

    {
      mdb__declarative_edt____Compare____subterm_origin_1_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), &mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_3), ((MR_Word) mdb__declarative_edt__wrapper_arg_4));
    }
    *mdb__declarative_edt__wrapper_arg_2 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_1_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____suspect_1_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_1_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box * mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3,
  MR_Box mdb__declarative_edt__wrapper_arg_4)
{
  {
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

    {
      mdb__declarative_edt____Compare____suspect_1_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), &mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_3), ((MR_Word) mdb__declarative_edt__wrapper_arg_4));
    }
    *mdb__declarative_edt__wrapper_arg_2 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_id_0_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____suspect_id_0_0(((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Integer) mdb__declarative_edt__wrapper_arg_2));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_id_0_0_10001(
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

    {
      mdb__declarative_edt____Compare____suspect_id_0_0(&mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Integer) mdb__declarative_edt__wrapper_arg_2), ((MR_Integer) mdb__declarative_edt__wrapper_arg_3));
    }
    *mdb__declarative_edt__wrapper_arg_1 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_status_0_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____suspect_status_0_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_status_0_0_10001(
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

    {
      mdb__declarative_edt____Compare____suspect_status_0_0(&mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
    *mdb__declarative_edt__wrapper_arg_1 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____weighting_heuristic_0_0_10001(
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____weighting_heuristic_0_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt____Compare____weighting_heuristic_0_0_10001(
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

    {
      mdb__declarative_edt____Compare____weighting_heuristic_0_0(&mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
    *mdb__declarative_edt__wrapper_arg_1 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1766__1_3_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25,
  MR_Integer mdb__declarative_edt__HeadVar__3_41)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_43_43;
    MR_Word mdb__declarative_edt__Var_46;
    MR_Word mdb__declarative_edt__Suspect_52;
    MR_Word mdb__declarative_edt__Var_53;
    MR_Box mdb__declarative_edt__Var_54;
    MR_Integer mdb__declarative_edt__Var_55;
    MR_Word mdb__declarative_edt__Var_56;
    MR_Integer mdb__declarative_edt__Var_57;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_43_43);
    }
    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_43_43, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25, mdb__declarative_edt__HeadVar__3_41, &mdb__declarative_edt__Suspect_52);
    }
    mdb__declarative_edt__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_52, (MR_Integer) 0)));
    mdb__declarative_edt__Var_54 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_52, (MR_Integer) 1));
    mdb__declarative_edt__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_52, (MR_Integer) 2)));
    mdb__declarative_edt__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_52, (MR_Integer) 3)));
    mdb__declarative_edt__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_52, (MR_Integer) 4)));
    mdb__declarative_edt__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_52, (MR_Integer) 5)));
    switch (MR_tag((MR_Word) mdb__declarative_edt__Var_46)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__declarative_edt__Var_46)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 1:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 2:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 3:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 4:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 5:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 6:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
        }
        break;
    }
    return mdb__declarative_edt__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1759__1_3_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25,
  MR_Integer mdb__declarative_edt__HeadVar__3_37)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_39_39;
    MR_Word mdb__declarative_edt__Suspect_46;
    MR_Word mdb__declarative_edt__Var_47;
    MR_Word mdb__declarative_edt__Var_48;
    MR_Box mdb__declarative_edt__Var_49;
    MR_Integer mdb__declarative_edt__Var_50;
    MR_Word mdb__declarative_edt__Var_51;
    MR_Integer mdb__declarative_edt__Var_52;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_39_39);
    }
    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_39_39, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25, mdb__declarative_edt__HeadVar__3_37, &mdb__declarative_edt__Suspect_46);
    }
    mdb__declarative_edt__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_46, (MR_Integer) 0)));
    mdb__declarative_edt__Var_49 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_46, (MR_Integer) 1));
    mdb__declarative_edt__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_46, (MR_Integer) 2)));
    mdb__declarative_edt__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_46, (MR_Integer) 3)));
    mdb__declarative_edt__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_46, (MR_Integer) 4)));
    mdb__declarative_edt__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_46, (MR_Integer) 5)));
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
    return mdb__declarative_edt__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__get_siblings__1516__1_2_p_0(
  MR_Integer mdb__declarative_edt__SuspectId_5,
  MR_Integer mdb__declarative_edt__HeadVar__2_46)
{
  {
    MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__SuspectId_5 == mdb__declarative_edt__HeadVar__2_46);

    return mdb__declarative_edt__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_num_unexplored__1444__1_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_32,
  MR_Word mdb__declarative_edt__LambdaHeadVar__1_14)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_14, (MR_Integer) 4)));
    MR_Word mdb__declarative_edt__Var_16;
    MR_Word mdb__declarative_edt__Status_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_14, (MR_Integer) 2)));
    MR_Word mdb__declarative_edt__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_14, (MR_Integer) 0)));
    MR_Box mdb__declarative_edt__Var_18 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_14, (MR_Integer) 1));
    MR_Integer mdb__declarative_edt__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_14, (MR_Integer) 3)));
    MR_Integer mdb__declarative_edt__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_14, (MR_Integer) 5)));

    mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (mdb__declarative_edt__succeeded)
      {
        mdb__declarative_edt__Var_16 = (MR_Integer) 1;
        switch (MR_tag((MR_Word) mdb__declarative_edt__Status_23)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mdb__declarative_edt__Status_23)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_16 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                {
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_16 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 2:
                {
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_16 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 3:
                {
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_16 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 4:
                {
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_16 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 5:
                {
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_16 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 6:
                {
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_16 == (MR_Integer) 1);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_16 == (MR_Integer) 1);
            }
            break;
        }
      }
    return mdb__declarative_edt__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_num_unknown__1414__1_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_34,
  MR_Word mdb__declarative_edt__LambdaHeadVar__1_15)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Status_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_15, (MR_Integer) 2)));
    MR_Word mdb__declarative_edt__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_15, (MR_Integer) 0)));
    MR_Box mdb__declarative_edt__Var_18 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_15, (MR_Integer) 1));
    MR_Integer mdb__declarative_edt__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_15, (MR_Integer) 3)));
    MR_Word mdb__declarative_edt__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_15, (MR_Integer) 4)));
    MR_Integer mdb__declarative_edt__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_15, (MR_Integer) 5)));

    switch (MR_tag((MR_Word) mdb__declarative_edt__Status_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__declarative_edt__Status_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 1:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 2:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 3:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 4:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 5:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 6:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
        }
        break;
    }
    return mdb__declarative_edt__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__recalc_weights_upto_ancestor__1374__1_2_p_0(
  MR_Integer mdb__declarative_edt__Ancestor_7,
  MR_Integer mdb__declarative_edt__HeadVar__2_28)
{
  {
    MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__Ancestor_7 == mdb__declarative_edt__HeadVar__2_28);

    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1296__1_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57,
  MR_Word mdb__declarative_edt__HeadVar__2_74,
  MR_Integer mdb__declarative_edt__HeadVar__3_75,
  MR_Integer * mdb__declarative_edt__HeadVar__4_76)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__Var_88;
    MR_Word mdb__declarative_edt__TypeInfo_78_78;
    MR_Word mdb__declarative_edt__Var_89;
    MR_Box mdb__declarative_edt__Var_90;
    MR_Word mdb__declarative_edt__Var_91;
    MR_Integer mdb__declarative_edt__Var_92;
    MR_Word mdb__declarative_edt__Var_93;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_78_78);
    }
    mdb__declarative_edt__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_74, (MR_Integer) 0)));
    mdb__declarative_edt__Var_90 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_74, (MR_Integer) 1));
    mdb__declarative_edt__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_74, (MR_Integer) 2)));
    mdb__declarative_edt__Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_74, (MR_Integer) 3)));
    mdb__declarative_edt__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_74, (MR_Integer) 4)));
    mdb__declarative_edt__Var_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_74, (MR_Integer) 5)));
    *mdb__declarative_edt__HeadVar__4_76 = (mdb__declarative_edt__HeadVar__3_75 + mdb__declarative_edt__Var_88);
  }
}

static MR_Box MR_CALL 
mdb__declarative_edt__IntroducedFrom__func__calc_suspect_weight__1291__1_2_f_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57,
  MR_Word mdb__declarative_edt__LambdaHeadVar__1_30)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Box mdb__declarative_edt__LambdaHeadVar__2_31 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_30, (MR_Integer) 1));
    MR_Word mdb__declarative_edt__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_30, (MR_Integer) 0)));
    MR_Word mdb__declarative_edt__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_30, (MR_Integer) 2)));
    MR_Integer mdb__declarative_edt__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_30, (MR_Integer) 3)));
    MR_Word mdb__declarative_edt__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_30, (MR_Integer) 4)));
    MR_Integer mdb__declarative_edt__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__LambdaHeadVar__1_30, (MR_Integer) 5)));

    return mdb__declarative_edt__LambdaHeadVar__2_31;
  }
}

static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1289__1_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57,
  MR_Word mdb__declarative_edt__SearchSpace_12,
  MR_Integer mdb__declarative_edt__HeadVar__3_58,
  MR_Word * mdb__declarative_edt__HeadVar__4_59)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_61_61;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_61_61);
    }
    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_61_61, mdb__declarative_edt__SearchSpace_12, mdb__declarative_edt__HeadVar__3_58, mdb__declarative_edt__HeadVar__4_59);
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__1931__1_3_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15,
  MR_Integer mdb__declarative_edt__HeadVar__3_57)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_59_59;
    MR_Word mdb__declarative_edt__Suspect_63;
    MR_Word mdb__declarative_edt__Var_78;
    MR_Integer mdb__declarative_edt__Var_77;
    MR_Integer mdb__declarative_edt__Var_79;
    MR_Word mdb__declarative_edt__Var_80;
    MR_Box mdb__declarative_edt__Var_81;
    MR_Word mdb__declarative_edt__Var_82;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_59_59);
    }
    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_59_59, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, mdb__declarative_edt__HeadVar__3_57, &mdb__declarative_edt__Suspect_63);
    }
    mdb__declarative_edt__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_63, (MR_Integer) 0)));
    mdb__declarative_edt__Var_81 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_63, (MR_Integer) 1));
    mdb__declarative_edt__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_63, (MR_Integer) 2)));
    mdb__declarative_edt__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_63, (MR_Integer) 3)));
    mdb__declarative_edt__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_63, (MR_Integer) 4)));
    mdb__declarative_edt__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_63, (MR_Integer) 5)));
    if ((mdb__declarative_edt__Var_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdb__declarative_edt__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__declarative_edt__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_78, (MR_Integer) 0)));

        mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    return mdb__declarative_edt__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__revise_root__1897__1_3_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42,
  MR_Integer mdb__declarative_edt__HeadVar__3_98)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_100_100;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_100_100);
    }
    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__suspect_is_leaf_2_p_0(mdb__declarative_edt__TypeInfo_100_100, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, mdb__declarative_edt__HeadVar__3_98);
    }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__revise_root__1883__1_6_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81,
  MR_Word mdb__declarative_edt__HeadVar__2_27,
  MR_Word mdb__declarative_edt__HeadVar__3_28,
  MR_Integer mdb__declarative_edt__HeadVar__4_84,
  MR_Word mdb__declarative_edt__HeadVar__5_85,
  MR_Word * mdb__declarative_edt__HeadVar__6_86)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_88_88;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_88_88);
    }
    {
      mdb__declarative_edt__force_propagate_status_downwards_5_p_0(mdb__declarative_edt__TypeInfo_88_88, mdb__declarative_edt__HeadVar__2_27, mdb__declarative_edt__HeadVar__3_28, mdb__declarative_edt__HeadVar__4_84, mdb__declarative_edt__HeadVar__5_85, mdb__declarative_edt__HeadVar__6_86);
    }
  }
}

void MR_CALL 
mdb__declarative_edt____Compare____weighting_heuristic_0_0(
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
    MR_Integer mdb__declarative_edt__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__Cast_HeadVar1_4, mdb__declarative_edt__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_edt____Unify____weighting_heuristic_0_0(
  MR_Word mdb__declarative_edt__HeadVar__2_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__HeadVar__2_1 == mdb__declarative_edt__HeadVar__2_2);

    return mdb__declarative_edt__succeeded;
  }
}

void MR_CALL 
mdb__declarative_edt____Compare____suspect_id_0_0(
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
  MR_Integer mdb__declarative_edt__HeadVar__2_2,
  MR_Integer mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__Cast_HeadVar1_4 = mdb__declarative_edt__HeadVar__2_2;
    MR_Integer mdb__declarative_edt__Cast_HeadVar2_5 = mdb__declarative_edt__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__Cast_HeadVar1_4, mdb__declarative_edt__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_id_0_0(
  MR_Integer mdb__declarative_edt__HeadVar__1_1,
  MR_Integer mdb__declarative_edt__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__Cast_HeadVar1_3 = mdb__declarative_edt__HeadVar__1_1;
    MR_Integer mdb__declarative_edt__Cast_HeadVar2_4 = mdb__declarative_edt__HeadVar__2_2;

    mdb__declarative_edt__succeeded = (mdb__declarative_edt__Cast_HeadVar1_3 == mdb__declarative_edt__Cast_HeadVar2_4);
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt____Compare____suspect_1_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_23,
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__CastX_21 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
    MR_Integer mdb__declarative_edt__CastY_22 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_21 == mdb__declarative_edt__CastY_22);
    if (mdb__declarative_edt__succeeded)
      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdb__declarative_edt__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_edt__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
        MR_Box mdb__declarative_edt__ArgX2_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1));
        MR_Box mdb__declarative_edt__ArgY2_7 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1));
        MR_Word mdb__declarative_edt__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__declarative_edt__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer mdb__declarative_edt__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer mdb__declarative_edt__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mdb__declarative_edt__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word mdb__declarative_edt__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer mdb__declarative_edt__ArgX6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer mdb__declarative_edt__ArgY6_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word mdb__declarative_edt__Var_16;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[1], &mdb__declarative_edt__Var_16, ((MR_Box) (mdb__declarative_edt__ArgX1_4)), ((MR_Box) (mdb__declarative_edt__ArgY1_5)));
        }
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_16 == (MR_Integer) 0);
        mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
        if (mdb__declarative_edt__succeeded)
          *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_16;
        else
          {
            MR_Word mdb__declarative_edt__Var_17;

            {
              mercury__builtin__compare_3_p_0(mdb__declarative_edt__TypeInfo_for_T_23, &mdb__declarative_edt__Var_17, mdb__declarative_edt__ArgX2_6, mdb__declarative_edt__ArgY2_7);
            }
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_17 == (MR_Integer) 0);
            mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
            if (mdb__declarative_edt__succeeded)
              *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_17;
            else
              {
                MR_Word mdb__declarative_edt__Var_18;

                {
                  mdb__declarative_edt____Compare____suspect_status_0_0(&mdb__declarative_edt__Var_18, mdb__declarative_edt__ArgX3_8, mdb__declarative_edt__ArgY3_9);
                }
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_18 == (MR_Integer) 0);
                mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                if (mdb__declarative_edt__succeeded)
                  *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_18;
                else
                  {
                    MR_Word mdb__declarative_edt__Var_19;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_edt__Var_19, mdb__declarative_edt__ArgX4_10, mdb__declarative_edt__ArgY4_11);
                    }
                    mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_19 == (MR_Integer) 0);
                    mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                    if (mdb__declarative_edt__succeeded)
                      *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_19;
                    else
                      {
                        MR_Word mdb__declarative_edt__Var_20;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[3], &mdb__declarative_edt__Var_20, ((MR_Box) (mdb__declarative_edt__ArgX5_12)), ((MR_Box) (mdb__declarative_edt__ArgY5_13)));
                        }
                        mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_20 == (MR_Integer) 0);
                        mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                        if (mdb__declarative_edt__succeeded)
                          *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_20;
                        else
                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__ArgX6_14, mdb__declarative_edt__ArgY6_15);
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
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__CastX_20 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
    MR_Integer mdb__declarative_edt__CastY_21 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_20 == mdb__declarative_edt__CastY_21);
    if (mdb__declarative_edt__succeeded)
      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__declarative_edt__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 5:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 5:
              switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 6:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 6:
              switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mdb__declarative_edt__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mdb__declarative_edt__ArgY1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__Var_23, mdb__declarative_edt__ArgY1_7);
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
mdb__declarative_edt____Unify____suspect_1_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_17,
  MR_Word mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__CastX_15 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
    MR_Integer mdb__declarative_edt__CastY_16 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_15 == mdb__declarative_edt__CastY_16);
    if (mdb__declarative_edt__succeeded)
      mdb__declarative_edt__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__declarative_edt__TypeInfo_19_19;
        MR_Word mdb__declarative_edt__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__declarative_edt__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
        MR_Box mdb__declarative_edt__ArgX2_5 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 1));
        MR_Box mdb__declarative_edt__ArgY2_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1));
        MR_Word mdb__declarative_edt__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mdb__declarative_edt__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mdb__declarative_edt__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer mdb__declarative_edt__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mdb__declarative_edt__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word mdb__declarative_edt__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer mdb__declarative_edt__ArgX6_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer mdb__declarative_edt__ArgY6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 5)));

        {
          mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[1], ((MR_Box) (mdb__declarative_edt__ArgX1_3)), ((MR_Box) (mdb__declarative_edt__ArgY1_4)));
        }
        if (mdb__declarative_edt__succeeded)
          {
            {
              mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_for_T_17, mdb__declarative_edt__ArgX2_5, mdb__declarative_edt__ArgY2_6);
            }
            if (mdb__declarative_edt__succeeded)
              {
                {
                  mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____suspect_status_0_0(mdb__declarative_edt__ArgX3_7, mdb__declarative_edt__ArgY3_8);
                }
                if (mdb__declarative_edt__succeeded)
                  {
                    mdb__declarative_edt__succeeded = (mdb__declarative_edt__ArgX4_9 == mdb__declarative_edt__ArgY4_10);
                    if (mdb__declarative_edt__succeeded)
                      {
                        mdb__declarative_edt__TypeInfo_19_19 = (MR_Word) &mdb__declarative_edt_scalar_common_1[3];
                        {
                          mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_19_19, ((MR_Box) (mdb__declarative_edt__ArgX5_11)), ((MR_Box) (mdb__declarative_edt__ArgY5_12)));
                        }
                        if (mdb__declarative_edt__succeeded)
                          mdb__declarative_edt__succeeded = (mdb__declarative_edt__ArgX6_13 == mdb__declarative_edt__ArgY6_14);
                      }
                  }
              }
          }
      }
    return mdb__declarative_edt__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_status_0_0(
  MR_Word mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__CastX_19 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
    MR_Integer mdb__declarative_edt__CastY_20 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_19 == mdb__declarative_edt__CastY_20);
    if (mdb__declarative_edt__succeeded)
      mdb__declarative_edt__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__declarative_edt__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__declarative_edt__CastX_3 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
                MR_Integer mdb__declarative_edt__CastY_4 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

                mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_4 == mdb__declarative_edt__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__declarative_edt__CastX_7 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
                MR_Integer mdb__declarative_edt__CastY_8 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

                mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_8 == mdb__declarative_edt__CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mdb__declarative_edt__CastX_9 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
                MR_Integer mdb__declarative_edt__CastY_10 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

                mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_10 == mdb__declarative_edt__CastX_9);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer mdb__declarative_edt__CastX_11 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
                MR_Integer mdb__declarative_edt__CastY_12 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

                mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_12 == mdb__declarative_edt__CastX_11);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer mdb__declarative_edt__CastX_13 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
                MR_Integer mdb__declarative_edt__CastY_14 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

                mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_14 == mdb__declarative_edt__CastX_13);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer mdb__declarative_edt__CastX_15 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
                MR_Integer mdb__declarative_edt__CastY_16 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

                mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_16 == mdb__declarative_edt__CastX_15);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer mdb__declarative_edt__CastX_17 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
                MR_Integer mdb__declarative_edt__CastY_18 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

                mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_18 == mdb__declarative_edt__CastX_17);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mdb__declarative_edt__ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__declarative_edt__ArgY1_6;

            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__ArgX1_5 == mdb__declarative_edt__ArgY1_6);
              }
          }
          break;
      }
    return mdb__declarative_edt__succeeded;
  }
}

void MR_CALL 
mdb__declarative_edt____Compare____subterm_origin_1_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_91,
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__CastX_89 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
    MR_Integer mdb__declarative_edt__CastY_90 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_89 == mdb__declarative_edt__CastY_90);
    if (mdb__declarative_edt__succeeded)
      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__declarative_edt__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_edt__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mdb__declarative_edt__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mdb__declarative_edt__Var_103 = (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Box mdb__declarative_edt__ArgY1_5 = (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0));
                  MR_Word mdb__declarative_edt__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_edt__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_edt__Var_10;

                  {
                    mercury__builtin__compare_3_p_0(mdb__declarative_edt__TypeInfo_for_T_91, &mdb__declarative_edt__Var_10, mdb__declarative_edt__Var_103, mdb__declarative_edt__ArgY1_5);
                  }
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_10 == (MR_Integer) 0);
                  mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                  if (mdb__declarative_edt__succeeded)
                    *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_10;
                  else
                    {
                      MR_Word mdb__declarative_edt__Var_11;

                      {
                        mdbcomp__program_representation____Compare____arg_pos_0_0(&mdb__declarative_edt__Var_11, mdb__declarative_edt__Var_102, mdb__declarative_edt__ArgY2_7);
                      }
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_11 == (MR_Integer) 0);
                      mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                      if (mdb__declarative_edt__succeeded)
                        *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_11;
                      else
                        {
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[0], mdb__declarative_edt__HeadVar__1_1, ((MR_Box) (mdb__declarative_edt__Var_101)), ((MR_Box) (mdb__declarative_edt__ArgY3_9)));
                          }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_edt__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdb__declarative_edt__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mdb__declarative_edt__ArgY1_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mdb__declarative_edt__ArgY2_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_edt__Var_38;

                  {
                    mdbcomp__program_representation____Compare____arg_pos_0_0(&mdb__declarative_edt__Var_38, mdb__declarative_edt__Var_100, mdb__declarative_edt__ArgY1_35);
                  }
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_38 == (MR_Integer) 0);
                  mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                  if (mdb__declarative_edt__succeeded)
                    *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_38;
                  else
                    {
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[0], mdb__declarative_edt__HeadVar__1_1, ((MR_Box) (mdb__declarative_edt__Var_99)), ((MR_Box) (mdb__declarative_edt__ArgY2_37)));
                      }
                    }
                }
                break;
              case (MR_Integer) 3:
                *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word mdb__declarative_edt__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mdb__declarative_edt__Var_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
            MR_String mdb__declarative_edt__Var_106 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_String mdb__declarative_edt__ArgY1_60 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mdb__declarative_edt__ArgY2_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_edt__ArgY3_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_edt__Var_65;

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_edt__Var_65, mdb__declarative_edt__Var_106, mdb__declarative_edt__ArgY1_60);
                  }
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_65 == (MR_Integer) 0);
                  mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                  if (mdb__declarative_edt__succeeded)
                    *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_65;
                  else
                    {
                      MR_Word mdb__declarative_edt__Var_66;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_edt__Var_66, mdb__declarative_edt__Var_105, mdb__declarative_edt__ArgY2_62);
                      }
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_66 == (MR_Integer) 0);
                      mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                      if (mdb__declarative_edt__succeeded)
                        *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_66;
                      else
                        {
                          MR_Integer mdb__declarative_edt__Var_107 = (MR_Integer) mdb__declarative_edt__Var_104;
                          MR_Integer mdb__declarative_edt__Var_108 = (MR_Integer) mdb__declarative_edt__ArgY3_64;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__Var_107, mdb__declarative_edt__Var_108);
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

MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_origin_1_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_25,
  MR_Word mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__CastX_23 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
    MR_Integer mdb__declarative_edt__CastY_24 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_23 == mdb__declarative_edt__CastY_24);
    if (mdb__declarative_edt__succeeded)
      mdb__declarative_edt__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__declarative_edt__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__declarative_edt__CastX_19 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
                MR_Integer mdb__declarative_edt__CastY_20 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

                mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_20 == mdb__declarative_edt__CastX_19);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__declarative_edt__CastX_21 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
                MR_Integer mdb__declarative_edt__CastY_22 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

                mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_22 == mdb__declarative_edt__CastX_21);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_edt__TypeInfo_29_29;
            MR_Box mdb__declarative_edt__ArgX1_3 = (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mdb__declarative_edt__ArgY1_4;
            MR_Word mdb__declarative_edt__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_edt__ArgY2_6;
            MR_Word mdb__declarative_edt__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mdb__declarative_edt__ArgY3_8;

            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__ArgY1_4 = (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0));
                mdb__declarative_edt__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_edt__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
                {
                  mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_for_T_25, mdb__declarative_edt__ArgX1_3, mdb__declarative_edt__ArgY1_4);
                }
                if (mdb__declarative_edt__succeeded)
                  {
                    {
                      mdb__declarative_edt__succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(mdb__declarative_edt__ArgX2_5, mdb__declarative_edt__ArgY2_6);
                    }
                    if (mdb__declarative_edt__succeeded)
                      {
                        mdb__declarative_edt__TypeInfo_29_29 = (MR_Word) &mdb__declarative_edt_scalar_common_1[0];
                        {
                          mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_29_29, ((MR_Box) (mdb__declarative_edt__ArgX3_7)), ((MR_Box) (mdb__declarative_edt__ArgY3_8)));
                        }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_edt__TypeInfo_27_27;
            MR_Word mdb__declarative_edt__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_edt__ArgY1_10;
            MR_Word mdb__declarative_edt__ArgX2_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_edt__ArgY2_12;

            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_edt__ArgY2_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
                {
                  mdb__declarative_edt__succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(mdb__declarative_edt__ArgX1_9, mdb__declarative_edt__ArgY1_10);
                }
                if (mdb__declarative_edt__succeeded)
                  {
                    mdb__declarative_edt__TypeInfo_27_27 = (MR_Word) &mdb__declarative_edt_scalar_common_1[0];
                    {
                      mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_27_27, ((MR_Box) (mdb__declarative_edt__ArgX2_11)), ((MR_Box) (mdb__declarative_edt__ArgY2_12)));
                    }
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String mdb__declarative_edt__ArgX1_13 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mdb__declarative_edt__ArgY1_14;
            MR_Integer mdb__declarative_edt__ArgX2_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mdb__declarative_edt__ArgY2_16;
            MR_Word mdb__declarative_edt__ArgX3_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mdb__declarative_edt__ArgY3_18;

            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__ArgY1_14 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_edt__ArgY2_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_edt__ArgY3_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
                mdb__declarative_edt__succeeded = (strcmp(mdb__declarative_edt__ArgX1_13, mdb__declarative_edt__ArgY1_14) == 0);
                if (mdb__declarative_edt__succeeded)
                  {
                    mdb__declarative_edt__succeeded = (mdb__declarative_edt__ArgX2_15 == mdb__declarative_edt__ArgY2_16);
                    if (mdb__declarative_edt__succeeded)
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__ArgX3_17 == mdb__declarative_edt__ArgY3_18);
                  }
              }
          }
          break;
      }
    return mdb__declarative_edt__succeeded;
  }
}

void MR_CALL 
mdb__declarative_edt____Compare____subterm_mode_0_0(
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
    MR_Integer mdb__declarative_edt__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__Cast_HeadVar1_4, mdb__declarative_edt__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_mode_0_0(
  MR_Word mdb__declarative_edt__HeadVar__2_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__HeadVar__2_1 == mdb__declarative_edt__HeadVar__2_2);

    return mdb__declarative_edt__succeeded;
  }
}

void MR_CALL 
mdb__declarative_edt____Compare____search_space_1_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_26,
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__CastX_24 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
    MR_Integer mdb__declarative_edt__CastY_25 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_24 == mdb__declarative_edt__CastY_25);
    if (mdb__declarative_edt__succeeded)
      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdb__declarative_edt__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_edt__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__declarative_edt__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__declarative_edt__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__declarative_edt__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__declarative_edt__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdb__declarative_edt__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mdb__declarative_edt__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mdb__declarative_edt__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word mdb__declarative_edt__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word mdb__declarative_edt__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word mdb__declarative_edt__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word mdb__declarative_edt__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word mdb__declarative_edt__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word mdb__declarative_edt__Var_18;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[1], &mdb__declarative_edt__Var_18, ((MR_Box) (mdb__declarative_edt__ArgX1_4)), ((MR_Box) (mdb__declarative_edt__ArgY1_5)));
        }
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_18 == (MR_Integer) 0);
        mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
        if (mdb__declarative_edt__succeeded)
          *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_18;
        else
          {
            MR_Word mdb__declarative_edt__Var_19;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[1], &mdb__declarative_edt__Var_19, ((MR_Box) (mdb__declarative_edt__ArgX2_6)), ((MR_Box) (mdb__declarative_edt__ArgY2_7)));
            }
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_19 == (MR_Integer) 0);
            mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
            if (mdb__declarative_edt__succeeded)
              *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_19;
            else
              {
                MR_Word mdb__declarative_edt__Var_20;

                {
                  mercury__counter____Compare____counter_0_0(&mdb__declarative_edt__Var_20, mdb__declarative_edt__ArgX3_8, mdb__declarative_edt__ArgY3_9);
                }
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_20 == (MR_Integer) 0);
                mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                if (mdb__declarative_edt__succeeded)
                  *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_20;
                else
                  {
                    MR_Word mdb__declarative_edt__Var_21;

                    {
                      mercury__counter____Compare____counter_0_0(&mdb__declarative_edt__Var_21, mdb__declarative_edt__ArgX4_10, mdb__declarative_edt__ArgY4_11);
                    }
                    mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_21 == (MR_Integer) 0);
                    mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                    if (mdb__declarative_edt__succeeded)
                      *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_21;
                    else
                      {
                        MR_Word mdb__declarative_edt__Var_22;
                        MR_Word mdb__declarative_edt__TypeInfo_33_33;

                        {
                          mdb__declarative_edt__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_33_33, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
                          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_33_33, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_26));
                        }
                        {
                          mercury__tree234____Compare____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__TypeInfo_33_33, &mdb__declarative_edt__Var_22, mdb__declarative_edt__ArgX5_12, mdb__declarative_edt__ArgY5_13);
                        }
                        mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_22 == (MR_Integer) 0);
                        mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                        if (mdb__declarative_edt__succeeded)
                          *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_22;
                        else
                          {
                            MR_Word mdb__declarative_edt__Var_23;

                            {
                              mercury__bimap____Compare____bimap_2_0(mdb__declarative_edt__TypeInfo_for_T_26, mdb__declarative_edt__TypeInfo_for_T_26, &mdb__declarative_edt__Var_23, mdb__declarative_edt__ArgX6_14, mdb__declarative_edt__ArgY6_15);
                            }
                            mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_23 == (MR_Integer) 0);
                            mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                            if (mdb__declarative_edt__succeeded)
                              *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_23;
                            else
                              {
                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[2], mdb__declarative_edt__HeadVar__1_1, ((MR_Box) (mdb__declarative_edt__ArgX7_16)), ((MR_Box) (mdb__declarative_edt__ArgY7_17)));
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

MR_bool MR_CALL 
mdb__declarative_edt____Unify____search_space_1_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_19,
  MR_Word mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__CastX_17 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
    MR_Integer mdb__declarative_edt__CastY_18 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_17 == mdb__declarative_edt__CastY_18);
    if (mdb__declarative_edt__succeeded)
      mdb__declarative_edt__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__declarative_edt__TypeInfo_21_21;
        MR_Word mdb__declarative_edt__TypeCtorInfo_24_24;
        MR_Word mdb__declarative_edt__TypeCtorInfo_25_25;
        MR_Word mdb__declarative_edt__TypeInfo_26_26;
        MR_Word mdb__declarative_edt__TypeInfo_31_31;
        MR_Word mdb__declarative_edt__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__declarative_edt__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_edt__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__declarative_edt__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__declarative_edt__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mdb__declarative_edt__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__declarative_edt__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mdb__declarative_edt__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mdb__declarative_edt__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word mdb__declarative_edt__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word mdb__declarative_edt__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word mdb__declarative_edt__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word mdb__declarative_edt__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word mdb__declarative_edt__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 6)));

        {
          mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[1], ((MR_Box) (mdb__declarative_edt__ArgX1_3)), ((MR_Box) (mdb__declarative_edt__ArgY1_4)));
        }
        if (mdb__declarative_edt__succeeded)
          {
            mdb__declarative_edt__TypeInfo_21_21 = (MR_Word) &mdb__declarative_edt_scalar_common_1[1];
            {
              mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_21_21, ((MR_Box) (mdb__declarative_edt__ArgX2_5)), ((MR_Box) (mdb__declarative_edt__ArgY2_6)));
            }
            if (mdb__declarative_edt__succeeded)
              {
                {
                  mdb__declarative_edt__succeeded = mercury__counter____Unify____counter_0_0(mdb__declarative_edt__ArgX3_7, mdb__declarative_edt__ArgY3_8);
                }
                if (mdb__declarative_edt__succeeded)
                  {
                    {
                      mdb__declarative_edt__succeeded = mercury__counter____Unify____counter_0_0(mdb__declarative_edt__ArgX4_9, mdb__declarative_edt__ArgY4_10);
                    }
                    if (mdb__declarative_edt__succeeded)
                      {
                        mdb__declarative_edt__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                        mdb__declarative_edt__TypeCtorInfo_25_25 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1;
                        {
                          mdb__declarative_edt__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_26_26, 0) = ((MR_Box) (mdb__declarative_edt__TypeCtorInfo_25_25));
                          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_26_26, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_19));
                        }
                        {
                          mdb__declarative_edt__succeeded = mercury__tree234____Unify____tree234_2_0(mdb__declarative_edt__TypeCtorInfo_24_24, mdb__declarative_edt__TypeInfo_26_26, mdb__declarative_edt__ArgX5_11, mdb__declarative_edt__ArgY5_12);
                        }
                        if (mdb__declarative_edt__succeeded)
                          {
                            {
                              mdb__declarative_edt__succeeded = mercury__bimap____Unify____bimap_2_0(mdb__declarative_edt__TypeInfo_for_T_19, mdb__declarative_edt__TypeInfo_for_T_19, mdb__declarative_edt__ArgX6_13, mdb__declarative_edt__ArgY6_14);
                            }
                            if (mdb__declarative_edt__succeeded)
                              {
                                mdb__declarative_edt__TypeInfo_31_31 = (MR_Word) &mdb__declarative_edt_scalar_common_1[2];
                                {
                                  mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_31_31, ((MR_Box) (mdb__declarative_edt__ArgX7_15)), ((MR_Box) (mdb__declarative_edt__ArgY7_16)));
                                }
                              }
                          }
                      }
                  }
              }
          }
      }
    return mdb__declarative_edt__succeeded;
  }
}

void MR_CALL 
mdb__declarative_edt____Compare____primitive_op_type_0_0(
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
    MR_Integer mdb__declarative_edt__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__Cast_HeadVar1_4, mdb__declarative_edt__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_edt____Unify____primitive_op_type_0_0(
  MR_Word mdb__declarative_edt__HeadVar__2_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__HeadVar__2_1 == mdb__declarative_edt__HeadVar__2_2);

    return mdb__declarative_edt__succeeded;
  }
}

void MR_CALL 
mdb__declarative_edt____Compare____maybe_found_descendant_0_0(
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__CastX_16 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
    MR_Integer mdb__declarative_edt__CastY_17 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_16 == mdb__declarative_edt__CastY_17);
    if (mdb__declarative_edt__succeeded)
      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mdb__declarative_edt__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mdb__declarative_edt__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__Var_20, mdb__declarative_edt__ArgY1_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mdb__declarative_edt__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer mdb__declarative_edt__ArgY1_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__Var_21, mdb__declarative_edt__ArgY1_15);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_edt____Unify____maybe_found_descendant_0_0(
  MR_Word mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__CastX_9 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
    MR_Integer mdb__declarative_edt__CastY_10 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_9 == mdb__declarative_edt__CastY_10);
    if (mdb__declarative_edt__succeeded)
      mdb__declarative_edt__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mdb__declarative_edt__CastX_5 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
            MR_Integer mdb__declarative_edt__CastY_6 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

            mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_6 == mdb__declarative_edt__CastX_5);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mdb__declarative_edt__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__declarative_edt__ArgY1_4;

            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__ArgX1_3 == mdb__declarative_edt__ArgY1_4);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mdb__declarative_edt__ArgX1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__declarative_edt__ArgY1_8;

            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__ArgX1_7 == mdb__declarative_edt__ArgY1_8);
              }
          }
          break;
      }
    return mdb__declarative_edt__succeeded;
  }
}

void MR_CALL 
mdb__declarative_edt____Compare____find_origin_response_0_0(
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__CastX_101 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
    MR_Integer mdb__declarative_edt__CastY_102 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_101 == mdb__declarative_edt__CastY_102);
    if (mdb__declarative_edt__succeeded)
      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__declarative_edt__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_edt__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)));
            MR_Word mdb__declarative_edt__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mdb__declarative_edt__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mdb__declarative_edt__Var_115 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mdb__declarative_edt__ArgY1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mdb__declarative_edt__ArgY2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_edt__ArgY3_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_edt__ArgY4_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word mdb__declarative_edt__Var_25;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_edt__Var_25, mdb__declarative_edt__Var_115, mdb__declarative_edt__ArgY1_18);
                  }
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_25 == (MR_Integer) 0);
                  mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                  if (mdb__declarative_edt__succeeded)
                    *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_25;
                  else
                    {
                      MR_Word mdb__declarative_edt__Var_26;

                      {
                        mdbcomp__program_representation____Compare____arg_pos_0_0(&mdb__declarative_edt__Var_26, mdb__declarative_edt__Var_114, mdb__declarative_edt__ArgY2_20);
                      }
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_26 == (MR_Integer) 0);
                      mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                      if (mdb__declarative_edt__succeeded)
                        *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_26;
                      else
                        {
                          MR_Word mdb__declarative_edt__Var_27;

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[0], &mdb__declarative_edt__Var_27, ((MR_Box) (mdb__declarative_edt__Var_113)), ((MR_Box) (mdb__declarative_edt__ArgY3_22)));
                          }
                          mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_27 == (MR_Integer) 0);
                          mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                          if (mdb__declarative_edt__succeeded)
                            *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_27;
                          else
                            {
                              MR_Integer mdb__declarative_edt__Var_121 = (MR_Integer) mdb__declarative_edt__Var_112;
                              MR_Integer mdb__declarative_edt__Var_122 = (MR_Integer) mdb__declarative_edt__ArgY4_24;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__Var_121, mdb__declarative_edt__Var_122);
                              }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_edt__Var_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word mdb__declarative_edt__Var_117 = ((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
            MR_Integer mdb__declarative_edt__Var_118 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
            MR_String mdb__declarative_edt__Var_119 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mdb__declarative_edt__Var_120 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_edt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer mdb__declarative_edt__ArgY1_60 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String mdb__declarative_edt__ArgY2_62 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer mdb__declarative_edt__ArgY3_64 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_edt__ArgY4_66 = ((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 3);
                  MR_Word mdb__declarative_edt__ArgY5_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word mdb__declarative_edt__Var_69;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_edt__Var_69, mdb__declarative_edt__Var_120, mdb__declarative_edt__ArgY1_60);
                  }
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_69 == (MR_Integer) 0);
                  mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                  if (mdb__declarative_edt__succeeded)
                    *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_69;
                  else
                    {
                      MR_Word mdb__declarative_edt__Var_70;

                      {
                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_edt__Var_70, mdb__declarative_edt__Var_119, mdb__declarative_edt__ArgY2_62);
                      }
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_70 == (MR_Integer) 0);
                      mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                      if (mdb__declarative_edt__succeeded)
                        *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_70;
                      else
                        {
                          MR_Word mdb__declarative_edt__Var_71;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_edt__Var_71, mdb__declarative_edt__Var_118, mdb__declarative_edt__ArgY3_64);
                          }
                          mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_71 == (MR_Integer) 0);
                          mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                          if (mdb__declarative_edt__succeeded)
                            *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_71;
                          else
                            {
                              MR_Word mdb__declarative_edt__Var_72;
                              MR_Integer mdb__declarative_edt__Var_123 = (MR_Integer) mdb__declarative_edt__Var_117;
                              MR_Integer mdb__declarative_edt__Var_124 = (MR_Integer) mdb__declarative_edt__ArgY4_66;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_edt__Var_72, mdb__declarative_edt__Var_123, mdb__declarative_edt__Var_124);
                              }
                              mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_72 == (MR_Integer) 0);
                              mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
                              if (mdb__declarative_edt__succeeded)
                                *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__Var_72;
                              else
                                {
                                  MR_Integer mdb__declarative_edt__Var_125 = (MR_Integer) mdb__declarative_edt__Var_116;
                                  MR_Integer mdb__declarative_edt__Var_126 = (MR_Integer) mdb__declarative_edt__ArgY5_68;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__Var_125, mdb__declarative_edt__Var_126);
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
}

MR_bool MR_CALL 
mdb__declarative_edt____Unify____find_origin_response_0_0(
  MR_Word mdb__declarative_edt__HeadVar__1_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__CastX_27 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
    MR_Integer mdb__declarative_edt__CastY_28 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_27 == mdb__declarative_edt__CastY_28);
    if (mdb__declarative_edt__succeeded)
      mdb__declarative_edt__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__declarative_edt__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__declarative_edt__CastX_3 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
                MR_Integer mdb__declarative_edt__CastY_4 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

                mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_4 == mdb__declarative_edt__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__declarative_edt__CastX_23 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
                MR_Integer mdb__declarative_edt__CastY_24 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

                mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_24 == mdb__declarative_edt__CastX_23);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mdb__declarative_edt__CastX_25 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
                MR_Integer mdb__declarative_edt__CastY_26 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

                mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_26 == mdb__declarative_edt__CastX_25);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_edt__TypeInfo_30_30;
            MR_Integer mdb__declarative_edt__ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__declarative_edt__ArgY1_6;
            MR_Word mdb__declarative_edt__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_edt__ArgY2_8;
            MR_Word mdb__declarative_edt__ArgX3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mdb__declarative_edt__ArgY3_10;
            MR_Word mdb__declarative_edt__ArgX4_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mdb__declarative_edt__ArgY4_12;

            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_edt__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_edt__ArgY3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
                mdb__declarative_edt__ArgY4_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)));
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__ArgX1_5 == mdb__declarative_edt__ArgY1_6);
                if (mdb__declarative_edt__succeeded)
                  {
                    {
                      mdb__declarative_edt__succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(mdb__declarative_edt__ArgX2_7, mdb__declarative_edt__ArgY2_8);
                    }
                    if (mdb__declarative_edt__succeeded)
                      {
                        mdb__declarative_edt__TypeInfo_30_30 = (MR_Word) &mdb__declarative_edt_scalar_common_1[0];
                        {
                          mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_30_30, ((MR_Box) (mdb__declarative_edt__ArgX3_9)), ((MR_Box) (mdb__declarative_edt__ArgY3_10)));
                        }
                        if (mdb__declarative_edt__succeeded)
                          mdb__declarative_edt__succeeded = (mdb__declarative_edt__ArgX4_11 == mdb__declarative_edt__ArgY4_12);
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mdb__declarative_edt__ArgX1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__declarative_edt__ArgY1_14;
            MR_String mdb__declarative_edt__ArgX2_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 1)));
            MR_String mdb__declarative_edt__ArgY2_16;
            MR_Integer mdb__declarative_edt__ArgX3_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer mdb__declarative_edt__ArgY3_18;
            MR_Word mdb__declarative_edt__ArgX4_19 = ((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 3);
            MR_Word mdb__declarative_edt__ArgY4_20;
            MR_Word mdb__declarative_edt__ArgX5_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word mdb__declarative_edt__ArgY5_22;

            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__ArgY1_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_edt__ArgY2_16 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_edt__ArgY3_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
                mdb__declarative_edt__ArgY4_20 = ((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
                mdb__declarative_edt__ArgY5_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__ArgX1_13 == mdb__declarative_edt__ArgY1_14);
                if (mdb__declarative_edt__succeeded)
                  {
                    mdb__declarative_edt__succeeded = (strcmp(mdb__declarative_edt__ArgX2_15, mdb__declarative_edt__ArgY2_16) == 0);
                    if (mdb__declarative_edt__succeeded)
                      {
                        mdb__declarative_edt__succeeded = (mdb__declarative_edt__ArgX3_17 == mdb__declarative_edt__ArgY3_18);
                        if (mdb__declarative_edt__succeeded)
                          {
                            mdb__declarative_edt__succeeded = (mdb__declarative_edt__ArgX4_19 == mdb__declarative_edt__ArgY4_20);
                            if (mdb__declarative_edt__succeeded)
                              mdb__declarative_edt__succeeded = (mdb__declarative_edt__ArgX5_21 == mdb__declarative_edt__ArgY5_22);
                          }
                      }
                  }
              }
          }
          break;
      }
    return mdb__declarative_edt__succeeded;
  }
}

MR_Integer MR_CALL 
mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_f_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5,
  MR_Box mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__HeadVar__2_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__HeadVar__4_4;
    MR_Box MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5, (MR_Integer) 0)), (MR_Integer) 19)));
    MR_Box mdb__declarative_edt__conv1_HeadVar__4_4;

    {
      mdb__declarative_edt__conv1_HeadVar__4_4 = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, ((MR_Box) (mdb__declarative_edt__HeadVar__3_3)));
    }
    mdb__declarative_edt__HeadVar__4_4 = ((MR_Integer) mdb__declarative_edt__conv1_HeadVar__4_4);
    return mdb__declarative_edt__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mdb__declarative_edt__edt_proc_label_2_f_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4,
  MR_Box mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__HeadVar__3_3;
    MR_Box MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 18)));
    MR_Box mdb__declarative_edt__conv1_HeadVar__3_3;

    {
      mdb__declarative_edt__conv1_HeadVar__3_3 = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2);
    }
    mdb__declarative_edt__HeadVar__3_3 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__3_3);
    return mdb__declarative_edt__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__edt_context_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5,
  MR_Box mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__HeadVar__2_2,
  MR_Word * mdb__declarative_edt__HeadVar__3_3,
  MR_Word * mdb__declarative_edt__HeadVar__4_4)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5, (MR_Integer) 0)), (MR_Integer) 17)));
    MR_Box mdb__declarative_edt__conv2_HeadVar__3_3;
    MR_Box mdb__declarative_edt__conv1_HeadVar__4_4;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, &mdb__declarative_edt__conv2_HeadVar__3_3, &mdb__declarative_edt__conv1_HeadVar__4_4);
    }
    if (mdb__declarative_edt__succeeded)
      {
        *mdb__declarative_edt__HeadVar__3_3 = ((MR_Word) mdb__declarative_edt__conv2_HeadVar__3_3);
        *mdb__declarative_edt__HeadVar__4_4 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__4_4);
        mdb__declarative_edt__succeeded = MR_TRUE;
      }
    return mdb__declarative_edt__succeeded;
  }
}

void MR_CALL 
mdb__declarative_edt__edt_subtree_suspicion_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5,
  MR_Box mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__HeadVar__2_2,
  MR_Integer * mdb__declarative_edt__HeadVar__3_3,
  MR_Integer * mdb__declarative_edt__HeadVar__4_4)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5, (MR_Integer) 0)), (MR_Integer) 16)));
    MR_Box mdb__declarative_edt__conv2_HeadVar__3_3;
    MR_Box mdb__declarative_edt__conv1_HeadVar__4_4;

    {
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, &mdb__declarative_edt__conv2_HeadVar__3_3, &mdb__declarative_edt__conv1_HeadVar__4_4);
    }
    *mdb__declarative_edt__HeadVar__3_3 = ((MR_Integer) mdb__declarative_edt__conv2_HeadVar__3_3);
    *mdb__declarative_edt__HeadVar__4_4 = ((MR_Integer) mdb__declarative_edt__conv1_HeadVar__4_4);
  }
}

void MR_CALL 
mdb__declarative_edt__edt_number_of_events_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5,
  MR_Box mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__HeadVar__2_2,
  MR_Integer * mdb__declarative_edt__HeadVar__3_3,
  MR_Integer * mdb__declarative_edt__HeadVar__4_4)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5, (MR_Integer) 0)), (MR_Integer) 15)));
    MR_Box mdb__declarative_edt__conv2_HeadVar__3_3;
    MR_Box mdb__declarative_edt__conv1_HeadVar__4_4;

    {
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, &mdb__declarative_edt__conv2_HeadVar__3_3, &mdb__declarative_edt__conv1_HeadVar__4_4);
    }
    *mdb__declarative_edt__HeadVar__3_3 = ((MR_Integer) mdb__declarative_edt__conv2_HeadVar__3_3);
    *mdb__declarative_edt__HeadVar__4_4 = ((MR_Integer) mdb__declarative_edt__conv1_HeadVar__4_4);
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__edt_topmost_node_2_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_3,
  MR_Box mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_3, (MR_Integer) 0)), (MR_Integer) 14)));

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_3), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2);
    }
    return mdb__declarative_edt__succeeded;
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__edt_same_nodes_3_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4,
  MR_Box mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__HeadVar__2_2,
  MR_Box mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 13)));

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, mdb__declarative_edt__HeadVar__3_3);
    }
    return mdb__declarative_edt__succeeded;
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__edt_is_implicit_root_2_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_3,
  MR_Box mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_3, (MR_Integer) 0)), (MR_Integer) 12)));

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_3), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2);
    }
    return mdb__declarative_edt__succeeded;
  }
}

void MR_CALL 
mdb__declarative_edt__edt_subterm_mode_5_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_6,
  MR_Box mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__HeadVar__2_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3,
  MR_Word mdb__declarative_edt__HeadVar__4_4,
  MR_Word * mdb__declarative_edt__HeadVar__5_5)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_6, (MR_Integer) 0)), (MR_Integer) 11)));
    MR_Box mdb__declarative_edt__conv1_HeadVar__5_5;

    {
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_6), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, ((MR_Box) (mdb__declarative_edt__HeadVar__3_3)), ((MR_Box) (mdb__declarative_edt__HeadVar__4_4)), &mdb__declarative_edt__conv1_HeadVar__5_5);
    }
    *mdb__declarative_edt__HeadVar__5_5 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__5_5);
  }
}

void MR_CALL 
mdb__declarative_edt__edt_dependency_6_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_7,
  MR_Box mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__HeadVar__2_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3,
  MR_Word mdb__declarative_edt__HeadVar__4_4,
  MR_Word * mdb__declarative_edt__HeadVar__5_5,
  MR_Word * mdb__declarative_edt__HeadVar__6_6)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_7, (MR_Integer) 0)), (MR_Integer) 10)));
    MR_Box mdb__declarative_edt__conv2_HeadVar__5_5;
    MR_Box mdb__declarative_edt__conv1_HeadVar__6_6;

    {
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_7), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, ((MR_Box) (mdb__declarative_edt__HeadVar__3_3)), ((MR_Box) (mdb__declarative_edt__HeadVar__4_4)), &mdb__declarative_edt__conv2_HeadVar__5_5, &mdb__declarative_edt__conv1_HeadVar__6_6);
    }
    *mdb__declarative_edt__HeadVar__5_5 = ((MR_Word) mdb__declarative_edt__conv2_HeadVar__5_5);
    *mdb__declarative_edt__HeadVar__6_6 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__6_6);
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__edt_parent_3_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4,
  MR_Box mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__HeadVar__2_2,
  MR_Box * mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 9)));

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, mdb__declarative_edt__HeadVar__3_3);
    }
    return mdb__declarative_edt__succeeded;
  }
}

void MR_CALL 
mdb__declarative_edt__edt_get_i_bug_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5,
  MR_Box mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__HeadVar__2_2,
  MR_Box mdb__declarative_edt__HeadVar__3_3,
  MR_Word * mdb__declarative_edt__HeadVar__4_4)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5, (MR_Integer) 0)), (MR_Integer) 7)));
    MR_Box mdb__declarative_edt__conv1_HeadVar__4_4;

    {
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, mdb__declarative_edt__HeadVar__3_3, &mdb__declarative_edt__conv1_HeadVar__4_4);
    }
    *mdb__declarative_edt__HeadVar__4_4 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__4_4);
  }
}

void MR_CALL 
mdb__declarative_edt__edt_get_e_bug_3_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4,
  MR_Box mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__HeadVar__2_2,
  MR_Word * mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 6)));
    MR_Box mdb__declarative_edt__conv1_HeadVar__3_3;

    {
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, &mdb__declarative_edt__conv1_HeadVar__3_3);
    }
    *mdb__declarative_edt__HeadVar__3_3 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__3_3);
  }
}

void MR_CALL 
mdb__declarative_edt__edt_question_3_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4,
  MR_Box mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__HeadVar__2_2,
  MR_Word * mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box mdb__declarative_edt__conv1_HeadVar__3_3;

    {
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, &mdb__declarative_edt__conv1_HeadVar__3_3);
    }
    *mdb__declarative_edt__HeadVar__3_3 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__3_3);
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__find_first_implicit_root_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_33,
  MR_Box mdb__declarative_edt__Store_5,
  MR_Word mdb__declarative_edt__SearchSpace_6,
  MR_Word mdb__declarative_edt__HeadVar__3_3,
  MR_Integer * mdb__declarative_edt__ImplicitRoot_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        MR_Word mdb__declarative_edt__TypeInfo_35_35;
        MR_Integer mdb__declarative_edt__SuspectId_7;
        MR_Word mdb__declarative_edt__SuspectIds_8;
        MR_Word mdb__declarative_edt__Suspect_10;
        MR_Word mdb__declarative_edt__Status_11;
        MR_Integer mdb__declarative_edt__PolyConst2_34;
        MR_Word mdb__declarative_edt__Var_18;
        MR_Box mdb__declarative_edt__Var_19;
        MR_Integer mdb__declarative_edt__Var_20;
        MR_Word mdb__declarative_edt__Var_21;
        MR_Integer mdb__declarative_edt__Var_22;
        MR_Word mdb__declarative_edt__Var_14;
        MR_Box mdb__declarative_edt__Var_15;
        MR_Word mdb__declarative_edt__Var_23;
        MR_Word mdb__declarative_edt__Var_24;
        MR_Integer mdb__declarative_edt__Var_25;
        MR_Word mdb__declarative_edt__Var_26;
        MR_Integer mdb__declarative_edt__Var_27;
        MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box);

        if (mdb__declarative_edt__succeeded)
          {
            mdb__declarative_edt__SuspectId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
            mdb__declarative_edt__SuspectIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
            mdb__declarative_edt__PolyConst2_34 = (MR_Integer) 2;
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_33, mdb__declarative_edt__PolyConst2_34, &mdb__declarative_edt__TypeInfo_35_35);
            }
            {
              mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_35_35, mdb__declarative_edt__SearchSpace_6, mdb__declarative_edt__SuspectId_7, &mdb__declarative_edt__Suspect_10);
            }
            mdb__declarative_edt__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 0)));
            mdb__declarative_edt__Var_19 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 1));
            mdb__declarative_edt__Status_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 2)));
            mdb__declarative_edt__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 3)));
            mdb__declarative_edt__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 4)));
            mdb__declarative_edt__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 5)));
            mdb__declarative_edt__Var_14 = (MR_Integer) 1;
            switch (MR_tag((MR_Word) mdb__declarative_edt__Status_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_edt__Status_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_14 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_14 == (MR_Integer) 0);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_14 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_14 == (MR_Integer) 0);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_14 == (MR_Integer) 0);
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_14 == (MR_Integer) 0);
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_14 == (MR_Integer) 1);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_14 == (MR_Integer) 1);
                }
                break;
            }
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 0)));
                mdb__declarative_edt__Var_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 1));
                mdb__declarative_edt__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 2)));
                mdb__declarative_edt__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 3)));
                mdb__declarative_edt__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 4)));
                mdb__declarative_edt__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 5)));
                mdb__declarative_edt__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_33, (MR_Integer) 0)), (MR_Integer) 12)));
                {
                  mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_33), mdb__declarative_edt__Store_5, mdb__declarative_edt__Var_15);
                }
              }
            if (mdb__declarative_edt__succeeded)
              {
                *mdb__declarative_edt__ImplicitRoot_9 = mdb__declarative_edt__SuspectId_7;
                mdb__declarative_edt__succeeded = MR_TRUE;
              }
            else
              {
                MR_Integer mdb__declarative_edt__ImplicitRootInChildren_13;
                MR_Word mdb__declarative_edt__Children_12;
                MR_Word mdb__declarative_edt__Var_17;
                MR_Word mdb__declarative_edt__Var_28;
                MR_Box mdb__declarative_edt__Var_29;
                MR_Word mdb__declarative_edt__Var_30;
                MR_Integer mdb__declarative_edt__Var_31;
                MR_Integer mdb__declarative_edt__Var_32;

                switch (MR_tag((MR_Word) mdb__declarative_edt__Status_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdb__declarative_edt__Status_11)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                    }
                    break;
                }
                if (mdb__declarative_edt__succeeded)
                  {
                    mdb__declarative_edt__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 0)));
                    mdb__declarative_edt__Var_29 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 1));
                    mdb__declarative_edt__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 2)));
                    mdb__declarative_edt__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 3)));
                    mdb__declarative_edt__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 4)));
                    mdb__declarative_edt__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 5)));
                    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Var_17)) == (MR_mktag((MR_Integer) 1)));
                    if (mdb__declarative_edt__succeeded)
                      {
                        mdb__declarative_edt__Children_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_17, (MR_Integer) 0)));
                        {
                          mdb__declarative_edt__succeeded = mdb__declarative_edt__find_first_implicit_root_4_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_33, mdb__declarative_edt__Store_5, mdb__declarative_edt__SearchSpace_6, mdb__declarative_edt__Children_12, &mdb__declarative_edt__ImplicitRootInChildren_13);
                        }
                      }
                  }
                if (mdb__declarative_edt__succeeded)
                  {
                    *mdb__declarative_edt__ImplicitRoot_9 = mdb__declarative_edt__ImplicitRootInChildren_13;
                    mdb__declarative_edt__succeeded = MR_TRUE;
                  }
                else
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mdb__declarative_edt__next_value_of_HeadVar__3_3 = mdb__declarative_edt__SuspectIds_8;

                      mdb__declarative_edt__HeadVar__3_3 = mdb__declarative_edt__next_value_of_HeadVar__3_3;
                    }
                    continue;
                  }
              }
          }
        return mdb__declarative_edt__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mdb__declarative_edt__should_check_search_space_consistency_0_p_0(void)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

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
	if (SUCCESS_INDICATOR) {
	}
mdb__declarative_edt__succeeded  = SUCCESS_INDICATOR;
}
    return mdb__declarative_edt__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__suspect_is_leaf_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_19,
  MR_Word mdb__declarative_edt__SearchSpace_3,
  MR_Integer mdb__declarative_edt__SuspectId_4)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Suspect_5;
    MR_Word mdb__declarative_edt__Var_21;
    MR_Integer mdb__declarative_edt__Var_20;
    MR_Integer mdb__declarative_edt__Var_22;
    MR_Word mdb__declarative_edt__Var_23;
    MR_Box mdb__declarative_edt__Var_24;
    MR_Word mdb__declarative_edt__Var_25;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_19, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
    mdb__declarative_edt__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
    mdb__declarative_edt__Var_24 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
    mdb__declarative_edt__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
    mdb__declarative_edt__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
    mdb__declarative_edt__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
    mdb__declarative_edt__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
    if ((mdb__declarative_edt__Var_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdb__declarative_edt__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__declarative_edt__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_21, (MR_Integer) 0)));

        mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt__least_skipped_5_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_21,
  MR_Word mdb__declarative_edt__SearchSpace_6,
  MR_Integer mdb__declarative_edt__SuspectId1_7,
  MR_Word mdb__declarative_edt__Suspect1_8,
  MR_Integer mdb__declarative_edt__SuspectId2_9,
  MR_Integer * mdb__declarative_edt__LeastSkipped_10)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Status1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect1_8, (MR_Integer) 2)));
    MR_Word mdb__declarative_edt__Status2_12;
    MR_Word mdb__declarative_edt__Suspect_25;
    MR_Word mdb__declarative_edt__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect1_8, (MR_Integer) 0)));
    MR_Box mdb__declarative_edt__Var_17 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect1_8, (MR_Integer) 1));
    MR_Integer mdb__declarative_edt__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect1_8, (MR_Integer) 3)));
    MR_Word mdb__declarative_edt__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect1_8, (MR_Integer) 4)));
    MR_Integer mdb__declarative_edt__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect1_8, (MR_Integer) 5)));
    MR_Word mdb__declarative_edt__Var_26;
    MR_Box mdb__declarative_edt__Var_27;
    MR_Integer mdb__declarative_edt__Var_28;
    MR_Word mdb__declarative_edt__Var_29;
    MR_Integer mdb__declarative_edt__Var_30;
    MR_Integer mdb__declarative_edt__N_13;
    MR_Integer mdb__declarative_edt__M_14;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_21, mdb__declarative_edt__SearchSpace_6, mdb__declarative_edt__SuspectId2_9, &mdb__declarative_edt__Suspect_25);
    }
    mdb__declarative_edt__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_25, (MR_Integer) 0)));
    mdb__declarative_edt__Var_27 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_25, (MR_Integer) 1));
    mdb__declarative_edt__Status2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_25, (MR_Integer) 2)));
    mdb__declarative_edt__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_25, (MR_Integer) 3)));
    mdb__declarative_edt__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_25, (MR_Integer) 4)));
    mdb__declarative_edt__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_25, (MR_Integer) 5)));
    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Status1_11)) == (MR_mktag((MR_Integer) 1)));
    if (mdb__declarative_edt__succeeded)
      {
        mdb__declarative_edt__N_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Status1_11, (MR_Integer) 0)));
        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Status2_12)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__declarative_edt__succeeded)
          mdb__declarative_edt__M_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Status2_12, (MR_Integer) 0)));
      }
    if (mdb__declarative_edt__succeeded)
      {
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__N_13 > mdb__declarative_edt__M_14);
        if (mdb__declarative_edt__succeeded)
          *mdb__declarative_edt__LeastSkipped_10 = mdb__declarative_edt__SuspectId2_9;
        else
          *mdb__declarative_edt__LeastSkipped_10 = mdb__declarative_edt__SuspectId1_7;
      }
    else
      {
        MR_Integer mdb__declarative_edt__Var_15;

        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Status1_11)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__declarative_edt__succeeded)
          {
            mdb__declarative_edt__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Status1_11, (MR_Integer) 0)));
            *mdb__declarative_edt__LeastSkipped_10 = mdb__declarative_edt__SuspectId1_7;
          }
        else
          *mdb__declarative_edt__LeastSkipped_10 = mdb__declarative_edt__SuspectId2_9;
      }
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__calc_num_unexplored_1_f_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__IntroducedFrom__pred__calc_num_unexplored__1444__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_edt__wrapper_arg_1));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static MR_Integer MR_CALL 
mdb__declarative_edt__calc_num_unexplored_1_f_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_32,
  MR_Word mdb__declarative_edt__SearchSpace_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__NumUnexplored_4;
    MR_Word mdb__declarative_edt__TypeInfo_35_35;
    MR_Word mdb__declarative_edt__Suspects_5;
    MR_Word mdb__declarative_edt__SuspectIsBuggySubtree_6;
    MR_Word mdb__declarative_edt__Unexplored_12;
    MR_Word mdb__declarative_edt__Var_13;
    MR_Word mdb__declarative_edt__Var_26;
    MR_Word mdb__declarative_edt__Var_27;
    MR_Word mdb__declarative_edt__Var_28;
    MR_Word mdb__declarative_edt__Var_29;
    MR_Word mdb__declarative_edt__Var_30;
    MR_Word mdb__declarative_edt__Var_31;
    MR_Word mdb__declarative_edt__conv0_Unexplored_12;

    {
      mdb__declarative_edt__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_35_35, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_35_35, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_32));
    }
    mdb__declarative_edt__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 0)));
    mdb__declarative_edt__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 1)));
    mdb__declarative_edt__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 2)));
    mdb__declarative_edt__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 3)));
    mdb__declarative_edt__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 4)));
    mdb__declarative_edt__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 5)));
    mdb__declarative_edt__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 6)));
    {
      mdb__declarative_edt__Suspects_5 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__TypeInfo_35_35, mdb__declarative_edt__Var_13);
    }
    {
      mdb__declarative_edt__SuspectIsBuggySubtree_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectIsBuggySubtree_6, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectIsBuggySubtree_6, 1) = ((MR_Box) (mdb__declarative_edt__calc_num_unexplored_1_f_0_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectIsBuggySubtree_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectIsBuggySubtree_6, 3) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_32));
    }
    {
      mercury__list__filter_3_p_0(mdb__declarative_edt__TypeInfo_35_35, (MR_Word) mdb__declarative_edt__SuspectIsBuggySubtree_6, (MR_Word) mdb__declarative_edt__Suspects_5, &mdb__declarative_edt__conv0_Unexplored_12);
    }
    mdb__declarative_edt__Unexplored_12 = (MR_Word) mdb__declarative_edt__conv0_Unexplored_12;
    {
      mdb__declarative_edt__NumUnexplored_4 = mercury__list__length_1_f_0(mdb__declarative_edt__TypeInfo_35_35, (MR_Word) mdb__declarative_edt__Unexplored_12);
    }
    return mdb__declarative_edt__NumUnexplored_4;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__calc_num_unknown_1_f_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__IntroducedFrom__pred__calc_num_unknown__1414__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_edt__wrapper_arg_1));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static MR_Integer MR_CALL 
mdb__declarative_edt__calc_num_unknown_1_f_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_34,
  MR_Word mdb__declarative_edt__SearchSpace_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__NumUnknown_4;
    MR_Word mdb__declarative_edt__TypeInfo_37_37;
    MR_Word mdb__declarative_edt__Suspects_5;
    MR_Word mdb__declarative_edt__SuspectIsQuestionable_6;
    MR_Word mdb__declarative_edt__Questionable_13;
    MR_Word mdb__declarative_edt__Var_14;
    MR_Word mdb__declarative_edt__Var_28;
    MR_Word mdb__declarative_edt__Var_29;
    MR_Word mdb__declarative_edt__Var_30;
    MR_Word mdb__declarative_edt__Var_31;
    MR_Word mdb__declarative_edt__Var_32;
    MR_Word mdb__declarative_edt__Var_33;
    MR_Word mdb__declarative_edt__conv0_Questionable_13;

    {
      mdb__declarative_edt__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_37_37, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_37_37, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_34));
    }
    mdb__declarative_edt__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 0)));
    mdb__declarative_edt__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 1)));
    mdb__declarative_edt__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 2)));
    mdb__declarative_edt__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 3)));
    mdb__declarative_edt__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 4)));
    mdb__declarative_edt__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 5)));
    mdb__declarative_edt__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 6)));
    {
      mdb__declarative_edt__Suspects_5 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__TypeInfo_37_37, mdb__declarative_edt__Var_14);
    }
    {
      mdb__declarative_edt__SuspectIsQuestionable_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectIsQuestionable_6, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectIsQuestionable_6, 1) = ((MR_Box) (mdb__declarative_edt__calc_num_unknown_1_f_0_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectIsQuestionable_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectIsQuestionable_6, 3) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_34));
    }
    {
      mercury__list__filter_3_p_0(mdb__declarative_edt__TypeInfo_37_37, (MR_Word) mdb__declarative_edt__SuspectIsQuestionable_6, (MR_Word) mdb__declarative_edt__Suspects_5, &mdb__declarative_edt__conv0_Questionable_13);
    }
    mdb__declarative_edt__Questionable_13 = (MR_Word) mdb__declarative_edt__conv0_Questionable_13;
    {
      mdb__declarative_edt__NumUnknown_4 = mercury__list__length_1_f_0(mdb__declarative_edt__TypeInfo_37_37, (MR_Word) mdb__declarative_edt__Questionable_13);
    }
    return mdb__declarative_edt__NumUnknown_4;
  }
}

static void MR_CALL 
mdb__declarative_edt__add_original_weight_7_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_15,
  MR_Word mdb__declarative_edt__Weighting_8,
  MR_Box mdb__declarative_edt__Store_9,
  MR_Box mdb__declarative_edt__Node_10,
  MR_Integer mdb__declarative_edt__Prev_11,
  MR_Integer * mdb__declarative_edt__HeadVar__5_5,
  MR_Integer mdb__declarative_edt__PrevExcess_13,
  MR_Integer * mdb__declarative_edt__HeadVar__7_7)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__Weight_12;
    MR_Integer mdb__declarative_edt__Excess_14;

    switch (mdb__declarative_edt__Weighting_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_15, (MR_Integer) 0)), (MR_Integer) 15)));
          MR_Box mdb__declarative_edt__conv2_Weight_12;
          MR_Box mdb__declarative_edt__conv1_Excess_14;

          {
            mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_15), mdb__declarative_edt__Store_9, mdb__declarative_edt__Node_10, &mdb__declarative_edt__conv2_Weight_12, &mdb__declarative_edt__conv1_Excess_14);
          }
          mdb__declarative_edt__Weight_12 = ((MR_Integer) mdb__declarative_edt__conv2_Weight_12);
          mdb__declarative_edt__Excess_14 = ((MR_Integer) mdb__declarative_edt__conv1_Excess_14);
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* mdb__declarative_edt__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_15, (MR_Integer) 0)), (MR_Integer) 16)));
          MR_Box mdb__declarative_edt__conv5_Weight_12;
          MR_Box mdb__declarative_edt__conv4_Excess_14;

          {
            mdb__declarative_edt__func_3(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_15), mdb__declarative_edt__Store_9, mdb__declarative_edt__Node_10, &mdb__declarative_edt__conv5_Weight_12, &mdb__declarative_edt__conv4_Excess_14);
          }
          mdb__declarative_edt__Weight_12 = ((MR_Integer) mdb__declarative_edt__conv5_Weight_12);
          mdb__declarative_edt__Excess_14 = ((MR_Integer) mdb__declarative_edt__conv4_Excess_14);
        }
        break;
    }
    *mdb__declarative_edt__HeadVar__5_5 = (mdb__declarative_edt__Prev_11 + mdb__declarative_edt__Weight_12);
    *mdb__declarative_edt__HeadVar__7_7 = (mdb__declarative_edt__PrevExcess_13 + mdb__declarative_edt__Excess_14);
  }
}

static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_5_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3,
  MR_Box mdb__declarative_edt__wrapper_arg_4,
  MR_Box * mdb__declarative_edt__wrapper_arg_5)
{
  {
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
    MR_Word mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16;
    MR_Word mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18;

    {
      mdb__declarative_edt__propagate_status_downwards_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16, ((MR_Word) mdb__declarative_edt__wrapper_arg_4), &mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18);
    }
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16));
    *mdb__declarative_edt__wrapper_arg_5 = ((MR_Box) (mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18));
  }
}

static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_5_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_14,
  MR_Word mdb__declarative_edt__Status_6,
  MR_Word mdb__declarative_edt__StopStatusSet_7,
  MR_Integer mdb__declarative_edt__SuspectId_8,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_29_85;
    MR_Word mdb__declarative_edt__Suspect_22;
    MR_Word mdb__declarative_edt__Var_24;
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25;
    MR_Word mdb__declarative_edt__Var_57;
    MR_Word mdb__declarative_edt__Store0_67;
    MR_Word mdb__declarative_edt__Store_68;
    MR_Word mdb__declarative_edt__Var_31;
    MR_Box mdb__declarative_edt__Var_32;
    MR_Integer mdb__declarative_edt__Var_34;
    MR_Word mdb__declarative_edt__Var_35;
    MR_Integer mdb__declarative_edt__Var_36;
    MR_Word mdb__declarative_edt__Var_33;
    MR_Word mdb__declarative_edt__Var_70;
    MR_Word mdb__declarative_edt__Var_71;
    MR_Word mdb__declarative_edt__Var_72;
    MR_Word mdb__declarative_edt__Var_73;
    MR_Word mdb__declarative_edt__Var_74;
    MR_Word mdb__declarative_edt__Var_75;
    MR_Word mdb__declarative_edt__conv0_Store_68;
    MR_Word mdb__declarative_edt__Var_76;
    MR_Word mdb__declarative_edt__Var_77;
    MR_Word mdb__declarative_edt__Var_78;
    MR_Word mdb__declarative_edt__Var_79;
    MR_Word mdb__declarative_edt__Var_81;
    MR_Word mdb__declarative_edt__Var_82;
    MR_Word mdb__declarative_edt__Var_80;
    MR_Integer mdb__declarative_edt__Var_56;
    MR_Integer mdb__declarative_edt__Var_58;
    MR_Word mdb__declarative_edt__Var_59;
    MR_Box mdb__declarative_edt__Var_60;
    MR_Word mdb__declarative_edt__Var_61;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_14, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, mdb__declarative_edt__SuspectId_8, &mdb__declarative_edt__Suspect_22);
    }
    mdb__declarative_edt__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 0)));
    mdb__declarative_edt__Var_32 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 1));
    mdb__declarative_edt__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 2)));
    mdb__declarative_edt__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 3)));
    mdb__declarative_edt__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 4)));
    mdb__declarative_edt__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 5)));
    {
      mdb__declarative_edt__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_24, 0) = ((MR_Box) (mdb__declarative_edt__Var_31));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_24, 1) = mdb__declarative_edt__Var_32;
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_24, 2) = ((MR_Box) (mdb__declarative_edt__Status_6));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_24, 3) = ((MR_Box) (mdb__declarative_edt__Var_34));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_24, 4) = ((MR_Box) (mdb__declarative_edt__Var_35));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_24, 5) = ((MR_Box) (mdb__declarative_edt__Var_36));
    }
    mdb__declarative_edt__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 0)));
    mdb__declarative_edt__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 1)));
    mdb__declarative_edt__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 2)));
    mdb__declarative_edt__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 3)));
    mdb__declarative_edt__Store0_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 4)));
    mdb__declarative_edt__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 5)));
    mdb__declarative_edt__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 6)));
    {
      mdb__declarative_edt__TypeInfo_29_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_85, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_85, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_14));
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_85, mdb__declarative_edt__SuspectId_8, ((MR_Box) (mdb__declarative_edt__Var_24)), (MR_Word) mdb__declarative_edt__Store0_67, &mdb__declarative_edt__conv0_Store_68);
    }
    mdb__declarative_edt__Store_68 = (MR_Word) mdb__declarative_edt__conv0_Store_68;
    mdb__declarative_edt__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 0)));
    mdb__declarative_edt__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 1)));
    mdb__declarative_edt__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 2)));
    mdb__declarative_edt__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 3)));
    mdb__declarative_edt__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 4)));
    mdb__declarative_edt__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 5)));
    mdb__declarative_edt__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 6)));
    {
      mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25, 0) = ((MR_Box) (mdb__declarative_edt__Var_76));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25, 1) = ((MR_Box) (mdb__declarative_edt__Var_77));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25, 2) = ((MR_Box) (mdb__declarative_edt__Var_78));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25, 3) = ((MR_Box) (mdb__declarative_edt__Var_79));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25, 4) = ((MR_Box) (mdb__declarative_edt__Store_68));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25, 5) = ((MR_Box) (mdb__declarative_edt__Var_81));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25, 6) = ((MR_Box) (mdb__declarative_edt__Var_82));
    }
    mdb__declarative_edt__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 0)));
    mdb__declarative_edt__Var_60 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 1));
    mdb__declarative_edt__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 2)));
    mdb__declarative_edt__Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 3)));
    mdb__declarative_edt__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 4)));
    mdb__declarative_edt__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 5)));
    if ((mdb__declarative_edt__Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25;
    else
      {
        MR_Word mdb__declarative_edt__TypeInfo_48_55;
        MR_Word mdb__declarative_edt__Children_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_57, (MR_Integer) 0)));
        MR_Word mdb__declarative_edt__Var_28;
        MR_Word mdb__declarative_edt__Var_86;
        MR_Box mdb__declarative_edt__conv4_Var_86;
        MR_Box mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_12;

        {
          mdb__declarative_edt__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_7[1]));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 1) = ((MR_Box) (mdb__declarative_edt__force_propagate_status_downwards_5_p_0_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 3) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_14));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 4) = ((MR_Box) (mdb__declarative_edt__Status_6));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 5) = ((MR_Box) (mdb__declarative_edt__StopStatusSet_7));
        }
        {
          mdb__declarative_edt__TypeInfo_48_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_48_55, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_48_55, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_14));
        }
        {
          mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_edt_scalar_common_1[0], mdb__declarative_edt__TypeInfo_48_55, mdb__declarative_edt__Var_28, mdb__declarative_edt__Children_23, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mdb__declarative_edt__conv4_Var_86, ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25)), &mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_12);
        }
        mdb__declarative_edt__Var_86 = ((MR_Word) mdb__declarative_edt__conv4_Var_86);
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12 = ((MR_Word) mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_12);
      }
  }
}

static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_5_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_14,
  MR_Word mdb__declarative_edt__Status_6,
  MR_Word mdb__declarative_edt__StopStatusSet_7,
  MR_Integer mdb__declarative_edt__SuspectId_8,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Var_10;

    {
      mdb__declarative_edt__propagate_status_downwards_7_p_0(mdb__declarative_edt__TypeInfo_for_T_14, mdb__declarative_edt__Status_6, mdb__declarative_edt__StopStatusSet_7, mdb__declarative_edt__SuspectId_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_edt__Var_10, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12);
    }
  }
}

static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_7_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3,
  MR_Box mdb__declarative_edt__wrapper_arg_4,
  MR_Box * mdb__declarative_edt__wrapper_arg_5)
{
  {
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
    MR_Word mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16;
    MR_Word mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18;

    {
      mdb__declarative_edt__propagate_status_downwards_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16, ((MR_Word) mdb__declarative_edt__wrapper_arg_4), &mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18);
    }
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16));
    *mdb__declarative_edt__wrapper_arg_5 = ((MR_Box) (mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18));
  }
}

static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_7_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_49,
  MR_Word mdb__declarative_edt__Status_8,
  MR_Word mdb__declarative_edt__StopStatusSet_9,
  MR_Integer mdb__declarative_edt__SuspectId_10,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_StopSuspects_0_15,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_StopSuspects_16,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_18)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Suspect_13;
    MR_Word mdb__declarative_edt__Var_19;
    MR_Word mdb__declarative_edt__Var_28;
    MR_Box mdb__declarative_edt__Var_29;
    MR_Integer mdb__declarative_edt__Var_30;
    MR_Word mdb__declarative_edt__Var_31;
    MR_Integer mdb__declarative_edt__Var_32;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_49, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, mdb__declarative_edt__SuspectId_10, &mdb__declarative_edt__Suspect_13);
    }
    mdb__declarative_edt__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 0)));
    mdb__declarative_edt__Var_29 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 1));
    mdb__declarative_edt__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 2)));
    mdb__declarative_edt__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 3)));
    mdb__declarative_edt__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 4)));
    mdb__declarative_edt__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 5)));
    {
      mdb__declarative_edt__succeeded = mercury__list__member_2_p_0((MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0, ((MR_Box) (mdb__declarative_edt__Var_19)), mdb__declarative_edt__StopStatusSet_9);
    }
    if (mdb__declarative_edt__succeeded)
      {
        {
          mercury__list__cons_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_edt__SuspectId_10)), mdb__declarative_edt__STATE_VARIABLE_StopSuspects_0_15, mdb__declarative_edt__STATE_VARIABLE_StopSuspects_16);
        }
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_18 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17;
      }
    else
      {
        MR_Word mdb__declarative_edt__TypeInfo_29_90;
        MR_Word mdb__declarative_edt__Var_21;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_22_22;
        MR_Word mdb__declarative_edt__Var_62;
        MR_Word mdb__declarative_edt__Store0_72;
        MR_Word mdb__declarative_edt__Store_73;
        MR_Word mdb__declarative_edt__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 0)));
        MR_Box mdb__declarative_edt__Var_34 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 1));
        MR_Integer mdb__declarative_edt__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 3)));
        MR_Word mdb__declarative_edt__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 4)));
        MR_Integer mdb__declarative_edt__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 5)));
        MR_Word mdb__declarative_edt__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 2)));
        MR_Word mdb__declarative_edt__Var_75;
        MR_Word mdb__declarative_edt__Var_76;
        MR_Word mdb__declarative_edt__Var_77;
        MR_Word mdb__declarative_edt__Var_78;
        MR_Word mdb__declarative_edt__Var_79;
        MR_Word mdb__declarative_edt__Var_80;
        MR_Word mdb__declarative_edt__conv0_Store_73;
        MR_Word mdb__declarative_edt__Var_81;
        MR_Word mdb__declarative_edt__Var_82;
        MR_Word mdb__declarative_edt__Var_83;
        MR_Word mdb__declarative_edt__Var_84;
        MR_Word mdb__declarative_edt__Var_86;
        MR_Word mdb__declarative_edt__Var_87;
        MR_Word mdb__declarative_edt__Var_85;
        MR_Integer mdb__declarative_edt__Var_61;
        MR_Integer mdb__declarative_edt__Var_63;
        MR_Word mdb__declarative_edt__Var_64;
        MR_Box mdb__declarative_edt__Var_65;
        MR_Word mdb__declarative_edt__Var_66;

        {
          mdb__declarative_edt__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_21, 0) = ((MR_Box) (mdb__declarative_edt__Var_33));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_21, 1) = mdb__declarative_edt__Var_34;
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_21, 2) = ((MR_Box) (mdb__declarative_edt__Status_8));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_21, 3) = ((MR_Box) (mdb__declarative_edt__Var_36));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_21, 4) = ((MR_Box) (mdb__declarative_edt__Var_37));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_21, 5) = ((MR_Box) (mdb__declarative_edt__Var_38));
        }
        mdb__declarative_edt__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 0)));
        mdb__declarative_edt__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 1)));
        mdb__declarative_edt__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 2)));
        mdb__declarative_edt__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 3)));
        mdb__declarative_edt__Store0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 4)));
        mdb__declarative_edt__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 5)));
        mdb__declarative_edt__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 6)));
        {
          mdb__declarative_edt__TypeInfo_29_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_90, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_90, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_49));
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_90, mdb__declarative_edt__SuspectId_10, ((MR_Box) (mdb__declarative_edt__Var_21)), (MR_Word) mdb__declarative_edt__Store0_72, &mdb__declarative_edt__conv0_Store_73);
        }
        mdb__declarative_edt__Store_73 = (MR_Word) mdb__declarative_edt__conv0_Store_73;
        mdb__declarative_edt__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 0)));
        mdb__declarative_edt__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 1)));
        mdb__declarative_edt__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 2)));
        mdb__declarative_edt__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 3)));
        mdb__declarative_edt__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 4)));
        mdb__declarative_edt__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 5)));
        mdb__declarative_edt__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 6)));
        {
          mdb__declarative_edt__STATE_VARIABLE_SearchSpace_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_22_22, 0) = ((MR_Box) (mdb__declarative_edt__Var_81));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_22_22, 1) = ((MR_Box) (mdb__declarative_edt__Var_82));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_22_22, 2) = ((MR_Box) (mdb__declarative_edt__Var_83));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_22_22, 3) = ((MR_Box) (mdb__declarative_edt__Var_84));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_22_22, 4) = ((MR_Box) (mdb__declarative_edt__Store_73));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_22_22, 5) = ((MR_Box) (mdb__declarative_edt__Var_86));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_22_22, 6) = ((MR_Box) (mdb__declarative_edt__Var_87));
        }
        mdb__declarative_edt__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 0)));
        mdb__declarative_edt__Var_65 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 1));
        mdb__declarative_edt__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 2)));
        mdb__declarative_edt__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 3)));
        mdb__declarative_edt__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 4)));
        mdb__declarative_edt__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 5)));
        if ((mdb__declarative_edt__Var_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mdb__declarative_edt__STATE_VARIABLE_StopSuspects_16 = mdb__declarative_edt__STATE_VARIABLE_StopSuspects_0_15;
            *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_18 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_22_22;
          }
        else
          {
            MR_Word mdb__declarative_edt__TypeInfo_60_60;
            MR_Word mdb__declarative_edt__Children_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_62, (MR_Integer) 0)));
            MR_Word mdb__declarative_edt__Var_25;
            MR_Box mdb__declarative_edt__conv4_STATE_VARIABLE_StopSuspects_16;
            MR_Box mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_18;

            {
              mdb__declarative_edt__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_25, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_7[1]));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_25, 1) = ((MR_Box) (mdb__declarative_edt__propagate_status_downwards_7_p_0_1));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_25, 3) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_49));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_25, 4) = ((MR_Box) (mdb__declarative_edt__Status_8));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_25, 5) = ((MR_Box) (mdb__declarative_edt__StopStatusSet_9));
            }
            {
              mdb__declarative_edt__TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_60_60, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_60_60, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_49));
            }
            {
              mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_edt_scalar_common_1[0], mdb__declarative_edt__TypeInfo_60_60, mdb__declarative_edt__Var_25, mdb__declarative_edt__Children_14, ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_StopSuspects_0_15)), &mdb__declarative_edt__conv4_STATE_VARIABLE_StopSuspects_16, ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_22_22)), &mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_18);
            }
            *mdb__declarative_edt__STATE_VARIABLE_StopSuspects_16 = ((MR_Word) mdb__declarative_edt__conv4_STATE_VARIABLE_StopSuspects_16);
            *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_18 = ((MR_Word) mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_18);
          }
      }
  }
}

void MR_CALL 
mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_7,
  MR_Box mdb__declarative_edt__Store_4,
  MR_Word mdb__declarative_edt__SearchSpace_5,
  MR_String mdb__declarative_edt__Context_6)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

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
	if (SUCCESS_INDICATOR) {
	}
mdb__declarative_edt__succeeded  = SUCCESS_INDICATOR;
}
    if (mdb__declarative_edt__succeeded)
      {
        MR_String mdb__declarative_edt__Message_12;
        MR_Word mdb__declarative_edt__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 6)));
        MR_Word mdb__declarative_edt__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 0)));
        MR_Word mdb__declarative_edt__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 1)));
        MR_Word mdb__declarative_edt__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 2)));
        MR_Word mdb__declarative_edt__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 3)));
        MR_Word mdb__declarative_edt__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 4)));
        MR_Word mdb__declarative_edt__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 5)));
        MR_Word mdb__declarative_edt__Var_11;
        MR_Integer mdb__declarative_edt__RootId_29;
        MR_Integer mdb__declarative_edt__PolyConst2_31;
        MR_Word mdb__declarative_edt__Var_37;
        MR_Word mdb__declarative_edt__TypeInfo_11_32;
        MR_Word mdb__declarative_edt__Var_38;
        MR_Word mdb__declarative_edt__Var_39;
        MR_Word mdb__declarative_edt__Var_40;
        MR_Word mdb__declarative_edt__Var_41;
        MR_Word mdb__declarative_edt__Var_42;
        MR_Word mdb__declarative_edt__Var_43;

        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Var_13)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__declarative_edt__succeeded)
          {
            mdb__declarative_edt__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_13, (MR_Integer) 0)));
            mdb__declarative_edt__PolyConst2_31 = (MR_Integer) 2;
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_7, mdb__declarative_edt__PolyConst2_31, &mdb__declarative_edt__TypeInfo_11_32);
            }
            mdb__declarative_edt__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 0)));
            mdb__declarative_edt__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 1)));
            mdb__declarative_edt__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 2)));
            mdb__declarative_edt__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 3)));
            mdb__declarative_edt__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 4)));
            mdb__declarative_edt__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 5)));
            mdb__declarative_edt__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 6)));
            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Var_37)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__RootId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_37, (MR_Integer) 0)));
                {
                  mdb__declarative_edt__succeeded = mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_7, mdb__declarative_edt__Store_4, mdb__declarative_edt__SearchSpace_5, mdb__declarative_edt__RootId_29, &mdb__declarative_edt__Message_12);
                }
              }
            else
              {
                MR_Word mdb__declarative_edt__TypeInfo_13_34;
                MR_Integer mdb__declarative_edt__TopMostId_30;

                {
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_7, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_13_34);
                }
                {
                  mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_edt__TypeInfo_13_34, mdb__declarative_edt__SearchSpace_5, &mdb__declarative_edt__TopMostId_30);
                }
                {
                  mdb__declarative_edt__succeeded = mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_7, mdb__declarative_edt__Store_4, mdb__declarative_edt__SearchSpace_5, mdb__declarative_edt__TopMostId_30, &mdb__declarative_edt__Message_12);
                }
              }
          }
        if (mdb__declarative_edt__succeeded)
          {
            MR_Word mdb__declarative_edt__Var_14;
            MR_String mdb__declarative_edt__Var_16;
            MR_String mdb__declarative_edt__Var_17;

            {
              mdb__declarative_edt__Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "\n Context = ", mdb__declarative_edt__Context_6);
            }
            {
              mdb__declarative_edt__Var_16 = mercury__string__f_43_43_2_f_0(mdb__declarative_edt__Message_12, mdb__declarative_edt__Var_17);
            }
            {
              mdb__declarative_edt__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_14, 0) = ((MR_Box) ((MR_String) "check_search_space_consistency"));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_14, 1) = ((MR_Box) (mdb__declarative_edt__Var_16));
            }
            {
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_edt__Var_14)));
              return;
            }
          }
        else
          {
          }
      }
    else
      {
      }
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box * mdb__declarative_edt__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
    MR_String mdb__declarative_edt__conv0_Message_8;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4)), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), &mdb__declarative_edt__conv0_Message_8);
    }
    if (mdb__declarative_edt__succeeded)
      {
        *mdb__declarative_edt__wrapper_arg_2 = ((MR_Box) (mdb__declarative_edt__conv0_Message_8));
        mdb__declarative_edt__succeeded = MR_TRUE;
      }
    return mdb__declarative_edt__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_63,
  MR_Box mdb__declarative_edt__Store_5,
  MR_Word mdb__declarative_edt__SearchSpace_6,
  MR_Integer mdb__declarative_edt__SuspectId_7,
  MR_String * mdb__declarative_edt__Message_8)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_65_65;
    MR_Word mdb__declarative_edt__Suspect_9;
    MR_Integer mdb__declarative_edt__Weight_10;
    MR_Box mdb__declarative_edt__Var_15;
    MR_Word mdb__declarative_edt__Var_34;
    MR_Word mdb__declarative_edt__Var_36;
    MR_Word mdb__declarative_edt__Var_33;
    MR_Integer mdb__declarative_edt__Var_35;
    MR_Integer mdb__declarative_edt__Var_37;
    MR_Integer mdb__declarative_edt__Var_11;
    MR_Word mdb__declarative_edt__Var_50;
    MR_Word mdb__declarative_edt__Var_52;
    MR_Integer mdb__declarative_edt__Var_18;
    MR_Integer mdb__declarative_edt__Var_73;
    MR_Word mdb__declarative_edt__Var_48;
    MR_Box mdb__declarative_edt__Var_49;
    MR_Integer mdb__declarative_edt__Var_51;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_63, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_65_65);
    }
    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_65_65, mdb__declarative_edt__SearchSpace_6, mdb__declarative_edt__SuspectId_7, &mdb__declarative_edt__Suspect_9);
    }
    mdb__declarative_edt__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 0)));
    mdb__declarative_edt__Var_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 1));
    mdb__declarative_edt__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 2)));
    mdb__declarative_edt__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 3)));
    mdb__declarative_edt__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 4)));
    mdb__declarative_edt__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 5)));
    {
      mdb__declarative_edt__calc_suspect_weight_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_63, mdb__declarative_edt__Store_5, mdb__declarative_edt__Var_15, mdb__declarative_edt__Var_36, mdb__declarative_edt__Var_34, mdb__declarative_edt__SearchSpace_6, &mdb__declarative_edt__Weight_10, &mdb__declarative_edt__Var_11);
    }
    mdb__declarative_edt__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 0)));
    mdb__declarative_edt__Var_49 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 1));
    mdb__declarative_edt__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 2)));
    mdb__declarative_edt__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 3)));
    mdb__declarative_edt__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 4)));
    mdb__declarative_edt__Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 5)));
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__Weight_10 == mdb__declarative_edt__Var_73);
    if (mdb__declarative_edt__succeeded)
      {
        mdb__declarative_edt__Var_18 = (MR_Integer) 0;
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__Weight_10 >= mdb__declarative_edt__Var_18);
      }
    if (mdb__declarative_edt__succeeded)
      {
        MR_Word mdb__declarative_edt__TypeCtorInfo_68_68;
        MR_Word mdb__declarative_edt__TypeCtorInfo_69_69;
        MR_Word mdb__declarative_edt__Children_12;
        MR_Word mdb__declarative_edt__Messages_13;
        MR_Word mdb__declarative_edt__Var_21;
        MR_Word mdb__declarative_edt__Var_22;
        MR_Word mdb__declarative_edt__Var_14;

        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Var_52)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__declarative_edt__succeeded)
          {
            mdb__declarative_edt__Children_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_52, (MR_Integer) 0)));
            mdb__declarative_edt__Var_21 = (MR_Integer) 1;
            switch (MR_tag((MR_Word) mdb__declarative_edt__Var_50)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_edt__Var_50)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_21 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_21 == (MR_Integer) 0);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_21 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_21 == (MR_Integer) 0);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_21 == (MR_Integer) 0);
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_21 == (MR_Integer) 0);
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_21 == (MR_Integer) 1);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_21 == (MR_Integer) 1);
                }
                break;
            }
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__TypeCtorInfo_68_68 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                mdb__declarative_edt__TypeCtorInfo_69_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                {
                  mdb__declarative_edt__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_22, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_11[0]));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_22, 1) = ((MR_Box) (mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0_1));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_22, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_63));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_22, 4) = mdb__declarative_edt__Store_5;
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_22, 5) = ((MR_Box) (mdb__declarative_edt__SearchSpace_6));
                }
                {
                  mercury__list__filter_map_3_p_0(mdb__declarative_edt__TypeCtorInfo_68_68, mdb__declarative_edt__TypeCtorInfo_69_69, mdb__declarative_edt__Var_22, mdb__declarative_edt__Children_12, &mdb__declarative_edt__Messages_13);
                }
                mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Messages_13)) == (MR_mktag((MR_Integer) 1)));
                if (mdb__declarative_edt__succeeded)
                  {
                    *mdb__declarative_edt__Message_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Messages_13, (MR_Integer) 0)));
                    mdb__declarative_edt__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Messages_13, (MR_Integer) 1)));
                  }
              }
          }
      }
    else
      {
        MR_Word mdb__declarative_edt__TypeInfo_70_70;
        MR_Word mdb__declarative_edt__TypeInfo_72_72;
        MR_String mdb__declarative_edt__Var_24;
        MR_String mdb__declarative_edt__Var_25;
        MR_String mdb__declarative_edt__Var_26;
        MR_String mdb__declarative_edt__Var_28;
        MR_String mdb__declarative_edt__Var_29;
        MR_String mdb__declarative_edt__Var_30;
        MR_String mdb__declarative_edt__Var_32;

        {
          mdb__declarative_edt__Var_25 = mercury__string__int_to_string_1_f_0(mdb__declarative_edt__SuspectId_7);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_63, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_70_70);
        }
        {
          mdb__declarative_edt__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_72_72, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_72_72, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_70_70));
        }
        {
          mdb__declarative_edt__Var_29 = mercury__string__string_1_f_0(mdb__declarative_edt__TypeInfo_72_72, ((MR_Box) (mdb__declarative_edt__Suspect_9)));
        }
        {
          mdb__declarative_edt__Var_32 = mercury__string__int_to_string_1_f_0(mdb__declarative_edt__Weight_10);
        }
        {
          mdb__declarative_edt__Var_30 = mercury__string__f_43_43_2_f_0((MR_String) " Calculated weight = ", mdb__declarative_edt__Var_32);
        }
        {
          mdb__declarative_edt__Var_28 = mercury__string__f_43_43_2_f_0(mdb__declarative_edt__Var_29, mdb__declarative_edt__Var_30);
        }
        {
          mdb__declarative_edt__Var_26 = mercury__string__f_43_43_2_f_0((MR_String) ", Suspect = ", mdb__declarative_edt__Var_28);
        }
        {
          mdb__declarative_edt__Var_24 = mercury__string__f_43_43_2_f_0(mdb__declarative_edt__Var_25, mdb__declarative_edt__Var_26);
        }
        {
          *mdb__declarative_edt__Message_8 = mercury__string__f_43_43_2_f_0((MR_String) "Weights not consistent for suspect id ", mdb__declarative_edt__Var_24);
        }
        mdb__declarative_edt__succeeded = MR_TRUE;
      }
    return mdb__declarative_edt__succeeded;
  }
}

MR_Word MR_CALL 
mdb__declarative_edt__get_current_maybe_weighting_1_f_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_10,
  MR_Word mdb__declarative_edt__SearchSpace_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 6)));
    MR_Word mdb__declarative_edt__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 0)));
    MR_Word mdb__declarative_edt__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 1)));
    MR_Word mdb__declarative_edt__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 2)));
    MR_Word mdb__declarative_edt__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 3)));
    MR_Word mdb__declarative_edt__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 4)));
    MR_Word mdb__declarative_edt__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 5)));

    return mdb__declarative_edt__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__update_weighting_heuristic_4_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__1931__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1));
    }
    return mdb__declarative_edt__succeeded;
  }
}

void MR_CALL 
mdb__declarative_edt__update_weighting_heuristic_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46,
  MR_Box mdb__declarative_edt__Store_5,
  MR_Word mdb__declarative_edt__Weighting_6,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__MaybePrevWeighting_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 6)));
    MR_Word mdb__declarative_edt__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 0)));
    MR_Word mdb__declarative_edt__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 1)));
    MR_Word mdb__declarative_edt__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 2)));
    MR_Word mdb__declarative_edt__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 3)));
    MR_Word mdb__declarative_edt__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 4)));
    MR_Word mdb__declarative_edt__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 5)));
    MR_Word mdb__declarative_edt__PrevWeighting_9;

    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__MaybePrevWeighting_8)) == (MR_mktag((MR_Integer) 1)));
    if (mdb__declarative_edt__succeeded)
      {
        mdb__declarative_edt__PrevWeighting_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__MaybePrevWeighting_8, (MR_Integer) 0)));
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__PrevWeighting_9 == mdb__declarative_edt__Weighting_6);
      }
    if (mdb__declarative_edt__succeeded)
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13;
    else
      {
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15;
        MR_Word mdb__declarative_edt__Var_16;
        MR_Word mdb__declarative_edt__Var_27;
        MR_Word mdb__declarative_edt__Var_28;
        MR_Word mdb__declarative_edt__Var_29;
        MR_Word mdb__declarative_edt__Var_30;
        MR_Word mdb__declarative_edt__Var_31;
        MR_Word mdb__declarative_edt__Var_32;
        MR_Word mdb__declarative_edt__Var_33;
        MR_Word mdb__declarative_edt__TypeInfo_49_49;
        MR_Word mdb__declarative_edt__TypeInfo_51_51;
        MR_Word mdb__declarative_edt__Var_17;
        MR_Word mdb__declarative_edt__Var_34;
        MR_Word mdb__declarative_edt__Var_35;
        MR_Word mdb__declarative_edt__Var_36;
        MR_Word mdb__declarative_edt__Var_37;
        MR_Word mdb__declarative_edt__Var_38;
        MR_Word mdb__declarative_edt__Var_39;

        {
          mdb__declarative_edt__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_16, 0) = ((MR_Box) (mdb__declarative_edt__Weighting_6));
        }
        mdb__declarative_edt__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 0)));
        mdb__declarative_edt__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 1)));
        mdb__declarative_edt__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 2)));
        mdb__declarative_edt__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 3)));
        mdb__declarative_edt__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 4)));
        mdb__declarative_edt__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 5)));
        mdb__declarative_edt__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 6)));
        {
          mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, 0) = ((MR_Box) (mdb__declarative_edt__Var_27));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, 1) = ((MR_Box) (mdb__declarative_edt__Var_28));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, 2) = ((MR_Box) (mdb__declarative_edt__Var_29));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, 3) = ((MR_Box) (mdb__declarative_edt__Var_30));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, 4) = ((MR_Box) (mdb__declarative_edt__Var_31));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, 5) = ((MR_Box) (mdb__declarative_edt__Var_32));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, 6) = ((MR_Box) (mdb__declarative_edt__Var_16));
        }
        mdb__declarative_edt__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 0)));
        mdb__declarative_edt__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 1)));
        mdb__declarative_edt__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 2)));
        mdb__declarative_edt__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 3)));
        mdb__declarative_edt__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 4)));
        mdb__declarative_edt__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 5)));
        mdb__declarative_edt__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 6)));
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_49_49);
        }
        {
          mdb__declarative_edt__TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_51_51, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_51_51, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_49_49));
        }
        {
          mdb__declarative_edt__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__TypeInfo_51_51, (MR_Word) mdb__declarative_edt__Var_17);
        }
        if (mdb__declarative_edt__succeeded)
          *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15;
        else
          {
            MR_Word mdb__declarative_edt__TypeCtorInfo_52_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Word mdb__declarative_edt__TypeInfo_54_54;
            MR_Word mdb__declarative_edt__TypeInfo_56_56;
            MR_Word mdb__declarative_edt__TypeInfo_60_60;
            MR_Word mdb__declarative_edt__AllSuspects_10;
            MR_Word mdb__declarative_edt__Leaves_11;
            MR_Integer mdb__declarative_edt__TopId_12;
            MR_Word mdb__declarative_edt__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 4)));
            MR_Word mdb__declarative_edt__Var_19;
            MR_Word mdb__declarative_edt__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 0)));
            MR_Word mdb__declarative_edt__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 1)));
            MR_Word mdb__declarative_edt__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 2)));
            MR_Word mdb__declarative_edt__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 3)));
            MR_Word mdb__declarative_edt__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 5)));
            MR_Word mdb__declarative_edt__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 6)));

            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_54_54);
            }
            {
              mdb__declarative_edt__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_56_56, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_56_56, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_54_54));
            }
            {
              mercury__map__keys_2_p_0(mdb__declarative_edt__TypeCtorInfo_52_52, mdb__declarative_edt__TypeInfo_56_56, (MR_Word) mdb__declarative_edt__Var_18, &mdb__declarative_edt__AllSuspects_10);
            }
            {
              mdb__declarative_edt__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_19, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_6[1]));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_19, 1) = ((MR_Box) (mdb__declarative_edt__update_weighting_heuristic_4_p_0_1));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_19, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_19, 4) = ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15));
            }
            {
              mercury__list__filter_3_p_0(mdb__declarative_edt__TypeCtorInfo_52_52, mdb__declarative_edt__Var_19, mdb__declarative_edt__AllSuspects_10, &mdb__declarative_edt__Leaves_11);
            }
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_60_60);
            }
            {
              mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_edt__TypeInfo_60_60, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, &mdb__declarative_edt__TopId_12);
            }
            {
              mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46, mdb__declarative_edt__Store_5, mdb__declarative_edt__TopId_12, mdb__declarative_edt__Leaves_11, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__revise_root_3_p_0_2(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__IntroducedFrom__pred__revise_root__1897__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt__revise_root_3_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3)
{
  {
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
    MR_Word mdb__declarative_edt__conv0_HeadVar__6_86;

    {
      mdb__declarative_edt__IntroducedFrom__pred__revise_root__1883__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv0_HeadVar__6_86);
    }
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__6_86));
  }
}

void MR_CALL 
mdb__declarative_edt__revise_root_3_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81,
  MR_Box mdb__declarative_edt__Store_4,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 0)));
    MR_Word mdb__declarative_edt__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 6)));
    MR_Word mdb__declarative_edt__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 5)));
    MR_Word mdb__declarative_edt__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 4)));
    MR_Word mdb__declarative_edt__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 3)));
    MR_Word mdb__declarative_edt__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 2)));
    MR_Word mdb__declarative_edt__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 1)));

    if ((mdb__declarative_edt__Var_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[17])));
          return;
        }
      }
    else
      {
        MR_Word mdb__declarative_edt__TypeInfo_83_83;
        MR_Word mdb__declarative_edt__TypeCtorInfo_89_89;
        MR_Word mdb__declarative_edt__TypeInfo_90_90;
        MR_Word mdb__declarative_edt__TypeInfo_92_92;
        MR_Word mdb__declarative_edt__TypeInfo_93_93;
        MR_Word mdb__declarative_edt__TypeInfo_95_95;
        MR_Word mdb__declarative_edt__TypeInfo_97_97;
        MR_Integer mdb__declarative_edt__RootId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_108, (MR_Integer) 0)));
        MR_Word mdb__declarative_edt__StopSuspects_7;
        MR_Integer mdb__declarative_edt__Lowest_8;
        MR_Word mdb__declarative_edt__AllSuspects_9;
        MR_Word mdb__declarative_edt__Leaves_10;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20;
        MR_Word mdb__declarative_edt__Var_25;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26_26;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42;
        MR_Word mdb__declarative_edt__Var_46;
        MR_Word mdb__declarative_edt__Var_47;
        MR_Word mdb__declarative_edt__Var_109;
        MR_Word mdb__declarative_edt__Var_110;
        MR_Word mdb__declarative_edt__Var_111;
        MR_Word mdb__declarative_edt__Var_112;
        MR_Word mdb__declarative_edt__Var_113;
        MR_Word mdb__declarative_edt__Var_114;
        MR_Box mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_26_26;
        MR_Word mdb__declarative_edt__Var_115;
        MR_Word mdb__declarative_edt__TypeInfo_94_94;
        MR_Word mdb__declarative_edt__Var_69;
        MR_Word mdb__declarative_edt__Var_70;
        MR_Word mdb__declarative_edt__Var_71;
        MR_Word mdb__declarative_edt__Var_72;
        MR_Word mdb__declarative_edt__Var_73;
        MR_Word mdb__declarative_edt__Var_74;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_83_83);
        }
        {
          mdb__declarative_edt__force_propagate_status_downwards_6_p_0(mdb__declarative_edt__TypeInfo_83_83, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_1[5]), mdb__declarative_edt__RootId_6, &mdb__declarative_edt__StopSuspects_7, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20);
        }
        {
          mdb__declarative_edt__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_25, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_8[3]));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_25, 1) = ((MR_Box) (mdb__declarative_edt__revise_root_3_p_0_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_25, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_25, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_25, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_1[5])));
        }
        mdb__declarative_edt__TypeCtorInfo_89_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_90_90);
        }
        {
          mdb__declarative_edt__TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_92_92, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_92_92, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_90_90));
        }
        {
          mercury__list__foldl_4_p_0(mdb__declarative_edt__TypeCtorInfo_89_89, mdb__declarative_edt__TypeInfo_92_92, (MR_Word) mdb__declarative_edt__Var_25, mdb__declarative_edt__StopSuspects_7, ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20)), &mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_26_26);
        }
        mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26_26 = ((MR_Word) mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_26_26);
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_93_93);
        }
        {
          mdb__declarative_edt__propagate_status_upwards_6_p_0(mdb__declarative_edt__TypeInfo_93_93, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_1[6]), mdb__declarative_edt__RootId_6, &mdb__declarative_edt__Lowest_8, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35);
        }
        mdb__declarative_edt__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35, (MR_Integer) 0)));
        mdb__declarative_edt__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35, (MR_Integer) 1)));
        mdb__declarative_edt__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35, (MR_Integer) 2)));
        mdb__declarative_edt__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35, (MR_Integer) 3)));
        mdb__declarative_edt__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35, (MR_Integer) 4)));
        mdb__declarative_edt__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35, (MR_Integer) 5)));
        mdb__declarative_edt__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35, (MR_Integer) 6)));
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_94_94);
        }
        {
          mdb__declarative_edt__succeeded = mdb__declarative_edt__suspect_erroneous_2_p_0(mdb__declarative_edt__TypeInfo_94_94, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35, mdb__declarative_edt__Lowest_8);
        }
        if (mdb__declarative_edt__succeeded)
          {
            MR_Word mdb__declarative_edt__Var_43;

            {
              mdb__declarative_edt__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_43, 0) = ((MR_Box) (mdb__declarative_edt__Lowest_8));
            }
            {
              mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 0) = ((MR_Box) (mdb__declarative_edt__Var_43));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 1) = ((MR_Box) (mdb__declarative_edt__Var_114));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 2) = ((MR_Box) (mdb__declarative_edt__Var_113));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 3) = ((MR_Box) (mdb__declarative_edt__Var_112));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 4) = ((MR_Box) (mdb__declarative_edt__Var_111));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 5) = ((MR_Box) (mdb__declarative_edt__Var_110));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 6) = ((MR_Box) (mdb__declarative_edt__Var_109));
            }
          }
        else
          {
            {
              mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 1) = ((MR_Box) (mdb__declarative_edt__Var_114));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 2) = ((MR_Box) (mdb__declarative_edt__Var_113));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 3) = ((MR_Box) (mdb__declarative_edt__Var_112));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 4) = ((MR_Box) (mdb__declarative_edt__Var_111));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 5) = ((MR_Box) (mdb__declarative_edt__Var_110));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 6) = ((MR_Box) (mdb__declarative_edt__Var_109));
            }
          }
        mdb__declarative_edt__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, (MR_Integer) 0)));
        mdb__declarative_edt__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, (MR_Integer) 1)));
        mdb__declarative_edt__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, (MR_Integer) 2)));
        mdb__declarative_edt__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, (MR_Integer) 3)));
        mdb__declarative_edt__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, (MR_Integer) 4)));
        mdb__declarative_edt__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, (MR_Integer) 5)));
        mdb__declarative_edt__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, (MR_Integer) 6)));
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_95_95);
        }
        {
          mdb__declarative_edt__TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_97_97, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_97_97, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_95_95));
        }
        {
          mercury__map__keys_2_p_0(mdb__declarative_edt__TypeCtorInfo_89_89, mdb__declarative_edt__TypeInfo_97_97, (MR_Word) mdb__declarative_edt__Var_46, &mdb__declarative_edt__AllSuspects_9);
        }
        {
          mdb__declarative_edt__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_47, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_47, 1) = ((MR_Box) (mdb__declarative_edt__revise_root_3_p_0_2));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_47, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_47, 4) = ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42));
        }
        {
          mercury__list__filter_3_p_0(mdb__declarative_edt__TypeCtorInfo_89_89, mdb__declarative_edt__Var_47, mdb__declarative_edt__AllSuspects_9, &mdb__declarative_edt__Leaves_10);
        }
        {
          mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81, mdb__declarative_edt__Store_4, mdb__declarative_edt__Lowest_8, mdb__declarative_edt__Leaves_10, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12);
        }
      }
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__IntroducedFrom__pred__recalc_weights_upto_ancestor__1374__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_27,
  MR_Box mdb__declarative_edt__Store_6,
  MR_Integer mdb__declarative_edt__Ancestor_7,
  MR_Word mdb__declarative_edt__SuspectIds_8,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__declarative_edt__succeeded;
        MR_Word mdb__declarative_edt__TypeCtorInfo_30_30;
        MR_Word mdb__declarative_edt__Parents_10;
        MR_Word mdb__declarative_edt__FilteredParents_12;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20;
        MR_Word mdb__declarative_edt__Var_21;
        MR_Word mdb__declarative_edt__Var_11;

        {
          mdb__declarative_edt__recalc_weights_and_get_parents_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_27, mdb__declarative_edt__Store_6, mdb__declarative_edt__SuspectIds_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_edt__Parents_10, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20);
        }
        {
          mdb__declarative_edt__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_21, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_9[0]));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_21, 1) = ((MR_Box) (mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_21, 3) = ((MR_Box) (mdb__declarative_edt__Ancestor_7));
        }
        mdb__declarative_edt__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__list__filter_4_p_0(mdb__declarative_edt__TypeCtorInfo_30_30, mdb__declarative_edt__Var_21, mdb__declarative_edt__Parents_10, &mdb__declarative_edt__Var_11, &mdb__declarative_edt__FilteredParents_12);
        }
        if ((mdb__declarative_edt__FilteredParents_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mdb__declarative_edt__Var_22;
            MR_Word mdb__declarative_edt__Var_16;

            {
              mdb__declarative_edt__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_22, 0) = ((MR_Box) (mdb__declarative_edt__Ancestor_7));
              MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mdb__declarative_edt__recalc_weights_and_get_parents_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_27, mdb__declarative_edt__Store_6, mdb__declarative_edt__Var_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_edt__Var_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_18);
            }
          }
        else
          {
            MR_Word mdb__declarative_edt__SortedParents_15;

            {
              mercury__list__sort_and_remove_dups_2_p_0(mdb__declarative_edt__TypeCtorInfo_30_30, mdb__declarative_edt__FilteredParents_12, &mdb__declarative_edt__SortedParents_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mdb__declarative_edt__next_value_of_SuspectIds_8 = mdb__declarative_edt__SortedParents_15;
              MR_Word mdb__declarative_edt__next_value_of_STATE_VARIABLE_SearchSpace_0_17 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20;

              mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17 = mdb__declarative_edt__next_value_of_STATE_VARIABLE_SearchSpace_0_17;
              mdb__declarative_edt__SuspectIds_8 = mdb__declarative_edt__next_value_of_SuspectIds_8;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mdb__declarative_edt__recalc_weights_and_get_parents_6_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_64,
  MR_Box mdb__declarative_edt__Store_1,
  MR_Word mdb__declarative_edt__HeadVar__2_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3,
  MR_Word * mdb__declarative_edt__Parents_4,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_5,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__declarative_edt__succeeded;

        if ((mdb__declarative_edt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mdb__declarative_edt__Parents_4 = mdb__declarative_edt__HeadVar__3_3;
            *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_6 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_5;
          }
        else
          {
            MR_Word mdb__declarative_edt__TypeInfo_66_66;
            MR_Word mdb__declarative_edt__TypeInfo_67_67;
            MR_Integer mdb__declarative_edt__SuspectId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mdb__declarative_edt__SuspectIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdb__declarative_edt__Suspect_18;
            MR_Integer mdb__declarative_edt__Weight_19;
            MR_Word mdb__declarative_edt__NewPrevParents_22;
            MR_Box mdb__declarative_edt__Var_25;
            MR_Word mdb__declarative_edt__Var_28;
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29;
            MR_Word mdb__declarative_edt__Var_34;
            MR_Word mdb__declarative_edt__Var_36;
            MR_Word mdb__declarative_edt__Var_73;
            MR_Word mdb__declarative_edt__Var_33;
            MR_Integer mdb__declarative_edt__Var_35;
            MR_Integer mdb__declarative_edt__Var_37;
            MR_Integer mdb__declarative_edt__Var_20;
            MR_Word mdb__declarative_edt__Var_48;
            MR_Box mdb__declarative_edt__Var_49;
            MR_Word mdb__declarative_edt__Var_50;
            MR_Integer mdb__declarative_edt__Var_51;
            MR_Word mdb__declarative_edt__Var_52;
            MR_Integer mdb__declarative_edt__Var_53;
            MR_Integer mdb__declarative_edt__Var_68;
            MR_Word mdb__declarative_edt__Var_69;
            MR_Integer mdb__declarative_edt__Var_70;
            MR_Word mdb__declarative_edt__Var_71;
            MR_Box mdb__declarative_edt__Var_72;

            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_64, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_66_66);
            }
            {
              mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_66_66, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_5, mdb__declarative_edt__SuspectId_13, &mdb__declarative_edt__Suspect_18);
            }
            mdb__declarative_edt__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 0)));
            mdb__declarative_edt__Var_25 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 1));
            mdb__declarative_edt__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 2)));
            mdb__declarative_edt__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 3)));
            mdb__declarative_edt__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 4)));
            mdb__declarative_edt__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 5)));
            {
              mdb__declarative_edt__calc_suspect_weight_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_64, mdb__declarative_edt__Store_1, mdb__declarative_edt__Var_25, mdb__declarative_edt__Var_36, mdb__declarative_edt__Var_34, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_5, &mdb__declarative_edt__Weight_19, &mdb__declarative_edt__Var_20);
            }
            mdb__declarative_edt__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 0)));
            mdb__declarative_edt__Var_49 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 1));
            mdb__declarative_edt__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 2)));
            mdb__declarative_edt__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 3)));
            mdb__declarative_edt__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 4)));
            mdb__declarative_edt__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 5)));
            {
              mdb__declarative_edt__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 0) = ((MR_Box) (mdb__declarative_edt__Var_48));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 1) = mdb__declarative_edt__Var_49;
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 2) = ((MR_Box) (mdb__declarative_edt__Var_50));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 3) = ((MR_Box) (mdb__declarative_edt__Var_51));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 4) = ((MR_Box) (mdb__declarative_edt__Var_52));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 5) = ((MR_Box) (mdb__declarative_edt__Weight_19));
            }
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_64, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_67_67);
            }
            {
              mdb__declarative_edt__set_suspect_4_p_0(mdb__declarative_edt__TypeInfo_67_67, mdb__declarative_edt__SuspectId_13, mdb__declarative_edt__Var_28, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_5, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29);
            }
            mdb__declarative_edt__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 0)));
            mdb__declarative_edt__Var_72 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 1));
            mdb__declarative_edt__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 2)));
            mdb__declarative_edt__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 3)));
            mdb__declarative_edt__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 4)));
            mdb__declarative_edt__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 5)));
            if ((mdb__declarative_edt__Var_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mdb__declarative_edt__NewPrevParents_22 = mdb__declarative_edt__HeadVar__3_3;
            else
              {
                MR_Integer mdb__declarative_edt__ParentId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_73, (MR_Integer) 0)));

                {
                  mdb__declarative_edt__NewPrevParents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__declarative_edt__NewPrevParents_22, 0) = ((MR_Box) (mdb__declarative_edt__ParentId_21));
                  MR_hl_field(MR_mktag(1), mdb__declarative_edt__NewPrevParents_22, 1) = ((MR_Box) (mdb__declarative_edt__HeadVar__3_3));
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word mdb__declarative_edt__next_value_of_HeadVar__2_2 = mdb__declarative_edt__SuspectIds_14;
              MR_Word mdb__declarative_edt__next_value_of_HeadVar__3_3 = mdb__declarative_edt__NewPrevParents_22;
              MR_Word mdb__declarative_edt__next_value_of_STATE_VARIABLE_SearchSpace_0_5 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29;

              mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_5 = mdb__declarative_edt__next_value_of_STATE_VARIABLE_SearchSpace_0_5;
              mdb__declarative_edt__HeadVar__3_3 = mdb__declarative_edt__next_value_of_HeadVar__3_3;
              mdb__declarative_edt__HeadVar__2_2 = mdb__declarative_edt__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_6_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3,
  MR_Box mdb__declarative_edt__wrapper_arg_4,
  MR_Box * mdb__declarative_edt__wrapper_arg_5)
{
  {
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
    MR_Word mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16;
    MR_Word mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18;

    {
      mdb__declarative_edt__propagate_status_downwards_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16, ((MR_Word) mdb__declarative_edt__wrapper_arg_4), &mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18);
    }
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16));
    *mdb__declarative_edt__wrapper_arg_5 = ((MR_Box) (mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18));
  }
}

static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_6_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_39,
  MR_Word mdb__declarative_edt__Status_7,
  MR_Word mdb__declarative_edt__StopStatusSet_8,
  MR_Integer mdb__declarative_edt__SuspectId_9,
  MR_Word * mdb__declarative_edt__StopSuspects_10,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_29_78;
    MR_Word mdb__declarative_edt__Suspect_12;
    MR_Word mdb__declarative_edt__Var_16;
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17;
    MR_Word mdb__declarative_edt__Var_50;
    MR_Word mdb__declarative_edt__Store0_60;
    MR_Word mdb__declarative_edt__Store_61;
    MR_Word mdb__declarative_edt__Var_23;
    MR_Box mdb__declarative_edt__Var_24;
    MR_Integer mdb__declarative_edt__Var_26;
    MR_Word mdb__declarative_edt__Var_27;
    MR_Integer mdb__declarative_edt__Var_28;
    MR_Word mdb__declarative_edt__Var_25;
    MR_Word mdb__declarative_edt__Var_63;
    MR_Word mdb__declarative_edt__Var_64;
    MR_Word mdb__declarative_edt__Var_65;
    MR_Word mdb__declarative_edt__Var_66;
    MR_Word mdb__declarative_edt__Var_67;
    MR_Word mdb__declarative_edt__Var_68;
    MR_Word mdb__declarative_edt__conv0_Store_61;
    MR_Word mdb__declarative_edt__Var_69;
    MR_Word mdb__declarative_edt__Var_70;
    MR_Word mdb__declarative_edt__Var_71;
    MR_Word mdb__declarative_edt__Var_72;
    MR_Word mdb__declarative_edt__Var_74;
    MR_Word mdb__declarative_edt__Var_75;
    MR_Word mdb__declarative_edt__Var_73;
    MR_Integer mdb__declarative_edt__Var_49;
    MR_Integer mdb__declarative_edt__Var_51;
    MR_Word mdb__declarative_edt__Var_52;
    MR_Box mdb__declarative_edt__Var_53;
    MR_Word mdb__declarative_edt__Var_54;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_39, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, mdb__declarative_edt__SuspectId_9, &mdb__declarative_edt__Suspect_12);
    }
    mdb__declarative_edt__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 0)));
    mdb__declarative_edt__Var_24 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 1));
    mdb__declarative_edt__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 2)));
    mdb__declarative_edt__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 3)));
    mdb__declarative_edt__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 4)));
    mdb__declarative_edt__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 5)));
    {
      mdb__declarative_edt__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_16, 0) = ((MR_Box) (mdb__declarative_edt__Var_23));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_16, 1) = mdb__declarative_edt__Var_24;
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_16, 2) = ((MR_Box) (mdb__declarative_edt__Status_7));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_16, 3) = ((MR_Box) (mdb__declarative_edt__Var_26));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_16, 4) = ((MR_Box) (mdb__declarative_edt__Var_27));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_16, 5) = ((MR_Box) (mdb__declarative_edt__Var_28));
    }
    mdb__declarative_edt__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 0)));
    mdb__declarative_edt__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 1)));
    mdb__declarative_edt__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 2)));
    mdb__declarative_edt__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 3)));
    mdb__declarative_edt__Store0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 4)));
    mdb__declarative_edt__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 5)));
    mdb__declarative_edt__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 6)));
    {
      mdb__declarative_edt__TypeInfo_29_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_78, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_78, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_39));
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_78, mdb__declarative_edt__SuspectId_9, ((MR_Box) (mdb__declarative_edt__Var_16)), (MR_Word) mdb__declarative_edt__Store0_60, &mdb__declarative_edt__conv0_Store_61);
    }
    mdb__declarative_edt__Store_61 = (MR_Word) mdb__declarative_edt__conv0_Store_61;
    mdb__declarative_edt__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 0)));
    mdb__declarative_edt__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 1)));
    mdb__declarative_edt__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 2)));
    mdb__declarative_edt__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 3)));
    mdb__declarative_edt__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 4)));
    mdb__declarative_edt__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 5)));
    mdb__declarative_edt__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 6)));
    {
      mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 0) = ((MR_Box) (mdb__declarative_edt__Var_69));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 1) = ((MR_Box) (mdb__declarative_edt__Var_70));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 2) = ((MR_Box) (mdb__declarative_edt__Var_71));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 3) = ((MR_Box) (mdb__declarative_edt__Var_72));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 4) = ((MR_Box) (mdb__declarative_edt__Store_61));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 5) = ((MR_Box) (mdb__declarative_edt__Var_74));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 6) = ((MR_Box) (mdb__declarative_edt__Var_75));
    }
    mdb__declarative_edt__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 0)));
    mdb__declarative_edt__Var_53 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 1));
    mdb__declarative_edt__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 2)));
    mdb__declarative_edt__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 3)));
    mdb__declarative_edt__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 4)));
    mdb__declarative_edt__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 5)));
    if ((mdb__declarative_edt__Var_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mdb__declarative_edt__StopSuspects_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17;
      }
    else
      {
        MR_Word mdb__declarative_edt__TypeInfo_48_48;
        MR_Word mdb__declarative_edt__Children_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_50, (MR_Integer) 0)));
        MR_Word mdb__declarative_edt__Var_20;
        MR_Box mdb__declarative_edt__conv4_StopSuspects_10;
        MR_Box mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_15;

        {
          mdb__declarative_edt__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_20, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_7[1]));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_20, 1) = ((MR_Box) (mdb__declarative_edt__force_propagate_status_downwards_6_p_0_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_20, 3) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_39));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_20, 4) = ((MR_Box) (mdb__declarative_edt__Status_7));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_20, 5) = ((MR_Box) (mdb__declarative_edt__StopStatusSet_8));
        }
        {
          mdb__declarative_edt__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_48_48, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_48_48, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_39));
        }
        {
          mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_edt_scalar_common_1[0], mdb__declarative_edt__TypeInfo_48_48, mdb__declarative_edt__Var_20, mdb__declarative_edt__Children_13, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mdb__declarative_edt__conv4_StopSuspects_10, ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17)), &mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_15);
        }
        *mdb__declarative_edt__StopSuspects_10 = ((MR_Word) mdb__declarative_edt__conv4_StopSuspects_10);
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15 = ((MR_Word) mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_15);
      }
  }
}

static void MR_CALL 
mdb__declarative_edt__choose_skipped_suspect_2_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box mdb__declarative_edt__wrapper_arg_3,
  MR_Box * mdb__declarative_edt__wrapper_arg_4)
{
  {
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
    MR_Integer mdb__declarative_edt__conv0_LeastSkipped_10;

    {
      mdb__declarative_edt__least_skipped_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Integer) mdb__declarative_edt__wrapper_arg_3), &mdb__declarative_edt__conv0_LeastSkipped_10);
    }
    *mdb__declarative_edt__wrapper_arg_4 = ((MR_Box) (mdb__declarative_edt__conv0_LeastSkipped_10));
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__choose_skipped_suspect_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_23,
  MR_Word mdb__declarative_edt__SearchSpace_3,
  MR_Integer * mdb__declarative_edt__Skipped_4)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeCtorInfo_28_28;
    MR_Word mdb__declarative_edt__TypeCtorInfo_29_29;
    MR_Word mdb__declarative_edt__TypeInfo_30_30;
    MR_Integer mdb__declarative_edt__TopMostId_5;
    MR_Word mdb__declarative_edt__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 1)));
    MR_Word mdb__declarative_edt__Var_8;
    MR_Word mdb__declarative_edt__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 4)));
    MR_Word mdb__declarative_edt__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 0)));
    MR_Word mdb__declarative_edt__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 2)));
    MR_Word mdb__declarative_edt__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 3)));
    MR_Word mdb__declarative_edt__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 5)));
    MR_Word mdb__declarative_edt__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 6)));
    MR_Box mdb__declarative_edt__conv1_Skipped_4;
    MR_Word mdb__declarative_edt__Var_31;
    MR_Word mdb__declarative_edt__Suspect_35;
    MR_Word mdb__declarative_edt__Var_36;
    MR_Box mdb__declarative_edt__Var_37;
    MR_Integer mdb__declarative_edt__Var_38;
    MR_Word mdb__declarative_edt__Var_39;
    MR_Integer mdb__declarative_edt__Var_40;
    MR_Integer mdb__declarative_edt__ArgX1_43;

    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Var_7)) == (MR_mktag((MR_Integer) 1)));
    if (mdb__declarative_edt__succeeded)
      {
        mdb__declarative_edt__TopMostId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_7, (MR_Integer) 0)));
        mdb__declarative_edt__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        mdb__declarative_edt__TypeCtorInfo_29_29 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1;
        {
          mdb__declarative_edt__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_8, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_8[2]));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_8, 1) = ((MR_Box) (mdb__declarative_edt__choose_skipped_suspect_2_p_0_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_8, 3) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_23));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_8, 4) = ((MR_Box) (mdb__declarative_edt__SearchSpace_3));
        }
        {
          mdb__declarative_edt__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_30_30, 0) = ((MR_Box) (mdb__declarative_edt__TypeCtorInfo_29_29));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_30_30, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_23));
        }
        {
          mercury__map__foldl_4_p_0(mdb__declarative_edt__TypeCtorInfo_28_28, mdb__declarative_edt__TypeInfo_30_30, mdb__declarative_edt__TypeCtorInfo_28_28, mdb__declarative_edt__Var_8, mdb__declarative_edt__Var_14, ((MR_Box) (mdb__declarative_edt__TopMostId_5)), &mdb__declarative_edt__conv1_Skipped_4);
        }
        *mdb__declarative_edt__Skipped_4 = ((MR_Integer) mdb__declarative_edt__conv1_Skipped_4);
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__TopMostId_5 == *mdb__declarative_edt__Skipped_4);
        if (mdb__declarative_edt__succeeded)
          {
            {
              mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_23, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__TopMostId_5, &mdb__declarative_edt__Suspect_35);
            }
            mdb__declarative_edt__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_35, (MR_Integer) 0)));
            mdb__declarative_edt__Var_37 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_35, (MR_Integer) 1));
            mdb__declarative_edt__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_35, (MR_Integer) 2)));
            mdb__declarative_edt__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_35, (MR_Integer) 3)));
            mdb__declarative_edt__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_35, (MR_Integer) 4)));
            mdb__declarative_edt__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_35, (MR_Integer) 5)));
            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Var_31)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_edt__succeeded)
              mdb__declarative_edt__ArgX1_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_31, (MR_Integer) 0)));
            mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
          }
        mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
      }
    return mdb__declarative_edt__succeeded;
  }
}

void MR_CALL 
mdb__declarative_edt__first_unknown_descendant_6_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_17,
  MR_Box mdb__declarative_edt__Store_7,
  MR_Word mdb__declarative_edt__Oracle_8,
  MR_Integer mdb__declarative_edt__SuspectId_9,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13,
  MR_Word * mdb__declarative_edt__MaybeFound_11)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Var_14;

    {
      mdb__declarative_edt__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_14, 0) = ((MR_Box) (mdb__declarative_edt__SuspectId_9));
      MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mdb__declarative_edt__first_unknown_descendant_list_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_17, mdb__declarative_edt__Store_7, mdb__declarative_edt__Oracle_8, mdb__declarative_edt__Var_14, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13, mdb__declarative_edt__MaybeFound_11);
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0_2(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1766__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1759__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36,
  MR_Box mdb__declarative_edt__Store_7,
  MR_Word mdb__declarative_edt__Oracle_8,
  MR_Word mdb__declarative_edt__SuspectList_9,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26,
  MR_Word * mdb__declarative_edt__MaybeFound_11)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeCtorInfo_40_40;
    MR_Word mdb__declarative_edt__UnknownList_12;
    MR_Word mdb__declarative_edt__Others_13;
    MR_Word mdb__declarative_edt__Var_27;

    {
      mdb__declarative_edt__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_27, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_27, 1) = ((MR_Box) (mdb__declarative_edt__first_unknown_descendant_list_6_p_0_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_27, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_27, 4) = ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25));
    }
    mdb__declarative_edt__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__list__filter_4_p_0(mdb__declarative_edt__TypeCtorInfo_40_40, mdb__declarative_edt__Var_27, mdb__declarative_edt__SuspectList_9, &mdb__declarative_edt__UnknownList_12, &mdb__declarative_edt__Others_13);
    }
    if ((mdb__declarative_edt__UnknownList_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mdb__declarative_edt__InBuggySubtree_16;
        MR_Word mdb__declarative_edt__ExplicitRequired_17;
        MR_Word mdb__declarative_edt__Children_18;
        MR_Word mdb__declarative_edt__Var_28;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29;

        {
          mdb__declarative_edt__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 1) = ((MR_Box) (mdb__declarative_edt__first_unknown_descendant_list_6_p_0_2));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 4) = ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25));
        }
        {
          mercury__list__filter_3_p_0(mdb__declarative_edt__TypeCtorInfo_40_40, mdb__declarative_edt__Var_28, mdb__declarative_edt__Others_13, &mdb__declarative_edt__InBuggySubtree_16);
        }
        {
          mdb__declarative_edt__get_children_list_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36, mdb__declarative_edt__Store_7, mdb__declarative_edt__Oracle_8, mdb__declarative_edt__InBuggySubtree_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, &mdb__declarative_edt__ExplicitRequired_17, &mdb__declarative_edt__Children_18);
        }
        if ((mdb__declarative_edt__Children_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            if ((mdb__declarative_edt__ExplicitRequired_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *mdb__declarative_edt__MaybeFound_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Integer mdb__declarative_edt__RequireExplicitId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__ExplicitRequired_17, (MR_Integer) 0)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mdb__declarative_edt__MaybeFound_11 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_edt__RequireExplicitId_19));
                }
              }
            *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29;
          }
        else
          {
            MR_Word mdb__declarative_edt__MaybeFound0_22;

            {
              mdb__declarative_edt__first_unknown_descendant_list_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36, mdb__declarative_edt__Store_7, mdb__declarative_edt__Oracle_8, mdb__declarative_edt__Children_18, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26, &mdb__declarative_edt__MaybeFound0_22);
            }
            switch (MR_tag((MR_Word) mdb__declarative_edt__MaybeFound0_22)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                if ((mdb__declarative_edt__ExplicitRequired_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  *mdb__declarative_edt__MaybeFound_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    MR_Integer mdb__declarative_edt__RequireExplicitId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__ExplicitRequired_17, (MR_Integer) 0)));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *mdb__declarative_edt__MaybeFound_11 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_edt__RequireExplicitId_31));
                    }
                  }
                break;
              case (MR_Integer) 1:
                *mdb__declarative_edt__MaybeFound_11 = mdb__declarative_edt__MaybeFound0_22;
                break;
              case (MR_Integer) 2:
                *mdb__declarative_edt__MaybeFound_11 = mdb__declarative_edt__MaybeFound0_22;
                break;
            }
          }
      }
    else
      {
        MR_Integer mdb__declarative_edt__Unknown_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__UnknownList_12, (MR_Integer) 0)));
        MR_Word mdb__declarative_edt__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__UnknownList_12, (MR_Integer) 1)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mdb__declarative_edt__MaybeFound_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_edt__Unknown_14));
        }
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25;
      }
  }
}

static void MR_CALL 
mdb__declarative_edt__get_children_list_7_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_26,
  MR_Box mdb__declarative_edt__Store_1,
  MR_Word mdb__declarative_edt__Oracle_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3,
  MR_Word mdb__declarative_edt__HeadVar__4_4,
  MR_Word * mdb__declarative_edt__HeadVar__5_5,
  MR_Word * mdb__declarative_edt__HeadVar__6_6,
  MR_Word * mdb__declarative_edt__HeadVar__7_7)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mdb__declarative_edt__HeadVar__5_5 = mdb__declarative_edt__HeadVar__4_4;
        *mdb__declarative_edt__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mdb__declarative_edt__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Integer mdb__declarative_edt__SuspectId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__declarative_edt__SuspectIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__declarative_edt__ExplicitRequired0_18;
        MR_Word mdb__declarative_edt__ChildrenList0_19;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23;
        MR_Word mdb__declarative_edt__Children_20;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_24_24;

        {
          mdb__declarative_edt__get_children_list_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_26, mdb__declarative_edt__Store_1, mdb__declarative_edt__Oracle_2, mdb__declarative_edt__SuspectIds_14, mdb__declarative_edt__HeadVar__4_4, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, &mdb__declarative_edt__ExplicitRequired0_18, &mdb__declarative_edt__ChildrenList0_19);
        }
        {
          mdb__declarative_edt__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_26, mdb__declarative_edt__Store_1, mdb__declarative_edt__Oracle_2, mdb__declarative_edt__SuspectId_13, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_24_24, &mdb__declarative_edt__Children_20);
        }
        if (mdb__declarative_edt__succeeded)
          {
            *mdb__declarative_edt__HeadVar__5_5 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_24_24;
            {
              mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__Children_20, mdb__declarative_edt__ChildrenList0_19, mdb__declarative_edt__HeadVar__7_7);
            }
            *mdb__declarative_edt__HeadVar__6_6 = mdb__declarative_edt__ExplicitRequired0_18;
          }
        else
          {
            *mdb__declarative_edt__HeadVar__7_7 = mdb__declarative_edt__ChildrenList0_19;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mdb__declarative_edt__HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_edt__SuspectId_13));
            }
            *mdb__declarative_edt__HeadVar__5_5 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23;
          }
      }
  }
}

void MR_CALL 
mdb__declarative_edt__incorporate_explicit_supertree_5_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_35,
  MR_Box mdb__declarative_edt__Store_6,
  MR_Word mdb__declarative_edt__Oracle_7,
  MR_Box mdb__declarative_edt__Node_8,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_37_37;
    MR_Integer mdb__declarative_edt__OldTopMostId_10;
    MR_Box mdb__declarative_edt__Parent_11;
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_35, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_37_37);
    }
    {
      mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_edt__TypeInfo_37_37, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, &mdb__declarative_edt__OldTopMostId_10);
    }
    mdb__declarative_edt__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_35, (MR_Integer) 0)), (MR_Integer) 9)));
    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_35), mdb__declarative_edt__Store_6, mdb__declarative_edt__Node_8, &mdb__declarative_edt__Parent_11);
    }
    if (mdb__declarative_edt__succeeded)
      {
        MR_Word mdb__declarative_edt__TypeInfo_38_38;
        MR_Word mdb__declarative_edt__TypeInfo_39_39;
        MR_Word mdb__declarative_edt__TypeInfo_40_40;
        MR_Word mdb__declarative_edt__ImplicitToExplicit_12;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15;
        MR_Box mdb__declarative_edt__Var_16;
        MR_Word mdb__declarative_edt__Var_17;
        MR_Word mdb__declarative_edt__Suspect_45;
        MR_Word mdb__declarative_edt__Var_46;
        MR_Word mdb__declarative_edt__Var_47;
        MR_Integer mdb__declarative_edt__Var_48;
        MR_Word mdb__declarative_edt__Var_49;
        MR_Integer mdb__declarative_edt__Var_50;
        MR_Word mdb__declarative_edt__Var_22;
        MR_Word mdb__declarative_edt__Var_23;
        MR_Word mdb__declarative_edt__Var_24;
        MR_Word mdb__declarative_edt__Var_25;
        MR_Word mdb__declarative_edt__Var_26;
        MR_Word mdb__declarative_edt__Var_27;
        MR_Word mdb__declarative_edt__Var_28;
        MR_Word mdb__declarative_edt__Var_29;
        MR_Word mdb__declarative_edt__Var_30;
        MR_Word mdb__declarative_edt__Var_31;
        MR_Word mdb__declarative_edt__Var_32;
        MR_Word mdb__declarative_edt__Var_34;
        MR_Word mdb__declarative_edt__Var_33;

        {
          mdb__declarative_edt__insert_new_topmost_node_5_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_35, mdb__declarative_edt__Store_6, mdb__declarative_edt__Oracle_7, mdb__declarative_edt__Parent_11, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_35, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_38_38);
        }
        {
          mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_38_38, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, mdb__declarative_edt__OldTopMostId_10, &mdb__declarative_edt__Suspect_45);
        }
        mdb__declarative_edt__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_45, (MR_Integer) 0)));
        mdb__declarative_edt__Var_16 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_45, (MR_Integer) 1));
        mdb__declarative_edt__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_45, (MR_Integer) 2)));
        mdb__declarative_edt__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_45, (MR_Integer) 3)));
        mdb__declarative_edt__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_45, (MR_Integer) 4)));
        mdb__declarative_edt__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_45, (MR_Integer) 5)));
        mdb__declarative_edt__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 0)));
        mdb__declarative_edt__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 1)));
        mdb__declarative_edt__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 2)));
        mdb__declarative_edt__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 3)));
        mdb__declarative_edt__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 4)));
        mdb__declarative_edt__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 5)));
        mdb__declarative_edt__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 6)));
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_35, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_39_39);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_35, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_40_40);
        }
        {
          mercury__bimap__set_4_p_0(mdb__declarative_edt__TypeInfo_39_39, mdb__declarative_edt__TypeInfo_40_40, mdb__declarative_edt__Node_8, mdb__declarative_edt__Var_16, mdb__declarative_edt__Var_17, &mdb__declarative_edt__ImplicitToExplicit_12);
        }
        mdb__declarative_edt__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 0)));
        mdb__declarative_edt__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 1)));
        mdb__declarative_edt__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 2)));
        mdb__declarative_edt__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 3)));
        mdb__declarative_edt__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 4)));
        mdb__declarative_edt__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 5)));
        mdb__declarative_edt__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 6)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_edt__Var_28));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_edt__Var_29));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__Var_30));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__Var_31));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__Var_32));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__ImplicitToExplicit_12));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__Var_34));
        }
      }
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[16])));
          return;
        }
      }
  }
}

void MR_CALL 
mdb__declarative_edt__incorporate_explicit_subtree_4_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_41,
  MR_Integer mdb__declarative_edt__SuspectId_5,
  MR_Box mdb__declarative_edt__Node_6,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_29_65;
    MR_Word mdb__declarative_edt__Suspect_8;
    MR_Word mdb__declarative_edt__ImplicitToExplicit_9;
    MR_Word mdb__declarative_edt__Var_12;
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13;
    MR_Box mdb__declarative_edt__Var_14;
    MR_Word mdb__declarative_edt__Store0_47;
    MR_Word mdb__declarative_edt__Store_48;
    MR_Word mdb__declarative_edt__Var_61;
    MR_Word mdb__declarative_edt__Var_17;
    MR_Word mdb__declarative_edt__Var_19;
    MR_Integer mdb__declarative_edt__Var_20;
    MR_Word mdb__declarative_edt__Var_21;
    MR_Integer mdb__declarative_edt__Var_22;
    MR_Box mdb__declarative_edt__Var_18;
    MR_Word mdb__declarative_edt__Var_50;
    MR_Word mdb__declarative_edt__Var_51;
    MR_Word mdb__declarative_edt__Var_52;
    MR_Word mdb__declarative_edt__Var_53;
    MR_Word mdb__declarative_edt__Var_54;
    MR_Word mdb__declarative_edt__Var_55;
    MR_Word mdb__declarative_edt__conv0_Store_48;
    MR_Word mdb__declarative_edt__Var_56;
    MR_Word mdb__declarative_edt__Var_57;
    MR_Word mdb__declarative_edt__Var_58;
    MR_Word mdb__declarative_edt__Var_59;
    MR_Word mdb__declarative_edt__Var_62;
    MR_Word mdb__declarative_edt__Var_60;
    MR_Word mdb__declarative_edt__Var_23;
    MR_Word mdb__declarative_edt__Var_24;
    MR_Integer mdb__declarative_edt__Var_25;
    MR_Word mdb__declarative_edt__Var_26;
    MR_Integer mdb__declarative_edt__Var_27;
    MR_Word mdb__declarative_edt__Var_34;
    MR_Word mdb__declarative_edt__Var_35;
    MR_Word mdb__declarative_edt__Var_36;
    MR_Word mdb__declarative_edt__Var_37;
    MR_Word mdb__declarative_edt__Var_38;
    MR_Word mdb__declarative_edt__Var_40;
    MR_Word mdb__declarative_edt__Var_39;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_41, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__Suspect_8);
    }
    mdb__declarative_edt__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
    mdb__declarative_edt__Var_18 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
    mdb__declarative_edt__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
    mdb__declarative_edt__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
    mdb__declarative_edt__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
    mdb__declarative_edt__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
    {
      mdb__declarative_edt__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_12, 0) = ((MR_Box) (mdb__declarative_edt__Var_17));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_12, 1) = mdb__declarative_edt__Node_6;
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_12, 2) = ((MR_Box) (mdb__declarative_edt__Var_19));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_12, 3) = ((MR_Box) (mdb__declarative_edt__Var_20));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_12, 4) = ((MR_Box) (mdb__declarative_edt__Var_21));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_12, 5) = ((MR_Box) (mdb__declarative_edt__Var_22));
    }
    mdb__declarative_edt__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 0)));
    mdb__declarative_edt__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 1)));
    mdb__declarative_edt__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 2)));
    mdb__declarative_edt__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 3)));
    mdb__declarative_edt__Store0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 4)));
    mdb__declarative_edt__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 5)));
    mdb__declarative_edt__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 6)));
    {
      mdb__declarative_edt__TypeInfo_29_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_65, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_65, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_41));
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_65, mdb__declarative_edt__SuspectId_5, ((MR_Box) (mdb__declarative_edt__Var_12)), (MR_Word) mdb__declarative_edt__Store0_47, &mdb__declarative_edt__conv0_Store_48);
    }
    mdb__declarative_edt__Store_48 = (MR_Word) mdb__declarative_edt__conv0_Store_48;
    mdb__declarative_edt__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 0)));
    mdb__declarative_edt__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 1)));
    mdb__declarative_edt__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 2)));
    mdb__declarative_edt__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 3)));
    mdb__declarative_edt__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 4)));
    mdb__declarative_edt__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 5)));
    mdb__declarative_edt__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 6)));
    {
      mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, 0) = ((MR_Box) (mdb__declarative_edt__Var_56));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, 1) = ((MR_Box) (mdb__declarative_edt__Var_57));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, 2) = ((MR_Box) (mdb__declarative_edt__Var_58));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, 3) = ((MR_Box) (mdb__declarative_edt__Var_59));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, 4) = ((MR_Box) (mdb__declarative_edt__Store_48));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, 5) = ((MR_Box) (mdb__declarative_edt__Var_61));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, 6) = ((MR_Box) (mdb__declarative_edt__Var_62));
    }
    mdb__declarative_edt__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
    mdb__declarative_edt__Var_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
    mdb__declarative_edt__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
    mdb__declarative_edt__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
    mdb__declarative_edt__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
    mdb__declarative_edt__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
    {
      mercury__bimap__set_4_p_0(mdb__declarative_edt__TypeInfo_for_T_41, mdb__declarative_edt__TypeInfo_for_T_41, mdb__declarative_edt__Var_14, mdb__declarative_edt__Node_6, mdb__declarative_edt__Var_61, &mdb__declarative_edt__ImplicitToExplicit_9);
    }
    mdb__declarative_edt__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 0)));
    mdb__declarative_edt__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 1)));
    mdb__declarative_edt__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 2)));
    mdb__declarative_edt__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 3)));
    mdb__declarative_edt__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 4)));
    mdb__declarative_edt__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 5)));
    mdb__declarative_edt__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_edt__Var_34));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_edt__Var_35));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__Var_36));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__Var_37));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__Var_38));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__ImplicitToExplicit_9));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__Var_40));
    }
  }
}

void MR_CALL 
mdb__declarative_edt__find_subterm_origin_11_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55,
  MR_Box mdb__declarative_edt__Store_12,
  MR_Word mdb__declarative_edt__Oracle_13,
  MR_Integer mdb__declarative_edt__SuspectId_14,
  MR_Word mdb__declarative_edt__ArgPos_15,
  MR_Word mdb__declarative_edt__TermPath_16,
  MR_Word mdb__declarative_edt__HowTrack_17,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_TriedShortcutProcs_0_28,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_TriedShortcutProcs_29,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31,
  MR_Word * mdb__declarative_edt__Response_20)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_33_87;
    MR_Word mdb__declarative_edt__Suspect_21;
    MR_Word mdb__declarative_edt__Mode_22;
    MR_Box mdb__declarative_edt__Node_23;
    MR_Box mdb__declarative_edt__ExplicitNode_72;
    MR_Word mdb__declarative_edt__Var_75;
    MR_Word mdb__declarative_edt__Var_76;
    MR_Integer mdb__declarative_edt__Var_77;
    MR_Word mdb__declarative_edt__Var_78;
    MR_Integer mdb__declarative_edt__Var_79;
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box mdb__declarative_edt__conv1_Mode_22;
    MR_Box mdb__declarative_edt__ImplicitNode_74;
    MR_Word mdb__declarative_edt__TypeInfo_34_88;
    MR_Word mdb__declarative_edt__TypeInfo_35_89;
    MR_Word mdb__declarative_edt__ImplicitToExplicit_73;
    MR_Word mdb__declarative_edt__Var_80;
    MR_Word mdb__declarative_edt__Var_81;
    MR_Word mdb__declarative_edt__Var_82;
    MR_Word mdb__declarative_edt__Var_83;
    MR_Word mdb__declarative_edt__Var_84;
    MR_Word mdb__declarative_edt__Var_85;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_33_87);
    }
    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_33_87, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, mdb__declarative_edt__SuspectId_14, &mdb__declarative_edt__Suspect_21);
    }
    mdb__declarative_edt__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 0)));
    mdb__declarative_edt__ExplicitNode_72 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 1));
    mdb__declarative_edt__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 2)));
    mdb__declarative_edt__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 3)));
    mdb__declarative_edt__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 4)));
    mdb__declarative_edt__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 5)));
    mdb__declarative_edt__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, (MR_Integer) 0)), (MR_Integer) 11)));
    {
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55), mdb__declarative_edt__Store_12, mdb__declarative_edt__ExplicitNode_72, ((MR_Box) (mdb__declarative_edt__ArgPos_15)), ((MR_Box) (mdb__declarative_edt__TermPath_16)), &mdb__declarative_edt__conv1_Mode_22);
    }
    mdb__declarative_edt__Mode_22 = ((MR_Word) mdb__declarative_edt__conv1_Mode_22);
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__Mode_22 == (MR_Integer) 0);
    if (mdb__declarative_edt__succeeded)
      {
        mdb__declarative_edt__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, (MR_Integer) 0)));
        mdb__declarative_edt__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, (MR_Integer) 1)));
        mdb__declarative_edt__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, (MR_Integer) 2)));
        mdb__declarative_edt__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, (MR_Integer) 3)));
        mdb__declarative_edt__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, (MR_Integer) 4)));
        mdb__declarative_edt__ImplicitToExplicit_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, (MR_Integer) 5)));
        mdb__declarative_edt__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, (MR_Integer) 6)));
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_34_88);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_35_89);
        }
        {
          mdb__declarative_edt__succeeded = mercury__bimap__search_3_p_1(mdb__declarative_edt__TypeInfo_34_88, mdb__declarative_edt__TypeInfo_35_89, mdb__declarative_edt__ImplicitToExplicit_73, &mdb__declarative_edt__ImplicitNode_74, mdb__declarative_edt__ExplicitNode_72);
        }
      }
    if (mdb__declarative_edt__succeeded)
      mdb__declarative_edt__Node_23 = mdb__declarative_edt__ImplicitNode_74;
    else
      mdb__declarative_edt__Node_23 = mdb__declarative_edt__ExplicitNode_72;
    switch (mdb__declarative_edt__Mode_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdb__declarative_edt__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 0)));
          MR_Integer mdb__declarative_edt__Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 5)));
          MR_Word mdb__declarative_edt__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 4)));
          MR_Integer mdb__declarative_edt__Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 3)));
          MR_Word mdb__declarative_edt__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 2)));
          MR_Box mdb__declarative_edt__Var_62 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 1));

          if ((mdb__declarative_edt__Var_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_39_39;

              {
                mdb__declarative_edt__succeeded = mdb__declarative_edt__extend_search_space_upwards_4_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, mdb__declarative_edt__Store_12, mdb__declarative_edt__Oracle_13, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_39_39);
              }
              if (mdb__declarative_edt__succeeded)
                {
                  MR_Word mdb__declarative_edt__TypeInfo_57_57;
                  MR_Integer mdb__declarative_edt__NewRootId_25;

                  {
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_57_57);
                  }
                  {
                    mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_edt__TypeInfo_57_57, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_39_39, &mdb__declarative_edt__NewRootId_25);
                  }
                  {
                    mdb__declarative_edt__resolve_origin_10_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, mdb__declarative_edt__Store_12, mdb__declarative_edt__Oracle_13, mdb__declarative_edt__Node_23, mdb__declarative_edt__ArgPos_15, mdb__declarative_edt__TermPath_16, mdb__declarative_edt__NewRootId_25, (MR_Integer) 0, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_39_39, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31, mdb__declarative_edt__Response_20);
                  }
                }
              else
                {
                  *mdb__declarative_edt__Response_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                  *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30;
                }
            }
          else
            {
              MR_Integer mdb__declarative_edt__ParentId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_63, (MR_Integer) 0)));

              {
                mdb__declarative_edt__resolve_origin_10_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, mdb__declarative_edt__Store_12, mdb__declarative_edt__Oracle_13, mdb__declarative_edt__Node_23, mdb__declarative_edt__ArgPos_15, mdb__declarative_edt__TermPath_16, mdb__declarative_edt__ParentId_24, (MR_Integer) 0, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31, mdb__declarative_edt__Response_20);
              }
            }
          *mdb__declarative_edt__STATE_VARIABLE_TriedShortcutProcs_29 = mdb__declarative_edt__STATE_VARIABLE_TriedShortcutProcs_0_28;
        }
        break;
      case (MR_Integer) 1:
        switch (mdb__declarative_edt__HowTrack_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mdb__declarative_edt__resolve_origin_10_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, mdb__declarative_edt__Store_12, mdb__declarative_edt__Oracle_13, mdb__declarative_edt__Node_23, mdb__declarative_edt__ArgPos_15, mdb__declarative_edt__TermPath_16, mdb__declarative_edt__SuspectId_14, (MR_Integer) 1, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31, mdb__declarative_edt__Response_20);
              }
              *mdb__declarative_edt__STATE_VARIABLE_TriedShortcutProcs_29 = mdb__declarative_edt__STATE_VARIABLE_TriedShortcutProcs_0_28;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdb__declarative_edt__MaybeInputArgPos_26;

              {
                mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, mdb__declarative_edt__Store_12, mdb__declarative_edt__Node_23, mdb__declarative_edt__ArgPos_15, mdb__declarative_edt__TermPath_16, mdb__declarative_edt__STATE_VARIABLE_TriedShortcutProcs_0_28, mdb__declarative_edt__STATE_VARIABLE_TriedShortcutProcs_29, &mdb__declarative_edt__MaybeInputArgPos_26);
              }
              if ((mdb__declarative_edt__MaybeInputArgPos_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mdb__declarative_edt__resolve_origin_10_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, mdb__declarative_edt__Store_12, mdb__declarative_edt__Oracle_13, mdb__declarative_edt__Node_23, mdb__declarative_edt__ArgPos_15, mdb__declarative_edt__TermPath_16, mdb__declarative_edt__SuspectId_14, (MR_Integer) 1, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31, mdb__declarative_edt__Response_20);
                  }
                }
              else
                {
                  MR_Word mdb__declarative_edt__InputArgPos_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__MaybeInputArgPos_26, (MR_Integer) 0)));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mdb__declarative_edt__Response_20 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_edt__SuspectId_14));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_edt__InputArgPos_27));
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_edt__TermPath_16));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 0));
                  }
                  *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30;
                }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42,
  MR_Box mdb__declarative_edt__Store_8,
  MR_Box mdb__declarative_edt__Node_9,
  MR_Word mdb__declarative_edt__OutputArgPos_10,
  MR_Word mdb__declarative_edt__TermPath_11,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_TriedProcs_0_36,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_TriedProcs_37,
  MR_Word * mdb__declarative_edt__MaybeInitialVersionArgPos_13)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Question_14;
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box mdb__declarative_edt__conv1_Question_14;
    MR_Word mdb__declarative_edt__FinalAtom_18;
    MR_Box mdb__declarative_edt__ProcLayout_20;
    MR_Word mdb__declarative_edt__FinalArgs_21;
    MR_Word mdb__declarative_edt__FinalDeclAtom_17;
    MR_Box mdb__declarative_edt__Var_15;
    MR_Word mdb__declarative_edt__Var_16;
    MR_Word mdb__declarative_edt__Var_19;
    MR_Word mdb__declarative_edt__TypeCtorInfo_43_43;
    MR_Word mdb__declarative_edt__TypeCtorInfo_44_44;
    MR_Box mdb__declarative_edt__conv2_Var_22;

    {
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42), mdb__declarative_edt__Store_8, mdb__declarative_edt__Node_9, &mdb__declarative_edt__conv1_Question_14);
    }
    mdb__declarative_edt__Question_14 = ((MR_Word) mdb__declarative_edt__conv1_Question_14);
    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Question_14)) == (MR_mktag((MR_Integer) 0)));
    if (mdb__declarative_edt__succeeded)
      {
        mdb__declarative_edt__Var_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Question_14, (MR_Integer) 0));
        mdb__declarative_edt__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Question_14, (MR_Integer) 1)));
        mdb__declarative_edt__FinalDeclAtom_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Question_14, (MR_Integer) 2)));
        mdb__declarative_edt__FinalAtom_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__FinalDeclAtom_17, (MR_Integer) 0)));
        mdb__declarative_edt__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__FinalDeclAtom_17, (MR_Integer) 1)));
        mdb__declarative_edt__ProcLayout_20 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__FinalAtom_18, (MR_Integer) 0)));
        mdb__declarative_edt__FinalArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__FinalAtom_18, (MR_Integer) 1)));
        mdb__declarative_edt__TypeCtorInfo_43_43 = (MR_Word) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0;
        mdb__declarative_edt__TypeCtorInfo_44_44 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
        {
          mdb__declarative_edt__succeeded = mercury__map__search_3_p_0(mdb__declarative_edt__TypeCtorInfo_43_43, mdb__declarative_edt__TypeCtorInfo_44_44, mdb__declarative_edt__STATE_VARIABLE_TriedProcs_0_36, ((MR_Box) (mdb__declarative_edt__ProcLayout_20)), &mdb__declarative_edt__conv2_Var_22);
        }
        if (mdb__declarative_edt__succeeded)
          mdb__declarative_edt__succeeded = MR_TRUE;
        mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
      }
    if (mdb__declarative_edt__succeeded)
      {
        MR_Word mdb__declarative_edt__InitialVersionArgPos_30;
        MR_Integer mdb__declarative_edt__OutputArgNum_23;
        MR_Word mdb__declarative_edt__OutputArg_24;
        MR_Word mdb__declarative_edt__OutputTermRep_27;
        MR_Integer mdb__declarative_edt__InitialVersionArgNum_28;
        MR_Word mdb__declarative_edt__OutputSubtermRep_29;
        MR_Word mdb__declarative_edt__InitialVersionArg_31;
        MR_Word mdb__declarative_edt__InitialVersionTermRep_34;
        MR_Word mdb__declarative_edt__InitialVersionSubtermRep_35;
        MR_Word mdb__declarative_edt__Var_40;
        MR_Word mdb__declarative_edt__Var_41;
        MR_Word mdb__declarative_edt__Var_25;
        MR_Integer mdb__declarative_edt__Var_26;
        MR_Word mdb__declarative_edt__Var_32;
        MR_Integer mdb__declarative_edt__Var_33;

        mercury__private_builtin__dummy_var = (MR_Integer) 0;
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0, (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ((MR_Box) (mdb__declarative_edt__ProcLayout_20)), ((MR_Box) ((MR_Integer) 0)), mdb__declarative_edt__STATE_VARIABLE_TriedProcs_0_36, mdb__declarative_edt__STATE_VARIABLE_TriedProcs_37);
        }
        {
          mdb__declarative_execution__absolute_arg_num_3_p_0(mdb__declarative_edt__OutputArgPos_10, mdb__declarative_edt__FinalAtom_18, &mdb__declarative_edt__OutputArgNum_23);
        }
        {
          mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_edt__OutputArgPos_10, mdb__declarative_edt__FinalArgs_21, &mdb__declarative_edt__OutputArg_24);
        }
        mdb__declarative_edt__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OutputArg_24, (MR_Integer) 0)));
        mdb__declarative_edt__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OutputArg_24, (MR_Integer) 1)));
        mdb__declarative_edt__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OutputArg_24, (MR_Integer) 2)));
        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Var_40)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__declarative_edt__succeeded)
          {
            mdb__declarative_edt__OutputTermRep_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_40, (MR_Integer) 0)));
            {
              mdb__declarative_edt__succeeded = mdbcomp__rtti_access__find_initial_version_arg_num_3_p_0(mdb__declarative_edt__ProcLayout_20, mdb__declarative_edt__OutputArgNum_23, &mdb__declarative_edt__InitialVersionArgNum_28);
            }
            if (mdb__declarative_edt__succeeded)
              {
                {
                  mdb__declarative_edt__succeeded = mdb__term_rep__deref_path_3_p_0(mdb__declarative_edt__OutputTermRep_27, mdb__declarative_edt__TermPath_11, &mdb__declarative_edt__OutputSubtermRep_29);
                }
                if (mdb__declarative_edt__succeeded)
                  {
                    {
                      mdb__declarative_edt__InitialVersionArgPos_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mdb__declarative_edt__InitialVersionArgPos_30, 0) = ((MR_Box) (mdb__declarative_edt__InitialVersionArgNum_28));
                    }
                    {
                      mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_edt__InitialVersionArgPos_30, mdb__declarative_edt__FinalArgs_21, &mdb__declarative_edt__InitialVersionArg_31);
                    }
                    mdb__declarative_edt__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__InitialVersionArg_31, (MR_Integer) 0)));
                    mdb__declarative_edt__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__InitialVersionArg_31, (MR_Integer) 1)));
                    mdb__declarative_edt__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__InitialVersionArg_31, (MR_Integer) 2)));
                    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Var_41)) == (MR_mktag((MR_Integer) 1)));
                    if (mdb__declarative_edt__succeeded)
                      {
                        mdb__declarative_edt__InitialVersionTermRep_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_41, (MR_Integer) 0)));
                        {
                          mdb__declarative_edt__succeeded = mdb__term_rep__deref_path_3_p_0(mdb__declarative_edt__InitialVersionTermRep_34, mdb__declarative_edt__TermPath_11, &mdb__declarative_edt__InitialVersionSubtermRep_35);
                        }
                        if (mdb__declarative_edt__succeeded)
                          {
                            mdb__declarative_edt__succeeded = mdb__term_rep____Unify____term_rep_0_0(mdb__declarative_edt__InitialVersionSubtermRep_35, mdb__declarative_edt__OutputSubtermRep_29);
                          }
                      }
                  }
              }
          }
        if (mdb__declarative_edt__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdb__declarative_edt__MaybeInitialVersionArgPos_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_edt__InitialVersionArgPos_30));
          }
        else
          *mdb__declarative_edt__MaybeInitialVersionArgPos_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        *mdb__declarative_edt__MaybeInitialVersionArgPos_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mdb__declarative_edt__STATE_VARIABLE_TriedProcs_37 = mdb__declarative_edt__STATE_VARIABLE_TriedProcs_0_36;
      }
  }
}

static void MR_CALL 
mdb__declarative_edt__resolve_origin_10_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50,
  MR_Box mdb__declarative_edt__Store_11,
  MR_Word mdb__declarative_edt__Oracle_12,
  MR_Box mdb__declarative_edt__Node_13,
  MR_Word mdb__declarative_edt__ArgPos_14,
  MR_Word mdb__declarative_edt__TermPath_15,
  MR_Integer mdb__declarative_edt__SuspectId_16,
  MR_Word mdb__declarative_edt__Output_17,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35,
  MR_Word * mdb__declarative_edt__Response_19)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Origin_21;
    MR_Word mdb__declarative_edt__Var_20;
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, (MR_Integer) 0)), (MR_Integer) 10)));
    MR_Box mdb__declarative_edt__conv2_Var_20;
    MR_Box mdb__declarative_edt__conv1_Origin_21;

    {
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50), mdb__declarative_edt__Store_11, mdb__declarative_edt__Node_13, ((MR_Box) (mdb__declarative_edt__ArgPos_14)), ((MR_Box) (mdb__declarative_edt__TermPath_15)), &mdb__declarative_edt__conv2_Var_20, &mdb__declarative_edt__conv1_Origin_21);
    }
    mdb__declarative_edt__Var_20 = ((MR_Word) mdb__declarative_edt__conv2_Var_20);
    mdb__declarative_edt__Origin_21 = ((MR_Word) mdb__declarative_edt__conv1_Origin_21);
    switch (MR_tag((MR_Word) mdb__declarative_edt__Origin_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__declarative_edt__Origin_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mdb__declarative_edt__Response_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34;
            }
            break;
          case (MR_Integer) 1:
            {
              *mdb__declarative_edt__Response_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mdb__declarative_edt__OriginNode_27 = (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Origin_21, (MR_Integer) 0));
          MR_Word mdb__declarative_edt__OutputArgPos_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Origin_21, (MR_Integer) 1)));
          MR_Word mdb__declarative_edt__OutputTermPath_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Origin_21, (MR_Integer) 2)));
          MR_Box mdb__declarative_edt__ExplicitOrigin_31;
          MR_Box mdb__declarative_edt__ExplicitNode_30;
          MR_Word mdb__declarative_edt__TypeInfo_52_52;
          MR_Word mdb__declarative_edt__TypeInfo_53_53;
          MR_Word mdb__declarative_edt__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34, (MR_Integer) 5)));
          MR_Word mdb__declarative_edt__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34, (MR_Integer) 0)));
          MR_Word mdb__declarative_edt__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34, (MR_Integer) 1)));
          MR_Word mdb__declarative_edt__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34, (MR_Integer) 2)));
          MR_Word mdb__declarative_edt__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34, (MR_Integer) 3)));
          MR_Word mdb__declarative_edt__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34, (MR_Integer) 4)));
          MR_Word mdb__declarative_edt__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34, (MR_Integer) 6)));
          MR_Word mdb__declarative_edt__Children_32;
          MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_37_37;

          {
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_52_52);
          }
          {
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_53_53);
          }
          {
            mdb__declarative_edt__succeeded = mercury__bimap__search_3_p_0(mdb__declarative_edt__TypeInfo_52_52, mdb__declarative_edt__TypeInfo_53_53, mdb__declarative_edt__Var_36, mdb__declarative_edt__OriginNode_27, &mdb__declarative_edt__ExplicitNode_30);
          }
          if (mdb__declarative_edt__succeeded)
            mdb__declarative_edt__ExplicitOrigin_31 = mdb__declarative_edt__ExplicitNode_30;
          else
            mdb__declarative_edt__ExplicitOrigin_31 = mdb__declarative_edt__OriginNode_27;
          {
            mdb__declarative_edt__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, mdb__declarative_edt__Store_11, mdb__declarative_edt__Oracle_12, mdb__declarative_edt__SuspectId_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_37_37, &mdb__declarative_edt__Children_32);
          }
          if (mdb__declarative_edt__succeeded)
            {
              MR_Integer mdb__declarative_edt__OriginId_33;
              MR_Word mdb__declarative_edt__TypeInfo_55_55;

              *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_37_37;
              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_55_55);
              }
              {
                mdb__declarative_edt__succeeded = mdb__declarative_edt__find_edt_node_in_suspect_list_4_p_0(mdb__declarative_edt__TypeInfo_55_55, mdb__declarative_edt__Children_32, mdb__declarative_edt__ExplicitOrigin_31, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_37_37, &mdb__declarative_edt__OriginId_33);
              }
              if (mdb__declarative_edt__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mdb__declarative_edt__Response_19 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_edt__OriginId_33));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_edt__OutputArgPos_28));
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_edt__OutputTermPath_29));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 1));
                  }
                }
              else
                {
                  {
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[15])));
                    return;
                  }
                }
            }
          else
            {
              *mdb__declarative_edt__Response_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_edt__InputArgPos_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__Origin_21, (MR_Integer) 0)));
          MR_Word mdb__declarative_edt__InputTermPath_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__Origin_21, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mdb__declarative_edt__Response_19 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_edt__SuspectId_16));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_edt__InputArgPos_25));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_edt__InputTermPath_26));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String mdb__declarative_edt__FileName_22 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__Origin_21, (MR_Integer) 0)));
          MR_Integer mdb__declarative_edt__LineNo_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__Origin_21, (MR_Integer) 1)));
          MR_Word mdb__declarative_edt__PrimOpType_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__Origin_21, (MR_Integer) 2)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mdb__declarative_edt__Response_19 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_edt__SuspectId_16));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_edt__FileName_22));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mdb__declarative_edt__LineNo_23));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) ((mdb__declarative_edt__PrimOpType_24 | ((mdb__declarative_edt__Output_17 << (MR_Integer) 2)))));
          }
          *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__find_edt_node_in_suspect_list_4_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_23,
  MR_Word mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__Node_7,
  MR_Word mdb__declarative_edt__SearchSpace_8,
  MR_Integer * mdb__declarative_edt__FoundId_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Integer mdb__declarative_edt__SuspectId_5;
        MR_Word mdb__declarative_edt__SuspectIds_6;
        MR_Word mdb__declarative_edt__TypeCtorInfo_25_25;
        MR_Word mdb__declarative_edt__TypeInfo_26_26;
        MR_Word mdb__declarative_edt__Suspect_10;
        MR_Word mdb__declarative_edt__Var_11;
        MR_Box mdb__declarative_edt__Var_27;
        MR_Word mdb__declarative_edt__Var_12;
        MR_Word mdb__declarative_edt__Var_13;
        MR_Word mdb__declarative_edt__Var_14;
        MR_Word mdb__declarative_edt__Var_15;
        MR_Word mdb__declarative_edt__Var_16;
        MR_Word mdb__declarative_edt__Var_17;
        MR_Box mdb__declarative_edt__conv0_Suspect_10;
        MR_Word mdb__declarative_edt__Var_18;
        MR_Word mdb__declarative_edt__Var_19;
        MR_Integer mdb__declarative_edt__Var_20;
        MR_Word mdb__declarative_edt__Var_21;
        MR_Integer mdb__declarative_edt__Var_22;

        if (mdb__declarative_edt__succeeded)
          {
            mdb__declarative_edt__SuspectId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
            mdb__declarative_edt__SuspectIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 1)));
            mdb__declarative_edt__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_8, (MR_Integer) 0)));
            mdb__declarative_edt__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_8, (MR_Integer) 1)));
            mdb__declarative_edt__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_8, (MR_Integer) 2)));
            mdb__declarative_edt__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_8, (MR_Integer) 3)));
            mdb__declarative_edt__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_8, (MR_Integer) 4)));
            mdb__declarative_edt__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_8, (MR_Integer) 5)));
            mdb__declarative_edt__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_8, (MR_Integer) 6)));
            mdb__declarative_edt__TypeCtorInfo_25_25 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1;
            {
              mdb__declarative_edt__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_26_26, 0) = ((MR_Box) (mdb__declarative_edt__TypeCtorInfo_25_25));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_26_26, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_23));
            }
            {
              mdb__declarative_edt__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mdb__declarative_edt__TypeInfo_26_26, (MR_Word) mdb__declarative_edt__Var_11, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__conv0_Suspect_10);
            }
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__Suspect_10 = ((MR_Word) mdb__declarative_edt__conv0_Suspect_10);
                mdb__declarative_edt__succeeded = MR_TRUE;
              }
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 0)));
                mdb__declarative_edt__Var_27 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 1));
                mdb__declarative_edt__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 2)));
                mdb__declarative_edt__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 3)));
                mdb__declarative_edt__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 4)));
                mdb__declarative_edt__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 5)));
                {
                  mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_for_T_23, mdb__declarative_edt__Node_7, mdb__declarative_edt__Var_27);
                }
              }
            if (mdb__declarative_edt__succeeded)
              {
                *mdb__declarative_edt__FoundId_9 = mdb__declarative_edt__SuspectId_5;
                mdb__declarative_edt__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mdb__declarative_edt__next_value_of_HeadVar__1_1 = mdb__declarative_edt__SuspectIds_6;

                  mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return mdb__declarative_edt__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mdb__declarative_edt__extend_search_space_upwards_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_14,
  MR_Box mdb__declarative_edt__Store_5,
  MR_Word mdb__declarative_edt__Oracle_6,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_16_16;
    MR_Word mdb__declarative_edt__TypeInfo_17_17;
    MR_Integer mdb__declarative_edt__OldTopMostId_8;
    MR_Box mdb__declarative_edt__NewTopMost_9;
    MR_Box mdb__declarative_edt__Var_12;
    MR_Word mdb__declarative_edt__Suspect_21;
    MR_Word mdb__declarative_edt__Var_22;
    MR_Word mdb__declarative_edt__Var_23;
    MR_Integer mdb__declarative_edt__Var_24;
    MR_Word mdb__declarative_edt__Var_25;
    MR_Integer mdb__declarative_edt__Var_26;
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_14, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_16_16);
    }
    {
      mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_edt__TypeInfo_16_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, &mdb__declarative_edt__OldTopMostId_8);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_14, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_17_17);
    }
    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_17_17, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, mdb__declarative_edt__OldTopMostId_8, &mdb__declarative_edt__Suspect_21);
    }
    mdb__declarative_edt__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 0)));
    mdb__declarative_edt__Var_12 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 1));
    mdb__declarative_edt__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 2)));
    mdb__declarative_edt__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 3)));
    mdb__declarative_edt__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 4)));
    mdb__declarative_edt__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 5)));
    mdb__declarative_edt__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_14, (MR_Integer) 0)), (MR_Integer) 9)));
    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_14), mdb__declarative_edt__Store_5, mdb__declarative_edt__Var_12, &mdb__declarative_edt__NewTopMost_9);
    }
    if (mdb__declarative_edt__succeeded)
      {
        {
          mdb__declarative_edt__insert_new_topmost_node_5_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_14, mdb__declarative_edt__Store_5, mdb__declarative_edt__Oracle_6, mdb__declarative_edt__NewTopMost_9, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11);
        }
        mdb__declarative_edt__succeeded = MR_TRUE;
      }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt__insert_new_topmost_node_5_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154,
  MR_Box mdb__declarative_edt__Store_6,
  MR_Word mdb__declarative_edt__Oracle_7,
  MR_Box mdb__declarative_edt__NewTopMostEDTNode_8,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_33)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__EDTChildren_10;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__edt_children_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, mdb__declarative_edt__Store_6, mdb__declarative_edt__NewTopMostEDTNode_8, &mdb__declarative_edt__EDTChildren_10);
    }
    if (mdb__declarative_edt__succeeded)
      {
        MR_Word mdb__declarative_edt__TypeInfo_156_156;
        MR_Word mdb__declarative_edt__TypeInfo_157_157;
        MR_Integer mdb__declarative_edt__OldTopMostId_11;
        MR_Word mdb__declarative_edt__OldTopMost_12;
        MR_Integer mdb__declarative_edt__Pos_13;
        MR_Word mdb__declarative_edt__LeftChildren_14;
        MR_Word mdb__declarative_edt__RightChildren_16;
        MR_Word mdb__declarative_edt__TypeInfo_158_158;
        MR_Box mdb__declarative_edt__Var_34;
        MR_Integer mdb__declarative_edt__Var_35;
        MR_Word mdb__declarative_edt__Var_36;
        MR_Integer mdb__declarative_edt__Var_37;
        MR_Word mdb__declarative_edt__Var_75;
        MR_Word mdb__declarative_edt__Var_76;
        MR_Integer mdb__declarative_edt__Var_77;
        MR_Word mdb__declarative_edt__Var_78;
        MR_Integer mdb__declarative_edt__Var_79;
        MR_Box mdb__declarative_edt__Var_15;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_156_156);
        }
        {
          mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_edt__TypeInfo_156_156, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, &mdb__declarative_edt__OldTopMostId_11);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_157_157);
        }
        {
          mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_157_157, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, mdb__declarative_edt__OldTopMostId_11, &mdb__declarative_edt__OldTopMost_12);
        }
        mdb__declarative_edt__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 0)));
        mdb__declarative_edt__Var_34 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 1));
        mdb__declarative_edt__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 2)));
        mdb__declarative_edt__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 3)));
        mdb__declarative_edt__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 4)));
        mdb__declarative_edt__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 5)));
        {
          mdb__declarative_edt__succeeded = mdb__declarative_edt__find_node_in_list_4_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, mdb__declarative_edt__Store_6, mdb__declarative_edt__EDTChildren_10, mdb__declarative_edt__Var_34, &mdb__declarative_edt__Pos_13);
        }
        if (mdb__declarative_edt__succeeded)
          {
            mdb__declarative_edt__Var_37 = (MR_Integer) 1;
            mdb__declarative_edt__Var_35 = (mdb__declarative_edt__Pos_13 - mdb__declarative_edt__Var_37);
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_158_158);
            }
            {
              mdb__declarative_edt__succeeded = mercury__list__split_list_4_p_0(mdb__declarative_edt__TypeInfo_158_158, mdb__declarative_edt__Var_35, mdb__declarative_edt__EDTChildren_10, &mdb__declarative_edt__LeftChildren_14, &mdb__declarative_edt__Var_36);
            }
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Var_36)) == (MR_mktag((MR_Integer) 1)));
                if (mdb__declarative_edt__succeeded)
                  {
                    mdb__declarative_edt__Var_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_36, (MR_Integer) 0));
                    mdb__declarative_edt__RightChildren_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_36, (MR_Integer) 1)));
                  }
              }
          }
        if (mdb__declarative_edt__succeeded)
          {
            MR_Word mdb__declarative_edt__TypeInfo_160_160;
            MR_Word mdb__declarative_edt__TypeInfo_162_162;
            MR_Word mdb__declarative_edt__TypeInfo_163_163;
            MR_Word mdb__declarative_edt__TypeInfo_168_168;
            MR_Word mdb__declarative_edt__TypeInfo_170_170;
            MR_Word mdb__declarative_edt__NewTopMostStatus_17;
            MR_Integer mdb__declarative_edt__NewTopMostDepth_18;
            MR_Word mdb__declarative_edt__NewTopMost_19;
            MR_Integer mdb__declarative_edt__NewTopMostId_22;
            MR_Word mdb__declarative_edt__SiblingStatus_23;
            MR_Word mdb__declarative_edt__ChildrenIds_24;
            MR_Word mdb__declarative_edt__NewTopMostChildrenIds_27;
            MR_Integer mdb__declarative_edt__Weight_28;
            MR_Word mdb__declarative_edt__NewTopMostWithCorrectWeight_31;
            MR_Word mdb__declarative_edt__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 2)));
            MR_Integer mdb__declarative_edt__Var_39;
            MR_Word mdb__declarative_edt__STATE_VARIABLE_Counter_44_44;
            MR_Word mdb__declarative_edt__STATE_VARIABLE_Counter_45_45;
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46;
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SuspectStore_47_47;
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SuspectStore_48_48;
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49;
            MR_Word mdb__declarative_edt__Var_50;
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51;
            MR_Word mdb__declarative_edt__Var_58;
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SuspectStore_59_59;
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SuspectStore_61_61;
            MR_Word mdb__declarative_edt__Var_62;
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SuspectStore_63_63;
            MR_Word mdb__declarative_edt__Var_64;
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66;
            MR_Word mdb__declarative_edt__Var_122;
            MR_Box mdb__declarative_edt__Var_123;
            MR_Word mdb__declarative_edt__Var_124;
            MR_Integer mdb__declarative_edt__Var_125;
            MR_Word mdb__declarative_edt__Var_140;
            MR_Word mdb__declarative_edt__Var_142;
            MR_Word mdb__declarative_edt__Var_143;
            MR_Word mdb__declarative_edt__Var_145;
            MR_Word mdb__declarative_edt__Var_146;
            MR_Word mdb__declarative_edt__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 0)));
            MR_Box mdb__declarative_edt__Var_81 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 1));
            MR_Integer mdb__declarative_edt__Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 3)));
            MR_Word mdb__declarative_edt__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 4)));
            MR_Integer mdb__declarative_edt__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 5)));
            MR_Word mdb__declarative_edt__Var_85;
            MR_Box mdb__declarative_edt__Var_86;
            MR_Word mdb__declarative_edt__Var_87;
            MR_Word mdb__declarative_edt__Var_88;
            MR_Integer mdb__declarative_edt__Var_89;
            MR_Word mdb__declarative_edt__Var_90;
            MR_Word mdb__declarative_edt__Var_91;
            MR_Word mdb__declarative_edt__Var_92;
            MR_Word mdb__declarative_edt__Var_93;
            MR_Word mdb__declarative_edt__Var_94;
            MR_Word mdb__declarative_edt__Var_95;
            MR_Word mdb__declarative_edt__Var_96;
            MR_Word mdb__declarative_edt__Var_97;
            MR_Word mdb__declarative_edt__Var_99;
            MR_Word mdb__declarative_edt__Var_101;
            MR_Word mdb__declarative_edt__Var_102;
            MR_Word mdb__declarative_edt__Var_98;
            MR_Word mdb__declarative_edt__Var_109;
            MR_Word mdb__declarative_edt__Var_110;
            MR_Word mdb__declarative_edt__Var_111;
            MR_Word mdb__declarative_edt__Var_112;
            MR_Word mdb__declarative_edt__Var_114;
            MR_Word mdb__declarative_edt__Var_115;
            MR_Word mdb__declarative_edt__Var_113;
            MR_Word mdb__declarative_edt__LeftChildrenIds_25;
            MR_Word mdb__declarative_edt__RightChildrenIds_26;
            MR_Integer mdb__declarative_edt__Var_52;
            MR_Integer mdb__declarative_edt__Var_29;
            MR_Word mdb__declarative_edt__Var_116;
            MR_Word mdb__declarative_edt__Var_117;
            MR_Word mdb__declarative_edt__Var_118;
            MR_Word mdb__declarative_edt__Var_119;
            MR_Word mdb__declarative_edt__Var_120;
            MR_Word mdb__declarative_edt__Var_121;
            MR_Word mdb__declarative_edt__Var_126;
            MR_Integer mdb__declarative_edt__Var_127;
            MR_Box mdb__declarative_edt__Var_135;
            MR_Word mdb__declarative_edt__Var_136;
            MR_Integer mdb__declarative_edt__Var_137;
            MR_Word mdb__declarative_edt__Var_138;
            MR_Integer mdb__declarative_edt__Var_139;
            MR_Word mdb__declarative_edt__Var_134;
            MR_Word mdb__declarative_edt__Var_141;
            MR_Word mdb__declarative_edt__Var_144;

            {
              mdb__declarative_edt__NewTopMostStatus_17 = mdb__declarative_edt__new_parent_status_1_f_0(mdb__declarative_edt__Var_38);
            }
            mdb__declarative_edt__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 0)));
            mdb__declarative_edt__Var_86 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 1));
            mdb__declarative_edt__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 2)));
            mdb__declarative_edt__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 3)));
            mdb__declarative_edt__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 4)));
            mdb__declarative_edt__Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 5)));
            mdb__declarative_edt__NewTopMostDepth_18 = (mdb__declarative_edt__Var_39 - (MR_Integer) 1);
            {
              mdb__declarative_edt__NewTopMost_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, 1) = mdb__declarative_edt__NewTopMostEDTNode_8;
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, 2) = ((MR_Box) (mdb__declarative_edt__NewTopMostStatus_17));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, 3) = ((MR_Box) (mdb__declarative_edt__NewTopMostDepth_18));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, 5) = ((MR_Box) ((MR_Integer) 0));
            }
            mdb__declarative_edt__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 0)));
            mdb__declarative_edt__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 1)));
            mdb__declarative_edt__STATE_VARIABLE_Counter_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 2)));
            mdb__declarative_edt__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 3)));
            mdb__declarative_edt__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 4)));
            mdb__declarative_edt__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 5)));
            mdb__declarative_edt__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 6)));
            {
              mercury__counter__allocate_3_p_0(&mdb__declarative_edt__NewTopMostId_22, mdb__declarative_edt__STATE_VARIABLE_Counter_44_44, &mdb__declarative_edt__STATE_VARIABLE_Counter_45_45);
            }
            mdb__declarative_edt__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 0)));
            mdb__declarative_edt__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 1)));
            mdb__declarative_edt__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 2)));
            mdb__declarative_edt__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 3)));
            mdb__declarative_edt__STATE_VARIABLE_SuspectStore_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 4)));
            mdb__declarative_edt__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 5)));
            mdb__declarative_edt__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 6)));
            {
              mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, 0) = ((MR_Box) (mdb__declarative_edt__Var_96));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, 1) = ((MR_Box) (mdb__declarative_edt__Var_97));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, 2) = ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_Counter_45_45));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, 3) = ((MR_Box) (mdb__declarative_edt__Var_99));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, 4) = ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SuspectStore_47_47));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, 5) = ((MR_Box) (mdb__declarative_edt__Var_101));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, 6) = ((MR_Box) (mdb__declarative_edt__Var_102));
            }
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_160_160);
            }
            {
              mdb__declarative_edt__TypeInfo_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_162_162, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_162_162, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_160_160));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_162_162, mdb__declarative_edt__NewTopMostId_22, ((MR_Box) (mdb__declarative_edt__NewTopMost_19)), mdb__declarative_edt__STATE_VARIABLE_SuspectStore_47_47, &mdb__declarative_edt__STATE_VARIABLE_SuspectStore_48_48);
            }
            mdb__declarative_edt__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 0)));
            mdb__declarative_edt__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 1)));
            mdb__declarative_edt__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 2)));
            mdb__declarative_edt__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 3)));
            mdb__declarative_edt__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 4)));
            mdb__declarative_edt__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 5)));
            mdb__declarative_edt__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 6)));
            {
              mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, 0) = ((MR_Box) (mdb__declarative_edt__Var_109));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, 1) = ((MR_Box) (mdb__declarative_edt__Var_110));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, 2) = ((MR_Box) (mdb__declarative_edt__Var_111));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, 3) = ((MR_Box) (mdb__declarative_edt__Var_112));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, 4) = ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SuspectStore_48_48));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, 5) = ((MR_Box) (mdb__declarative_edt__Var_114));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, 6) = ((MR_Box) (mdb__declarative_edt__Var_115));
            }
            {
              mdb__declarative_edt__SiblingStatus_23 = mdb__declarative_edt__new_child_status_1_f_0(mdb__declarative_edt__NewTopMostStatus_17);
            }
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_163_163);
            }
            {
              mdb__declarative_edt__Var_50 = mercury__list__append_2_f_0(mdb__declarative_edt__TypeInfo_163_163, mdb__declarative_edt__LeftChildren_14, mdb__declarative_edt__RightChildren_16);
            }
            {
              mdb__declarative_edt__add_children_8_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, mdb__declarative_edt__Store_6, mdb__declarative_edt__Oracle_7, mdb__declarative_edt__Var_50, mdb__declarative_edt__NewTopMostId_22, mdb__declarative_edt__SiblingStatus_23, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, &mdb__declarative_edt__ChildrenIds_24);
            }
            mdb__declarative_edt__Var_52 = (mdb__declarative_edt__Pos_13 - (MR_Integer) 1);
            {
              mdb__declarative_edt__succeeded = mercury__list__split_list_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__Var_52, mdb__declarative_edt__ChildrenIds_24, &mdb__declarative_edt__LeftChildrenIds_25, &mdb__declarative_edt__RightChildrenIds_26);
            }
            if (mdb__declarative_edt__succeeded)
              {
                MR_Word mdb__declarative_edt__Var_54;

                {
                  mdb__declarative_edt__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_54, 0) = ((MR_Box) (mdb__declarative_edt__OldTopMostId_11));
                  MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_54, 1) = ((MR_Box) (mdb__declarative_edt__RightChildrenIds_26));
                }
                {
                  mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__LeftChildrenIds_25, mdb__declarative_edt__Var_54, &mdb__declarative_edt__NewTopMostChildrenIds_27);
                }
              }
            else
              {
                {
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[12])));
                  return;
                }
              }
            {
              mdb__declarative_edt__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_58, 0) = ((MR_Box) (mdb__declarative_edt__NewTopMostChildrenIds_27));
            }
            {
              mdb__declarative_edt__calc_suspect_weight_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, mdb__declarative_edt__Store_6, mdb__declarative_edt__NewTopMostEDTNode_8, mdb__declarative_edt__Var_58, mdb__declarative_edt__NewTopMostStatus_17, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, &mdb__declarative_edt__Weight_28, &mdb__declarative_edt__Var_29);
            }
            mdb__declarative_edt__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 0)));
            mdb__declarative_edt__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 1)));
            mdb__declarative_edt__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 2)));
            mdb__declarative_edt__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 3)));
            mdb__declarative_edt__STATE_VARIABLE_SuspectStore_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 4)));
            mdb__declarative_edt__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 5)));
            mdb__declarative_edt__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 6)));
            mdb__declarative_edt__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, (MR_Integer) 0)));
            mdb__declarative_edt__Var_123 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, (MR_Integer) 1));
            mdb__declarative_edt__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, (MR_Integer) 2)));
            mdb__declarative_edt__Var_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, (MR_Integer) 3)));
            mdb__declarative_edt__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, (MR_Integer) 4)));
            mdb__declarative_edt__Var_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, (MR_Integer) 5)));
            {
              mdb__declarative_edt__NewTopMostWithCorrectWeight_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMostWithCorrectWeight_31, 0) = ((MR_Box) (mdb__declarative_edt__Var_122));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMostWithCorrectWeight_31, 1) = mdb__declarative_edt__Var_123;
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMostWithCorrectWeight_31, 2) = ((MR_Box) (mdb__declarative_edt__Var_124));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMostWithCorrectWeight_31, 3) = ((MR_Box) (mdb__declarative_edt__Var_125));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMostWithCorrectWeight_31, 4) = ((MR_Box) (mdb__declarative_edt__Var_58));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMostWithCorrectWeight_31, 5) = ((MR_Box) (mdb__declarative_edt__Weight_28));
            }
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_168_168);
            }
            {
              mdb__declarative_edt__TypeInfo_170_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_170_170, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_170_170, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_168_168));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_170_170, mdb__declarative_edt__NewTopMostId_22, ((MR_Box) (mdb__declarative_edt__NewTopMostWithCorrectWeight_31)), mdb__declarative_edt__STATE_VARIABLE_SuspectStore_59_59, &mdb__declarative_edt__STATE_VARIABLE_SuspectStore_61_61);
            }
            {
              mdb__declarative_edt__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_64, 0) = ((MR_Box) (mdb__declarative_edt__NewTopMostId_22));
            }
            mdb__declarative_edt__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 0)));
            mdb__declarative_edt__Var_135 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 1));
            mdb__declarative_edt__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 2)));
            mdb__declarative_edt__Var_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 3)));
            mdb__declarative_edt__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 4)));
            mdb__declarative_edt__Var_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 5)));
            {
              mdb__declarative_edt__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_62, 0) = ((MR_Box) (mdb__declarative_edt__Var_64));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_62, 1) = mdb__declarative_edt__Var_135;
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_62, 2) = ((MR_Box) (mdb__declarative_edt__Var_136));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_62, 3) = ((MR_Box) (mdb__declarative_edt__Var_137));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_62, 4) = ((MR_Box) (mdb__declarative_edt__Var_138));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_62, 5) = ((MR_Box) (mdb__declarative_edt__Var_139));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_170_170, mdb__declarative_edt__OldTopMostId_11, ((MR_Box) (mdb__declarative_edt__Var_62)), mdb__declarative_edt__STATE_VARIABLE_SuspectStore_61_61, &mdb__declarative_edt__STATE_VARIABLE_SuspectStore_63_63);
            }
            mdb__declarative_edt__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 0)));
            mdb__declarative_edt__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 1)));
            mdb__declarative_edt__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 2)));
            mdb__declarative_edt__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 3)));
            mdb__declarative_edt__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 4)));
            mdb__declarative_edt__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 5)));
            mdb__declarative_edt__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 6)));
            {
              mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66, 0) = ((MR_Box) (mdb__declarative_edt__Var_140));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66, 1) = ((MR_Box) (mdb__declarative_edt__Var_64));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66, 2) = ((MR_Box) (mdb__declarative_edt__Var_142));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66, 3) = ((MR_Box) (mdb__declarative_edt__Var_143));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66, 4) = ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SuspectStore_63_63));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66, 5) = ((MR_Box) (mdb__declarative_edt__Var_145));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66, 6) = ((MR_Box) (mdb__declarative_edt__Var_146));
            }
            {
              mdb__declarative_edt__adjust_suspect_status_from_oracle_5_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, mdb__declarative_edt__Store_6, mdb__declarative_edt__Oracle_7, mdb__declarative_edt__NewTopMostId_22, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_33);
            }
          }
        else
          {
            {
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[13])));
              return;
            }
          }
      }
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[14])));
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__edt_children_3_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4,
  MR_Box mdb__declarative_edt__HeadVar__1_1,
  MR_Box mdb__declarative_edt__HeadVar__2_2,
  MR_Word * mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 8)));
    MR_Box mdb__declarative_edt__conv1_HeadVar__3_3;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, &mdb__declarative_edt__conv1_HeadVar__3_3);
    }
    if (mdb__declarative_edt__succeeded)
      {
        *mdb__declarative_edt__HeadVar__3_3 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__3_3);
        mdb__declarative_edt__succeeded = MR_TRUE;
      }
    return mdb__declarative_edt__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__find_node_in_list_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_12,
  MR_Box mdb__declarative_edt__Store_5,
  MR_Word mdb__declarative_edt__HeadVar__2_2,
  MR_Box mdb__declarative_edt__NodeToMatch_8,
  MR_Integer * mdb__declarative_edt__Pos_9)
{
  {
    MR_bool mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mdb__declarative_edt__Node_6;
    MR_Word mdb__declarative_edt__Nodes_7;
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

    if (mdb__declarative_edt__succeeded)
      {
        mdb__declarative_edt__Node_6 = (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0));
        mdb__declarative_edt__Nodes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
        mdb__declarative_edt__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_12, (MR_Integer) 0)), (MR_Integer) 13)));
        {
          mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_12), mdb__declarative_edt__Store_5, mdb__declarative_edt__Node_6, mdb__declarative_edt__NodeToMatch_8);
        }
        if (mdb__declarative_edt__succeeded)
          {
            *mdb__declarative_edt__Pos_9 = (MR_Integer) 1;
            mdb__declarative_edt__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mdb__declarative_edt__TailPos_10;
            MR_Integer mdb__declarative_edt__Var_11;

            {
              mdb__declarative_edt__succeeded = mdb__declarative_edt__find_node_in_list_4_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_12, mdb__declarative_edt__Store_5, mdb__declarative_edt__Nodes_7, mdb__declarative_edt__NodeToMatch_8, &mdb__declarative_edt__TailPos_10);
            }
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__Var_11 = (MR_Integer) 1;
                *mdb__declarative_edt__Pos_9 = (mdb__declarative_edt__TailPos_10 + mdb__declarative_edt__Var_11);
                mdb__declarative_edt__succeeded = MR_TRUE;
              }
          }
      }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt__adjust_suspect_status_from_oracle_5_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34,
  MR_Box mdb__declarative_edt__Store_6,
  MR_Word mdb__declarative_edt__Oracle_7,
  MR_Integer mdb__declarative_edt__SuspectId_8,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_36_36;
    MR_Word mdb__declarative_edt__Suspect_10;
    MR_Box mdb__declarative_edt__Var_25;
    MR_Word mdb__declarative_edt__Var_18;
    MR_Word mdb__declarative_edt__Var_24;
    MR_Integer mdb__declarative_edt__Var_26;
    MR_Word mdb__declarative_edt__Var_27;
    MR_Integer mdb__declarative_edt__Var_28;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_36_36);
    }
    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_36_36, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16, mdb__declarative_edt__SuspectId_8, &mdb__declarative_edt__Suspect_10);
    }
    mdb__declarative_edt__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 0)));
    mdb__declarative_edt__Var_25 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 1));
    mdb__declarative_edt__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 2)));
    mdb__declarative_edt__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 3)));
    mdb__declarative_edt__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 4)));
    mdb__declarative_edt__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 5)));
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
    if (mdb__declarative_edt__succeeded)
      {
        MR_Word mdb__declarative_edt__Question_11;
        void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box mdb__declarative_edt__conv1_Question_11;
        MR_Word mdb__declarative_edt__Answer_12;
        MR_Word mdb__declarative_edt__TypeInfo_37_37;

        {
          mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34), mdb__declarative_edt__Store_6, mdb__declarative_edt__Var_25, &mdb__declarative_edt__conv1_Question_11);
        }
        mdb__declarative_edt__Question_11 = ((MR_Word) mdb__declarative_edt__conv1_Question_11);
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_37_37);
        }
        {
          mdb__declarative_edt__succeeded = mdb__declarative_oracle__answer_known_3_p_0(mdb__declarative_edt__TypeInfo_37_37, mdb__declarative_edt__Oracle_7, mdb__declarative_edt__Question_11, &mdb__declarative_edt__Answer_12);
        }
        if (mdb__declarative_edt__succeeded)
          if (((MR_tag((MR_Word) mdb__declarative_edt__Answer_12)) == (MR_mktag((MR_Integer) 2))))
            {
              mdb__declarative_edt__ignore_suspect_4_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, mdb__declarative_edt__Store_6, mdb__declarative_edt__SuspectId_8, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17);
            }
          else
            {
              MR_Word mdb__declarative_edt__Truth_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Answer_12, (MR_Integer) 1)));
              MR_Box mdb__declarative_edt__Var_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Answer_12, (MR_Integer) 0));

              switch (mdb__declarative_edt__Truth_15) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word mdb__declarative_edt__TypeInfo_39_39;

                    {
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_39_39);
                    }
                    {
                      mdb__declarative_edt__assert_suspect_is_valid_4_p_0(mdb__declarative_edt__TypeInfo_39_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), mdb__declarative_edt__SuspectId_8, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word mdb__declarative_edt__TypeInfo_38_38;

                    {
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_38_38);
                    }
                    {
                      mdb__declarative_edt__assert_suspect_is_erroneous_3_p_0(mdb__declarative_edt__TypeInfo_38_38, mdb__declarative_edt__SuspectId_8, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word mdb__declarative_edt__TypeInfo_40_40;

                    {
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_40_40);
                    }
                    {
                      mdb__declarative_edt__assert_suspect_is_valid_4_p_0(mdb__declarative_edt__TypeInfo_40_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), mdb__declarative_edt__SuspectId_8, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17);
                    }
                  }
                  break;
              }
            }
        else
          *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16;
      }
    else
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16;
  }
}

static MR_Word MR_CALL 
mdb__declarative_edt__new_parent_status_1_f_0(
  MR_Word mdb__declarative_edt__HeadVar__1_1)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__HeadVar__2_2;

    switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__declarative_edt__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
            break;
          case (MR_Integer) 1:
            mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
            break;
          case (MR_Integer) 2:
            mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
            break;
          case (MR_Integer) 3:
            mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
            break;
          case (MR_Integer) 4:
            mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
            break;
          case (MR_Integer) 5:
            mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
            break;
          case (MR_Integer) 6:
            mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
            break;
        }
        break;
      case (MR_Integer) 1:
        mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
        break;
    }
    return mdb__declarative_edt__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mdb__declarative_edt__new_child_status_1_f_0(
  MR_Word mdb__declarative_edt__HeadVar__1_1)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__HeadVar__2_2;

    switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__declarative_edt__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
            break;
          case (MR_Integer) 1:
            mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
            break;
          case (MR_Integer) 2:
            mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
            break;
          case (MR_Integer) 3:
            mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
            break;
          case (MR_Integer) 4:
            mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
            break;
          case (MR_Integer) 5:
            mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
            break;
          case (MR_Integer) 6:
            mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
            break;
        }
        break;
      case (MR_Integer) 1:
        mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
        break;
    }
    return mdb__declarative_edt__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__give_up_subterm_tracking_3_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_8,
  MR_Word mdb__declarative_edt__SearchSpace_4,
  MR_Integer mdb__declarative_edt__SuspectId_5,
  MR_Word mdb__declarative_edt__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__HeadVar__3_3 == (MR_Integer) 0);
    MR_Word mdb__declarative_edt__Status_6;
    MR_Word mdb__declarative_edt__Var_7;
    MR_Word mdb__declarative_edt__Suspect_13;
    MR_Word mdb__declarative_edt__Var_14;
    MR_Box mdb__declarative_edt__Var_15;
    MR_Integer mdb__declarative_edt__Var_16;
    MR_Word mdb__declarative_edt__Var_17;
    MR_Integer mdb__declarative_edt__Var_18;

    if (mdb__declarative_edt__succeeded)
      {
        {
          mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_8, mdb__declarative_edt__SearchSpace_4, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__Suspect_13);
        }
        mdb__declarative_edt__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 0)));
        mdb__declarative_edt__Var_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 1));
        mdb__declarative_edt__Status_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 2)));
        mdb__declarative_edt__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 3)));
        mdb__declarative_edt__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 4)));
        mdb__declarative_edt__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 5)));
        mdb__declarative_edt__Var_7 = (MR_Integer) 1;
        switch (MR_tag((MR_Word) mdb__declarative_edt__Status_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mdb__declarative_edt__Status_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_7 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 1:
                {
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_7 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 2:
                {
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_7 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 3:
                {
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_7 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 4:
                {
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_7 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 5:
                {
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_7 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 6:
                {
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_7 == (MR_Integer) 0);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_7 == (MR_Integer) 0);
            }
            break;
        }
      }
    return mdb__declarative_edt__succeeded;
  }
}

void MR_CALL 
mdb__declarative_edt__skip_suspect_3_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_35,
  MR_Integer mdb__declarative_edt__SuspectId_4,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_10)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_29_59;
    MR_Word mdb__declarative_edt__Suspect_6;
    MR_Integer mdb__declarative_edt__N_7;
    MR_Word mdb__declarative_edt__SkipCounter_8;
    MR_Word mdb__declarative_edt__Var_11;
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12;
    MR_Word mdb__declarative_edt__Var_13;
    MR_Word mdb__declarative_edt__Var_15;
    MR_Word mdb__declarative_edt__Store0_41;
    MR_Word mdb__declarative_edt__Store_42;
    MR_Word mdb__declarative_edt__Var_16;
    MR_Word mdb__declarative_edt__Var_17;
    MR_Word mdb__declarative_edt__Var_18;
    MR_Word mdb__declarative_edt__Var_19;
    MR_Word mdb__declarative_edt__Var_20;
    MR_Word mdb__declarative_edt__Var_21;
    MR_Word mdb__declarative_edt__Var_22;
    MR_Word mdb__declarative_edt__Var_23;
    MR_Word mdb__declarative_edt__Var_24;
    MR_Word mdb__declarative_edt__Var_27;
    MR_Word mdb__declarative_edt__Var_28;
    MR_Word mdb__declarative_edt__Var_25;
    MR_Word mdb__declarative_edt__Var_29;
    MR_Box mdb__declarative_edt__Var_30;
    MR_Integer mdb__declarative_edt__Var_32;
    MR_Word mdb__declarative_edt__Var_33;
    MR_Integer mdb__declarative_edt__Var_34;
    MR_Word mdb__declarative_edt__Var_31;
    MR_Word mdb__declarative_edt__conv0_Store_42;
    MR_Word mdb__declarative_edt__Var_50;
    MR_Word mdb__declarative_edt__Var_51;
    MR_Word mdb__declarative_edt__Var_52;
    MR_Word mdb__declarative_edt__Var_53;
    MR_Word mdb__declarative_edt__Var_55;
    MR_Word mdb__declarative_edt__Var_56;
    MR_Word mdb__declarative_edt__Var_54;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_35, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_6);
    }
    mdb__declarative_edt__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 0)));
    mdb__declarative_edt__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 1)));
    mdb__declarative_edt__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 2)));
    mdb__declarative_edt__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 3)));
    mdb__declarative_edt__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 4)));
    mdb__declarative_edt__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 5)));
    mdb__declarative_edt__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 6)));
    {
      mercury__counter__allocate_3_p_0(&mdb__declarative_edt__N_7, mdb__declarative_edt__Var_11, &mdb__declarative_edt__SkipCounter_8);
    }
    mdb__declarative_edt__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 0)));
    mdb__declarative_edt__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 1)));
    mdb__declarative_edt__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 2)));
    mdb__declarative_edt__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 3)));
    mdb__declarative_edt__Store0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 4)));
    mdb__declarative_edt__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 5)));
    mdb__declarative_edt__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 6)));
    {
      mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, 0) = ((MR_Box) (mdb__declarative_edt__Var_22));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, 1) = ((MR_Box) (mdb__declarative_edt__Var_23));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, 2) = ((MR_Box) (mdb__declarative_edt__Var_24));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, 3) = ((MR_Box) (mdb__declarative_edt__SkipCounter_8));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, 4) = ((MR_Box) (mdb__declarative_edt__Store0_41));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, 5) = ((MR_Box) (mdb__declarative_edt__Var_27));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, 6) = ((MR_Box) (mdb__declarative_edt__Var_28));
    }
    {
      mdb__declarative_edt__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_15, 0) = ((MR_Box) (mdb__declarative_edt__N_7));
    }
    mdb__declarative_edt__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 0)));
    mdb__declarative_edt__Var_30 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 1));
    mdb__declarative_edt__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 2)));
    mdb__declarative_edt__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 3)));
    mdb__declarative_edt__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 4)));
    mdb__declarative_edt__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 5)));
    {
      mdb__declarative_edt__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_13, 0) = ((MR_Box) (mdb__declarative_edt__Var_29));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_13, 1) = mdb__declarative_edt__Var_30;
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_13, 2) = ((MR_Box) (mdb__declarative_edt__Var_15));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_13, 3) = ((MR_Box) (mdb__declarative_edt__Var_32));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_13, 4) = ((MR_Box) (mdb__declarative_edt__Var_33));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_13, 5) = ((MR_Box) (mdb__declarative_edt__Var_34));
    }
    {
      mdb__declarative_edt__TypeInfo_29_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_59, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_59, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_35));
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_59, mdb__declarative_edt__SuspectId_4, ((MR_Box) (mdb__declarative_edt__Var_13)), (MR_Word) mdb__declarative_edt__Store0_41, &mdb__declarative_edt__conv0_Store_42);
    }
    mdb__declarative_edt__Store_42 = (MR_Word) mdb__declarative_edt__conv0_Store_42;
    mdb__declarative_edt__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 0)));
    mdb__declarative_edt__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 1)));
    mdb__declarative_edt__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 2)));
    mdb__declarative_edt__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 3)));
    mdb__declarative_edt__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 4)));
    mdb__declarative_edt__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 5)));
    mdb__declarative_edt__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_edt__Var_50));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_edt__Var_51));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__Var_52));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__Var_53));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__Store_42));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__Var_55));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__Var_56));
    }
  }
}

void MR_CALL 
mdb__declarative_edt__ignore_suspect_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50,
  MR_Box mdb__declarative_edt__Store_5,
  MR_Integer mdb__declarative_edt__SuspectId_6,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_52_52;
    MR_Word mdb__declarative_edt__TypeInfo_53_53;
    MR_Word mdb__declarative_edt__TypeInfo_54_54;
    MR_Word mdb__declarative_edt__TypeInfo_29_78;
    MR_Word mdb__declarative_edt__Suspect_8;
    MR_Integer mdb__declarative_edt__Weight_9;
    MR_Box mdb__declarative_edt__Var_13;
    MR_Word mdb__declarative_edt__Var_16;
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17;
    MR_Integer mdb__declarative_edt__Var_20;
    MR_Integer mdb__declarative_edt__Var_22;
    MR_Word mdb__declarative_edt__Var_26;
    MR_Word mdb__declarative_edt__Var_33;
    MR_Box mdb__declarative_edt__Var_34;
    MR_Integer mdb__declarative_edt__Var_36;
    MR_Word mdb__declarative_edt__Var_37;
    MR_Word mdb__declarative_edt__Store0_60;
    MR_Word mdb__declarative_edt__Store_61;
    MR_Word mdb__declarative_edt__Var_23;
    MR_Word mdb__declarative_edt__Var_24;
    MR_Integer mdb__declarative_edt__Var_25;
    MR_Integer mdb__declarative_edt__Var_27;
    MR_Integer mdb__declarative_edt__Var_10;
    MR_Word mdb__declarative_edt__Var_35;
    MR_Integer mdb__declarative_edt__Var_38;
    MR_Word mdb__declarative_edt__Var_63;
    MR_Word mdb__declarative_edt__Var_64;
    MR_Word mdb__declarative_edt__Var_65;
    MR_Word mdb__declarative_edt__Var_66;
    MR_Word mdb__declarative_edt__Var_67;
    MR_Word mdb__declarative_edt__Var_68;
    MR_Word mdb__declarative_edt__Var_69;
    MR_Word mdb__declarative_edt__Var_70;
    MR_Word mdb__declarative_edt__Var_71;
    MR_Word mdb__declarative_edt__Var_72;
    MR_Word mdb__declarative_edt__Var_74;
    MR_Word mdb__declarative_edt__Var_75;
    MR_Word mdb__declarative_edt__Var_73;
    MR_Word mdb__declarative_edt__Var_45;
    MR_Box mdb__declarative_edt__Var_46;
    MR_Word mdb__declarative_edt__Var_47;
    MR_Integer mdb__declarative_edt__Var_48;
    MR_Word mdb__declarative_edt__Var_49;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_52_52);
    }
    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_52_52, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, mdb__declarative_edt__SuspectId_6, &mdb__declarative_edt__Suspect_8);
    }
    mdb__declarative_edt__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
    mdb__declarative_edt__Var_13 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
    mdb__declarative_edt__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
    mdb__declarative_edt__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
    mdb__declarative_edt__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
    mdb__declarative_edt__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
    {
      mdb__declarative_edt__calc_suspect_weight_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, mdb__declarative_edt__Store_5, mdb__declarative_edt__Var_13, mdb__declarative_edt__Var_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, &mdb__declarative_edt__Weight_9, &mdb__declarative_edt__Var_10);
    }
    mdb__declarative_edt__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
    mdb__declarative_edt__Var_34 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
    mdb__declarative_edt__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
    mdb__declarative_edt__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
    mdb__declarative_edt__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
    mdb__declarative_edt__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
    {
      mdb__declarative_edt__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_16, 0) = ((MR_Box) (mdb__declarative_edt__Var_33));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_16, 1) = mdb__declarative_edt__Var_34;
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_16, 3) = ((MR_Box) (mdb__declarative_edt__Var_36));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_16, 4) = ((MR_Box) (mdb__declarative_edt__Var_37));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_16, 5) = ((MR_Box) (mdb__declarative_edt__Weight_9));
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_53_53);
    }
    mdb__declarative_edt__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 0)));
    mdb__declarative_edt__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 1)));
    mdb__declarative_edt__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 2)));
    mdb__declarative_edt__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 3)));
    mdb__declarative_edt__Store0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 4)));
    mdb__declarative_edt__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 5)));
    mdb__declarative_edt__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 6)));
    {
      mdb__declarative_edt__TypeInfo_29_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_78, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_78, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_53_53));
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_78, mdb__declarative_edt__SuspectId_6, ((MR_Box) (mdb__declarative_edt__Var_16)), mdb__declarative_edt__Store0_60, &mdb__declarative_edt__Store_61);
    }
    mdb__declarative_edt__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 0)));
    mdb__declarative_edt__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 1)));
    mdb__declarative_edt__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 2)));
    mdb__declarative_edt__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 3)));
    mdb__declarative_edt__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 4)));
    mdb__declarative_edt__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 5)));
    mdb__declarative_edt__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 6)));
    {
      mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 0) = ((MR_Box) (mdb__declarative_edt__Var_69));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 1) = ((MR_Box) (mdb__declarative_edt__Var_70));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 2) = ((MR_Box) (mdb__declarative_edt__Var_71));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 3) = ((MR_Box) (mdb__declarative_edt__Var_72));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 4) = ((MR_Box) (mdb__declarative_edt__Store_61));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 5) = ((MR_Box) (mdb__declarative_edt__Var_74));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 6) = ((MR_Box) (mdb__declarative_edt__Var_75));
    }
    mdb__declarative_edt__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
    mdb__declarative_edt__Var_46 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
    mdb__declarative_edt__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
    mdb__declarative_edt__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
    mdb__declarative_edt__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
    mdb__declarative_edt__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
    mdb__declarative_edt__Var_20 = (mdb__declarative_edt__Weight_9 - mdb__declarative_edt__Var_22);
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_54_54);
    }
    {
      mdb__declarative_edt__add_weight_to_ancestors_4_p_0(mdb__declarative_edt__TypeInfo_54_54, mdb__declarative_edt__SuspectId_6, mdb__declarative_edt__Var_20, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12);
    }
  }
}

void MR_CALL 
mdb__declarative_edt__assert_suspect_is_inadmissible_3_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_10,
  MR_Integer mdb__declarative_edt__SuspectId_4,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_6,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_7)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    {
      mdb__declarative_edt__assert_suspect_is_valid_4_p_0(mdb__declarative_edt__TypeInfo_for_T_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), mdb__declarative_edt__SuspectId_4, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_6, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_7);
    }
  }
}

void MR_CALL 
mdb__declarative_edt__assert_suspect_is_erroneous_3_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_37,
  MR_Integer mdb__declarative_edt__SuspectId_4,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_9)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_29_61;
    MR_Word mdb__declarative_edt__Suspect_6;
    MR_Word mdb__declarative_edt__Var_10;
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11;
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15;
    MR_Word mdb__declarative_edt__Var_23;
    MR_Word mdb__declarative_edt__Store0_43;
    MR_Word mdb__declarative_edt__Store_44;
    MR_Word mdb__declarative_edt__Var_24;
    MR_Box mdb__declarative_edt__Var_25;
    MR_Integer mdb__declarative_edt__Var_27;
    MR_Word mdb__declarative_edt__Var_28;
    MR_Integer mdb__declarative_edt__Var_29;
    MR_Word mdb__declarative_edt__Var_26;
    MR_Word mdb__declarative_edt__Var_46;
    MR_Word mdb__declarative_edt__Var_47;
    MR_Word mdb__declarative_edt__Var_48;
    MR_Word mdb__declarative_edt__Var_49;
    MR_Word mdb__declarative_edt__Var_50;
    MR_Word mdb__declarative_edt__Var_51;
    MR_Word mdb__declarative_edt__conv0_Store_44;
    MR_Word mdb__declarative_edt__Var_52;
    MR_Word mdb__declarative_edt__Var_53;
    MR_Word mdb__declarative_edt__Var_54;
    MR_Word mdb__declarative_edt__Var_55;
    MR_Word mdb__declarative_edt__Var_57;
    MR_Word mdb__declarative_edt__Var_58;
    MR_Word mdb__declarative_edt__Var_56;
    MR_Integer mdb__declarative_edt__Var_7;
    MR_Word mdb__declarative_edt__Var_31;
    MR_Word mdb__declarative_edt__Var_32;
    MR_Word mdb__declarative_edt__Var_33;
    MR_Word mdb__declarative_edt__Var_34;
    MR_Word mdb__declarative_edt__Var_35;
    MR_Word mdb__declarative_edt__Var_36;
    MR_Word mdb__declarative_edt__Var_30;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_37, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_6);
    }
    mdb__declarative_edt__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 0)));
    mdb__declarative_edt__Var_25 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 1));
    mdb__declarative_edt__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 2)));
    mdb__declarative_edt__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 3)));
    mdb__declarative_edt__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 4)));
    mdb__declarative_edt__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 5)));
    {
      mdb__declarative_edt__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_10, 0) = ((MR_Box) (mdb__declarative_edt__Var_24));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_10, 1) = mdb__declarative_edt__Var_25;
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_10, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_10, 3) = ((MR_Box) (mdb__declarative_edt__Var_27));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_10, 4) = ((MR_Box) (mdb__declarative_edt__Var_28));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_10, 5) = ((MR_Box) (mdb__declarative_edt__Var_29));
    }
    mdb__declarative_edt__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 0)));
    mdb__declarative_edt__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 1)));
    mdb__declarative_edt__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 2)));
    mdb__declarative_edt__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 3)));
    mdb__declarative_edt__Store0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 4)));
    mdb__declarative_edt__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 5)));
    mdb__declarative_edt__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 6)));
    {
      mdb__declarative_edt__TypeInfo_29_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_61, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_61, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_37));
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_61, mdb__declarative_edt__SuspectId_4, ((MR_Box) (mdb__declarative_edt__Var_10)), (MR_Word) mdb__declarative_edt__Store0_43, &mdb__declarative_edt__conv0_Store_44);
    }
    mdb__declarative_edt__Store_44 = (MR_Word) mdb__declarative_edt__conv0_Store_44;
    mdb__declarative_edt__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 0)));
    mdb__declarative_edt__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 1)));
    mdb__declarative_edt__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 2)));
    mdb__declarative_edt__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 3)));
    mdb__declarative_edt__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 4)));
    mdb__declarative_edt__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 5)));
    mdb__declarative_edt__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 6)));
    {
      mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11, 0) = ((MR_Box) (mdb__declarative_edt__Var_52));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11, 1) = ((MR_Box) (mdb__declarative_edt__Var_53));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11, 2) = ((MR_Box) (mdb__declarative_edt__Var_54));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11, 3) = ((MR_Box) (mdb__declarative_edt__Var_55));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11, 4) = ((MR_Box) (mdb__declarative_edt__Store_44));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11, 5) = ((MR_Box) (mdb__declarative_edt__Var_57));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11, 6) = ((MR_Box) (mdb__declarative_edt__Var_58));
    }
    {
      mdb__declarative_edt__propagate_status_upwards_6_p_0(mdb__declarative_edt__TypeInfo_for_T_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_1[6]), mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Var_7, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15);
    }
    {
      mdb__declarative_edt__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_23, 0) = ((MR_Box) (mdb__declarative_edt__SuspectId_4));
    }
    mdb__declarative_edt__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 0)));
    mdb__declarative_edt__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 1)));
    mdb__declarative_edt__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 2)));
    mdb__declarative_edt__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 3)));
    mdb__declarative_edt__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 4)));
    mdb__declarative_edt__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 5)));
    mdb__declarative_edt__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_edt__Var_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_edt__Var_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__Var_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__Var_33));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__Var_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__Var_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__Var_36));
    }
  }
}

void MR_CALL 
mdb__declarative_edt__assert_suspect_is_correct_3_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_10,
  MR_Integer mdb__declarative_edt__SuspectId_4,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_6,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_7)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    {
      mdb__declarative_edt__assert_suspect_is_valid_4_p_0(mdb__declarative_edt__TypeInfo_for_T_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), mdb__declarative_edt__SuspectId_4, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_6, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_7);
    }
  }
}

static void MR_CALL 
mdb__declarative_edt__assert_suspect_is_valid_4_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3)
{
  {
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
    MR_Word mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_12;

    {
      mdb__declarative_edt__propagate_status_downwards_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_12);
    }
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_12));
  }
}

static void MR_CALL 
mdb__declarative_edt__assert_suspect_is_valid_4_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_87,
  MR_Word mdb__declarative_edt__Status_5,
  MR_Integer mdb__declarative_edt__SuspectId_6,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Suspect_8;
    MR_Word mdb__declarative_edt__Var_13;
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14_14;
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20;
    MR_Integer mdb__declarative_edt__Var_27;
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28;
    MR_Word mdb__declarative_edt__Var_41;
    MR_Box mdb__declarative_edt__Var_42;
    MR_Integer mdb__declarative_edt__Var_44;
    MR_Word mdb__declarative_edt__Var_45;
    MR_Integer mdb__declarative_edt__Var_95;
    MR_Word mdb__declarative_edt__Var_96;
    MR_Word mdb__declarative_edt__Var_43;
    MR_Integer mdb__declarative_edt__Var_46;
    MR_Integer mdb__declarative_edt__Var_97;
    MR_Word mdb__declarative_edt__Var_98;
    MR_Box mdb__declarative_edt__Var_99;
    MR_Word mdb__declarative_edt__Var_100;
    MR_Word mdb__declarative_edt__Var_30;
    MR_Word mdb__declarative_edt__Var_94;
    MR_Word mdb__declarative_edt__Var_68;
    MR_Box mdb__declarative_edt__Var_69;
    MR_Integer mdb__declarative_edt__Var_70;
    MR_Word mdb__declarative_edt__Var_71;
    MR_Integer mdb__declarative_edt__Var_72;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_87, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, mdb__declarative_edt__SuspectId_6, &mdb__declarative_edt__Suspect_8);
    }
    mdb__declarative_edt__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
    mdb__declarative_edt__Var_42 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
    mdb__declarative_edt__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
    mdb__declarative_edt__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
    mdb__declarative_edt__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
    mdb__declarative_edt__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
    {
      mdb__declarative_edt__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_13, 0) = ((MR_Box) (mdb__declarative_edt__Var_41));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_13, 1) = mdb__declarative_edt__Var_42;
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_13, 2) = ((MR_Box) (mdb__declarative_edt__Status_5));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_13, 3) = ((MR_Box) (mdb__declarative_edt__Var_44));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_13, 4) = ((MR_Box) (mdb__declarative_edt__Var_45));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_13, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mdb__declarative_edt__set_suspect_4_p_0(mdb__declarative_edt__TypeInfo_for_T_87, mdb__declarative_edt__SuspectId_6, mdb__declarative_edt__Var_13, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14_14);
    }
    mdb__declarative_edt__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
    mdb__declarative_edt__Var_99 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
    mdb__declarative_edt__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
    mdb__declarative_edt__Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
    mdb__declarative_edt__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
    mdb__declarative_edt__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
    if ((mdb__declarative_edt__Var_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14_14;
    else
      {
        MR_Word mdb__declarative_edt__TypeInfo_93_93;
        MR_Word mdb__declarative_edt__Children_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_96, (MR_Integer) 0)));
        MR_Word mdb__declarative_edt__Var_19;
        MR_Box mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_20_20;

        {
          mdb__declarative_edt__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_19, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_8[1]));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_19, 1) = ((MR_Box) (mdb__declarative_edt__assert_suspect_is_valid_4_p_0_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_19, 3) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_87));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_19, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_1[5])));
        }
        {
          mdb__declarative_edt__TypeInfo_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_93_93, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_93_93, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_87));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__TypeInfo_93_93, mdb__declarative_edt__Var_19, mdb__declarative_edt__Children_9, ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14_14)), &mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_20_20);
        }
        mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20 = ((MR_Word) mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_20_20);
      }
    mdb__declarative_edt__Var_27 = ((MR_Integer) 0 - mdb__declarative_edt__Var_95);
    {
      mdb__declarative_edt__add_weight_to_ancestors_4_p_0(mdb__declarative_edt__TypeInfo_for_T_87, mdb__declarative_edt__SuspectId_6, mdb__declarative_edt__Var_27, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28);
    }
    mdb__declarative_edt__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
    mdb__declarative_edt__Var_69 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
    mdb__declarative_edt__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
    mdb__declarative_edt__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
    mdb__declarative_edt__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
    mdb__declarative_edt__Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
    {
      mdb__declarative_edt__excluded_complement_2_p_0(mdb__declarative_edt__Var_30, &mdb__declarative_edt__Var_94);
    }
    mdb__declarative_edt__succeeded = ((MR_Integer) 1 == mdb__declarative_edt__Var_94);
    if (mdb__declarative_edt__succeeded)
      {
        MR_Integer mdb__declarative_edt__Lowest_10;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34;
        MR_Word mdb__declarative_edt__Var_101;
        MR_Word mdb__declarative_edt__Var_102;
        MR_Word mdb__declarative_edt__Var_103;
        MR_Word mdb__declarative_edt__Var_104;
        MR_Word mdb__declarative_edt__Var_105;
        MR_Word mdb__declarative_edt__Var_106;
        MR_Word mdb__declarative_edt__Var_107;

        {
          mdb__declarative_edt__propagate_status_upwards_6_p_0(mdb__declarative_edt__TypeInfo_for_T_87, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_1[11]), mdb__declarative_edt__SuspectId_6, &mdb__declarative_edt__Lowest_10, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34);
        }
        mdb__declarative_edt__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 0)));
        mdb__declarative_edt__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 1)));
        mdb__declarative_edt__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 2)));
        mdb__declarative_edt__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 3)));
        mdb__declarative_edt__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 4)));
        mdb__declarative_edt__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 5)));
        mdb__declarative_edt__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 6)));
        {
          mdb__declarative_edt__succeeded = mdb__declarative_edt__suspect_erroneous_2_p_0(mdb__declarative_edt__TypeInfo_for_T_87, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34, mdb__declarative_edt__Lowest_10);
        }
        if (mdb__declarative_edt__succeeded)
          {
            MR_Word mdb__declarative_edt__Var_38;

            {
              mdb__declarative_edt__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_38, 0) = ((MR_Box) (mdb__declarative_edt__Lowest_10));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_edt__Var_38));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_edt__Var_106));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__Var_105));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__Var_104));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__Var_103));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__Var_102));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__Var_101));
            }
          }
        else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_edt__Var_106));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__Var_105));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__Var_104));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__Var_103));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__Var_102));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__Var_101));
            }
          }
      }
    else
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28;
  }
}

static void MR_CALL 
mdb__declarative_edt__propagate_status_upwards_6_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3)
{
  {
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
    MR_Word mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_12;

    {
      mdb__declarative_edt__propagate_status_downwards_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_12);
    }
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_12));
  }
}

static void MR_CALL 
mdb__declarative_edt__propagate_status_upwards_6_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_47,
  MR_Word mdb__declarative_edt__Status_7,
  MR_Word mdb__declarative_edt__StopStatusSet_8,
  MR_Integer mdb__declarative_edt__SuspectId_9,
  MR_Integer * mdb__declarative_edt__Lowest_10,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Suspect_12;
    MR_Word mdb__declarative_edt__Var_60;
    MR_Integer mdb__declarative_edt__Var_55;
    MR_Word mdb__declarative_edt__Var_56;
    MR_Integer mdb__declarative_edt__Var_57;
    MR_Word mdb__declarative_edt__Var_58;
    MR_Box mdb__declarative_edt__Var_59;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_47, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16, mdb__declarative_edt__SuspectId_9, &mdb__declarative_edt__Suspect_12);
    }
    mdb__declarative_edt__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 0)));
    mdb__declarative_edt__Var_59 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 1));
    mdb__declarative_edt__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 2)));
    mdb__declarative_edt__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 3)));
    mdb__declarative_edt__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 4)));
    mdb__declarative_edt__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 5)));
    if ((mdb__declarative_edt__Var_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mdb__declarative_edt__Lowest_10 = mdb__declarative_edt__SuspectId_9;
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16;
      }
    else
      {
        MR_Word mdb__declarative_edt__TypeInfo_53_53;
        MR_Integer mdb__declarative_edt__ParentId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_60, (MR_Integer) 0)));
        MR_Word mdb__declarative_edt__Siblings_14;
        MR_Word mdb__declarative_edt__Parent_15;
        MR_Word mdb__declarative_edt__Var_20;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21;
        MR_Box mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_21_21;
        MR_Word mdb__declarative_edt__Var_22;
        MR_Word mdb__declarative_edt__Var_31;
        MR_Box mdb__declarative_edt__Var_32;
        MR_Integer mdb__declarative_edt__Var_33;
        MR_Word mdb__declarative_edt__Var_34;
        MR_Integer mdb__declarative_edt__Var_35;

        {
          mdb__declarative_edt__get_siblings_3_p_0(mdb__declarative_edt__TypeInfo_for_T_47, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16, mdb__declarative_edt__SuspectId_9, &mdb__declarative_edt__Siblings_14);
        }
        {
          mdb__declarative_edt__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_20, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_8[1]));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_20, 1) = ((MR_Box) (mdb__declarative_edt__propagate_status_upwards_6_p_0_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_20, 3) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_47));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_20, 4) = ((MR_Box) (mdb__declarative_edt__Status_7));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_20, 5) = ((MR_Box) (mdb__declarative_edt__StopStatusSet_8));
        }
        {
          mdb__declarative_edt__TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_53_53, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_53_53, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_47));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__TypeInfo_53_53, mdb__declarative_edt__Var_20, mdb__declarative_edt__Siblings_14, ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16)), &mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_21_21);
        }
        mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21 = ((MR_Word) mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_21_21);
        {
          mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_47, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21, mdb__declarative_edt__ParentId_13, &mdb__declarative_edt__Parent_15);
        }
        mdb__declarative_edt__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 0)));
        mdb__declarative_edt__Var_32 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 1));
        mdb__declarative_edt__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 2)));
        mdb__declarative_edt__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 3)));
        mdb__declarative_edt__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 4)));
        mdb__declarative_edt__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 5)));
        {
          mdb__declarative_edt__succeeded = mercury__list__member_2_p_0((MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0, ((MR_Box) (mdb__declarative_edt__Var_22)), mdb__declarative_edt__StopStatusSet_8);
        }
        if (mdb__declarative_edt__succeeded)
          {
            *mdb__declarative_edt__Lowest_10 = mdb__declarative_edt__ParentId_13;
            *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21;
          }
        else
          {
            MR_Word mdb__declarative_edt__TypeInfo_29_84;
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23;
            MR_Word mdb__declarative_edt__Var_24;
            MR_Word mdb__declarative_edt__Store0_66;
            MR_Word mdb__declarative_edt__Store_67;
            MR_Word mdb__declarative_edt__Var_36;
            MR_Box mdb__declarative_edt__Var_37;
            MR_Integer mdb__declarative_edt__Var_39;
            MR_Word mdb__declarative_edt__Var_40;
            MR_Integer mdb__declarative_edt__Var_41;
            MR_Word mdb__declarative_edt__Var_38;
            MR_Word mdb__declarative_edt__Var_69;
            MR_Word mdb__declarative_edt__Var_70;
            MR_Word mdb__declarative_edt__Var_71;
            MR_Word mdb__declarative_edt__Var_72;
            MR_Word mdb__declarative_edt__Var_73;
            MR_Word mdb__declarative_edt__Var_74;
            MR_Word mdb__declarative_edt__conv2_Store_67;
            MR_Word mdb__declarative_edt__Var_75;
            MR_Word mdb__declarative_edt__Var_76;
            MR_Word mdb__declarative_edt__Var_77;
            MR_Word mdb__declarative_edt__Var_78;
            MR_Word mdb__declarative_edt__Var_80;
            MR_Word mdb__declarative_edt__Var_81;
            MR_Word mdb__declarative_edt__Var_79;

            {
              mdb__declarative_edt__propagate_status_upwards_6_p_0(mdb__declarative_edt__TypeInfo_for_T_47, mdb__declarative_edt__Status_7, mdb__declarative_edt__StopStatusSet_8, mdb__declarative_edt__ParentId_13, mdb__declarative_edt__Lowest_10, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23);
            }
            mdb__declarative_edt__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 0)));
            mdb__declarative_edt__Var_37 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 1));
            mdb__declarative_edt__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 2)));
            mdb__declarative_edt__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 3)));
            mdb__declarative_edt__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 4)));
            mdb__declarative_edt__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 5)));
            {
              mdb__declarative_edt__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_24, 0) = ((MR_Box) (mdb__declarative_edt__Var_36));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_24, 1) = mdb__declarative_edt__Var_37;
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_24, 2) = ((MR_Box) (mdb__declarative_edt__Status_7));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_24, 3) = ((MR_Box) (mdb__declarative_edt__Var_39));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_24, 4) = ((MR_Box) (mdb__declarative_edt__Var_40));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_24, 5) = ((MR_Box) (mdb__declarative_edt__Var_41));
            }
            mdb__declarative_edt__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 0)));
            mdb__declarative_edt__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 1)));
            mdb__declarative_edt__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 2)));
            mdb__declarative_edt__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 3)));
            mdb__declarative_edt__Store0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 4)));
            mdb__declarative_edt__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 5)));
            mdb__declarative_edt__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 6)));
            {
              mdb__declarative_edt__TypeInfo_29_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_84, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_84, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_47));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_84, mdb__declarative_edt__ParentId_13, ((MR_Box) (mdb__declarative_edt__Var_24)), (MR_Word) mdb__declarative_edt__Store0_66, &mdb__declarative_edt__conv2_Store_67);
            }
            mdb__declarative_edt__Store_67 = (MR_Word) mdb__declarative_edt__conv2_Store_67;
            mdb__declarative_edt__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 0)));
            mdb__declarative_edt__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 1)));
            mdb__declarative_edt__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 2)));
            mdb__declarative_edt__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 3)));
            mdb__declarative_edt__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 4)));
            mdb__declarative_edt__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 5)));
            mdb__declarative_edt__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 6)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_edt__Var_75));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_edt__Var_76));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__Var_77));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__Var_78));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__Store_67));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__Var_80));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__Var_81));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__get_siblings_3_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__IntroducedFrom__pred__get_siblings__1516__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1));
    }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt__get_siblings_3_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_45,
  MR_Word mdb__declarative_edt__SearchSpace_4,
  MR_Integer mdb__declarative_edt__SuspectId_5,
  MR_Word * mdb__declarative_edt__Siblings_6)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Suspect_7;
    MR_Word mdb__declarative_edt__Var_56;
    MR_Integer mdb__declarative_edt__Var_51;
    MR_Word mdb__declarative_edt__Var_52;
    MR_Integer mdb__declarative_edt__Var_53;
    MR_Word mdb__declarative_edt__Var_54;
    MR_Box mdb__declarative_edt__Var_55;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_45, mdb__declarative_edt__SearchSpace_4, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__Suspect_7);
    }
    mdb__declarative_edt__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 0)));
    mdb__declarative_edt__Var_55 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 1));
    mdb__declarative_edt__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 2)));
    mdb__declarative_edt__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 3)));
    mdb__declarative_edt__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 4)));
    mdb__declarative_edt__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 5)));
    if ((mdb__declarative_edt__Var_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mdb__declarative_edt__Siblings_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Integer mdb__declarative_edt__ParentId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_56, (MR_Integer) 0)));
        MR_Word mdb__declarative_edt__Parent_9;
        MR_Word mdb__declarative_edt__Var_58;
        MR_Integer mdb__declarative_edt__Var_57;
        MR_Integer mdb__declarative_edt__Var_59;
        MR_Word mdb__declarative_edt__Var_60;
        MR_Box mdb__declarative_edt__Var_61;
        MR_Word mdb__declarative_edt__Var_62;

        {
          mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_45, mdb__declarative_edt__SearchSpace_4, mdb__declarative_edt__ParentId_8, &mdb__declarative_edt__Parent_9);
        }
        mdb__declarative_edt__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_9, (MR_Integer) 0)));
        mdb__declarative_edt__Var_61 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_9, (MR_Integer) 1));
        mdb__declarative_edt__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_9, (MR_Integer) 2)));
        mdb__declarative_edt__Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_9, (MR_Integer) 3)));
        mdb__declarative_edt__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_9, (MR_Integer) 4)));
        mdb__declarative_edt__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_9, (MR_Integer) 5)));
        if ((mdb__declarative_edt__Var_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[9])));
              return;
            }
          }
        else
          {
            MR_Word mdb__declarative_edt__Children_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_58, (MR_Integer) 0)));

            if ((mdb__declarative_edt__Children_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[10])));
                  return;
                }
              }
            else
              {
                MR_Word mdb__declarative_edt__Var_24;
                MR_Word mdb__declarative_edt__Var_13;

                {
                  mdb__declarative_edt__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_24, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_9[0]));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_24, 1) = ((MR_Box) (mdb__declarative_edt__get_siblings_3_p_0_1));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_24, 3) = ((MR_Box) (mdb__declarative_edt__SuspectId_5));
                }
                {
                  mercury__list__filter_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__Var_24, mdb__declarative_edt__Children_10, &mdb__declarative_edt__Var_13, mdb__declarative_edt__Siblings_6);
                }
              }
          }
      }
  }
}

static void MR_CALL 
mdb__declarative_edt__excluded_complement_2_p_0(
  MR_Word mdb__declarative_edt__HeadVar__1_1,
  MR_Word * mdb__declarative_edt__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    switch (MR_tag((MR_Word) mdb__declarative_edt__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__declarative_edt__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mdb__declarative_edt__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *mdb__declarative_edt__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            *mdb__declarative_edt__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            *mdb__declarative_edt__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            *mdb__declarative_edt__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 5:
            *mdb__declarative_edt__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            *mdb__declarative_edt__HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        *mdb__declarative_edt__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__get_path_4_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_10,
  MR_Word mdb__declarative_edt__SearchSpace_5,
  MR_Integer mdb__declarative_edt__BottomId_6,
  MR_Integer mdb__declarative_edt__TopId_7,
  MR_Word * mdb__declarative_edt__Path_8)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    {
      mdb__declarative_edt__succeeded = mdb__declarative_edt__get_path_5_p_0(mdb__declarative_edt__TypeInfo_for_T_10, mdb__declarative_edt__SearchSpace_5, mdb__declarative_edt__BottomId_6, mdb__declarative_edt__TopId_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_edt__Path_8);
    }
    return mdb__declarative_edt__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_edt__get_path_5_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_20,
  MR_Word mdb__declarative_edt__SearchSpace_6,
  MR_Integer mdb__declarative_edt__BottomId_7,
  MR_Integer mdb__declarative_edt__TopId_8,
  MR_Word mdb__declarative_edt__PathSoFar_9,
  MR_Word * mdb__declarative_edt__Path_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__BottomId_7 == mdb__declarative_edt__TopId_8);

        if (mdb__declarative_edt__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mdb__declarative_edt__Path_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_edt__TopId_8));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_edt__PathSoFar_9));
            }
            mdb__declarative_edt__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mdb__declarative_edt__Bottom_11;
            MR_Integer mdb__declarative_edt__ParentId_12;
            MR_Word mdb__declarative_edt__Var_13;
            MR_Word mdb__declarative_edt__Var_14;
            MR_Box mdb__declarative_edt__Var_15;
            MR_Word mdb__declarative_edt__Var_16;
            MR_Integer mdb__declarative_edt__Var_17;
            MR_Word mdb__declarative_edt__Var_18;
            MR_Integer mdb__declarative_edt__Var_19;

            {
              mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_20, mdb__declarative_edt__SearchSpace_6, mdb__declarative_edt__BottomId_7, &mdb__declarative_edt__Bottom_11);
            }
            mdb__declarative_edt__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Bottom_11, (MR_Integer) 0)));
            mdb__declarative_edt__Var_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Bottom_11, (MR_Integer) 1));
            mdb__declarative_edt__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Bottom_11, (MR_Integer) 2)));
            mdb__declarative_edt__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Bottom_11, (MR_Integer) 3)));
            mdb__declarative_edt__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Bottom_11, (MR_Integer) 4)));
            mdb__declarative_edt__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Bottom_11, (MR_Integer) 5)));
            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Var_13)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__ParentId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_13, (MR_Integer) 0)));
                {
                  mdb__declarative_edt__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_14, 0) = ((MR_Box) (mdb__declarative_edt__BottomId_7));
                  MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_14, 1) = ((MR_Box) (mdb__declarative_edt__PathSoFar_9));
                }
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Integer mdb__declarative_edt__next_value_of_BottomId_7 = mdb__declarative_edt__ParentId_12;
                    MR_Word mdb__declarative_edt__next_value_of_PathSoFar_9 = mdb__declarative_edt__Var_14;

                    mdb__declarative_edt__PathSoFar_9 = mdb__declarative_edt__next_value_of_PathSoFar_9;
                    mdb__declarative_edt__BottomId_7 = mdb__declarative_edt__next_value_of_BottomId_7;
                  }
                  continue;
                }
              }
          }
        return mdb__declarative_edt__succeeded;
      }
      break;
    }
}

void MR_CALL 
mdb__declarative_edt__travel_up_4_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_20_20,
  MR_Word mdb__declarative_edt__SearchSpace_5,
  MR_Integer mdb__declarative_edt__StartId_6,
  MR_Integer mdb__declarative_edt__Distance_7,
  MR_Integer * mdb__declarative_edt__FinishId_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__Distance_7 > (MR_Integer) 0);
        MR_Integer mdb__declarative_edt__ParentId_10;
        MR_Word mdb__declarative_edt__Suspect_9;
        MR_Word mdb__declarative_edt__Var_12;
        MR_Box mdb__declarative_edt__Var_15;
        MR_Word mdb__declarative_edt__Var_16;
        MR_Integer mdb__declarative_edt__Var_17;
        MR_Word mdb__declarative_edt__Var_18;
        MR_Integer mdb__declarative_edt__Var_19;

        if (mdb__declarative_edt__succeeded)
          {
            {
              mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_20_20, mdb__declarative_edt__SearchSpace_5, mdb__declarative_edt__StartId_6, &mdb__declarative_edt__Suspect_9);
            }
            mdb__declarative_edt__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 0)));
            mdb__declarative_edt__Var_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 1));
            mdb__declarative_edt__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 2)));
            mdb__declarative_edt__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 3)));
            mdb__declarative_edt__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 4)));
            mdb__declarative_edt__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 5)));
            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Var_12)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_edt__succeeded)
              mdb__declarative_edt__ParentId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_12, (MR_Integer) 0)));
          }
        if (mdb__declarative_edt__succeeded)
          {
            MR_Integer mdb__declarative_edt__Var_13 = (mdb__declarative_edt__Distance_7 - (MR_Integer) 1);

            /* direct tailcall eliminated */
            {
              MR_Integer mdb__declarative_edt__next_value_of_StartId_6 = mdb__declarative_edt__ParentId_10;
              MR_Integer mdb__declarative_edt__next_value_of_Distance_7 = mdb__declarative_edt__Var_13;

              mdb__declarative_edt__Distance_7 = mdb__declarative_edt__next_value_of_Distance_7;
              mdb__declarative_edt__StartId_6 = mdb__declarative_edt__next_value_of_StartId_6;
            }
            continue;
          }
        else
          *mdb__declarative_edt__FinishId_8 = mdb__declarative_edt__StartId_6;
      }
      break;
    }
}

MR_bool MR_CALL 
mdb__declarative_edt__suspect_in_excluded_complement_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_13,
  MR_Word mdb__declarative_edt__SearchSpace_3,
  MR_Integer mdb__declarative_edt__SuspectId_4)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Suspect_5;
    MR_Word mdb__declarative_edt__Var_6;
    MR_Word mdb__declarative_edt__Var_8;
    MR_Box mdb__declarative_edt__Var_9;
    MR_Integer mdb__declarative_edt__Var_10;
    MR_Word mdb__declarative_edt__Var_11;
    MR_Integer mdb__declarative_edt__Var_12;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_13, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
    mdb__declarative_edt__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
    mdb__declarative_edt__Var_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
    mdb__declarative_edt__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
    mdb__declarative_edt__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
    mdb__declarative_edt__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
    mdb__declarative_edt__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
    switch (MR_tag((MR_Word) mdb__declarative_edt__Var_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__declarative_edt__Var_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 1:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 2:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 3:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 4:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 5:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 6:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
        }
        break;
    }
    return mdb__declarative_edt__succeeded;
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__suspect_in_excluded_subtree_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_13,
  MR_Word mdb__declarative_edt__SearchSpace_3,
  MR_Integer mdb__declarative_edt__SuspectId_4)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Suspect_5;
    MR_Word mdb__declarative_edt__Var_6;
    MR_Word mdb__declarative_edt__Var_8;
    MR_Box mdb__declarative_edt__Var_9;
    MR_Integer mdb__declarative_edt__Var_10;
    MR_Word mdb__declarative_edt__Var_11;
    MR_Integer mdb__declarative_edt__Var_12;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_13, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
    mdb__declarative_edt__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
    mdb__declarative_edt__Var_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
    mdb__declarative_edt__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
    mdb__declarative_edt__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
    mdb__declarative_edt__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
    mdb__declarative_edt__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
    switch (MR_tag((MR_Word) mdb__declarative_edt__Var_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__declarative_edt__Var_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 1:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 2:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 3:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 4:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 5:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 6:
            {
              mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
        }
        break;
    }
    return mdb__declarative_edt__succeeded;
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__suspect_ignored_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_12,
  MR_Word mdb__declarative_edt__SearchSpace_3,
  MR_Integer mdb__declarative_edt__SuspectId_4)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Suspect_5;
    MR_Word mdb__declarative_edt__Var_6;
    MR_Word mdb__declarative_edt__Var_7;
    MR_Box mdb__declarative_edt__Var_8;
    MR_Integer mdb__declarative_edt__Var_9;
    MR_Word mdb__declarative_edt__Var_10;
    MR_Integer mdb__declarative_edt__Var_11;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_12, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
    mdb__declarative_edt__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
    mdb__declarative_edt__Var_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
    mdb__declarative_edt__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
    mdb__declarative_edt__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
    mdb__declarative_edt__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
    mdb__declarative_edt__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return mdb__declarative_edt__succeeded;
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__suspect_skipped_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_13,
  MR_Word mdb__declarative_edt__SearchSpace_3,
  MR_Integer mdb__declarative_edt__SuspectId_4)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Suspect_5;
    MR_Word mdb__declarative_edt__Var_7;
    MR_Word mdb__declarative_edt__Var_8;
    MR_Box mdb__declarative_edt__Var_9;
    MR_Integer mdb__declarative_edt__Var_10;
    MR_Word mdb__declarative_edt__Var_11;
    MR_Integer mdb__declarative_edt__Var_12;
    MR_Integer mdb__declarative_edt__Var_6;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_13, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
    mdb__declarative_edt__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
    mdb__declarative_edt__Var_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
    mdb__declarative_edt__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
    mdb__declarative_edt__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
    mdb__declarative_edt__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
    mdb__declarative_edt__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Var_7)) == (MR_mktag((MR_Integer) 1)));
    if (mdb__declarative_edt__succeeded)
      mdb__declarative_edt__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_7, (MR_Integer) 0)));
    return mdb__declarative_edt__succeeded;
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__suspect_erroneous_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_12,
  MR_Word mdb__declarative_edt__SearchSpace_3,
  MR_Integer mdb__declarative_edt__SuspectId_4)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Suspect_5;
    MR_Word mdb__declarative_edt__Var_6;
    MR_Word mdb__declarative_edt__Var_7;
    MR_Box mdb__declarative_edt__Var_8;
    MR_Integer mdb__declarative_edt__Var_9;
    MR_Word mdb__declarative_edt__Var_10;
    MR_Integer mdb__declarative_edt__Var_11;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_12, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
    mdb__declarative_edt__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
    mdb__declarative_edt__Var_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
    mdb__declarative_edt__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
    mdb__declarative_edt__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
    mdb__declarative_edt__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
    mdb__declarative_edt__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    return mdb__declarative_edt__succeeded;
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__suspect_inadmissible_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_12,
  MR_Word mdb__declarative_edt__SearchSpace_3,
  MR_Integer mdb__declarative_edt__SuspectId_4)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Suspect_5;
    MR_Word mdb__declarative_edt__Var_6;
    MR_Word mdb__declarative_edt__Var_7;
    MR_Box mdb__declarative_edt__Var_8;
    MR_Integer mdb__declarative_edt__Var_9;
    MR_Word mdb__declarative_edt__Var_10;
    MR_Integer mdb__declarative_edt__Var_11;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_12, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
    mdb__declarative_edt__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
    mdb__declarative_edt__Var_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
    mdb__declarative_edt__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
    mdb__declarative_edt__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
    mdb__declarative_edt__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
    mdb__declarative_edt__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    return mdb__declarative_edt__succeeded;
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__suspect_correct_or_inadmissible_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_12,
  MR_Word mdb__declarative_edt__SearchSpace_3,
  MR_Integer mdb__declarative_edt__SuspectId_4)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Suspect_5;
    MR_Word mdb__declarative_edt__Status_6;
    MR_Word mdb__declarative_edt__Var_7;
    MR_Box mdb__declarative_edt__Var_8;
    MR_Integer mdb__declarative_edt__Var_9;
    MR_Word mdb__declarative_edt__Var_10;
    MR_Integer mdb__declarative_edt__Var_11;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_12, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
    mdb__declarative_edt__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
    mdb__declarative_edt__Var_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
    mdb__declarative_edt__Status_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
    mdb__declarative_edt__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
    mdb__declarative_edt__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
    mdb__declarative_edt__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
    if ((mdb__declarative_edt__Status_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
      mdb__declarative_edt__succeeded = MR_TRUE;
    else
    if ((mdb__declarative_edt__Status_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
      mdb__declarative_edt__succeeded = MR_TRUE;
    else
      mdb__declarative_edt__succeeded = MR_FALSE;
    return mdb__declarative_edt__succeeded;
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__suspect_unknown_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_12,
  MR_Word mdb__declarative_edt__SearchSpace_3,
  MR_Integer mdb__declarative_edt__SuspectId_4)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Suspect_5;
    MR_Word mdb__declarative_edt__Var_6;
    MR_Word mdb__declarative_edt__Var_7;
    MR_Box mdb__declarative_edt__Var_8;
    MR_Integer mdb__declarative_edt__Var_9;
    MR_Word mdb__declarative_edt__Var_10;
    MR_Integer mdb__declarative_edt__Var_11;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_12, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
    mdb__declarative_edt__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
    mdb__declarative_edt__Var_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
    mdb__declarative_edt__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
    mdb__declarative_edt__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
    mdb__declarative_edt__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
    mdb__declarative_edt__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
    return mdb__declarative_edt__succeeded;
  }
}

MR_Integer MR_CALL 
mdb__declarative_edt__suspect_depth_2_f_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_12,
  MR_Word mdb__declarative_edt__SearchSpace_4,
  MR_Integer mdb__declarative_edt__SuspectId_5)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__HeadVar__3_3;
    MR_Word mdb__declarative_edt__Suspect_6;
    MR_Word mdb__declarative_edt__Var_7;
    MR_Box mdb__declarative_edt__Var_8;
    MR_Word mdb__declarative_edt__Var_9;
    MR_Word mdb__declarative_edt__Var_10;
    MR_Integer mdb__declarative_edt__Var_11;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_12, mdb__declarative_edt__SearchSpace_4, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__Suspect_6);
    }
    mdb__declarative_edt__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 0)));
    mdb__declarative_edt__Var_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 1));
    mdb__declarative_edt__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 2)));
    mdb__declarative_edt__HeadVar__3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 3)));
    mdb__declarative_edt__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 4)));
    mdb__declarative_edt__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 5)));
    return mdb__declarative_edt__HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mdb__declarative_edt__get_weight_2_f_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_13,
  MR_Word mdb__declarative_edt__SearchSpace_4,
  MR_Integer mdb__declarative_edt__SuspectId_5)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Integer mdb__declarative_edt__Weight_6;
    MR_Word mdb__declarative_edt__Suspect_7;
    MR_Word mdb__declarative_edt__Var_8;
    MR_Box mdb__declarative_edt__Var_9;
    MR_Word mdb__declarative_edt__Var_10;
    MR_Integer mdb__declarative_edt__Var_11;
    MR_Word mdb__declarative_edt__Var_12;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_13, mdb__declarative_edt__SearchSpace_4, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__Suspect_7);
    }
    mdb__declarative_edt__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 0)));
    mdb__declarative_edt__Var_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 1));
    mdb__declarative_edt__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 2)));
    mdb__declarative_edt__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 3)));
    mdb__declarative_edt__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 4)));
    mdb__declarative_edt__Weight_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 5)));
    return mdb__declarative_edt__Weight_6;
  }
}

MR_Box MR_CALL 
mdb__declarative_edt__get_edt_node_2_f_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_13,
  MR_Word mdb__declarative_edt__SearchSpace_4,
  MR_Integer mdb__declarative_edt__SuspectId_5)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Box mdb__declarative_edt__Node_6;
    MR_Word mdb__declarative_edt__Suspect_7;
    MR_Word mdb__declarative_edt__Var_8;
    MR_Word mdb__declarative_edt__Var_9;
    MR_Integer mdb__declarative_edt__Var_10;
    MR_Word mdb__declarative_edt__Var_11;
    MR_Integer mdb__declarative_edt__Var_12;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_13, mdb__declarative_edt__SearchSpace_4, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__Suspect_7);
    }
    mdb__declarative_edt__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 0)));
    mdb__declarative_edt__Node_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 1));
    mdb__declarative_edt__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 2)));
    mdb__declarative_edt__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 3)));
    mdb__declarative_edt__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 4)));
    mdb__declarative_edt__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 5)));
    return mdb__declarative_edt__Node_6;
  }
}

MR_Word MR_CALL 
mdb__declarative_edt__get_proc_label_for_suspect_3_f_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_9,
  MR_Box mdb__declarative_edt__Store_5,
  MR_Word mdb__declarative_edt__SearchSpace_6,
  MR_Integer mdb__declarative_edt__SuspectId_7)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__HeadVar__4_4;
    MR_Word mdb__declarative_edt__TypeInfo_11_11;
    MR_Box mdb__declarative_edt__Var_8;
    MR_Word mdb__declarative_edt__Suspect_15;
    MR_Word mdb__declarative_edt__Var_16;
    MR_Word mdb__declarative_edt__Var_17;
    MR_Integer mdb__declarative_edt__Var_18;
    MR_Word mdb__declarative_edt__Var_19;
    MR_Integer mdb__declarative_edt__Var_20;
    MR_Box MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mdb__declarative_edt__conv1_HeadVar__4_4;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_9, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_11_11);
    }
    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_11_11, mdb__declarative_edt__SearchSpace_6, mdb__declarative_edt__SuspectId_7, &mdb__declarative_edt__Suspect_15);
    }
    mdb__declarative_edt__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_15, (MR_Integer) 0)));
    mdb__declarative_edt__Var_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_15, (MR_Integer) 1));
    mdb__declarative_edt__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_15, (MR_Integer) 2)));
    mdb__declarative_edt__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_15, (MR_Integer) 3)));
    mdb__declarative_edt__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_15, (MR_Integer) 4)));
    mdb__declarative_edt__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_15, (MR_Integer) 5)));
    mdb__declarative_edt__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_9, (MR_Integer) 0)), (MR_Integer) 18)));
    {
      mdb__declarative_edt__conv1_HeadVar__4_4 = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_9), mdb__declarative_edt__Store_5, mdb__declarative_edt__Var_8);
    }
    mdb__declarative_edt__HeadVar__4_4 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__4_4);
    return mdb__declarative_edt__HeadVar__4_4;
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__non_ignored_descendants_6_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34,
  MR_Box mdb__declarative_edt__Store_1,
  MR_Word mdb__declarative_edt__Oracle_2,
  MR_Word mdb__declarative_edt__HeadVar__3_3,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_4,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_5,
  MR_Word * mdb__declarative_edt__HeadVar__6_6)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mdb__declarative_edt__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_5 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_4;
        mdb__declarative_edt__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mdb__declarative_edt__TypeInfo_36_36;
        MR_Word mdb__declarative_edt__TypeCtorInfo_37_37;
        MR_Integer mdb__declarative_edt__SuspectId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__declarative_edt__SuspectIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__declarative_edt__Suspect_18;
        MR_Word mdb__declarative_edt__Descendants1_20;
        MR_Word mdb__declarative_edt__Descendants2_21;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26_26;
        MR_Word mdb__declarative_edt__Var_24;
        MR_Word mdb__declarative_edt__Var_29;
        MR_Box mdb__declarative_edt__Var_30;
        MR_Integer mdb__declarative_edt__Var_31;
        MR_Word mdb__declarative_edt__Var_32;
        MR_Integer mdb__declarative_edt__Var_33;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_36_36);
        }
        {
          mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_36_36, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_4, mdb__declarative_edt__SuspectId_14, &mdb__declarative_edt__Suspect_18);
        }
        mdb__declarative_edt__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 0)));
        mdb__declarative_edt__Var_30 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 1));
        mdb__declarative_edt__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 2)));
        mdb__declarative_edt__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 3)));
        mdb__declarative_edt__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 4)));
        mdb__declarative_edt__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 5)));
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mdb__declarative_edt__succeeded)
          {
            MR_Word mdb__declarative_edt__Children_19;
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_25_25;

            {
              mdb__declarative_edt__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, mdb__declarative_edt__Store_1, mdb__declarative_edt__Oracle_2, mdb__declarative_edt__SuspectId_14, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_4, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_25_25, &mdb__declarative_edt__Children_19);
            }
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__succeeded = mdb__declarative_edt__non_ignored_descendants_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, mdb__declarative_edt__Store_1, mdb__declarative_edt__Oracle_2, mdb__declarative_edt__Children_19, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_25_25, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_edt__Descendants1_20);
              }
          }
        else
          {
            {
              mdb__declarative_edt__Descendants1_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__declarative_edt__Descendants1_20, 0) = ((MR_Box) (mdb__declarative_edt__SuspectId_14));
              MR_hl_field(MR_mktag(1), mdb__declarative_edt__Descendants1_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26_26 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_4;
            mdb__declarative_edt__succeeded = MR_TRUE;
          }
        if (mdb__declarative_edt__succeeded)
          {
            {
              mdb__declarative_edt__succeeded = mdb__declarative_edt__non_ignored_descendants_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, mdb__declarative_edt__Store_1, mdb__declarative_edt__Oracle_2, mdb__declarative_edt__SuspectIds_15, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26_26, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_5, &mdb__declarative_edt__Descendants2_21);
            }
            if (mdb__declarative_edt__succeeded)
              {
                mdb__declarative_edt__TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                {
                  *mdb__declarative_edt__HeadVar__6_6 = mercury__list__f_43_43_2_f_0(mdb__declarative_edt__TypeCtorInfo_37_37, mdb__declarative_edt__Descendants1_20, mdb__declarative_edt__Descendants2_21);
                }
                mdb__declarative_edt__succeeded = MR_TRUE;
              }
          }
      }
    return mdb__declarative_edt__succeeded;
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__children_6_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42,
  MR_Box mdb__declarative_edt__Store_7,
  MR_Word mdb__declarative_edt__Oracle_8,
  MR_Integer mdb__declarative_edt__SuspectId_9,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_15,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16,
  MR_Word * mdb__declarative_edt__Children_11)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_44_44;
    MR_Word mdb__declarative_edt__Suspect_12;
    MR_Word mdb__declarative_edt__Var_46;
    MR_Box mdb__declarative_edt__Var_49;
    MR_Integer mdb__declarative_edt__Var_45;
    MR_Integer mdb__declarative_edt__Var_47;
    MR_Word mdb__declarative_edt__Var_48;
    MR_Word mdb__declarative_edt__Var_50;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_44_44);
    }
    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_44_44, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_15, mdb__declarative_edt__SuspectId_9, &mdb__declarative_edt__Suspect_12);
    }
    mdb__declarative_edt__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 0)));
    mdb__declarative_edt__Var_49 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 1));
    mdb__declarative_edt__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 2)));
    mdb__declarative_edt__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 3)));
    mdb__declarative_edt__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 4)));
    mdb__declarative_edt__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 5)));
    if ((mdb__declarative_edt__Var_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mdb__declarative_edt__EDTChildren_13;
        MR_Word mdb__declarative_edt__NewStatus_14;
        MR_Word mdb__declarative_edt__Var_19;
        MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42, (MR_Integer) 0)), (MR_Integer) 8)));
        MR_Box mdb__declarative_edt__conv1_EDTChildren_13;
        MR_Word mdb__declarative_edt__Var_37;
        MR_Box mdb__declarative_edt__Var_38;
        MR_Integer mdb__declarative_edt__Var_39;
        MR_Word mdb__declarative_edt__Var_40;
        MR_Integer mdb__declarative_edt__Var_41;

        {
          mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42), mdb__declarative_edt__Store_7, mdb__declarative_edt__Var_49, &mdb__declarative_edt__conv1_EDTChildren_13);
        }
        if (mdb__declarative_edt__succeeded)
          {
            mdb__declarative_edt__EDTChildren_13 = ((MR_Word) mdb__declarative_edt__conv1_EDTChildren_13);
            mdb__declarative_edt__succeeded = MR_TRUE;
          }
        if (mdb__declarative_edt__succeeded)
          {
            mdb__declarative_edt__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 0)));
            mdb__declarative_edt__Var_38 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 1));
            mdb__declarative_edt__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 2)));
            mdb__declarative_edt__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 3)));
            mdb__declarative_edt__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 4)));
            mdb__declarative_edt__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 5)));
            switch (MR_tag((MR_Word) mdb__declarative_edt__Var_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_edt__Var_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    mdb__declarative_edt__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                    break;
                  case (MR_Integer) 1:
                    mdb__declarative_edt__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
                    break;
                  case (MR_Integer) 2:
                    mdb__declarative_edt__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                    break;
                  case (MR_Integer) 3:
                    mdb__declarative_edt__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
                    break;
                  case (MR_Integer) 4:
                    mdb__declarative_edt__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
                    break;
                  case (MR_Integer) 5:
                    mdb__declarative_edt__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
                    break;
                  case (MR_Integer) 6:
                    mdb__declarative_edt__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                    break;
                }
                break;
              case (MR_Integer) 1:
                mdb__declarative_edt__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                break;
            }
            {
              mdb__declarative_edt__add_children_8_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42, mdb__declarative_edt__Store_7, mdb__declarative_edt__Oracle_8, mdb__declarative_edt__EDTChildren_13, mdb__declarative_edt__SuspectId_9, mdb__declarative_edt__NewStatus_14, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_15, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16, mdb__declarative_edt__Children_11);
            }
            mdb__declarative_edt__succeeded = MR_TRUE;
          }
      }
    else
      {
        *mdb__declarative_edt__Children_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_46, (MR_Integer) 0)));
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_15;
        mdb__declarative_edt__succeeded = MR_TRUE;
      }
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt__add_children_8_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3)
{
  {
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
    MR_Word mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_17;

    {
      mdb__declarative_edt__adjust_suspect_status_from_oracle_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4)), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_17);
    }
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_17));
  }
}

static void MR_CALL 
mdb__declarative_edt__add_children_8_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88,
  MR_Box mdb__declarative_edt__Store_9,
  MR_Word mdb__declarative_edt__Oracle_10,
  MR_Word mdb__declarative_edt__EDTChildren_11,
  MR_Integer mdb__declarative_edt__SuspectId_12,
  MR_Word mdb__declarative_edt__Status_13,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_25,
  MR_Word * mdb__declarative_edt__Children_15)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_90_90;
    MR_Word mdb__declarative_edt__TypeInfo_91_91;
    MR_Word mdb__declarative_edt__TypeInfo_92_92;
    MR_Word mdb__declarative_edt__TypeInfo_97_97;
    MR_Word mdb__declarative_edt__TypeInfo_99_99;
    MR_Word mdb__declarative_edt__Counter0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, (MR_Integer) 2)));
    MR_Word mdb__declarative_edt__Suspect0_17;
    MR_Integer mdb__declarative_edt__Depth_18;
    MR_Word mdb__declarative_edt__Counter_19;
    MR_Word mdb__declarative_edt__Suspect_20;
    MR_Word mdb__declarative_edt__SuspectWithChildren_21;
    MR_Integer mdb__declarative_edt__Var_26;
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28;
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29;
    MR_Word mdb__declarative_edt__Var_30;
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31_31;
    MR_Word mdb__declarative_edt__Var_32;
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_33_33;
    MR_Word mdb__declarative_edt__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, (MR_Integer) 0)));
    MR_Word mdb__declarative_edt__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, (MR_Integer) 1)));
    MR_Word mdb__declarative_edt__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, (MR_Integer) 3)));
    MR_Word mdb__declarative_edt__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, (MR_Integer) 4)));
    MR_Word mdb__declarative_edt__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, (MR_Integer) 5)));
    MR_Word mdb__declarative_edt__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, (MR_Integer) 6)));
    MR_Word mdb__declarative_edt__Var_49;
    MR_Box mdb__declarative_edt__Var_50;
    MR_Word mdb__declarative_edt__Var_51;
    MR_Word mdb__declarative_edt__Var_52;
    MR_Integer mdb__declarative_edt__Var_53;
    MR_Word mdb__declarative_edt__Var_54;
    MR_Word mdb__declarative_edt__Var_55;
    MR_Word mdb__declarative_edt__Var_57;
    MR_Word mdb__declarative_edt__Var_58;
    MR_Word mdb__declarative_edt__Var_59;
    MR_Word mdb__declarative_edt__Var_60;
    MR_Word mdb__declarative_edt__Var_56;
    MR_Word mdb__declarative_edt__Var_61;
    MR_Box mdb__declarative_edt__Var_62;
    MR_Word mdb__declarative_edt__Var_63;
    MR_Integer mdb__declarative_edt__Var_64;
    MR_Integer mdb__declarative_edt__Var_66;
    MR_Word mdb__declarative_edt__Var_65;
    MR_Box mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_33_33;
    MR_Box mdb__declarative_edt__Var_68;
    MR_Word mdb__declarative_edt__Var_34;
    MR_Word mdb__declarative_edt__Var_67;
    MR_Integer mdb__declarative_edt__Var_69;
    MR_Word mdb__declarative_edt__Var_70;
    MR_Integer mdb__declarative_edt__Var_71;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_90_90);
    }
    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_90_90, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, mdb__declarative_edt__SuspectId_12, &mdb__declarative_edt__Suspect0_17);
    }
    mdb__declarative_edt__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect0_17, (MR_Integer) 0)));
    mdb__declarative_edt__Var_50 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect0_17, (MR_Integer) 1));
    mdb__declarative_edt__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect0_17, (MR_Integer) 2)));
    mdb__declarative_edt__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect0_17, (MR_Integer) 3)));
    mdb__declarative_edt__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect0_17, (MR_Integer) 4)));
    mdb__declarative_edt__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect0_17, (MR_Integer) 5)));
    mdb__declarative_edt__Depth_18 = (mdb__declarative_edt__Var_26 + (MR_Integer) 1);
    {
      mdb__declarative_edt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88, mdb__declarative_edt__Store_9, mdb__declarative_edt__EDTChildren_11, mdb__declarative_edt__SuspectId_12, mdb__declarative_edt__Status_13, mdb__declarative_edt__Depth_18, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, mdb__declarative_edt__Counter0_16, &mdb__declarative_edt__Counter_19, mdb__declarative_edt__Children_15);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_91_91);
    }
    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_91_91, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, mdb__declarative_edt__SuspectId_12, &mdb__declarative_edt__Suspect_20);
    }
    mdb__declarative_edt__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 0)));
    mdb__declarative_edt__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 1)));
    mdb__declarative_edt__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 2)));
    mdb__declarative_edt__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 3)));
    mdb__declarative_edt__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 4)));
    mdb__declarative_edt__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 5)));
    mdb__declarative_edt__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 6)));
    {
      mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, 0) = ((MR_Box) (mdb__declarative_edt__Var_54));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, 1) = ((MR_Box) (mdb__declarative_edt__Var_55));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, 2) = ((MR_Box) (mdb__declarative_edt__Counter_19));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, 3) = ((MR_Box) (mdb__declarative_edt__Var_57));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, 4) = ((MR_Box) (mdb__declarative_edt__Var_58));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, 5) = ((MR_Box) (mdb__declarative_edt__Var_59));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, 6) = ((MR_Box) (mdb__declarative_edt__Var_60));
    }
    {
      mdb__declarative_edt__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_30, 0) = ((MR_Box) (*mdb__declarative_edt__Children_15));
    }
    mdb__declarative_edt__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 0)));
    mdb__declarative_edt__Var_62 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 1));
    mdb__declarative_edt__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 2)));
    mdb__declarative_edt__Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 3)));
    mdb__declarative_edt__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 4)));
    mdb__declarative_edt__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 5)));
    {
      mdb__declarative_edt__SuspectWithChildren_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, 0) = ((MR_Box) (mdb__declarative_edt__Var_61));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, 1) = mdb__declarative_edt__Var_62;
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, 2) = ((MR_Box) (mdb__declarative_edt__Var_63));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, 3) = ((MR_Box) (mdb__declarative_edt__Var_64));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, 4) = ((MR_Box) (mdb__declarative_edt__Var_30));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, 5) = ((MR_Box) (mdb__declarative_edt__Var_66));
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_92_92);
    }
    {
      mdb__declarative_edt__set_suspect_4_p_0(mdb__declarative_edt__TypeInfo_92_92, mdb__declarative_edt__SuspectId_12, mdb__declarative_edt__SuspectWithChildren_21, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31_31);
    }
    {
      mdb__declarative_edt__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_32, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_32, 1) = ((MR_Box) (mdb__declarative_edt__add_children_8_p_0_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_32, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_32, 4) = mdb__declarative_edt__Store_9;
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_32, 5) = ((MR_Box) (mdb__declarative_edt__Oracle_10));
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_97_97);
    }
    {
      mdb__declarative_edt__TypeInfo_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_99_99, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_99_99, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_97_97));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__TypeInfo_99_99, (MR_Word) mdb__declarative_edt__Var_32, *mdb__declarative_edt__Children_15, ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31_31)), &mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_33_33);
    }
    mdb__declarative_edt__STATE_VARIABLE_SearchSpace_33_33 = ((MR_Word) mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_33_33);
    mdb__declarative_edt__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 0)));
    mdb__declarative_edt__Var_68 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 1));
    mdb__declarative_edt__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 2)));
    mdb__declarative_edt__Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 3)));
    mdb__declarative_edt__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 4)));
    mdb__declarative_edt__Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 5)));
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (mdb__declarative_edt__succeeded)
      {
        MR_Word mdb__declarative_edt__TypeInfo_100_100;
        MR_Word mdb__declarative_edt__TypeInfo_101_101;
        MR_Integer mdb__declarative_edt__Weight_22;
        MR_Word mdb__declarative_edt__Var_38;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_39_39;
        MR_Integer mdb__declarative_edt__Var_40;
        MR_Integer mdb__declarative_edt__Var_42;
        MR_Integer mdb__declarative_edt__Var_23;
        MR_Word mdb__declarative_edt__Var_77;
        MR_Box mdb__declarative_edt__Var_78;
        MR_Word mdb__declarative_edt__Var_79;
        MR_Integer mdb__declarative_edt__Var_80;
        MR_Word mdb__declarative_edt__Var_81;
        MR_Integer mdb__declarative_edt__Var_82;
        MR_Word mdb__declarative_edt__Var_83;
        MR_Box mdb__declarative_edt__Var_84;
        MR_Word mdb__declarative_edt__Var_85;
        MR_Integer mdb__declarative_edt__Var_86;
        MR_Word mdb__declarative_edt__Var_87;

        {
          mdb__declarative_edt__calc_suspect_weight_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88, mdb__declarative_edt__Store_9, mdb__declarative_edt__Var_68, mdb__declarative_edt__Var_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_33_33, &mdb__declarative_edt__Weight_22, &mdb__declarative_edt__Var_23);
        }
        mdb__declarative_edt__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, (MR_Integer) 0)));
        mdb__declarative_edt__Var_78 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, (MR_Integer) 1));
        mdb__declarative_edt__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, (MR_Integer) 2)));
        mdb__declarative_edt__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, (MR_Integer) 3)));
        mdb__declarative_edt__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, (MR_Integer) 4)));
        mdb__declarative_edt__Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, (MR_Integer) 5)));
        {
          mdb__declarative_edt__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_38, 0) = ((MR_Box) (mdb__declarative_edt__Var_77));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_38, 1) = mdb__declarative_edt__Var_78;
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_38, 2) = ((MR_Box) (mdb__declarative_edt__Var_79));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_38, 3) = ((MR_Box) (mdb__declarative_edt__Var_80));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_38, 4) = ((MR_Box) (mdb__declarative_edt__Var_81));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_38, 5) = ((MR_Box) (mdb__declarative_edt__Weight_22));
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_100_100);
        }
        {
          mdb__declarative_edt__set_suspect_4_p_0(mdb__declarative_edt__TypeInfo_100_100, mdb__declarative_edt__SuspectId_12, mdb__declarative_edt__Var_38, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_33_33, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_39_39);
        }
        mdb__declarative_edt__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 0)));
        mdb__declarative_edt__Var_84 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 1));
        mdb__declarative_edt__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 2)));
        mdb__declarative_edt__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 3)));
        mdb__declarative_edt__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 4)));
        mdb__declarative_edt__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 5)));
        mdb__declarative_edt__Var_40 = (mdb__declarative_edt__Weight_22 - mdb__declarative_edt__Var_42);
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_101_101);
        }
        {
          mdb__declarative_edt__add_weight_to_ancestors_4_p_0(mdb__declarative_edt__TypeInfo_101_101, mdb__declarative_edt__SuspectId_12, mdb__declarative_edt__Var_40, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_39_39, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_25);
        }
      }
    else
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_33_33;
  }
}

static void MR_CALL 
mdb__declarative_edt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_65,
  MR_Box mdb__declarative_edt__Store_1,
  MR_Word mdb__declarative_edt__HeadVar__3_3,
  MR_Integer mdb__declarative_edt__ParentId_4,
  MR_Word mdb__declarative_edt__Status_5,
  MR_Integer mdb__declarative_edt__Depth_6,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_8,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_Counter_0_9,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_Counter_10,
  MR_Word * mdb__declarative_edt__HeadVar__11_11)
{
  {
    MR_bool mdb__declarative_edt__succeeded;

    if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mdb__declarative_edt__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mdb__declarative_edt__STATE_VARIABLE_Counter_10 = mdb__declarative_edt__STATE_VARIABLE_Counter_0_9;
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_8 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7;
      }
    else
      {
        MR_Word mdb__declarative_edt__TypeInfo_68_68;
        MR_Word mdb__declarative_edt__TypeInfo_70_70;
        MR_Word mdb__declarative_edt__TypeInfo_71_71;
        MR_Box mdb__declarative_edt__EDTChild_25 = (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0));
        MR_Word mdb__declarative_edt__EDTChildren_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer mdb__declarative_edt__NextId_33;
        MR_Integer mdb__declarative_edt__Weight_34;
        MR_Integer mdb__declarative_edt__ExcessWeight_35;
        MR_Word mdb__declarative_edt__SuspectStore_36;
        MR_Word mdb__declarative_edt__OtherChildren_37;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_Counter_42_42;
        MR_Word mdb__declarative_edt__Var_44;
        MR_Word mdb__declarative_edt__Var_45;
        MR_Word mdb__declarative_edt__Var_46;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48;
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49;
        MR_Word mdb__declarative_edt__Var_52;
        MR_Word mdb__declarative_edt__Var_53;
        MR_Word mdb__declarative_edt__Var_54;
        MR_Word mdb__declarative_edt__Var_55;
        MR_Word mdb__declarative_edt__Var_56;
        MR_Word mdb__declarative_edt__Var_57;
        MR_Word mdb__declarative_edt__Var_58;
        MR_Word mdb__declarative_edt__Var_59;
        MR_Word mdb__declarative_edt__Var_60;
        MR_Word mdb__declarative_edt__Var_61;
        MR_Word mdb__declarative_edt__Var_63;
        MR_Word mdb__declarative_edt__Var_64;
        MR_Word mdb__declarative_edt__Var_62;

        {
          mercury__counter__allocate_3_p_0(&mdb__declarative_edt__NextId_33, mdb__declarative_edt__STATE_VARIABLE_Counter_0_9, &mdb__declarative_edt__STATE_VARIABLE_Counter_42_42);
        }
        {
          mdb__declarative_edt__calc_suspect_weight_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_65, mdb__declarative_edt__Store_1, mdb__declarative_edt__EDTChild_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_edt__Status_5, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, &mdb__declarative_edt__Weight_34, &mdb__declarative_edt__ExcessWeight_35);
        }
        {
          mdb__declarative_edt__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_46, 0) = ((MR_Box) (mdb__declarative_edt__ParentId_4));
        }
        {
          mdb__declarative_edt__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_44, 0) = ((MR_Box) (mdb__declarative_edt__Var_46));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_44, 1) = mdb__declarative_edt__EDTChild_25;
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_44, 2) = ((MR_Box) (mdb__declarative_edt__Status_5));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_44, 3) = ((MR_Box) (mdb__declarative_edt__Depth_6));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_44, 5) = ((MR_Box) (mdb__declarative_edt__Weight_34));
        }
        mdb__declarative_edt__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 0)));
        mdb__declarative_edt__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 1)));
        mdb__declarative_edt__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 2)));
        mdb__declarative_edt__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 3)));
        mdb__declarative_edt__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 4)));
        mdb__declarative_edt__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 5)));
        mdb__declarative_edt__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 6)));
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_65, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_68_68);
        }
        {
          mdb__declarative_edt__TypeInfo_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_70_70, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_70_70, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_68_68));
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_70_70, mdb__declarative_edt__NextId_33, ((MR_Box) (mdb__declarative_edt__Var_44)), mdb__declarative_edt__Var_45, &mdb__declarative_edt__SuspectStore_36);
        }
        mdb__declarative_edt__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 0)));
        mdb__declarative_edt__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 1)));
        mdb__declarative_edt__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 2)));
        mdb__declarative_edt__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 3)));
        mdb__declarative_edt__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 4)));
        mdb__declarative_edt__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 5)));
        mdb__declarative_edt__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 6)));
        {
          mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48, 0) = ((MR_Box) (mdb__declarative_edt__Var_58));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48, 1) = ((MR_Box) (mdb__declarative_edt__Var_59));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48, 2) = ((MR_Box) (mdb__declarative_edt__Var_60));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48, 3) = ((MR_Box) (mdb__declarative_edt__Var_61));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48, 4) = ((MR_Box) (mdb__declarative_edt__SuspectStore_36));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48, 5) = ((MR_Box) (mdb__declarative_edt__Var_63));
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48, 6) = ((MR_Box) (mdb__declarative_edt__Var_64));
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_65, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_71_71);
        }
        {
          mdb__declarative_edt__add_weight_to_ancestors_4_p_0(mdb__declarative_edt__TypeInfo_71_71, mdb__declarative_edt__NextId_33, mdb__declarative_edt__ExcessWeight_35, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49);
        }
        {
          mdb__declarative_edt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_65, mdb__declarative_edt__Store_1, mdb__declarative_edt__EDTChildren_26, mdb__declarative_edt__ParentId_4, mdb__declarative_edt__Status_5, mdb__declarative_edt__Depth_6, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_8, mdb__declarative_edt__STATE_VARIABLE_Counter_42_42, mdb__declarative_edt__STATE_VARIABLE_Counter_10, &mdb__declarative_edt__OtherChildren_37);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mdb__declarative_edt__HeadVar__11_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_edt__NextId_33));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_edt__OtherChildren_37));
        }
      }
  }
}

static void MR_CALL 
mdb__declarative_edt__add_weight_to_ancestors_4_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_42,
  MR_Integer mdb__declarative_edt__SuspectId_5,
  MR_Integer mdb__declarative_edt__Weight_6,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__Weight_6 == (MR_Integer) 0);
        MR_Integer mdb__declarative_edt__ParentId_9;
        MR_Word mdb__declarative_edt__Suspect_8;
        MR_Word mdb__declarative_edt__Var_14;
        MR_Box mdb__declarative_edt__Var_21;
        MR_Word mdb__declarative_edt__Var_22;
        MR_Integer mdb__declarative_edt__Var_23;
        MR_Word mdb__declarative_edt__Var_24;
        MR_Integer mdb__declarative_edt__Var_25;

        mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
        if (mdb__declarative_edt__succeeded)
          {
            {
              mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_42, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__Suspect_8);
            }
            mdb__declarative_edt__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
            mdb__declarative_edt__Var_21 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
            mdb__declarative_edt__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
            mdb__declarative_edt__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
            mdb__declarative_edt__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
            mdb__declarative_edt__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Var_14)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_edt__succeeded)
              mdb__declarative_edt__ParentId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_14, (MR_Integer) 0)));
          }
        if (mdb__declarative_edt__succeeded)
          {
            MR_Word mdb__declarative_edt__TypeInfo_29_66;
            MR_Word mdb__declarative_edt__Parent_10;
            MR_Word mdb__declarative_edt__Var_15;
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;
            MR_Integer mdb__declarative_edt__Var_17;
            MR_Integer mdb__declarative_edt__Var_18;
            MR_Word mdb__declarative_edt__Var_19;
            MR_Word mdb__declarative_edt__Var_26;
            MR_Box mdb__declarative_edt__Var_27;
            MR_Word mdb__declarative_edt__Var_28;
            MR_Integer mdb__declarative_edt__Var_29;
            MR_Word mdb__declarative_edt__Var_30;
            MR_Word mdb__declarative_edt__Store0_48;
            MR_Word mdb__declarative_edt__Store_49;
            MR_Word mdb__declarative_edt__Var_51;
            MR_Word mdb__declarative_edt__Var_52;
            MR_Word mdb__declarative_edt__Var_53;
            MR_Word mdb__declarative_edt__Var_54;
            MR_Word mdb__declarative_edt__Var_55;
            MR_Word mdb__declarative_edt__Var_56;
            MR_Word mdb__declarative_edt__conv0_Store_49;
            MR_Word mdb__declarative_edt__Var_57;
            MR_Word mdb__declarative_edt__Var_58;
            MR_Word mdb__declarative_edt__Var_59;
            MR_Word mdb__declarative_edt__Var_60;
            MR_Word mdb__declarative_edt__Var_62;
            MR_Word mdb__declarative_edt__Var_63;
            MR_Word mdb__declarative_edt__Var_61;
            MR_Word mdb__declarative_edt__Var_37;
            MR_Box mdb__declarative_edt__Var_38;
            MR_Integer mdb__declarative_edt__Var_39;
            MR_Word mdb__declarative_edt__Var_40;
            MR_Integer mdb__declarative_edt__Var_41;

            {
              mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_42, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, mdb__declarative_edt__ParentId_9, &mdb__declarative_edt__Parent_10);
            }
            mdb__declarative_edt__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 0)));
            mdb__declarative_edt__Var_27 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 1));
            mdb__declarative_edt__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 2)));
            mdb__declarative_edt__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 3)));
            mdb__declarative_edt__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 4)));
            mdb__declarative_edt__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 5)));
            mdb__declarative_edt__Var_17 = (mdb__declarative_edt__Var_18 + mdb__declarative_edt__Weight_6);
            {
              mdb__declarative_edt__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_15, 0) = ((MR_Box) (mdb__declarative_edt__Var_26));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_15, 1) = mdb__declarative_edt__Var_27;
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_15, 2) = ((MR_Box) (mdb__declarative_edt__Var_28));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_15, 3) = ((MR_Box) (mdb__declarative_edt__Var_29));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_15, 4) = ((MR_Box) (mdb__declarative_edt__Var_30));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_15, 5) = ((MR_Box) (mdb__declarative_edt__Var_17));
            }
            mdb__declarative_edt__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 0)));
            mdb__declarative_edt__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 1)));
            mdb__declarative_edt__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 2)));
            mdb__declarative_edt__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 3)));
            mdb__declarative_edt__Store0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 4)));
            mdb__declarative_edt__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 5)));
            mdb__declarative_edt__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 6)));
            {
              mdb__declarative_edt__TypeInfo_29_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_66, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_66, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_42));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_66, mdb__declarative_edt__ParentId_9, ((MR_Box) (mdb__declarative_edt__Var_15)), (MR_Word) mdb__declarative_edt__Store0_48, &mdb__declarative_edt__conv0_Store_49);
            }
            mdb__declarative_edt__Store_49 = (MR_Word) mdb__declarative_edt__conv0_Store_49;
            mdb__declarative_edt__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 0)));
            mdb__declarative_edt__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 1)));
            mdb__declarative_edt__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 2)));
            mdb__declarative_edt__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 3)));
            mdb__declarative_edt__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 4)));
            mdb__declarative_edt__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 5)));
            mdb__declarative_edt__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 6)));
            {
              mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16, 0) = ((MR_Box) (mdb__declarative_edt__Var_57));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16, 1) = ((MR_Box) (mdb__declarative_edt__Var_58));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16, 2) = ((MR_Box) (mdb__declarative_edt__Var_59));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16, 3) = ((MR_Box) (mdb__declarative_edt__Var_60));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16, 4) = ((MR_Box) (mdb__declarative_edt__Store_49));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16, 5) = ((MR_Box) (mdb__declarative_edt__Var_62));
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16, 6) = ((MR_Box) (mdb__declarative_edt__Var_63));
            }
            mdb__declarative_edt__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 0)));
            mdb__declarative_edt__Var_38 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 1));
            mdb__declarative_edt__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 2)));
            mdb__declarative_edt__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 3)));
            mdb__declarative_edt__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 4)));
            mdb__declarative_edt__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 5)));
            switch (MR_tag((MR_Word) mdb__declarative_edt__Var_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_edt__Var_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mdb__declarative_edt__next_value_of_SuspectId_5 = mdb__declarative_edt__ParentId_9;
                        MR_Word mdb__declarative_edt__next_value_of_STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;

                        mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__next_value_of_STATE_VARIABLE_SearchSpace_0_12;
                        mdb__declarative_edt__SuspectId_5 = mdb__declarative_edt__next_value_of_SuspectId_5;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mdb__declarative_edt__next_value_of_SuspectId_5 = mdb__declarative_edt__ParentId_9;
                        MR_Word mdb__declarative_edt__next_value_of_STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;

                        mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__next_value_of_STATE_VARIABLE_SearchSpace_0_12;
                        mdb__declarative_edt__SuspectId_5 = mdb__declarative_edt__next_value_of_SuspectId_5;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;
                    break;
                  case (MR_Integer) 3:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mdb__declarative_edt__next_value_of_SuspectId_5 = mdb__declarative_edt__ParentId_9;
                        MR_Word mdb__declarative_edt__next_value_of_STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;

                        mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__next_value_of_STATE_VARIABLE_SearchSpace_0_12;
                        mdb__declarative_edt__SuspectId_5 = mdb__declarative_edt__next_value_of_SuspectId_5;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mdb__declarative_edt__next_value_of_SuspectId_5 = mdb__declarative_edt__ParentId_9;
                        MR_Word mdb__declarative_edt__next_value_of_STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;

                        mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__next_value_of_STATE_VARIABLE_SearchSpace_0_12;
                        mdb__declarative_edt__SuspectId_5 = mdb__declarative_edt__next_value_of_SuspectId_5;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 5:
                    *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;
                    break;
                  case (MR_Integer) 6:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mdb__declarative_edt__next_value_of_SuspectId_5 = mdb__declarative_edt__ParentId_9;
                        MR_Word mdb__declarative_edt__next_value_of_STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;

                        mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__next_value_of_STATE_VARIABLE_SearchSpace_0_12;
                        mdb__declarative_edt__SuspectId_5 = mdb__declarative_edt__next_value_of_SuspectId_5;
                      }
                      continue;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Integer mdb__declarative_edt__next_value_of_SuspectId_5 = mdb__declarative_edt__ParentId_9;
                    MR_Word mdb__declarative_edt__next_value_of_STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;

                    mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__next_value_of_STATE_VARIABLE_SearchSpace_0_12;
                    mdb__declarative_edt__SuspectId_5 = mdb__declarative_edt__next_value_of_SuspectId_5;
                  }
                  continue;
                }
                break;
            }
          }
        else
          *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12;
      }
      break;
    }
}

static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_4(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3)
{
  {
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
    MR_Integer mdb__declarative_edt__conv12_HeadVar__4_76;

    {
      mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1296__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Integer) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv12_HeadVar__4_76);
    }
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv12_HeadVar__4_76));
  }
}

static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_3(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box mdb__declarative_edt__wrapper_arg_2,
  MR_Box * mdb__declarative_edt__wrapper_arg_3,
  MR_Box mdb__declarative_edt__wrapper_arg_4,
  MR_Box * mdb__declarative_edt__wrapper_arg_5)
{
  {
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
    MR_Integer mdb__declarative_edt__conv9_HeadVar__5_5;
    MR_Integer mdb__declarative_edt__conv8_HeadVar__7_7;

    {
      mdb__declarative_edt__add_original_weight_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5)), mdb__declarative_edt__wrapper_arg_1, ((MR_Integer) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv9_HeadVar__5_5, ((MR_Integer) mdb__declarative_edt__wrapper_arg_4), &mdb__declarative_edt__conv8_HeadVar__7_7);
    }
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv9_HeadVar__5_5));
    *mdb__declarative_edt__wrapper_arg_5 = ((MR_Box) (mdb__declarative_edt__conv8_HeadVar__7_7));
  }
}

static MR_Box MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_2(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1)
{
  {
    MR_Box mdb__declarative_edt__wrapper_arg_2;
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;

    {
      mdb__declarative_edt__wrapper_arg_2 = mdb__declarative_edt__IntroducedFrom__func__calc_suspect_weight__1291__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_edt__wrapper_arg_1));
    }
    return mdb__declarative_edt__wrapper_arg_2;
  }
}

static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_1(
  MR_Box mdb__declarative_edt__closure_arg,
  MR_Box mdb__declarative_edt__wrapper_arg_1,
  MR_Box * mdb__declarative_edt__wrapper_arg_2)
{
  {
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
    MR_Word mdb__declarative_edt__conv6_HeadVar__4_59;

    {
      mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1289__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), &mdb__declarative_edt__conv6_HeadVar__4_59);
    }
    *mdb__declarative_edt__wrapper_arg_2 = ((MR_Box) (mdb__declarative_edt__conv6_HeadVar__4_59));
  }
}

static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57,
  MR_Box mdb__declarative_edt__Store_8,
  MR_Box mdb__declarative_edt__Node_9,
  MR_Word mdb__declarative_edt__MaybeChildren_10,
  MR_Word mdb__declarative_edt__Status_11,
  MR_Word mdb__declarative_edt__SearchSpace_12,
  MR_Integer * mdb__declarative_edt__Weight_13,
  MR_Integer * mdb__declarative_edt__ExcessWeight_14)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_12, (MR_Integer) 6)));
    MR_Word mdb__declarative_edt__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_12, (MR_Integer) 5)));
    MR_Word mdb__declarative_edt__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_12, (MR_Integer) 4)));
    MR_Word mdb__declarative_edt__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_12, (MR_Integer) 3)));
    MR_Word mdb__declarative_edt__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_12, (MR_Integer) 2)));
    MR_Word mdb__declarative_edt__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_12, (MR_Integer) 1)));
    MR_Word mdb__declarative_edt__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_12, (MR_Integer) 0)));

    if ((mdb__declarative_edt__Var_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mdb__declarative_edt__Weight_13 = (MR_Integer) 0;
        *mdb__declarative_edt__ExcessWeight_14 = (MR_Integer) 0;
      }
    else
      {
        MR_Word mdb__declarative_edt__Weighting_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_79, (MR_Integer) 0)));

        if ((mdb__declarative_edt__Status_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
          mdb__declarative_edt__succeeded = MR_TRUE;
        else
        if ((mdb__declarative_edt__Status_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
          mdb__declarative_edt__succeeded = MR_TRUE;
        else
          mdb__declarative_edt__succeeded = MR_FALSE;
        if (mdb__declarative_edt__succeeded)
          {
            *mdb__declarative_edt__Weight_13 = (MR_Integer) 0;
            *mdb__declarative_edt__ExcessWeight_14 = (MR_Integer) 0;
          }
        else
          {
            MR_Integer mdb__declarative_edt__OriginalWeight_16;

            switch (mdb__declarative_edt__Weighting_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 0)), (MR_Integer) 15)));
                  MR_Box mdb__declarative_edt__conv2_OriginalWeight_16;
                  MR_Box mdb__declarative_edt__conv1_ExcessWeight_14;

                  {
                    mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57), mdb__declarative_edt__Store_8, mdb__declarative_edt__Node_9, &mdb__declarative_edt__conv2_OriginalWeight_16, &mdb__declarative_edt__conv1_ExcessWeight_14);
                  }
                  mdb__declarative_edt__OriginalWeight_16 = ((MR_Integer) mdb__declarative_edt__conv2_OriginalWeight_16);
                  *mdb__declarative_edt__ExcessWeight_14 = ((MR_Integer) mdb__declarative_edt__conv1_ExcessWeight_14);
                }
                break;
              case (MR_Integer) 1:
                {
                  void MR_CALL (* mdb__declarative_edt__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 0)), (MR_Integer) 16)));
                  MR_Box mdb__declarative_edt__conv5_OriginalWeight_16;
                  MR_Box mdb__declarative_edt__conv4_ExcessWeight_14;

                  {
                    mdb__declarative_edt__func_3(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57), mdb__declarative_edt__Store_8, mdb__declarative_edt__Node_9, &mdb__declarative_edt__conv5_OriginalWeight_16, &mdb__declarative_edt__conv4_ExcessWeight_14);
                  }
                  mdb__declarative_edt__OriginalWeight_16 = ((MR_Integer) mdb__declarative_edt__conv5_OriginalWeight_16);
                  *mdb__declarative_edt__ExcessWeight_14 = ((MR_Integer) mdb__declarative_edt__conv4_ExcessWeight_14);
                }
                break;
            }
            if ((mdb__declarative_edt__MaybeChildren_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *mdb__declarative_edt__Weight_13 = mdb__declarative_edt__OriginalWeight_16;
            else
              {
                MR_Word mdb__declarative_edt__TypeCtorInfo_62_62;
                MR_Word mdb__declarative_edt__TypeInfo_64_64;
                MR_Word mdb__declarative_edt__TypeInfo_66_66;
                MR_Word mdb__declarative_edt__TypeInfo_67_67;
                MR_Word mdb__declarative_edt__TypeInfo_73_73;
                MR_Word mdb__declarative_edt__Children_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__MaybeChildren_10, (MR_Integer) 0)));
                MR_Word mdb__declarative_edt__ChildrenSuspects_18;
                MR_Word mdb__declarative_edt__ChildrenNodes_19;
                MR_Integer mdb__declarative_edt__ChildrenOriginalWeight_22;
                MR_Integer mdb__declarative_edt__ChildrenExcess_23;
                MR_Integer mdb__declarative_edt__ChildrenWeight_24;
                MR_Word mdb__declarative_edt__Var_28;
                MR_Word mdb__declarative_edt__Var_29;
                MR_Word mdb__declarative_edt__Var_32;
                MR_Word mdb__declarative_edt__Var_35;
                MR_Word mdb__declarative_edt__conv7_ChildrenSuspects_18;
                MR_Box mdb__declarative_edt__conv11_ChildrenOriginalWeight_22;
                MR_Box mdb__declarative_edt__conv10_ChildrenExcess_23;
                MR_Box mdb__declarative_edt__conv13_ChildrenWeight_24;

                {
                  mdb__declarative_edt__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 1) = ((MR_Box) (mdb__declarative_edt__calc_suspect_weight_7_p_0_1));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_28, 4) = ((MR_Box) (mdb__declarative_edt__SearchSpace_12));
                }
                mdb__declarative_edt__TypeCtorInfo_62_62 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                {
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_64_64);
                }
                {
                  mdb__declarative_edt__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_66_66, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_66_66, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_64_64));
                }
                {
                  mercury__list__map_3_p_0(mdb__declarative_edt__TypeCtorInfo_62_62, mdb__declarative_edt__TypeInfo_66_66, (MR_Word) mdb__declarative_edt__Var_28, mdb__declarative_edt__Children_17, &mdb__declarative_edt__conv7_ChildrenSuspects_18);
                }
                mdb__declarative_edt__ChildrenSuspects_18 = (MR_Word) mdb__declarative_edt__conv7_ChildrenSuspects_18;
                {
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_67_67);
                }
                {
                  mdb__declarative_edt__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_29, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_6[0]));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_29, 1) = ((MR_Box) (mdb__declarative_edt__calc_suspect_weight_7_p_0_2));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_29, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57));
                }
                {
                  mdb__declarative_edt__ChildrenNodes_19 = mercury__list__map_2_f_0(mdb__declarative_edt__TypeInfo_66_66, mdb__declarative_edt__TypeInfo_67_67, mdb__declarative_edt__Var_29, mdb__declarative_edt__ChildrenSuspects_18);
                }
                {
                  mdb__declarative_edt__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_32, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_7[0]));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_32, 1) = ((MR_Box) (mdb__declarative_edt__calc_suspect_weight_7_p_0_3));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_32, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_32, 4) = ((MR_Box) (mdb__declarative_edt__Weighting_15));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_32, 5) = mdb__declarative_edt__Store_8;
                }
                {
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_73_73);
                }
                {
                  mercury__list__foldl2_6_p_0(mdb__declarative_edt__TypeInfo_73_73, mdb__declarative_edt__TypeCtorInfo_62_62, mdb__declarative_edt__TypeCtorInfo_62_62, mdb__declarative_edt__Var_32, mdb__declarative_edt__ChildrenNodes_19, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_edt__conv11_ChildrenOriginalWeight_22, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_edt__conv10_ChildrenExcess_23);
                }
                mdb__declarative_edt__ChildrenOriginalWeight_22 = ((MR_Integer) mdb__declarative_edt__conv11_ChildrenOriginalWeight_22);
                mdb__declarative_edt__ChildrenExcess_23 = ((MR_Integer) mdb__declarative_edt__conv10_ChildrenExcess_23);
                {
                  mdb__declarative_edt__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_35, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_5[1]));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_35, 1) = ((MR_Box) (mdb__declarative_edt__calc_suspect_weight_7_p_0_4));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__Var_35, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57));
                }
                {
                  mercury__list__foldl_4_p_0(mdb__declarative_edt__TypeInfo_66_66, mdb__declarative_edt__TypeCtorInfo_62_62, mdb__declarative_edt__Var_35, mdb__declarative_edt__ChildrenSuspects_18, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_edt__conv13_ChildrenWeight_24);
                }
                mdb__declarative_edt__ChildrenWeight_24 = ((MR_Integer) mdb__declarative_edt__conv13_ChildrenWeight_24);
                switch (MR_tag((MR_Word) mdb__declarative_edt__Status_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdb__declarative_edt__Status_11)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_edt__Weight_13 = (mdb__declarative_edt__ChildrenWeight_24 + mdb__declarative_edt__ChildrenExcess_23);
                        break;
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                      case (MR_Integer) 6:
                        {
                          MR_Integer mdb__declarative_edt__Var_37;
                          MR_Integer mdb__declarative_edt__Var_38 = (mdb__declarative_edt__OriginalWeight_16 - mdb__declarative_edt__ChildrenOriginalWeight_22);

                          mdb__declarative_edt__Var_37 = (mdb__declarative_edt__Var_38 + mdb__declarative_edt__ChildrenWeight_24);
                          *mdb__declarative_edt__Weight_13 = (mdb__declarative_edt__Var_37 + mdb__declarative_edt__ChildrenExcess_23);
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer mdb__declarative_edt__Var_37;
                      MR_Integer mdb__declarative_edt__Var_38 = (mdb__declarative_edt__OriginalWeight_16 - mdb__declarative_edt__ChildrenOriginalWeight_22);

                      mdb__declarative_edt__Var_37 = (mdb__declarative_edt__Var_38 + mdb__declarative_edt__ChildrenWeight_24);
                      *mdb__declarative_edt__Weight_13 = (mdb__declarative_edt__Var_37 + mdb__declarative_edt__ChildrenExcess_23);
                    }
                    break;
                }
              }
          }
      }
  }
}

static void MR_CALL 
mdb__declarative_edt__set_suspect_4_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_26,
  MR_Integer mdb__declarative_edt__SuspectId_5,
  MR_Word mdb__declarative_edt__Suspect_6,
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10,
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_29_29;
    MR_Word mdb__declarative_edt__Store0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 4)));
    MR_Word mdb__declarative_edt__Store_9;
    MR_Word mdb__declarative_edt__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 0)));
    MR_Word mdb__declarative_edt__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 1)));
    MR_Word mdb__declarative_edt__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 2)));
    MR_Word mdb__declarative_edt__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 3)));
    MR_Word mdb__declarative_edt__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 5)));
    MR_Word mdb__declarative_edt__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 6)));
    MR_Word mdb__declarative_edt__conv0_Store_9;
    MR_Word mdb__declarative_edt__Var_19;
    MR_Word mdb__declarative_edt__Var_20;
    MR_Word mdb__declarative_edt__Var_21;
    MR_Word mdb__declarative_edt__Var_22;
    MR_Word mdb__declarative_edt__Var_24;
    MR_Word mdb__declarative_edt__Var_25;
    MR_Word mdb__declarative_edt__Var_23;

    {
      mdb__declarative_edt__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_29, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_29, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_26));
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_29, mdb__declarative_edt__SuspectId_5, ((MR_Box) (mdb__declarative_edt__Suspect_6)), (MR_Word) mdb__declarative_edt__Store0_8, &mdb__declarative_edt__conv0_Store_9);
    }
    mdb__declarative_edt__Store_9 = (MR_Word) mdb__declarative_edt__conv0_Store_9;
    mdb__declarative_edt__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 0)));
    mdb__declarative_edt__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 1)));
    mdb__declarative_edt__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 2)));
    mdb__declarative_edt__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 3)));
    mdb__declarative_edt__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 4)));
    mdb__declarative_edt__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 5)));
    mdb__declarative_edt__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_edt__Var_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_edt__Var_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__Var_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__Var_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__Store_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__Var_24));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__Var_25));
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__parent_3_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_14,
  MR_Word mdb__declarative_edt__SearchSpace_4,
  MR_Integer mdb__declarative_edt__SuspectId_5,
  MR_Integer * mdb__declarative_edt__ParentId_6)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Parent_7;
    MR_Word mdb__declarative_edt__Var_8;
    MR_Box mdb__declarative_edt__Var_9;
    MR_Word mdb__declarative_edt__Var_10;
    MR_Integer mdb__declarative_edt__Var_11;
    MR_Word mdb__declarative_edt__Var_12;
    MR_Integer mdb__declarative_edt__Var_13;

    {
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_14, mdb__declarative_edt__SearchSpace_4, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__Parent_7);
    }
    mdb__declarative_edt__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_7, (MR_Integer) 0)));
    mdb__declarative_edt__Var_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_7, (MR_Integer) 1));
    mdb__declarative_edt__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_7, (MR_Integer) 2)));
    mdb__declarative_edt__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_7, (MR_Integer) 3)));
    mdb__declarative_edt__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_7, (MR_Integer) 4)));
    mdb__declarative_edt__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_7, (MR_Integer) 5)));
    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Var_8)) == (MR_mktag((MR_Integer) 1)));
    if (mdb__declarative_edt__succeeded)
      *mdb__declarative_edt__ParentId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_8, (MR_Integer) 0)));
    return mdb__declarative_edt__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_edt__lookup_suspect_3_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_18,
  MR_Word mdb__declarative_edt__SearchSpace_4,
  MR_Integer mdb__declarative_edt__SuspectId_5,
  MR_Word * mdb__declarative_edt__Suspect_6)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__FoundSuspect_7;
    MR_Word mdb__declarative_edt__TypeInfo_21_21;
    MR_Word mdb__declarative_edt__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_4, (MR_Integer) 4)));
    MR_Word mdb__declarative_edt__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_4, (MR_Integer) 0)));
    MR_Word mdb__declarative_edt__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_4, (MR_Integer) 1)));
    MR_Word mdb__declarative_edt__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_4, (MR_Integer) 2)));
    MR_Word mdb__declarative_edt__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_4, (MR_Integer) 3)));
    MR_Word mdb__declarative_edt__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_4, (MR_Integer) 5)));
    MR_Word mdb__declarative_edt__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_4, (MR_Integer) 6)));
    MR_Box mdb__declarative_edt__conv0_FoundSuspect_7;

    {
      mdb__declarative_edt__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_21_21, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_21_21, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_18));
    }
    {
      mdb__declarative_edt__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mdb__declarative_edt__TypeInfo_21_21, (MR_Word) mdb__declarative_edt__Var_8, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__conv0_FoundSuspect_7);
    }
    if (mdb__declarative_edt__succeeded)
      {
        mdb__declarative_edt__FoundSuspect_7 = ((MR_Word) mdb__declarative_edt__conv0_FoundSuspect_7);
        mdb__declarative_edt__succeeded = MR_TRUE;
      }
    if (mdb__declarative_edt__succeeded)
      *mdb__declarative_edt__Suspect_6 = mdb__declarative_edt__FoundSuspect_7;
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[8])));
          return;
        }
      }
  }
}

void MR_CALL 
mdb__declarative_edt__topmost_det_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_23,
  MR_Word mdb__declarative_edt__SearchSpace_3,
  MR_Integer * mdb__declarative_edt__TopMostId_4)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 1)));
    MR_Word mdb__declarative_edt__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 6)));
    MR_Word mdb__declarative_edt__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 5)));
    MR_Word mdb__declarative_edt__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 4)));
    MR_Word mdb__declarative_edt__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 3)));
    MR_Word mdb__declarative_edt__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 2)));
    MR_Word mdb__declarative_edt__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 0)));

    if ((mdb__declarative_edt__Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[7])));
          return;
        }
      }
    else
      *mdb__declarative_edt__TopMostId_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_30, (MR_Integer) 0)));
  }
}

MR_bool MR_CALL 
mdb__declarative_edt__root_2_p_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_12,
  MR_Word mdb__declarative_edt__SearchSpace_3,
  MR_Integer * mdb__declarative_edt__RootId_4)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 0)));
    MR_Word mdb__declarative_edt__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 1)));
    MR_Word mdb__declarative_edt__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 2)));
    MR_Word mdb__declarative_edt__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 3)));
    MR_Word mdb__declarative_edt__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 4)));
    MR_Word mdb__declarative_edt__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 5)));
    MR_Word mdb__declarative_edt__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 6)));

    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Var_5)) == (MR_mktag((MR_Integer) 1)));
    if (mdb__declarative_edt__succeeded)
      *mdb__declarative_edt__RootId_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Var_5, (MR_Integer) 0)));
    return mdb__declarative_edt__succeeded;
  }
}

void MR_CALL 
mdb__declarative_edt__initialise_search_space_4_p_0(
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_27,
  MR_Box mdb__declarative_edt__Store_5,
  MR_Word mdb__declarative_edt__MaybeWeighting_6,
  MR_Box mdb__declarative_edt__Node_7,
  MR_Word * mdb__declarative_edt__SearchSpace_8)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__TypeInfo_30_30;
    MR_Word mdb__declarative_edt__TypeInfo_32_32;
    MR_Word mdb__declarative_edt__TypeInfo_33_33;
    MR_Word mdb__declarative_edt__TypeInfo_34_34;
    MR_Integer mdb__declarative_edt__Weight_10;
    MR_Word mdb__declarative_edt__Suspect_12;
    MR_Word mdb__declarative_edt__SuspectStore_13;
    MR_Word mdb__declarative_edt__Var_22;
    MR_Word mdb__declarative_edt__Var_24;
    MR_Word mdb__declarative_edt__Var_26;
    MR_Word mdb__declarative_edt__conv6_SuspectStore_13;

    if ((mdb__declarative_edt__MaybeWeighting_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdb__declarative_edt__Weight_10 = (MR_Integer) 0;
    else
      {
        MR_Word mdb__declarative_edt__Weighting_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__MaybeWeighting_6, (MR_Integer) 0)));

        switch (mdb__declarative_edt__Weighting_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer mdb__declarative_edt__Var_11;
              void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_27, (MR_Integer) 0)), (MR_Integer) 15)));
              MR_Box mdb__declarative_edt__conv2_Weight_10;
              MR_Box mdb__declarative_edt__conv1_Var_11;

              {
                mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_27), mdb__declarative_edt__Store_5, mdb__declarative_edt__Node_7, &mdb__declarative_edt__conv2_Weight_10, &mdb__declarative_edt__conv1_Var_11);
              }
              mdb__declarative_edt__Weight_10 = ((MR_Integer) mdb__declarative_edt__conv2_Weight_10);
              mdb__declarative_edt__Var_11 = ((MR_Integer) mdb__declarative_edt__conv1_Var_11);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mdb__declarative_edt__Var_43;
              void MR_CALL (* mdb__declarative_edt__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_27, (MR_Integer) 0)), (MR_Integer) 16)));
              MR_Box mdb__declarative_edt__conv5_Weight_10;
              MR_Box mdb__declarative_edt__conv4_Var_43;

              {
                mdb__declarative_edt__func_3(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_27), mdb__declarative_edt__Store_5, mdb__declarative_edt__Node_7, &mdb__declarative_edt__conv5_Weight_10, &mdb__declarative_edt__conv4_Var_43);
              }
              mdb__declarative_edt__Weight_10 = ((MR_Integer) mdb__declarative_edt__conv5_Weight_10);
              mdb__declarative_edt__Var_43 = ((MR_Integer) mdb__declarative_edt__conv4_Var_43);
            }
            break;
        }
      }
    {
      mdb__declarative_edt__Suspect_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, 1) = mdb__declarative_edt__Node_7;
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, 5) = ((MR_Box) (mdb__declarative_edt__Weight_10));
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_27, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_30_30);
    }
    {
      mdb__declarative_edt__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_32_32, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_32_32, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_30_30));
    }
    {
      mdb__declarative_edt__conv6_SuspectStore_13 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__TypeInfo_32_32, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mdb__declarative_edt__Suspect_12)));
    }
    mdb__declarative_edt__SuspectStore_13 = (MR_Word) mdb__declarative_edt__conv6_SuspectStore_13;
    {
      mdb__declarative_edt__Var_22 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
    {
      mdb__declarative_edt__Var_24 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_27, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_33_33);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_27, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_34_34);
    }
    {
      mdb__declarative_edt__Var_26 = mercury__bimap__init_0_f_0(mdb__declarative_edt__TypeInfo_33_33, mdb__declarative_edt__TypeInfo_34_34);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_edt__SearchSpace_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_3[0])));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__Var_22));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__SuspectStore_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__Var_26));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__MaybeWeighting_6));
    }
  }
}

MR_Word MR_CALL 
mdb__declarative_edt__empty_search_space_0_f_0(
  MR_Word mdb__declarative_edt__TypeInfo_for_T_11)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_Word mdb__declarative_edt__HeadVar__1_1;
    MR_Word mdb__declarative_edt__TypeInfo_14_14;
    MR_Word mdb__declarative_edt__Var_4;
    MR_Word mdb__declarative_edt__Var_6;
    MR_Word mdb__declarative_edt__Var_8;
    MR_Word mdb__declarative_edt__Var_9;

    {
      mdb__declarative_edt__Var_4 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      mdb__declarative_edt__Var_6 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      mdb__declarative_edt__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_14_14, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_14_14, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_11));
    }
    {
      mdb__declarative_edt__Var_8 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__TypeInfo_14_14);
    }
    {
      mdb__declarative_edt__Var_9 = mercury__bimap__init_0_f_0(mdb__declarative_edt__TypeInfo_for_T_11, mdb__declarative_edt__TypeInfo_for_T_11);
    }
    {
      mdb__declarative_edt__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, 2) = ((MR_Box) (mdb__declarative_edt__Var_4));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, 3) = ((MR_Box) (mdb__declarative_edt__Var_6));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, 4) = ((MR_Box) (mdb__declarative_edt__Var_8));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, 5) = ((MR_Box) (mdb__declarative_edt__Var_9));
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return mdb__declarative_edt__HeadVar__1_1;
  }
}

MR_String MR_CALL 
mdb__declarative_edt__primitive_op_type_to_string_1_f_0(
  MR_Word mdb__declarative_edt__HeadVar__1_1)
{
  {
    MR_bool mdb__declarative_edt__succeeded;
    MR_String mdb__declarative_edt__HeadVar__2_2 = ((&mdb__declarative_edt_vector_common_2[0 + mdb__declarative_edt__HeadVar__1_1]))->mdb__declarative_edt__vector_common_type_2_0__vct_2_f_0;

    return mdb__declarative_edt__HeadVar__2_2;
  }
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

/* :- end_module mdb.declarative_edt. */
