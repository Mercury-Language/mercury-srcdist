/*
** Automatically generated from `hlds_llds.m'
** by the Mercury compiler,
** version rotd-2020-10-14
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


// :- module hlds.hlds_llds.
// :- implementation.

/*
INIT mercury__hlds__hlds_llds__init
ENDINIT
*/

#include "hlds.hlds_llds.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "string.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_follow_vars_0_0[3];

static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_abs_follow_vars_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0[1];

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_follow_vars_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_follow_vars_0[1];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_follow_vars_0[1];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_1[2];

static const MR_DuArgLocn hlds__hlds_llds__hlds__hlds_llds__field_locns_abs_locn_0_1[2];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_2[2];

static const MR_DuArgLocn hlds__hlds_llds__hlds__hlds_llds__field_locns_abs_locn_0_2[2];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_3[2];

static const MR_DuArgLocn hlds__hlds_llds__hlds__hlds_llds__field_locns_abs_locn_0_3[2];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_4[1];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4;

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_1[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_2[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_3[2];

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_locn_0[4];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_locn_0[5];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_locn_0[5];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__maybe__ti_maybe_1hlds__hlds_llds__type_ctor_info_abs_follow_vars_0;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_llds_code_gen_details_0_0[8];

static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_llds_code_gen_details_0_0[8];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0[1];

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_llds_code_gen_details_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_llds_code_gen_details_0[1];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_llds_code_gen_details_0[1];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_1[1];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_2[1];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_3[1];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3;

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_1[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_2[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_3[1];

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_maybe_need_0[4];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_maybe_need_0[4];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_maybe_need_0[4];

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_across_call_0_0[3];

static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_across_call_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_across_call_0_0[1];

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_across_call_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_across_call_0[1];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_across_call_0[1];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_for_loop_control_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__list__ti_list_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0;

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_par_conj_0[1];

static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_in_resume_0_0[3];

static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_in_resume_0_0[3];

static const MR_DuArgLocn hlds__hlds_llds__hlds__hlds_llds__field_locns_need_in_resume_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0[1];

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_in_resume_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_in_resume_0[1];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_resume_0[1];

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0;

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_reg_type_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_reg_type_0[2];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_reg_type_0[2];

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0;

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1;

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2;

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3;

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_resume_locs_0[4];

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_resume_locs_0[4];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_locs_0[4];

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_resume_point_0_0[2];

static const MR_DuArgLocn hlds__hlds_llds__hlds__hlds_llds__field_locns_resume_point_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0;

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1;

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_1[1];

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_resume_point_0[2];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_resume_point_0[2];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_point_0[2];

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_0[2];

static const MR_DuArgLocn hlds__hlds_llds__hlds__hlds_llds__field_locns_stack_slot_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_1[2];

static const MR_DuArgLocn hlds__hlds_llds__hlds__hlds_llds__field_locns_stack_slot_0_1[2];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_2[1];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2;

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_1[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_2[1];

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_stack_slot_0[3];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_stack_slot_0[3];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_0[3];

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0;

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_stack_slot_width_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_stack_slot_width_0[2];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_width_0[2];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0;

static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Word MR_CALL 
hlds__hlds_llds__get_details_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__hlds_llds__explain_stack_slots_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2,
  MR_String STATE_VARIABLE_Explanation_0_3,
  MR_String * STATE_VARIABLE_Explanation_4);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____abs_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_store_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____abs_store_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____llds_code_gen_details_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____llds_code_gen_details_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_across_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____need_across_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_for_loop_control_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____need_for_loop_control_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_par_conj_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____need_in_par_conj_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_resume_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____need_in_resume_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____reg_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____reg_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_locs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____resume_locs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_point_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____resume_point_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slots_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____stack_slots_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_llds_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__hlds_llds_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__hlds_llds_scalar_common_3[1][1];




static /* final */ const MR_Box hlds__hlds_llds_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_llds_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box hlds__hlds_llds_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_llds_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_llds_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0))
  },
};

static /* final */ const MR_Box hlds__hlds_llds_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "(double width)"))
  },
};



#include "array.mh"
#include "string.mh"



static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_follow_vars_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_abs_follow_vars_0_0[3] = {
  (MR_String) "afv_map",
  (MR_String) "afv_next_non_res_reg_r",
  (MR_String) "afv_next_non_res_reg_f"
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0 = {
  (MR_String) "abs_follow_vars",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_llds__hlds__hlds_llds__field_types_abs_follow_vars_0_0,
  hlds__hlds_llds__hlds__hlds_llds__field_names_abs_follow_vars_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0
};

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_follow_vars_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_follow_vars_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_follow_vars_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____abs_follow_vars_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____abs_follow_vars_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "abs_follow_vars",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_follow_vars_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_follow_vars_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_follow_vars_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____abs_follow_vars_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____abs_follow_vars_map_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "abs_follow_vars_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0 = {
  (MR_String) "any_reg",
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

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn hlds__hlds_llds__hlds__hlds_llds__field_locns_abs_locn_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1 = {
  (MR_String) "abs_reg",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_1,
  NULL,
  hlds__hlds_llds__hlds__hlds_llds__field_locns_abs_locn_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0)
};

static const MR_DuArgLocn hlds__hlds_llds__hlds__hlds_llds__field_locns_abs_locn_0_2[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2 = {
  (MR_String) "abs_stackvar",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_2,
  NULL,
  hlds__hlds_llds__hlds__hlds_llds__field_locns_abs_locn_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_3[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0)
};

static const MR_DuArgLocn hlds__hlds_llds__hlds__hlds_llds__field_locns_abs_locn_0_3[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3 = {
  (MR_String) "abs_parent_stackvar",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_3,
  NULL,
  hlds__hlds_llds__hlds__hlds_llds__field_locns_abs_locn_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4 = {
  (MR_String) "abs_framevar",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_2[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_3[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4
};

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_locn_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_locn_0[5] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_locn_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____abs_locn_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____abs_locn_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "abs_locn",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_locn_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_locn_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_locn_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_store_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____abs_store_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____abs_store_map_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "abs_store_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__maybe__ti_maybe_1hlds__hlds_llds__type_ctor_info_abs_follow_vars_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_llds_code_gen_details_0_0[8] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__maybe__ti_maybe_1hlds__hlds_llds__type_ctor_info_abs_follow_vars_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_point_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_maybe_need_0)
};

static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_llds_code_gen_details_0_0[8] = {
  (MR_String) "pre_births",
  (MR_String) "post_births",
  (MR_String) "pre_deaths",
  (MR_String) "post_deaths",
  (MR_String) "follow_vars",
  (MR_String) "store_map",
  (MR_String) "resume_point",
  (MR_String) "maybe_need"
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0 = {
  (MR_String) "llds_code_gen_details",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_llds__hlds__hlds_llds__field_types_llds_code_gen_details_0_0,
  hlds__hlds_llds__hlds__hlds_llds__field_names_llds_code_gen_details_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0
};

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_llds_code_gen_details_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_llds_code_gen_details_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_llds_code_gen_details_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_llds_code_gen_details_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____llds_code_gen_details_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____llds_code_gen_details_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "llds_code_gen_details",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_llds_code_gen_details_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_llds_code_gen_details_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_llds_code_gen_details_0
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0 = {
  (MR_String) "no_need",
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

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_across_call_0)
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1 = {
  (MR_String) "need_call",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_2[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_resume_0)
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2 = {
  (MR_String) "need_resume",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_3[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_par_conj_0)
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3 = {
  (MR_String) "need_par_conj",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_2[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_3[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3
};

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_maybe_need_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_maybe_need_0[4] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_maybe_need_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_maybe_need_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____maybe_need_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____maybe_need_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "maybe_need",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_maybe_need_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_maybe_need_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_maybe_need_0
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_across_call_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_across_call_0_0[3] = {
  (MR_String) "call_forward_vars",
  (MR_String) "call_resume_vars",
  (MR_String) "call_nondet_vars"
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0 = {
  (MR_String) "need_across_call",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_llds__hlds__hlds_llds__field_types_need_across_call_0_0,
  hlds__hlds_llds__hlds__hlds_llds__field_names_need_across_call_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_across_call_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0
};

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_across_call_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_across_call_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_across_call_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_across_call_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_across_call_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____need_across_call_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____need_across_call_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "need_across_call",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_across_call_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_across_call_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_across_call_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_for_loop_control_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__list__ti_list_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_llds__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0 = {
  (MR_String) "need_for_loop_control",
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__list__ti_list_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_String) "loop_control_distinct_stackvars",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_for_loop_control_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____need_for_loop_control_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____need_for_loop_control_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "need_for_loop_control",
  {     &hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0 },
  {     &hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_for_loop_control_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_par_conj_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0 = {
  (MR_String) "need_in_par_conj",
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_String) "par_conj_engine_vars",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_par_conj_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____need_in_par_conj_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____need_in_par_conj_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "need_in_par_conj",
  {     &hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0 },
  {     &hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_par_conj_0
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_in_resume_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_in_resume_0_0[3] = {
  (MR_String) "resume_vars_on_stack",
  (MR_String) "resume_resume_vars",
  (MR_String) "resume_nondet_vars"
};

static const MR_DuArgLocn hlds__hlds_llds__hlds__hlds_llds__field_locns_need_in_resume_0_0[3] = {
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

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0 = {
  (MR_String) "need_in_resume",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_llds__hlds__hlds_llds__field_types_need_in_resume_0_0,
  hlds__hlds_llds__hlds__hlds_llds__field_names_need_in_resume_0_0,
  hlds__hlds_llds__hlds__hlds_llds__field_locns_need_in_resume_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0
};

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_in_resume_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_in_resume_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_resume_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_resume_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____need_in_resume_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____need_in_resume_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "need_in_resume",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_in_resume_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_in_resume_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_resume_0
};

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0 = {
  (MR_String) "reg_r",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1 = {
  (MR_String) "reg_f",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_reg_type_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_reg_type_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_reg_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_llds____Unify____reg_type_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____reg_type_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "reg_type",
  {     hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_reg_type_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_reg_type_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_reg_type_0
};

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0 = {
  (MR_String) "resume_locs_orig_only",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1 = {
  (MR_String) "resume_locs_stack_only",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2 = {
  (MR_String) "resume_locs_orig_then_stack",
  INT32_C(2)
};

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3 = {
  (MR_String) "resume_locs_stack_then_orig",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_resume_locs_0[4] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3
};

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_resume_locs_0[4] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_locs_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_locs_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_llds____Unify____resume_locs_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____resume_locs_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "resume_locs",
  {     hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_resume_locs_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_resume_locs_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_locs_0
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_resume_point_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_locs_0)
};

static const MR_DuArgLocn hlds__hlds_llds__hlds__hlds_llds__field_locns_resume_point_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0 = {
  (MR_String) "resume_point",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_llds__hlds__hlds_llds__field_types_resume_point_0_0,
  NULL,
  hlds__hlds_llds__hlds__hlds_llds__field_locns_resume_point_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1 = {
  (MR_String) "no_resume_point",
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

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0
};

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_resume_point_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_resume_point_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_point_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_point_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____resume_point_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____resume_point_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "resume_point",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_resume_point_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_resume_point_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_point_0
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0)
};

static const MR_DuArgLocn hlds__hlds_llds__hlds__hlds_llds__field_locns_stack_slot_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0 = {
  (MR_String) "det_slot",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_0,
  NULL,
  hlds__hlds_llds__hlds__hlds_llds__field_locns_stack_slot_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0)
};

static const MR_DuArgLocn hlds__hlds_llds__hlds__hlds_llds__field_locns_stack_slot_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1 = {
  (MR_String) "parent_det_slot",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_1,
  NULL,
  hlds__hlds_llds__hlds__hlds_llds__field_locns_stack_slot_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2 = {
  (MR_String) "nondet_slot",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_2[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2
};

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_stack_slot_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_stack_slot_0[3] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____stack_slot_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____stack_slot_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "stack_slot",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_stack_slot_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_stack_slot_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_0
};

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0 = {
  (MR_String) "single_width",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1 = {
  (MR_String) "double_width",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_stack_slot_width_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_stack_slot_width_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_width_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_llds____Unify____stack_slot_width_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____stack_slot_width_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "stack_slot_width",
  {     hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_stack_slot_width_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_stack_slot_width_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_width_0
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slots_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____stack_slots_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____stack_slots_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "stack_slots",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

void MR_CALL 
hlds__hlds_llds____Compare____stack_slots_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slots_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_width_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_width_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_36 == CastY_37);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Integer Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word SubResult1_6;

                  succeeded = (Var_44 < ArgY1_5);
                  if (succeeded)
                  {
                    SubResult1_6 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_44 > ArgY1_5);
                    if (succeeded)
                    {
                      SubResult1_6 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult1_6 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                  {
                    MR_Integer Var_48 = (MR_Integer) (Var_43);
                    MR_Integer Var_49 = (MR_Integer) (ArgY2_8);

                    succeeded = (Var_48 < Var_49);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_48 > Var_49);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
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
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Integer Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word SubResult1_22;

                  succeeded = (Var_47 < ArgY1_21);
                  if (succeeded)
                  {
                    SubResult1_22 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_47 > ArgY1_21);
                    if (succeeded)
                    {
                      SubResult1_22 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult1_22 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_22;
                  else
                  {
                    MR_Integer Var_50 = (MR_Integer) (Var_46);
                    MR_Integer Var_51 = (MR_Integer) (ArgY2_24);

                    succeeded = (Var_50 < Var_51);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_50 > Var_51);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
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
            MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Integer ArgY1_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_45 < ArgY1_35);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_45 > ArgY1_35);
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
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_0_0(
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
              succeeded = (ArgX1_3 == ArgY1_4);
              if (succeeded)
                succeeded = (ArgX2_5 == ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
              succeeded = (ArgX1_7 == ArgY1_8);
              if (succeeded)
                succeeded = (ArgX2_9 == ArgY2_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_11 == ArgY1_12);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____resume_locs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_locs_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____reg_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____reg_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____need_for_loop_control_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_for_loop_control_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_28 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_29 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_28 == CastY_29);
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
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_33 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_9 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

                  hlds__hlds_llds____Compare____need_across_call_0_0(HeadVar__1_1, Var_33, ArgY1_9);
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
            MR_Word Var_35 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 2));

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
                  MR_Word ArgY1_18 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 2));

                  hlds__hlds_llds____Compare____need_in_resume_0_0(HeadVar__1_1, Var_35, ArgY1_18);
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
            MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

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
                {
                  MR_Word ArgY1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));

                  hlds__hlds_llds____Compare____need_in_par_conj_0_0(HeadVar__1_1, Var_34, ArgY1_27);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
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
            MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              succeeded = hlds__hlds_llds____Unify____need_across_call_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 2));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 2));
              succeeded = hlds__hlds_llds____Unify____need_in_resume_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = hlds__hlds_llds____Unify____need_in_par_conj_0_0(ArgX1_9, ArgY1_10);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____llds_code_gen_details_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_27 == CastY_28);
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
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_2[0]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  hlds__hlds_llds____Compare____resume_point_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Integer CastX_61 = (MR_Integer) (ArgX8_25);
                    MR_Integer CastY_62 = (MR_Integer) (ArgY8_26);

                    succeeded = (CastX_61 == CastY_62);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      switch (MR_tag((MR_Word) ArgX8_25)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_tag((MR_Word) ArgY8_26)) {
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
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Var_66 = (MR_Word) (MR_body((MR_Word) (ArgX8_25), (MR_Integer) 1));

                            switch (MR_tag((MR_Word) ArgY8_26)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *HeadVar__1_1 = (MR_Integer) 2;
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Word ArgY1_42 = (MR_Word) (MR_body((MR_Word) (ArgY8_26), (MR_Integer) 1));

                                  hlds__hlds_llds____Compare____need_across_call_0_0(HeadVar__1_1, Var_66, ArgY1_42);
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
                            MR_Word Var_68 = (MR_Word) (MR_body((MR_Word) (ArgX8_25), (MR_Integer) 2));

                            switch (MR_tag((MR_Word) ArgY8_26)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *HeadVar__1_1 = (MR_Integer) 2;
                                break;
                              case (MR_Integer) 1:
                                *HeadVar__1_1 = (MR_Integer) 2;
                                break;
                              case (MR_Integer) 2:
                                {
                                  MR_Word ArgY1_51 = (MR_Word) (MR_body((MR_Word) (ArgY8_26), (MR_Integer) 2));

                                  hlds__hlds_llds____Compare____need_in_resume_0_0(HeadVar__1_1, Var_68, ArgY1_51);
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
                            MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgX8_25, (MR_Integer) 0))));

                            switch (MR_tag((MR_Word) ArgY8_26)) {
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
                                  MR_Word ArgY1_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgY8_26, (MR_Integer) 0))));

                                  hlds__hlds_llds____Compare____need_in_par_conj_0_0(HeadVar__1_1, Var_67, ArgY1_60);
                                }
                                break;
                            }
                          }
                          break;
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

void MR_CALL 
hlds__hlds_llds____Compare____resume_point_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
        MR_Word SubResult1_6;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (Var_18)), ((MR_Box) (ArgY1_5)));
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
        {
          MR_Integer Var_19 = (MR_Integer) (Var_17);
          MR_Integer Var_20 = (MR_Integer) (ArgY2_8);

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
      }
    }
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____need_in_resume_0_0(
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
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
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
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____need_in_par_conj_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____need_across_call_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____llds_code_gen_details_0_0(
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
    {
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_23_23;
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word TypeInfo_26_26;
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
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Integer CastX_35;
      MR_Integer CastY_36;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_22_22 = (MR_Word) (&hlds__hlds_llds_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_23_23 = (MR_Word) (&hlds__hlds_llds_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_24_24 = (MR_Word) (&hlds__hlds_llds_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_25_25 = (MR_Word) (&hlds__hlds_llds_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_26_26 = (MR_Word) (&hlds__hlds_llds_scalar_common_2[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  succeeded = hlds__hlds_llds____Unify____resume_point_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                  {
                    CastX_35 = (MR_Integer) (ArgX8_17);
                    CastY_36 = (MR_Integer) (ArgY8_18);
                    succeeded = (CastX_35 == CastY_36);
                    if (succeeded)
                      succeeded = MR_TRUE;
                    else
                      switch (MR_tag((MR_Word) ArgX8_17)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer CastX_27 = (MR_Integer) (ArgX8_17);
                            MR_Integer CastY_28 = (MR_Integer) (ArgY8_18);

                            succeeded = (CastY_28 == CastX_27);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word ArgX1_29 = (MR_Word) (MR_body((MR_Word) (ArgX8_17), (MR_Integer) 1));
                            MR_Word ArgY1_30;

                            succeeded = ((MR_tag((MR_Word) ArgY8_18)) == (MR_Integer) 1);
                            if (succeeded)
                            {
                              ArgY1_30 = (MR_Word) (MR_body((MR_Word) (ArgY8_18), (MR_Integer) 1));
                              succeeded = hlds__hlds_llds____Unify____need_across_call_0_0(ArgX1_29, ArgY1_30);
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word ArgX1_31 = (MR_Word) (MR_body((MR_Word) (ArgX8_17), (MR_Integer) 2));
                            MR_Word ArgY1_32;

                            succeeded = ((MR_tag((MR_Word) ArgY8_18)) == (MR_Integer) 2);
                            if (succeeded)
                            {
                              ArgY1_32 = (MR_Word) (MR_body((MR_Word) (ArgY8_18), (MR_Integer) 2));
                              succeeded = hlds__hlds_llds____Unify____need_in_resume_0_0(ArgX1_31, ArgY1_32);
                            }
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgX8_17, (MR_Integer) 0))));
                            MR_Word ArgY1_34;

                            succeeded = ((MR_tag((MR_Word) ArgY8_18)) == (MR_Integer) 3);
                            if (succeeded)
                            {
                              ArgY1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgY8_18, (MR_Integer) 0))));
                              succeeded = hlds__hlds_llds____Unify____need_in_par_conj_0_0(ArgX1_33, ArgY1_34);
                            }
                          }
                          break;
                      }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_point_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_8 == CastX_7);
    }
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgY2_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
        TypeInfo_11_11 = (MR_Word) (&hlds__hlds_llds_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
        if (succeeded)
          succeeded = (ArgX2_5 == ArgY2_6);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_resume_0_0(
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
      MR_Word TypeInfo_11_11;
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&hlds__hlds_llds_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&hlds__hlds_llds_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_par_conj_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_across_call_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&hlds__hlds_llds_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&hlds__hlds_llds_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____abs_store_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_store_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____abs_locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_77 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_78 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_77 == CastY_78);
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
              *HeadVar__1_1 = (MR_Integer) 1;
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
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_90 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Integer ArgY2_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_15;
                  MR_Integer Var_95 = (MR_Integer) (Var_90);
                  MR_Integer Var_96 = (MR_Integer) (ArgY1_14);

                  succeeded = (Var_95 < Var_96);
                  if (succeeded)
                  {
                    SubResult1_15 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_95 > Var_96);
                    if (succeeded)
                    {
                      SubResult1_15 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult1_15 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_15;
                  else
                  {
                    succeeded = (Var_89 < ArgY2_17);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_89 > ArgY2_17);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
                    }
                  }
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
            MR_Word Var_91 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Integer Var_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Integer ArgY1_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word SubResult1_37;

                  succeeded = (Var_92 < ArgY1_36);
                  if (succeeded)
                  {
                    SubResult1_37 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_92 > ArgY1_36);
                    if (succeeded)
                    {
                      SubResult1_37 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult1_37 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_37;
                  else
                  {
                    MR_Integer Var_97 = (MR_Integer) (Var_91);
                    MR_Integer Var_98 = (MR_Integer) (ArgY2_39);

                    succeeded = (Var_97 < Var_98);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_97 > Var_98);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
                    }
                  }
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
                MR_Word Var_87 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Integer Var_88 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer ArgY1_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
                          MR_Word SubResult1_59;

                          succeeded = (Var_88 < ArgY1_58);
                          if (succeeded)
                          {
                            SubResult1_59 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_88 > ArgY1_58);
                            if (succeeded)
                            {
                              SubResult1_59 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult1_59 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_59;
                          else
                          {
                            MR_Integer Var_93 = (MR_Integer) (Var_87);
                            MR_Integer Var_94 = (MR_Integer) (ArgY2_61);

                            succeeded = (Var_93 < Var_94);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_93 > Var_94);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 2;
                              else
                                *HeadVar__1_1 = (MR_Integer) 0;
                            }
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
                MR_Integer Var_86 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer ArgY1_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          succeeded = (Var_86 < ArgY1_76);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_86 > ArgY1_76);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
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
hlds__hlds_llds____Unify____abs_locn_0_0(
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
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_6;
            MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (ArgX1_5 == ArgY1_6);
              if (succeeded)
                succeeded = (ArgX2_7 == ArgY2_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word ArgY2_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
              succeeded = (ArgX1_9 == ArgY1_10);
              if (succeeded)
                succeeded = (ArgX2_11 == ArgY2_12);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ArgX1_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_14;
                MR_Word ArgX2_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word ArgY2_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                  succeeded = (ArgX1_13 == ArgY1_14);
                  if (succeeded)
                    succeeded = (ArgX2_15 == ArgY2_16);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgX1_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_17 == ArgY1_18);
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
hlds__hlds_llds____Compare____abs_follow_vars_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_0_0(
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
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
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
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
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

MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds__abs_locn_to_string_3_p_0(
  MR_Word Locn_4,
  MR_String * Str_5,
  MR_Word * MaybeWidth_6)
{
  switch (MR_tag((MR_Word) Locn_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Str_5 = (MR_String) "any_reg";
        *MaybeWidth_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Locn_4, (MR_Integer) 1))));
        MR_Word Var_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Locn_4, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (Var_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_String Var_17;

              Var_17 = mercury__string__int_to_string_1_f_0(Var_26);
              *Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "f", Var_17);
              *MaybeWidth_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_String Var_20;

              Var_20 = mercury__string__int_to_string_1_f_0(Var_26);
              *Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "r", Var_20);
              *MaybeWidth_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Width_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Locn_4, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_String Var_14;
        MR_Integer N_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Locn_4, (MR_Integer) 0))));

        Var_14 = mercury__string__int_to_string_1_f_0(N_22);
        *Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "stackvar", Var_14);
        switch (Width_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *MaybeWidth_6 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_llds_scalar_common_3[0]));
            break;
          case (MR_Integer) 0:
            *MaybeWidth_6 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Locn_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_12;
            MR_Integer N_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Locn_4, (MR_Integer) 1))));
            MR_Word Width_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Locn_4, (MR_Integer) 2))) & (MR_Integer) 1);

            Var_12 = mercury__string__int_to_string_1_f_0(N_23);
            *Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "parent_stackvar", Var_12);
            switch (Width_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *MaybeWidth_6 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_llds_scalar_common_3[0]));
                break;
              case (MR_Integer) 0:
                *MaybeWidth_6 = (MR_Word) ((MR_Unsigned) 0U);
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_10;
            MR_Integer N_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Locn_4, (MR_Integer) 1))));

            Var_10 = mercury__string__int_to_string_1_f_0(N_25);
            *Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "framevar", Var_10);
            *MaybeWidth_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
  }
}

MR_Word MR_CALL 
hlds__hlds_llds__key_stack_slot_to_abs_locn_2_f_0(
  MR_Word TypeInfo_6_6,
  MR_Box HeadVar__1_4,
  MR_Word Slot_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = hlds__hlds_llds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_f_0(Slot_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
hlds__hlds_llds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_f_0(
  MR_Word Slot_5)
{
  {
    MR_Word HeadVar__3_3;

    switch (MR_tag((MR_Word) Slot_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer N_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Slot_5, (MR_Integer) 0))));
          MR_Word Width_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Slot_5, (MR_Integer) 1))) & (MR_Integer) 1);

          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (N_9));
            MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = (MR_Box) ((MR_Unsigned) (Width_10));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer N_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Slot_5, (MR_Integer) 0))));
          MR_Word Width_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Slot_5, (MR_Integer) 1))) & (MR_Integer) 1);

          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (N_11));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = (MR_Box) ((MR_Unsigned) (Width_12));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer N_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Slot_5, (MR_Integer) 0))));

          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (N_13));
          }
        }
        break;
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(
  MR_Word StackSlot_3)
{
  {
    MR_Word AbsLocn_4;

    switch (MR_tag((MR_Word) StackSlot_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer N_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), StackSlot_3, (MR_Integer) 0))));
          MR_Word Width_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StackSlot_3, (MR_Integer) 1))) & (MR_Integer) 1);

          {
            AbsLocn_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), AbsLocn_4, 0) = ((MR_Box) (N_5));
            MR_hl_field(MR_mktag(2), AbsLocn_4, 1) = (MR_Box) ((MR_Unsigned) (Width_6));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer N_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), StackSlot_3, (MR_Integer) 0))));
          MR_Word Width_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), StackSlot_3, (MR_Integer) 1))) & (MR_Integer) 1);

          {
            AbsLocn_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), AbsLocn_4, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), AbsLocn_4, 1) = ((MR_Box) (N_7));
            MR_hl_field(MR_mktag(3), AbsLocn_4, 2) = (MR_Box) ((MR_Unsigned) (Width_8));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer N_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), StackSlot_3, (MR_Integer) 0))));

          {
            AbsLocn_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), AbsLocn_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), AbsLocn_4, 1) = ((MR_Box) (N_9));
          }
        }
        break;
    }
    return AbsLocn_4;
  }
}

MR_Integer MR_CALL 
hlds__hlds_llds__stack_slot_num_1_f_0(
  MR_Word StackSlot_3)
{
  {
    MR_Integer N_4;

    switch (MR_tag((MR_Word) StackSlot_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Width_5;

          N_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), StackSlot_3, (MR_Integer) 0))));
          Width_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StackSlot_3, (MR_Integer) 1))) & (MR_Integer) 1);
          switch (Width_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.hlds_llds.stack_slot_num\'/1", (MR_String) "double_width");
              break;
            case (MR_Integer) 0:
              {
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Width_14;

          N_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), StackSlot_3, (MR_Integer) 0))));
          Width_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), StackSlot_3, (MR_Integer) 1))) & (MR_Integer) 1);
          switch (Width_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.hlds_llds.stack_slot_num\'/1", (MR_String) "double_width");
              break;
            case (MR_Integer) 0:
              {
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        N_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), StackSlot_3, (MR_Integer) 0))));
        break;
    }
    return N_4;
  }
}

void MR_CALL 
hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_p_0(
  MR_Word Must_5,
  MR_Word Subn_6,
  MR_Word Details0_7,
  MR_Word * Details_8)
{
  {
    MR_Word PreBirths0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details0_7, (MR_Integer) 0))));
    MR_Word PostBirths0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details0_7, (MR_Integer) 1))));
    MR_Word PreDeaths0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details0_7, (MR_Integer) 2))));
    MR_Word PostDeaths0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details0_7, (MR_Integer) 3))));
    MR_Word MaybeFollowVars0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details0_7, (MR_Integer) 4))));
    MR_Word StoreMap0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details0_7, (MR_Integer) 5))));
    MR_Word ResumePoint0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details0_7, (MR_Integer) 6))));
    MR_Word MaybeNeed0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details0_7, (MR_Integer) 7))));
    MR_Word PreBirths_17;
    MR_Word PostBirths_18;
    MR_Word PreDeaths_19;
    MR_Word PostDeaths_20;
    MR_Word MaybeFollowVars_21;
    MR_Word StoreMap_28;
    MR_Word ResumePoint_29;
    MR_Word MaybeNeed_33;
    MR_Word VarLocnList0_66;
    MR_Word VarLocnList_67;

    parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Must_5, Subn_6, PreBirths0_9, &PreBirths_17);
    parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Must_5, Subn_6, PostBirths0_10, &PostBirths_18);
    parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Must_5, Subn_6, PreDeaths0_11, &PreDeaths_19);
    parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Must_5, Subn_6, PostDeaths0_12, &PostDeaths_20);
    if ((MaybeFollowVars0_13 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeFollowVars_21 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word FollowVars0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFollowVars0_13, (MR_Integer) 0))));
      MR_Word FollowVarsMap0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FollowVars0_22, (MR_Integer) 0))));
      MR_Integer FirstFreeRegR_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FollowVars0_22, (MR_Integer) 1))));
      MR_Integer FirstFreeRegF_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FollowVars0_22, (MR_Integer) 2))));
      MR_Word FollowVarsMap_26;
      MR_Word FollowVars_27;
      MR_Word VarLocnList0_58;
      MR_Word VarLocnList_59;

      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), FollowVarsMap0_23, &VarLocnList0_58);
      hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(Must_5, Subn_6, VarLocnList0_58, &VarLocnList_59);
      mercury__map__from_assoc_list_2_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), VarLocnList_59, &FollowVarsMap_26);
      {
        FollowVars_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FollowVars_27, 0) = ((MR_Box) (FollowVarsMap_26));
        MR_hl_field(MR_mktag(0), FollowVars_27, 1) = ((MR_Box) (FirstFreeRegR_24));
        MR_hl_field(MR_mktag(0), FollowVars_27, 2) = ((MR_Box) (FirstFreeRegF_25));
      }
      {
        MaybeFollowVars_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeFollowVars_21, 0) = ((MR_Box) (FollowVars_27));
      }
    }
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), StoreMap0_14, &VarLocnList0_66);
    hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(Must_5, Subn_6, VarLocnList0_66, &VarLocnList_67);
    mercury__map__from_assoc_list_2_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), VarLocnList_67, &StoreMap_28);
    if ((ResumePoint0_15 == (MR_Word) ((MR_Unsigned) 0U)))
      ResumePoint_29 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ResumePointVars0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint0_15, (MR_Integer) 0))));
      MR_Word ResumeLocs_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ResumePoint0_15, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ResumePointVars_32;

      parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Must_5, Subn_6, ResumePointVars0_30, &ResumePointVars_32);
      {
        ResumePoint_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ResumePoint_29, 0) = ((MR_Box) (ResumePointVars_32));
        MR_hl_field(MR_mktag(1), ResumePoint_29, 1) = (MR_Box) ((MR_Unsigned) (ResumeLocs_31));
      }
    }
    switch (MR_tag((MR_Word) MaybeNeed0_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeNeed_33 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word NeedAcrossCall0_34 = (MR_Word) (MR_body((MR_Word) (MaybeNeed0_16), (MR_Integer) 1));
          MR_Word ForwardVars0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedAcrossCall0_34, (MR_Integer) 0))));
          MR_Word CallResumeVars0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedAcrossCall0_34, (MR_Integer) 1))));
          MR_Word CallNondetLiveVars0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedAcrossCall0_34, (MR_Integer) 2))));
          MR_Word ForwardVars_38;
          MR_Word CallResumeVars_39;
          MR_Word CallNondetLiveVars_40;
          MR_Word NeedAcrossCall_41;

          parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Must_5, Subn_6, ForwardVars0_35, &ForwardVars_38);
          parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Must_5, Subn_6, CallResumeVars0_36, &CallResumeVars_39);
          parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Must_5, Subn_6, CallNondetLiveVars0_37, &CallNondetLiveVars_40);
          {
            NeedAcrossCall_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), NeedAcrossCall_41, 0) = ((MR_Box) (ForwardVars_38));
            MR_hl_field(MR_mktag(0), NeedAcrossCall_41, 1) = ((MR_Box) (CallResumeVars_39));
            MR_hl_field(MR_mktag(0), NeedAcrossCall_41, 2) = ((MR_Box) (CallNondetLiveVars_40));
          }
          MaybeNeed_33 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (NeedAcrossCall_41)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word NeedInResume0_42 = (MR_Word) (MR_body((MR_Word) (MaybeNeed0_16), (MR_Integer) 2));
          MR_Word OnStack_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), NeedInResume0_42, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ResumeVars0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedInResume0_42, (MR_Integer) 1))));
          MR_Word NondetLiveVars0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedInResume0_42, (MR_Integer) 2))));
          MR_Word ResumeVars_46;
          MR_Word NondetLiveVars_47;
          MR_Word NeedInResume_48;

          parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Must_5, Subn_6, ResumeVars0_44, &ResumeVars_46);
          parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Must_5, Subn_6, NondetLiveVars0_45, &NondetLiveVars_47);
          {
            NeedInResume_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), NeedInResume_48, 0) = (MR_Box) ((MR_Unsigned) (OnStack_43));
            MR_hl_field(MR_mktag(0), NeedInResume_48, 1) = ((MR_Box) (ResumeVars_46));
            MR_hl_field(MR_mktag(0), NeedInResume_48, 2) = ((MR_Box) (NondetLiveVars_47));
          }
          MaybeNeed_33 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (NeedInResume_48)));
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word NeedInParConj0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MaybeNeed0_16, (MR_Integer) 0))));
          MR_Word ParConjVars0_50 = (MR_Word) (NeedInParConj0_49);
          MR_Word ParConjVars_51;
          MR_Word NeedInParConj_52;

          parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Must_5, Subn_6, ParConjVars0_50, &ParConjVars_51);
          NeedInParConj_52 = (MR_Word) (ParConjVars_51);
          {
            MaybeNeed_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), MaybeNeed_33, 0) = ((MR_Box) (NeedInParConj_52));
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *Details_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PreBirths_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PostBirths_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PreDeaths_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (PostDeaths_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MaybeFollowVars_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (StoreMap_28));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ResumePoint_29));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MaybeNeed_33));
    }
  }
}

static void MR_CALL 
hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var0_9;
    MR_Word Locn_10;
    MR_Word VarLocns0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_12;
    MR_Word VarLocns_13;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Var_15;

    Var0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
    Locn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
    parse_tree__prog_rename__rename_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1, HeadVar__2_2, Var0_9, &Var_12);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (Locn_10));
    }
    hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(HeadVar__1_1, HeadVar__2_2, VarLocns0_11, &VarLocns_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VarLocns_13));
    }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_resume_vars_and_loc_3_p_0(
  MR_Word Resume_4,
  MR_Word * Vars_5,
  MR_Word * Locs_6)
{
  if ((Resume_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_llds.goal_info_resume_vars_and_loc\'/3", (MR_String) "no resume point");
      return;
    }
  else
  {
    *Vars_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Resume_4, (MR_Integer) 0))));
    *Locs_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Resume_4, (MR_Integer) 1))) & (MR_Integer) 3);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_set_resume_point_3_p_0(
  MR_Word ResumePoint_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word GoalInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word GoalInfo_7;
    MR_Word CodeGenInfo0_12;
    MR_Word LLDSInfo0_13;
    MR_Word LLDSInfo_14;
    MR_Word CodeGenInfo_15;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_24;

    CodeGenInfo0_12 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo0_6);
    LLDSInfo0_13 = hlds__hlds_llds__get_details_1_f_0(CodeGenInfo0_12);
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_13, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_13, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_13, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_13, (MR_Integer) 3))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_13, (MR_Integer) 4))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_13, (MR_Integer) 5))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_13, (MR_Integer) 7))));
    {
      LLDSInfo_14 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LLDSInfo_14, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), LLDSInfo_14, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), LLDSInfo_14, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), LLDSInfo_14, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), LLDSInfo_14, 4) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), LLDSInfo_14, 5) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), LLDSInfo_14, 6) = ((MR_Box) (ResumePoint_4));
      MR_hl_field(MR_mktag(0), LLDSInfo_14, 7) = ((MR_Box) (Var_24));
    }
    {
      CodeGenInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CodeGenInfo_15, 0) = ((MR_Box) (LLDSInfo_14));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(CodeGenInfo_15, GoalInfo0_6, &GoalInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_7));
    }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_set_follow_vars_3_p_0(
  MR_Word FollowVars_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word GoalInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word GoalInfo_7;
    MR_Word CodeGenInfo0_12;
    MR_Word LLDSInfo0_13;
    MR_Word LLDSInfo_14;
    MR_Word CodeGenInfo_15;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;

    CodeGenInfo0_12 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo0_6);
    LLDSInfo0_13 = hlds__hlds_llds__get_details_1_f_0(CodeGenInfo0_12);
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_13, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_13, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_13, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_13, (MR_Integer) 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_13, (MR_Integer) 5))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_13, (MR_Integer) 6))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_13, (MR_Integer) 7))));
    {
      LLDSInfo_14 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LLDSInfo_14, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), LLDSInfo_14, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), LLDSInfo_14, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), LLDSInfo_14, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), LLDSInfo_14, 4) = ((MR_Box) (FollowVars_4));
      MR_hl_field(MR_mktag(0), LLDSInfo_14, 5) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), LLDSInfo_14, 6) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), LLDSInfo_14, 7) = ((MR_Box) (Var_24));
    }
    {
      CodeGenInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CodeGenInfo_15, 0) = ((MR_Box) (LLDSInfo_14));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(CodeGenInfo_15, GoalInfo0_6, &GoalInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_7));
    }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_need_in_par_conj_3_p_0(
  MR_Word NeedInParConj_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word CodeGenInfo0_6;
    MR_Word LLDSInfo0_7;
    MR_Word LLDSInfo_8;
    MR_Word CodeGenInfo_9;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(STATE_VARIABLE_GoalInfo_0_10);
    LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(CodeGenInfo0_6);
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_12, 0) = ((MR_Box) (NeedInParConj_4));
    }
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 1))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 2))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 3))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 4))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 5))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 6))));
    {
      LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 2) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 4) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 5) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 6) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 7) = ((MR_Box) (Var_12));
    }
    {
      CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CodeGenInfo_9, 0) = ((MR_Box) (LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(CodeGenInfo_9, STATE_VARIABLE_GoalInfo_0_10, STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_need_in_resume_3_p_0(
  MR_Word NeedInResume_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word CodeGenInfo0_6;
    MR_Word LLDSInfo0_7;
    MR_Word LLDSInfo_8;
    MR_Word CodeGenInfo_9;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(STATE_VARIABLE_GoalInfo_0_10);
    LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(CodeGenInfo0_6);
    Var_12 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (NeedInResume_4)));
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 1))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 2))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 3))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 4))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 5))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 6))));
    {
      LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 2) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 4) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 5) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 6) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 7) = ((MR_Box) (Var_12));
    }
    {
      CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CodeGenInfo_9, 0) = ((MR_Box) (LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(CodeGenInfo_9, STATE_VARIABLE_GoalInfo_0_10, STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_need_across_call_3_p_0(
  MR_Word NeedAcrossCall_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word CodeGenInfo0_6;
    MR_Word LLDSInfo0_7;
    MR_Word LLDSInfo_8;
    MR_Word CodeGenInfo_9;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(STATE_VARIABLE_GoalInfo_0_10);
    LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(CodeGenInfo0_6);
    Var_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (NeedAcrossCall_4)));
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 1))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 2))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 3))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 4))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 5))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 6))));
    {
      LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 2) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 4) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 5) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 6) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 7) = ((MR_Box) (Var_12));
    }
    {
      CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CodeGenInfo_9, 0) = ((MR_Box) (LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(CodeGenInfo_9, STATE_VARIABLE_GoalInfo_0_10, STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_resume_point_3_p_0(
  MR_Word ResumePoint_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word CodeGenInfo0_6;
    MR_Word LLDSInfo0_7;
    MR_Word LLDSInfo_8;
    MR_Word CodeGenInfo_9;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_20;

    CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(STATE_VARIABLE_GoalInfo_0_10);
    LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(CodeGenInfo0_6);
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 1))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 2))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 3))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 4))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 5))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 7))));
    {
      LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 1) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 2) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 3) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 4) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 5) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 6) = ((MR_Box) (ResumePoint_4));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 7) = ((MR_Box) (Var_20));
    }
    {
      CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CodeGenInfo_9, 0) = ((MR_Box) (LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(CodeGenInfo_9, STATE_VARIABLE_GoalInfo_0_10, STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_store_map_3_p_0(
  MR_Word StoreMap_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word CodeGenInfo0_6;
    MR_Word LLDSInfo0_7;
    MR_Word LLDSInfo_8;
    MR_Word CodeGenInfo_9;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_20;

    CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(STATE_VARIABLE_GoalInfo_0_10);
    LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(CodeGenInfo0_6);
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 1))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 2))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 3))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 4))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 6))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 7))));
    {
      LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 1) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 2) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 3) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 4) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 5) = ((MR_Box) (StoreMap_4));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 6) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 7) = ((MR_Box) (Var_20));
    }
    {
      CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CodeGenInfo_9, 0) = ((MR_Box) (LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(CodeGenInfo_9, STATE_VARIABLE_GoalInfo_0_10, STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_follow_vars_3_p_0(
  MR_Word FollowVars_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word CodeGenInfo0_6;
    MR_Word LLDSInfo0_7;
    MR_Word LLDSInfo_8;
    MR_Word CodeGenInfo_9;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(STATE_VARIABLE_GoalInfo_0_10);
    LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(CodeGenInfo0_6);
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 1))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 2))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 3))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 5))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 6))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 7))));
    {
      LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 1) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 2) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 3) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 4) = ((MR_Box) (FollowVars_4));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 5) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 6) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 7) = ((MR_Box) (Var_20));
    }
    {
      CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CodeGenInfo_9, 0) = ((MR_Box) (LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(CodeGenInfo_9, STATE_VARIABLE_GoalInfo_0_10, STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(
  MR_Word PostDeaths_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word CodeGenInfo0_6;
    MR_Word LLDSInfo0_7;
    MR_Word LLDSInfo_8;
    MR_Word CodeGenInfo_9;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(STATE_VARIABLE_GoalInfo_0_10);
    LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(CodeGenInfo0_6);
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 1))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 2))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 4))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 5))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 6))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 7))));
    {
      LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 1) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 2) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 3) = ((MR_Box) (PostDeaths_4));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 4) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 5) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 6) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 7) = ((MR_Box) (Var_20));
    }
    {
      CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CodeGenInfo_9, 0) = ((MR_Box) (LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(CodeGenInfo_9, STATE_VARIABLE_GoalInfo_0_10, STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(
  MR_Word PreDeaths_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word CodeGenInfo0_6;
    MR_Word LLDSInfo0_7;
    MR_Word LLDSInfo_8;
    MR_Word CodeGenInfo_9;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(STATE_VARIABLE_GoalInfo_0_10);
    LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(CodeGenInfo0_6);
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 1))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 3))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 4))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 5))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 6))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 7))));
    {
      LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 1) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 2) = ((MR_Box) (PreDeaths_4));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 3) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 4) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 5) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 6) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 7) = ((MR_Box) (Var_20));
    }
    {
      CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CodeGenInfo_9, 0) = ((MR_Box) (LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(CodeGenInfo_9, STATE_VARIABLE_GoalInfo_0_10, STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_post_births_3_p_0(
  MR_Word PostBirths_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word CodeGenInfo0_6;
    MR_Word LLDSInfo0_7;
    MR_Word LLDSInfo_8;
    MR_Word CodeGenInfo_9;
    MR_Word Var_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(STATE_VARIABLE_GoalInfo_0_10);
    LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(CodeGenInfo0_6);
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 2))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 3))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 4))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 5))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 6))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 7))));
    {
      LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 1) = ((MR_Box) (PostBirths_4));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 2) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 3) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 4) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 5) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 6) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 7) = ((MR_Box) (Var_20));
    }
    {
      CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CodeGenInfo_9, 0) = ((MR_Box) (LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(CodeGenInfo_9, STATE_VARIABLE_GoalInfo_0_10, STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_pre_births_3_p_0(
  MR_Word PreBirths_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word CodeGenInfo0_6;
    MR_Word LLDSInfo0_7;
    MR_Word LLDSInfo_8;
    MR_Word CodeGenInfo_9;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(STATE_VARIABLE_GoalInfo_0_10);
    LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(CodeGenInfo0_6);
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 1))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 2))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 3))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 4))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 5))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 6))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LLDSInfo0_7, (MR_Integer) 7))));
    {
      LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 0) = ((MR_Box) (PreBirths_4));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 1) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 2) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 3) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 4) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 5) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 6) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), LLDSInfo_8, 7) = ((MR_Box) (Var_20));
    }
    {
      CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CodeGenInfo_9, 0) = ((MR_Box) (LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(CodeGenInfo_9, STATE_VARIABLE_GoalInfo_0_10, STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_initialize_liveness_info_7_p_0(
  MR_Word PreBirths_8,
  MR_Word PostBirths_9,
  MR_Word PreDeaths_10,
  MR_Word PostDeaths_11,
  MR_Word ResumePoint_12,
  MR_Word STATE_VARIABLE_GoalInfo_0_17,
  MR_Word * STATE_VARIABLE_GoalInfo_18)
{
  {
    MR_Word CodeGenInfo0_14;
    MR_Word CodeGenInfo_16;
    MR_Word STATE_VARIABLE_LLDSInfo_19_19;
    MR_Word STATE_VARIABLE_LLDSInfo_24_24;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_33;

    CodeGenInfo0_14 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(STATE_VARIABLE_GoalInfo_0_17);
    STATE_VARIABLE_LLDSInfo_19_19 = hlds__hlds_llds__get_details_1_f_0(CodeGenInfo0_14);
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 4))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 5))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 7))));
    {
      STATE_VARIABLE_LLDSInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLDSInfo_24_24, 0) = ((MR_Box) (PreBirths_8));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLDSInfo_24_24, 1) = ((MR_Box) (PostBirths_9));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLDSInfo_24_24, 2) = ((MR_Box) (PreDeaths_10));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLDSInfo_24_24, 3) = ((MR_Box) (PostDeaths_11));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLDSInfo_24_24, 4) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLDSInfo_24_24, 5) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLDSInfo_24_24, 6) = ((MR_Box) (ResumePoint_12));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLDSInfo_24_24, 7) = ((MR_Box) (Var_33));
    }
    {
      CodeGenInfo_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CodeGenInfo_16, 0) = ((MR_Box) (STATE_VARIABLE_LLDSInfo_24_24));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(CodeGenInfo_16, STATE_VARIABLE_GoalInfo_0_17, STATE_VARIABLE_GoalInfo_18);
  }
}

static MR_Word MR_CALL 
hlds__hlds_llds__get_details_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_4;
      MR_Word Var_5;
      MR_Word Var_6;
      MR_Word Var_7;
      MR_Word Var_9;

      Var_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      Var_5 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      Var_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      Var_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      Var_9 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0));
      {
        HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_5));
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_6));
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) (Var_7));
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 5) = ((MR_Box) (Var_9));
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_par_conj_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * MaybeNeedInParConj_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word MaybeNeed_6;
    MR_Word NeedInParConj_7;
    MR_Word Var_8;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      MaybeNeed_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 7))));
      succeeded = ((MR_tag((MR_Word) MaybeNeed_6)) == (MR_Integer) 3);
      if (succeeded)
      {
        NeedInParConj_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MaybeNeed_6, (MR_Integer) 0))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeNeedInParConj_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NeedInParConj_7));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_resume_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * MaybeNeedInResume_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word MaybeNeed_6;
    MR_Word NeedInResume_7;
    MR_Word Var_8;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      MaybeNeed_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 7))));
      succeeded = ((MR_tag((MR_Word) MaybeNeed_6)) == (MR_Integer) 2);
      if (succeeded)
      {
        NeedInResume_7 = (MR_Word) (MR_body((MR_Word) (MaybeNeed_6), (MR_Integer) 2));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeNeedInResume_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NeedInResume_7));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * MaybeNeedAcrossCall_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word MaybeNeed_6;
    MR_Word NeedAcrossCall_7;
    MR_Word Var_8;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      MaybeNeed_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 7))));
      succeeded = ((MR_tag((MR_Word) MaybeNeed_6)) == (MR_Integer) 1);
      if (succeeded)
      {
        NeedAcrossCall_7 = (MR_Word) (MR_body((MR_Word) (MaybeNeed_6), (MR_Integer) 1));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeNeedAcrossCall_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NeedAcrossCall_7));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_resume_point_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * ResumePoint_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word Var_6;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      *ResumePoint_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 6))));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_store_map_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * StoreMap_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word Var_6;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      *StoreMap_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 5))));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_follow_vars_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * FollowVars_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word Var_6;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      *FollowVars_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 4))));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * PostDeaths_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word Var_6;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      *PostDeaths_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 3))));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * PreDeaths_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word Var_6;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      *PreDeaths_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 2))));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_post_births_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * PostBirths_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word Var_6;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      *PostBirths_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 1))));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_pre_births_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * PreBirths_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word Var_6;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      *PreBirths_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * MaybeNeedInParConj_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word MaybeNeed_6;
    MR_Word Var_10;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      MaybeNeed_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 7))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      switch (MR_tag((MR_Word) MaybeNeed_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *MaybeNeedInParConj_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *MaybeNeedInParConj_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 3:
          {
            MR_Word NeedInParConj_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MaybeNeed_6, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeNeedInParConj_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NeedInParConj_7));
            }
          }
          break;
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_llds.goal_info_get_maybe_need_in_par_conj\'/2", (MR_String) "no code_gen_info");
        return;
      }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * MaybeNeedInResume_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word MaybeNeed_6;
    MR_Word Var_10;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      MaybeNeed_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 7))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      switch (MR_tag((MR_Word) MaybeNeed_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *MaybeNeedInResume_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *MaybeNeedInResume_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_Word NeedInResume_7 = (MR_Word) (MR_body((MR_Word) (MaybeNeed_6), (MR_Integer) 2));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeNeedInResume_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NeedInResume_7));
            }
          }
          break;
        case (MR_Integer) 3:
          *MaybeNeedInResume_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_llds.goal_info_get_maybe_need_in_resume\'/2", (MR_String) "no code_gen_info");
        return;
      }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * MaybeNeedAtCall_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word MaybeNeed_6;
    MR_Word Var_10;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      MaybeNeed_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 7))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      switch (MR_tag((MR_Word) MaybeNeed_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *MaybeNeedAtCall_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word NeedAtCall_7 = (MR_Word) (MR_body((MR_Word) (MaybeNeed_6), (MR_Integer) 1));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeNeedAtCall_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NeedAtCall_7));
            }
          }
          break;
        case (MR_Integer) 2:
          *MaybeNeedAtCall_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 3:
          *MaybeNeedAtCall_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_llds.goal_info_get_maybe_need_across_call\'/2", (MR_String) "no code_gen_info");
        return;
      }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_resume_point_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * ResumePoint_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word ResumePointPrime_6;
    MR_Word Var_7;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      ResumePointPrime_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 6))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *ResumePoint_4 = ResumePointPrime_6;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_llds.goal_info_get_resume_point\'/2", (MR_String) "no code_gen_info");
        return;
      }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_store_map_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * StoreMap_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word StoreMapPrime_6;
    MR_Word Var_7;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      StoreMapPrime_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 5))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *StoreMap_4 = StoreMapPrime_6;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_llds.goal_info_get_store_map\'/2", (MR_String) "no code_gen_info");
        return;
      }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * FollowVars_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word FollowVarsPrime_6;
    MR_Word Var_7;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      FollowVarsPrime_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 4))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *FollowVars_4 = FollowVarsPrime_6;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_llds.goal_info_get_follow_vars\'/2", (MR_String) "no code_gen_info");
        return;
      }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * PostDeaths_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word PostDeathsPrime_6;
    MR_Word Var_7;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      PostDeathsPrime_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 3))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *PostDeaths_4 = PostDeathsPrime_6;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_llds.goal_info_get_post_deaths\'/2", (MR_String) "no code_gen_info");
        return;
      }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * PreDeaths_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word PreDeathsPrime_6;
    MR_Word Var_7;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      PreDeathsPrime_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 2))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *PreDeaths_4 = PreDeathsPrime_6;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_llds.goal_info_get_pre_deaths\'/2", (MR_String) "no code_gen_info");
        return;
      }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_post_births_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * PostBirths_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word PostBirthsPrime_6;
    MR_Word Var_7;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      PostBirthsPrime_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *PostBirths_4 = PostBirthsPrime_6;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_llds.goal_info_get_post_births\'/2", (MR_String) "no code_gen_info");
        return;
      }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_pre_births_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * PreBirths_4)
{
  {
    MR_bool succeeded;
    MR_Word CodeGenInfo_5;
    MR_Word PreBirthsPrime_6;
    MR_Word Var_7;

    CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_3);
    succeeded = (CodeGenInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeGenInfo_5, (MR_Integer) 0))));
      PreBirthsPrime_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *PreBirths_4 = PreBirthsPrime_6;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_llds.goal_info_get_pre_births\'/2", (MR_String) "no code_gen_info");
        return;
      }
  }
}

MR_String MR_CALL 
hlds__hlds_llds__explain_stack_slots_2_f_0(
  MR_Word StackSlots_4,
  MR_Word VarSet_5)
{
  {
    MR_String Explanation_6;
    MR_Word StackSlotsList_7;
    MR_String Explanation1_8;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_llds_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackSlots_4, &StackSlotsList_7);
    hlds__hlds_llds__explain_stack_slots_2_4_p_0(StackSlotsList_7, VarSet_5, (MR_String) "", &Explanation1_8);
    Explanation_6 = mercury__string__f_43_43_2_f_0((MR_String) "\nStack slot assignments (if any):\n", Explanation1_8);
    return Explanation_6;
  }
}

static void MR_CALL 
hlds__hlds_llds__explain_stack_slots_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2,
  MR_String STATE_VARIABLE_Explanation_0_3,
  MR_String * STATE_VARIABLE_Explanation_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Explanation_4 = STATE_VARIABLE_Explanation_0_3;
  else
  {
    MR_Word Var_9;
    MR_Word Slot_10;
    MR_Word Rest_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer SlotNum_14;
    MR_String StackStr_16;
    MR_String SlotStr_17;
    MR_String WidthStr_18;
    MR_String VarName_19;
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_String STATE_VARIABLE_Explanation_23_23;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_33;

    Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
    Slot_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));
    hlds__hlds_llds__explain_stack_slots_2_4_p_0(Rest_11, VarSet_2, STATE_VARIABLE_Explanation_0_3, &STATE_VARIABLE_Explanation_23_23);
    switch (MR_tag((MR_Word) Slot_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Width_15;

          SlotNum_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Slot_10, (MR_Integer) 0))));
          Width_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Slot_10, (MR_Integer) 1))) & (MR_Integer) 1);
          StackStr_16 = (MR_String) "sv";
          switch (Width_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              WidthStr_18 = (MR_String) " (double width)";
              break;
            case (MR_Integer) 0:
              WidthStr_18 = (MR_String) "";
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Width_38;

          SlotNum_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Slot_10, (MR_Integer) 0))));
          Width_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Slot_10, (MR_Integer) 1))) & (MR_Integer) 1);
          StackStr_16 = (MR_String) "parent_sv";
          switch (Width_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              WidthStr_18 = (MR_String) " (double width)";
              break;
            case (MR_Integer) 0:
              WidthStr_18 = (MR_String) "";
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          SlotNum_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Slot_10, (MR_Integer) 0))));
          StackStr_16 = (MR_String) "fv";
          WidthStr_18 = (MR_String) "";
        }
        break;
    }
    mercury__string__int_to_string_2_p_0(SlotNum_14, &SlotStr_17);
    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_2, Var_9, &VarName_19);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (STATE_VARIABLE_Explanation_23_23));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (WidthStr_18));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (SlotStr_17));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (StackStr_16));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) ((MR_String) "\t ->\t"));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (VarName_19));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
    }
    mercury__string__append_list_2_p_0(Var_24, STATE_VARIABLE_Explanation_4);
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_llds____Unify____abs_follow_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____abs_follow_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_llds____Unify____abs_follow_vars_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____abs_follow_vars_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_llds____Unify____abs_locn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____abs_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____abs_locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_store_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_llds____Unify____abs_store_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____abs_store_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____abs_store_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____llds_code_gen_details_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_llds____Unify____llds_code_gen_details_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____llds_code_gen_details_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____llds_code_gen_details_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_llds____Unify____maybe_need_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____maybe_need_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_across_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_llds____Unify____need_across_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____need_across_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____need_across_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_for_loop_control_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_llds____Unify____need_for_loop_control_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____need_for_loop_control_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____need_for_loop_control_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_par_conj_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_llds____Unify____need_in_par_conj_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____need_in_par_conj_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____need_in_par_conj_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_resume_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_llds____Unify____need_in_resume_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____need_in_resume_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____need_in_resume_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____reg_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_llds____Unify____reg_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____reg_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____reg_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_locs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_llds____Unify____resume_locs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____resume_locs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____resume_locs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_point_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_llds____Unify____resume_point_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____resume_point_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____resume_point_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_llds____Unify____stack_slot_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____stack_slot_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_llds____Unify____stack_slot_width_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____stack_slot_width_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slots_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_llds____Unify____stack_slots_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____stack_slots_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____stack_slots_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__hlds_llds__init(void)
{
}

void mercury__hlds__hlds_llds__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_map_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_store_map_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_llds_code_gen_details_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_maybe_need_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_across_call_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_for_loop_control_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_par_conj_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_resume_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_locs_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_point_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slots_0);
}

void mercury__hlds__hlds_llds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_llds__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_llds.
